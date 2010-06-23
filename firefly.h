

#ifndef _FIREFLY_H_
#define _FIREFLY_H_

#ifdef __cplusplus
 extern "C" {
#endif 
 
extern int songsLen;
extern Song** Songs;

typedef struct firefly {
  int          pin;
  int          delay;
//  int          resetDelay;

  int          songIndex;
  int          currentNote;
} Firefly;

void proc_fly(Firefly* fly);
void fly_flash(Firefly* fly);
void fly_init(Firefly* fly, int pin);
void fly_reset(Firefly* fly);

//calling randomSeed(analogRead(0)); in arduino should do the same as
//  firefly_srand(analogRead(0));
//See WMath.cpp
int firefly_srand(unsigned int seed); //to seed random numbers

#ifdef __cplusplus
}
#endif 

#endif
