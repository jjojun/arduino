int x = 14;
int y = 15;
int z = 7;
void setup() {
  pinMode(14, INPUT);
  pinMode(15, INPUT);
  pinMode(7, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  x = analogRead(14);
  y = analogRead(15);
  z = digitalRead(7);
  Serial.println(x);
  Serial.println(y);
  Serial.println(z);
  delay(500);
}
