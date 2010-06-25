/*
  Serenity
  
  Work on a Jar of fireflies project
  inspired by: http://www.instructables.com/id/Jar-of-Fireflies/
 
 */
#include "firefly.h"

void setup(){
  //Serial.begin(9600);

  randomSeed(analogRead(0));
  //firefly_song1();
  firefly_song2();
  
  
  fireflies_pin_on(  3 ); 
  fireflies_pin_on(  5 );
  fireflies_pin_on(  6 ); 
  fireflies_pin_on(  9 );
  fireflies_pin_on( 10 ); 
  fireflies_pin_on( 11 );
} 

void loop()  {
  fireflies_loop();
  delay(25);
}

