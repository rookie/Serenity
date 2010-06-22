/*
  Serenity
  
  Work on a Jar of fireflies project
  inspired by: http://www.instructables.com/id/Jar-of-Fireflies/
 
 */
#include <avr/pgmspace.h>
#include <stdint.h>
#include "Songs.h"
#include "firefly.h"

#define SONG1

Firefly ffly1;
Firefly ffly2;

int songsLen = 0;
Song** Songs;

void setup()  {
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


  ffly1.pin   = 11;
  ffly1.delay = 0;
  //ffly1.resetDelay = 10000/25;
  ffly1.songIndex = 0;
  ffly1.currentNote = 0;
  
  ffly2.pin   = 9;
  ffly2.delay = 0;
  //ffly2.resetDelay = 8000/25;
  ffly2.songIndex = 2;
  ffly2.currentNote = 0;
 
 
  pinMode(ffly1.pin, OUTPUT);
  pinMode(ffly2.pin, OUTPUT);
 
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
  int songSize;
  PROGMEM prog_uchar* songNotes;

  if(fly->delay == 0){
    fly->songIndex = randomSong();
    
    //Serial.println(fly->songIndex+'a', BYTE);
    fly->currentNote = 0;
    fly->delay = randomDelay();

  }else if(fly->delay == 1){
    songSize = Songs[fly->songIndex]->notecount;
    songNotes = Songs[fly->songIndex]->notes;

    if(fly->currentNote < songSize){
      analogWrite(fly->pin, pgm_read_byte_near(&songNotes[fly->currentNote]));
      //Serial.println(pgm_read_byte_near(&songNotes[fly->currentNote]), DEC);
      fly->currentNote++;
    }else{
      fly->delay = 0; 
    }
  }else{
    fly->delay--;
  }
  
}


