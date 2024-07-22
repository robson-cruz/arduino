void setup()
{
  pinMode(8, OUTPUT); // Red
  pinMode(9, OUTPUT); // Blue
  pinMode(10, OUTPUT); // pink

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(1200);
}
