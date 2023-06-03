int a = 14;
int b = 3;
int toggle = 1;
void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  a = analogRead(14);
  analogWrite(3, -(a-255));
}
