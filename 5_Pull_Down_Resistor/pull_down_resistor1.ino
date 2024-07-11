// C++ code
#define BTN 3
#define LED 4


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