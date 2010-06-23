/*
  Song data from
  http://www.instructables.com/id/Jar-of-Fireflies/
*/

#ifndef _SONGS_H_
#define _SONGS_H_

typedef struct song {
    uint16_t         notecount;
    PROGMEM prog_uchar  *notes; 
} Song;


extern Song* Song1[];
extern int song1Len;
extern Song* Song2[];
extern int song2Len;

#endif
