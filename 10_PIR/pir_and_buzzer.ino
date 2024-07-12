// C++ code
#define BUZZ A5
#define PIR 2
#define BTN 3

void setup()
{
  pinMode(BUZZ, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop()
{
  if (digitalRead(PIR)) {
  	tone(BUZZ, 272);
  }
  if (digitalRead(BTN)) {
  	noTone(BUZZ);
  }
}