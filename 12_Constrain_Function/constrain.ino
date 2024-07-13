// C++ code
int a5_value;


void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // Analog pin values: 0 to 1023
  // Constraint the output between 0 and 500
  a5_value = analogRead(A5);
  Serial.println(constrain(a5_value, 0, 500));
}