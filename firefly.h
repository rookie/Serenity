

#ifndef _FIREFLY_H_
#define _FIREFLY_H_

#ifdef __cplusplus
 extern "C" {
#endif 

/*1. create one of these for each firefly, global scope*/
typedef struct firefly {
  int          pin;
  int          delay;
  int          songIndex;
  int          currentNote;
} Firefly;

#if defined(__AVR_ATmega168__) || defined(__AVR_ATmega328P__) || defined(__AVR_ATmega1280__) || defined(__AVR_ATmega8__)

void fireflies_loop();
void fireflies_pin_on(int pin);
void fireflies_pin_off(int pin);

#endif




/*call this or randomSeed(analogRead(0)); in setup() for better rancom numbers.
  See WMath.cpp
  ex: firefly_srand(analogRead(0));   */
int firefly_srand(unsigned int seed);

/*call one of these in the setup() function*/
void firefly_song1();
void firefly_song2();

/*initialize each firefly in the setup() function so we know what pin to use*/
void fly_init(Firefly* fly, int pin);

/*runing in loop() set delay to 25 ms
  ex:
  proc_fly(&ffly1);
  proc_fly(&ffly2);
  delay(25);
*/
void proc_fly(Firefly* fly);

/*internally used functions but feel free, take a look at proc_fly(...)*/
void fly_flash(Firefly* fly);
void fly_reset(Firefly* fly);


#ifdef __cplusplus
}
#endif 

#endif
