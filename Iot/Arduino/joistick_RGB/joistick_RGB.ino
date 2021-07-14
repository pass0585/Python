#define BEEP_NUM  2000

int PinSpk  = 9;

void setup() {
  pinMode(6, INPUT_PULLUP); // 버튼 핀을 읽기모드로
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int vertical, horizontal, select;
  vertical = analogRead(A0);  // x축 = 0-1023
  horizontal = analogRead(A1);  // y축 = 0-1023
  select = digitalRead(6);  // 버튼, 눌렀을 때 = LOW, 땠을 때 = HIGH

  Serial.print("X = ");
  Serial.print(vertical);
  Serial.print(", Y = ");
  Serial.print(horizontal);
  Serial.print(", Button = ");

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  // LED 제어
  if(vertical == 0 && horizontal >= 0 ){
    digitalWrite(3, HIGH);
  }else if(vertical > 0 && horizontal == 0 ){
    digitalWrite(2, HIGH);
  }else if(vertical == 1023 && horizontal > 0 ){
    digitalWrite(4, HIGH);
  }else if(vertical > 0 && horizontal == 1023 ){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  
  // SW 소리제어
  if(select == HIGH){
    Serial.println("not pressed");
   
  }else{
    Serial.println("PRESSED!");
    tone(PinSpk, BEEP_NUM, 30);
  }
  delay(200);
}
