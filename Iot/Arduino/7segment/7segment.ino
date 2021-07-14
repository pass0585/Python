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
                    {0,1,1,0,1,1,1,1} }; // 9
void PrintNum(int Num){
  for(int j = 0; j<8; ++j)
    {
      digitalWrite(PIN_Seg[j], DNUM[Num][j]);
    }
}

void setup() {

  for(int j = 0; j<8; ++j)
    {
      pinMode(PIN_Seg[j], OUTPUT);
    }
  Serial.begin(9600);
  /*digitalWrite(PIN_Seg[0], LOW);
  digitalWrite(PIN_Seg[1], HIGH);
  digitalWrite(PIN_Seg[2], HIGH);
  digitalWrite(PIN_Seg[3], LOW);
  digitalWrite(PIN_Seg[4], HIGH);
  digitalWrite(PIN_Seg[5], HIGH);
  digitalWrite(PIN_Seg[6], HIGH);
  digitalWrite(PIN_Seg[7], HIGH);
  digitalWrite(PIN_Seg[8], HIGH);
  digitalWrite(PIN_Seg[9], LOW);*/

}

void loop() {
   /* for(int i = 0; i<10; ++i)
  {
    
    for(int j = 0; j<8; ++j)
    {
      pinMode(PIN_Seg[j], OUTPUT);
      digitalWrite(PIN_Seg[j], DNUM[i][j]);
    }
    delay(500);
  }*/
  
  int iNum = Serial.read();
  Serial.println(iNum);
  if(iNum == '4' || '1' || '6')
  {
    PrintNum(iNum);
  }
  else
  {
    for(int j = 0; j<8; ++j)
    {
      digitalWrite(PIN_Seg[j], 0);
    }
  }
  /*int iNum = 0;
  while(1)
  {
    PrintNum(iNum);
    delay(500);
    ++iNum;
    if(iNum>9)
    {
      iNum=0;
    }
  }*/
}
