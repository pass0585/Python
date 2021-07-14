#include "pitches.h"

int PIN_LED = 13;

// segment
int PIN_Seg[]   =   {2,3,4,5,6,7,8,9};        
int DNUM[10][8] = { {0,1,1,1,1,1,1,0},  // 0
                    {0,1,0,0,1,0,0,0},  // 1
                    {0,0,1,1,1,1,0,1},  // 2
                    {0,1,1,0,1,1,0,1},  // 3
                    {0,1,0,0,1,0,1,1},  // 4
                    {0,1,1,0,0,1,1,1},  // 5
                    {0,1,1,1,0,1,1,1},  // 6
                    {0,1,0,0,1,1,1,0},  // 7
                    {0,1,1,1,1,1,1,1},  // 8
                    {0,1,1,0,1,1,1,1} 
                   }; // 9
                   
// Music
int arraySize = 8;          
int melody[]={
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5};
int noteDurations[] = { 8, 8, 6, 6, 4, 4, 4, 4 };

// TMP                  
int PIN_TMP36 = A0; 
                 
void Test1_Segment(int Num) // Test1 7-Segment
{
  for(int j = 0; j<8; ++j)
    {
      digitalWrite(PIN_Seg[j], DNUM[Num][j]);
    }
}

float Temperature(float temp)
{
  float Volt = temp * 5.0 / 1024.0;
  float Cel = (Volt - 0.5) * 100;
  return Cel;
}


void setup()
{
  for(int j = 0; j<8; ++j)
    {
      pinMode(PIN_Seg[j], OUTPUT);
    }
  
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0)
  {
    int iRet = Serial.read();
    if(iRet == '1')
    {
      digitalWrite(PIN_LED, HIGH);
      Test1_Segment(1);     // Test1 7-Segment 1
    }
    else if(iRet == '0')
    {
      digitalWrite(PIN_LED, LOW);
    }
    else if(iRet == '4')  // Test1 7-Segment 4
    {
      Test1_Segment(4);
    }
    else if(iRet == '6')  // Test1 7-Segment 6
    {
      Test1_Segment(6);
      
    }
    
    // Test2 Music
     else if(iRet == '9')  
    {
      for(int note=0;note<arraySize;note++)
      {
        int duration = 1000/noteDurations[note];
        tone(12,melody[note],duration);

        delay(duration+30);
      }
    }
    
    // Test3 TMP
     else if(iRet == '8')  
    {
      int Volt = analogRead(PIN_TMP36);
      Temperature(Volt);
      Serial.write(Cel);
    }
  }
}
