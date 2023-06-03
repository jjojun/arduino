void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool flag = digitalRead(12);

  if(flag == HIGH)
  {
    digitalWrite(13, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(13, LOW);   
  }
}
