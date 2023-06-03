int a = 14;
void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  a = analogRead(14);
  Serial.println(a);
  delay(500);
}
