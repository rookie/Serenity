/*
  Song data from
  http://www.instructables.com/id/Jar-of-Fireflies/
*/

typedef struct song {
    uint16_t        notecount;
    const uint8_t  *notes; 
} Song;


extern Song* Songs[];
extern int songsLen;
