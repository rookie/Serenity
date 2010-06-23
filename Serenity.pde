/*
  Serenity
  
  Work on a Jar of fireflies project
  inspired by: http://www.instructables.com/id/Jar-of-Fireflies/
 
 */
#include <stdint.h>
#include <avr/pgmspace.h>
#include "pins_arduino.h" /*for isValidPWM*/
#include "Songs.h"
#include "firefly.h"

#define SONG1

Firefly ffly1;
Firefly ffly2;

int songsLen = 0;
Song** Songs;

void setup(){
  randomSeed(analogRead(0));
  Serial.begin(9600);
  delay(50); 
#ifdef SONG1
  songsLen = song1Len;
  Songs = Song1;
  Serial.println("Song 1");
#else
  songsLen = song2Len;
  Songs = Song2;
  Serial.println("Song 2");
#endif

  Serial.print(songsLen);
  Serial.println(" notes to choose from");
  
  fly_init(&ffly1, 11); 
  fly_init(&ffly2, 9); 
 
 
} 

void loop()  { 
  proc_fly(&ffly1);
  proc_fly(&ffly2);
  delay(25);
}


int randomSong(){
  int song;
  song = random(songsLen); 
  Serial.print("Song Notes: ");
  Serial.println(song);
  return song;
}

int randomDelay(){
  int songDelay;
  songDelay = random(8000/25, 12000/25); 
  Serial.print("Song Delay: ");
  Serial.println(songDelay*25);
  return songDelay;
}

void proc_fly(Firefly* fly){

  if(fly->delay == 0){
    fly_reset(fly);
  }else if(fly->delay == 1){
    fly_flash(fly);
  }else{
    fly->delay--;
  }
  
}

void fly_flash(Firefly* fly){
  int songSize;
  PROGMEM prog_uchar* songNotes;
  
  songSize = Songs[fly->songIndex]->notecount;
  songNotes = Songs[fly->songIndex]->notes;

  if(fly->currentNote < songSize){
    analogWrite(fly->pin, pgm_read_byte_near(&songNotes[fly->currentNote]));
    //Serial.println(pgm_read_byte_near(&songNotes[fly->currentNote]), DEC);
    fly->currentNote++;
  }else{
    fly->delay = 0; 
  }
  
}

void fly_init(Firefly* fly, int pin){
  fly->pin = pin;
  fly_reset(fly);
}

void fly_reset(Firefly* fly){
  
    fly->songIndex = randomSong();
    //Serial.println(fly->songIndex+'a', BYTE);
    fly->currentNote = 0;
    fly->delay = randomDelay();
  
}


//http://www.arduino.cc/en/Reference/AnalogWrite
int isValidPWM(int pin){
  //return true if is on a timer
  return (digitalPinToTimer(pin) != NOT_ON_TIMER);
}
