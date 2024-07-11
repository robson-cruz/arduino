/* C++ code
* This code reads the analog input on pin A5 and sends the read value to the serial
* monitor every 500 milliseconds.
*/
void setup()
{
  pinMode(A5, INPUT);
  // Initialize Serial Communication at 9600 bauds
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(A5));
  delay(500);
}
