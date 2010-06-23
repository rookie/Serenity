
#include "WProgram.h"
#include <avr/pgmspace.h>
#include "pins_arduino.h" /*for isValidPWM*/
#include "stdlib.h"
#include "Songs.h"
#include "firefly.h"


static int songsLen = 0;
static Song** Songs;


int firefly_song1(){
  songsLen = song1Len;
  Songs = Song1;
  //Serial.println("Song 1");
}
int firefly_song2(){
  songsLen = song2Len;
  Songs = Song2;
  //Serial.println("Song 2");
}

int firefly_srand(unsigned int seed){
  srandom(seed);
}

long random_max(long howbig)
{
  if (howbig == 0) {
    return 0;
  }
  return random() % howbig;
}
long random_min_max(long howsmall, long howbig)
{
  if (howsmall >= howbig) {
    return howsmall;
  }
  long diff = howbig - howsmall;
  return random_max(diff) + howsmall;
}



int randomSong(){
  int song;
  song = random_max(songsLen);//random(songsLen); 

  //Serial.print("Song Notes: ");
  //Serial.println(song);
  return song;
}

int randomDelay(){
  int songDelay;
  //songDelay = random(8000/25, 12000/25); 
  songDelay = random_min_max(8000/25, 12000/25); 
  //Serial.print("Song Delay: ");
  //Serial.println(songDelay*25);
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
