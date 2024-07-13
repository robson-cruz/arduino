// C++ code
#define LED 2
#define LDR A5

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
  
  //Serial.begin(9600);
}

void loop()
{
  
  //Serial.println(analogRead(LDR));
  
  if (analogRead(LDR) < 400) {
  	digitalWrite(LED, HIGH);
  } else {
  	digitalWrite(LED, LOW);
  }
}