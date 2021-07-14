#include "pitches.h"
 
int arraySize = 8;

int melody[]={
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5
}

int noteDurations[] = { 8, 8, 6, 6, 4, 4, 4, 4 };
void setup() {
  for(int note=0;note<arraySize;note++){
    int duration = 1000/noteDurations[note];
    tone(2,melody[note],duration);

    delay(duration+30);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
