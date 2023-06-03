#define A 12
#define B 2
#define C 7
#define D 9
#define E 10
#define F 11
#define G 6
#define DP 8
#define d1 13
#define d2 4
#define d3 3
#define d4 5
int Count = 0;
int prev_millis1 = millis();
int prev_millis2 = millis();

int f = 0;
int fg[4] = {d1, d2, d3, d4};
int fp[8] = {A, B, C, D, E, F, G, DP};
int fd[11][8] = {
  { 0, 0, 0, 0, 0, 0, 1, 1 }, // 0
  { 1, 0, 0, 1, 1, 1, 1, 1 }, // 1
  { 0, 0, 1, 0, 0, 1, 0, 1 }, // 2
  { 0, 0, 0, 0, 1, 1, 0, 1 }, // 3
  { 1, 0, 0, 1, 1, 0, 0, 1 }, // 4
  { 0, 1, 0, 0, 1, 0, 0, 1 }, // 5
  { 0, 1, 0, 0, 0, 0, 0, 1 }, // 6
  { 0, 0, 0, 1, 1, 0, 1, 1 }, // 7
  { 0, 0, 0, 0, 0, 0, 0, 1 }, // 8
  { 0, 0, 0, 0, 1, 0, 0, 1 }, // 9
  { 1, 1, 1, 1, 1, 1, 1, 1 }, // 10
};
void setup() {

  for (int i = 0 ; i < 4 ; i++)
  {
    pinMode(fg[i], OUTPUT);
    digitalWrite(fg[i], LOW);
  }
  for (int i = 0 ; i < 8 ; i++)
  {
    pinMode(fp[i], OUTPUT);
    digitalWrite(fp[i], HIGH);
  }

}

void loop() {
  int curr_millis =  millis();
  if (curr_millis - prev_millis1 >= 1000) {
    prev_millis1 = curr_millis;

      if (Count == 10000) {
        Count = 0;
      }
      else {
        Count++;
      }
  }
  if (curr_millis - prev_millis2 >= 2) {
    prev_millis2 = curr_millis;
    int d1st = Count / 1000;
    int d2nd = Count % 1000 / 100;
    int d3rd = Count % 100 / 10;
    int d4th = Count % 10;
    int dData[4] = {d1st, d2nd, d3rd, d4th};

    for (int i = 0 ; i < 4 ; i++)
    {
      digitalWrite(d1, LOW);
      digitalWrite(d2, LOW);
      digitalWrite(d3, LOW);
      digitalWrite(d4, LOW);
      digitalWrite(fg[i], HIGH);

      for (int j = 0 ; j < 8; j++)
      {
        digitalWrite(fp[j], fd[dData[i]][j]);
        if (i == 1) digitalWrite(fp[7], 0);
      }
      delay(2);
    }
  }
}
