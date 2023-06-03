int ON = LOW;
int OFF = HIGH;
int b = 13;
int j = 0;
int i;
int y;
int u = -1;
int digits[10][8] = {
  {ON, ON, ON, ON, ON, ON, OFF},
  {OFF, ON, ON, OFF, OFF, OFF, OFF},
  {ON, ON, OFF, ON, ON, OFF, ON},
  {ON, ON, ON, ON, OFF, OFF, ON},
  {OFF, ON, ON, OFF, OFF, ON, ON},
  {ON, OFF, ON, ON, OFF, ON, ON},
  {ON, OFF, ON, ON, ON, ON, ON},
  {ON, ON, ON, OFF, OFF, ON, OFF},
  {ON, ON, ON, ON, ON, ON, ON},
  {ON, ON, ON, OFF, OFF, ON, ON}
};

int pins[ ] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup( )
{
  pinMode(b, INPUT_PULLUP);
  for ( y = 0; y  < 8; y++)
  {
    pinMode(pins[y], OUTPUT);
  }
}

void loop( )
{
  int n = digitalRead(b);
  if (n) {
    if (i == 10) {
      i = 0;
    }
    for (j = 0; j < 8; j++)
    {
      digitalWrite(pins[j], digits[i][j]);
    }
    i++;
    u = i - 1;
    delay(1000);
  }
  else {
    for (j = 0; j < 8; j++)
    {
      digitalWrite(pins[j], digits[u][j]);
    }
  }
}
