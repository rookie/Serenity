/*
  Serenity
  
  Work on a Jar of fireflies project
  inspired by: http://www.instructables.com/id/Jar-of-Fireflies/
 
 */
#include "firefly.h"

//#define SONG1

Firefly ffly1;
Firefly ffly2;

//int songsLen = 0;
//Song** Songs;

void setup(){
  //Serial.begin(9600);
  //delay(50); 

  //Serial.print(songsLen);
  //Serial.println(" notes to choose from");
  
  randomSeed(analogRead(0));
  //2002
  //firefly_song1(); //3264
  firefly_song2(); //3282
  //3342
  fly_init(&ffly1, 11); 
  fly_init(&ffly2, 9);
} 

void loop()  { 
  proc_fly(&ffly1);
  proc_fly(&ffly2);
  delay(25);
}

