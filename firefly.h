

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

#ifdef __cplusplus
}
#endif 

#endif
