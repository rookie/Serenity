/*
  Serenity
  
  Work on a Jar of fireflies project
  inspired by: http://www.instructables.com/id/Jar-of-Fireflies/
 
 */
#include <stdint.h>
#include <avr/pgmspace.h>
#include "Songs.h"
#include "firefly.h"

//#define SONG1

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

