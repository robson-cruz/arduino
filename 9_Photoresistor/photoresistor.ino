// C++ code
//
#define LIGHT_BULB 2
void setup()
{
  pinMode(LIGHT_BULB, OUTPUT);
  
  // Initialize Serial Communication at 9600 bauds
  Serial.begin(9600); 
}

void loop()
{ 
  int value = analogRead(A0);
  //Serial.println(value);
  //delay(500);
  
  if (value <= 900) {
  	digitalWrite(LIGHT_BULB, HIGH);
  } else {
  	digitalWrite(LIGHT_BULB, LOW);
  }
}