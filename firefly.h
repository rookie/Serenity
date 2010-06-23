

#ifndef _FIREFLY_H_
#define _FIREFLY_H_

typedef struct firefly {
  int          pin;
  int          delay;
//  int          resetDelay;

  int          songIndex;
  int          currentNote;
} Firefly;

#endif
