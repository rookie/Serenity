/*
  Serenity
  
  Work on a Jar of fireflies project
  inspired by: http://www.instructables.com/id/Jar-of-Fireflies/
 
 */
#include "stdint.h"
#include "Songs.h"

//#define SONG1

int ledPin = 11;
int songsLen = 0;
Song** Songs;

void setup()  { 
  //Serial.begin(9600);
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
 
  //Serial.println(songsLen);
  //Serial.println("");
} 

void loop()  { 
  static int i = 0;
  int songSize = Songs[i]->notecount;
  const uint8_t* songNotes = Songs[i]->notes;
  
  //Serial.print("Song ");
  //Serial.println(i+'a', BYTE);
  //Serial.println(songSize);
  
  delay(2000);
  
  for(int fadeValue = 0 ; fadeValue < songSize; fadeValue +=1) { 
    analogWrite(ledPin, songNotes[fadeValue]);  
    delay(25);
  }
  i++;
  if(i == songsLen) i = 0;
}


