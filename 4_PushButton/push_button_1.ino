// C++ code
#define LED 4
#define BTN 3


void setup()
{
  pinMode(BTN, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  if (digitalRead(BTN)) {
  	digitalWrite(LED, HIGH);
  } else {
  	digitalWrite(LED, LOW);
  }
}