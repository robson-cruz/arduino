// C++ code
#define PIR 2
#define LED 3


void setup()
{
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(PIR)) {
  	digitalWrite(LED, HIGH);
    Serial.println("Movimento Detectado!");
  } else {
  	digitalWrite(LED, LOW);
    Serial.println("Sem Movimento!");
  }
  delay(5000);
}