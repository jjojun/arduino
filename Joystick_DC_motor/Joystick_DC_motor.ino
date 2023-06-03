int x = 14;
int y = 15;
int z = 7;
int i = 0;
int IN1Pin = 3;
int IN2Pin = 4;
int ENPin = 5;
void setup() {
  pinMode(14, INPUT);
  pinMode(15, INPUT);
  pinMode(7, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(IN1Pin, OUTPUT);
  pinMode(IN2Pin, OUTPUT); 
  analogWrite(ENPin, 255);
}

void loop() {
  if(y > 700){
    i--;
  }
  else if(y < 300){
    i++;
  }
  if(i < 0){
    i = 0;
  }
  else if(i > 255){
    i = 255;
  
  }
  analogWrite(ENPin, i);
  x = analogRead(14);
  y = analogRead(15);
  z = digitalRead(7);
  if(x >700){
    digitalWrite(IN1Pin, LOW);
  digitalWrite(IN2Pin, HIGH); 
  }
  else if(x < 500){
    digitalWrite(IN1Pin, HIGH); 
  digitalWrite(IN2Pin, LOW);
  }
  if(z == 0){
    digitalWrite(IN1Pin, HIGH);
  digitalWrite(IN2Pin, HIGH);
  }
}
