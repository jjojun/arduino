int a = 2;
bool flag = true;
void setup() {
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(0    , func, FALLING);
  digitalPinToInterrupt(2);
  pinMode(13, OUTPUT);
}

void loop() {
  if(flag){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
}

void func(){
  flag = !flag;
}
