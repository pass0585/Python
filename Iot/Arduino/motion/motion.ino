int ledPin= 13;
int inputPIn = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin,INPUT);

}

void loop() {
  int motion = digitalRead(inputPin); // 모션 탐지 결과 읽기
  digitalWrite(ledPin, motion);       // LED 업데이트
  delay(10);

}
