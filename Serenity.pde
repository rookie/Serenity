/*
  Serenity
  
  Work on a Jar of fireflies project
  inspired by: http://www.instructables.com/id/Jar-of-Fireflies/
 
 */
#include "stdint.h"
#include "Songs.h"
#include "firefly.h"

//#define SONG1

int ledPin = 11;
Firefly ffly1;

int songsLen = 0;
Song** Songs;

void setup()  { 
  Serial.begin(9600);
  delay(50);
  
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
  ffly1.delay = 2000/25;
  ffly1.currentSong = Songs[0]; 
  ffly1.currentNote = 0;
 
  //Serial.println(songsLen);
  //Serial.println("");
} 

void loop()  { 
  static int i = 0;
  int songSize;
  const uint8_t* songNotes;

  if(ffly1.delay == 0){
    i++;
    if(i == songsLen) i = 0;
    
    Serial.println(i+'a', BYTE);
    ffly1.currentSong = Songs[i];
    ffly1.currentNote = 0;
    ffly1.delay = 2000/25;

  }else if(ffly1.delay == 1){
    songSize = ffly1.currentSong->notecount;
    songNotes = ffly1.currentSong->notes;

    if(ffly1.currentNote < songSize){
      analogWrite(ffly1.pin, songNotes[ffly1.currentNote]);
      Serial.println(songNotes[ffly1.currentNote], DEC);
      ffly1.currentNote++;
    }else{
      ffly1.delay = 0; 
    }
    
    
  }else{
    ffly1.delay--;
  }
  delay(25);
}



