int time = 0;

int low_time = 0;

void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  time = 4;
  digitalWrite(7, HIGH);
  delay(1000 * time); // Wait for 1000 * time millisecond(s)
  time += 500;
  digitalWrite(7, LOW);
  delay(time); // Wait for time millisecond(s)
}