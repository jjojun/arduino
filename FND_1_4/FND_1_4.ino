int i = 0;
int j = 0;
int u = 0;
int b = 10;
int pins[8] = {2,3,4,5,6,7,8,9};
int arr[10][8] = {
  {0,0,0,0,0,0,1,1},
  {1,0,0,1,1,1,1,1},
  {0,0,1,0,0,1,0,1},
  {0,0,0,0,1,1,0,1},
  {1,0,0,1,1,0,0,1},
  {0,1,0,0,1,0,0,1},
  {0,1,0,0,0,0,0,1},
  {0,0,0,1,1,0,1,1},
  {0,0,0,0,0,0,0,1},
  {0,0,0,0,1,0,0,1}
};
void setup() {
  for(int l = 2; i < 14; i++){
    pinMode(i, OUTPUT);
  }
  for(int t = 2; j < 10; j++){
    digitalWrite(j, LOW);
  }
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

void loop() {
  for(int i = 0;i<4;i++){
    for(int j = 0;j<4;j++){
      digitalWrite(j+10,LOW);
    }
    digitalWrite(i+10,HIGH);
    for (j = 0; j < 8; j++)
    {
      digitalWrite(pins[j], arr[i+1][j]);
    }
    delay(70);
  }
}
