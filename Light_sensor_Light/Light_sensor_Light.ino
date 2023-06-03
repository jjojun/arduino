int a = 14;
int b = 13;
void setup() {
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  a = analogRead(14);
  if(a >=200){
    digitalWrite(13, LOW);
  }
  else if(a < 200){
    digitalWrite(13, HIGH);
  }
}
