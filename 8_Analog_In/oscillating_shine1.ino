// C++ code
#define LED 3

int increment = 15;


void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  for (byte i = 0; i < 255; i+= increment) {
  	analogWrite(LED, i);
    delay(50);
  }
  
  for (byte i = 255; i > 0; i -= increment) {
  	analogWrite(LED, i);
    delay(50);
  }
}