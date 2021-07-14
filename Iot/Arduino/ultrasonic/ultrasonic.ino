void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT); // 센서 Trig 핀
  pinMode(3, INPUT);   // 센서 Echo 핀
}

void loop() {
  int duration, cm;

  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);

  duration = pulseIn(3, HIGH);
  cm = microsecondsToCentimeters(duration);

  Serial.print(cm);
  Serial.println("cm");

  delay(300); // 0.3초 대기후 다시 측정

}

int microsecondsToCentimeters(int microseconds){
  return microseconds/29/2;
}
