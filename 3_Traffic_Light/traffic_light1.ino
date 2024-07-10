// C++ code

int green = 2;
int yellow = 4;
int red = 6;

void setup()
{
  
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  // Green: 8,000 milliseconds
  digitalWrite(2, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(8000);
  
  // Yellow: 3,000 milliseconds
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, LOW);
  delay(3000);
  
  // Red: 12,000 milliseconds
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(12000);

}