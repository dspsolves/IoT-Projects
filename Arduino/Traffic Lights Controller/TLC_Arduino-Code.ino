int RED = 0;

int YELLOW = 0;

int GREEN = 0;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  // A Simple Traffic Light Controller
  RED = 4;
  YELLOW = 2;
  GREEN = 5;
  digitalWrite(12, HIGH);
  delay(1000 * RED); // Wait for 1000 * RED millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
  delay(1000 * GREEN); // Wait for 1000 * GREEN millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  delay(1000 * YELLOW); // Wait for 1000 * YELLOW millisecond(s)
  digitalWrite(10, LOW);
}
