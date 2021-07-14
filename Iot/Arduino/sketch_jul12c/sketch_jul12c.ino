#include "pitches.h"

int arraySize = 8;
int melody[] =
{ 
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 
};
int noteDurations[] ={ 8, 8, 6, 6, 4, 4, 4, 4 };

int PinTrig = 2;
int PinEcho = 3;
int PinSpk  = 9;

void setup()
{
  for (int note = 0; note < arraySize; note ++)
  {
    int duration = 1000/ noteDurations[note];
    tone(PinSpk, melody[note], duration);
 
    delay(duration+30);
  }
}

void loop()
{
}

void setup1() {
  Serial.begin(9600);
  pinMode(PinTrig,OUTPUT);  // 센서 Trig 핀 파란선
  pinMode(PinEcho,INPUT);   // 센서 Echo 핀 초록선
}

void loop1() {
  int duration, cm;

  digitalWrite(PinTrig,HIGH);   // 센서에 Trig 신호 입력
  delayMicroseconds(10);  // 10us 정도 유지
  digitalWrite(PinTrig,LOW);    // Trig 신호 off

  duration = pulseIn(PinEcho, HIGH);  // Echo pin: HIGH->Low 간격을 측정
  cm = microsecondsToCentimeters(duration);  // 거리(cm)로 변환

  Serial.print(cm);
  Serial.println("cm");

  delay(300);
}

int microsecondsToCentimeters(int microseconds) {
  return microseconds / 29 / 2;
}
