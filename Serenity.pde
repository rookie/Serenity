/*
  Serenity
  
  Work on a Jar of fireflies project
  inspired by: http://www.instructables.com/id/Jar-of-Fireflies/
 
 */
#include "stdint.h"
#include "Songs.h"



int ledPin = 11;

void setup()  { 
  Serial.begin(9600);
  delay(50);
  
  Serial.println(songsLen);
  for(int i=0; i < songsLen; i++){
    Serial.println(Songs[i]->notecount);
  }
  Serial.println("");
} 

void loop()  { 
  static int i = 0;
  
  Serial.print("Song ");
  Serial.println(i+'a', BYTE);
  
  delay(2000);
  
  int songSize = Songs[i]->notecount;
  const uint8_t* songNotes = Songs[i]->notes;
  
  // fade in from min to max in increments of 1 point:
  for(int fadeValue = 0 ; fadeValue < songSize; fadeValue +=1) { 
    analogWrite(ledPin, songNotes[fadeValue]);
    delay(25);
  }
  i++;
  if(i == songsLen) i = 0;
}


