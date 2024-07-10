// C++ code to blink on the builtin LED
//
void setup()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  //digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(13, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  //digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(13, LOW);
  delay(600); // Wait for 1000 millisecond(s)
}

/*
* The LED will be on for 500 milliseconds and off for 600 milliseconds in a
* continuous loop. The commented-out lines refer to using LED_BUILTIN,
* which is often associated with pin 13 on many Arduino boards, but explicitly
* using pin 13 ensures compatibility across different boards.
*/