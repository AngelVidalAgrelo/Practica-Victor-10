// C++ code
//
int pin_13 = 0;

int para_siempre = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
