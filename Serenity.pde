/*
  Serenity
  
  Work on a Jar of fireflies project
  inspired by: http://www.instructables.com/id/Jar-of-Fireflies/
 
 */
#include "firefly.h"

Firefly ffly1;
Firefly ffly2;
Firefly ffly3;
Firefly ffly4;
Firefly ffly5;
Firefly ffly6;

void setup(){
  //Serial.begin(9600);

  randomSeed(analogRead(0));
  //firefly_song1();
  firefly_song2();
  
  fly_init(&ffly1, 3); 
  fly_init(&ffly2, 5);
  fly_init(&ffly1, 6); 
  fly_init(&ffly2, 9);
  fly_init(&ffly1, 10); 
  fly_init(&ffly2, 11);
} 

void loop()  { 
  proc_fly(&ffly1);
  proc_fly(&ffly2);
  proc_fly(&ffly3);
  proc_fly(&ffly4);
  proc_fly(&ffly5);
  proc_fly(&ffly6);
  delay(25);
}

