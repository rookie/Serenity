/*
  Serenity
  
  Work on a Jar of fireflies project
  inspired by: http://www.instructables.com/id/Jar-of-Fireflies/
 
 */
#include <avr/pgmspace.h>
#include <stdint.h>
#include "Songs.h"
#include "firefly.h"

//#define SONG1

Firefly ffly1;
Firefly ffly2;

int songsLen = 0;
Song** Songs;

void setup()  { 
  //Serial.begin(9600);
  //delay(50); 
#ifdef SONG1
  songsLen = song1Len;
  Songs = Song1;
  //Serial.println("Song 1");
#else
  songsLen = song2Len;
  Songs = Song2;
  //Serial.println("Song 2");
#endif

  ffly1.pin   = 11;
  ffly1.delay = 0;
  ffly1.resetDelay = 10000/25;
  ffly1.songIndex = 0;
  ffly1.currentNote = 0;
  
  ffly2.pin   = 9;
  ffly2.delay = 50;
  ffly2.resetDelay = 8000/25;
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

void proc_fly(Firefly* fly){
  int songSize;
  PROGMEM prog_uchar* songNotes;

  if(fly->delay == 0){
    fly->songIndex++;
    if(fly->songIndex >= songsLen) fly->songIndex = 0;
    
    //Serial.println(fly->songIndex+'a', BYTE);
    fly->currentNote = 0;
    fly->delay = fly->resetDelay;

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


