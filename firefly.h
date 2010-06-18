

typedef struct firefly {
  int          pin;
  int          delay;
  int          resetDelay;

  int          songIndex;
  const Song  *currentSong; 
  int          currentNote;
} Firefly;
