void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  int button = digitalRead(3);
  digitalWrite(2,button);
  delay(10);
                     
}     
