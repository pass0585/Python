void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  attachInterrupt(1, blink, CHANGE);

}

void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);

}

void blink(){
  int button = digitalRead(3);
  digitalWrite(2,button);
}
