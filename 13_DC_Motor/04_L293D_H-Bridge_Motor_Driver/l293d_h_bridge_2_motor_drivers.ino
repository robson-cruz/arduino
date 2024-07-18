// C++ code
#define RPM_MT1 3
#define MT1A 2
#define MT1B 4
#define RPM_MT2 9
#define MT2A 8
#define MT2B 12
#define TMP 5000

int speed = 255;

// Prototype functions
void stop_motors() {
	analogWrite(RPM_MT1, 0);
  	digitalWrite(MT1A, LOW);
  	digitalWrite(MT1B, LOW);
  
  	analogWrite(RPM_MT2, 0);
  	digitalWrite(MT2A, LOW);
  	digitalWrite(MT2B, LOW);
}

void clockwise_motors() {
	analogWrite(RPM_MT1, speed);
  	digitalWrite(MT1A, HIGH);
  	analogWrite(MT1B, LOW);
  
  	analogWrite(RPM_MT2, speed);
  	digitalWrite(MT2A, HIGH);
  	digitalWrite(MT2B, LOW);
}

void counter_clockwise_motors() {
  	analogWrite(RPM_MT1, speed);
  	digitalWrite(MT1A, LOW);
  	digitalWrite(MT1B, HIGH);
  
  	analogWrite(RPM_MT2, speed);
  	digitalWrite(MT2A, LOW);
  	digitalWrite(MT2B, HIGH);
}


void setup()
{
    pinMode(RPM_MT1, OUTPUT);
    pinMode(RPM_MT2, OUTPUT);
    pinMode(MT1A, OUTPUT);
    pinMode(MT1B, OUTPUT);
    pinMode(MT2A, OUTPUT);
    pinMode(MT2B, OUTPUT);

    analogWrite(RPM_MT1, 0);
    analogWrite(RPM_MT2, 0);
    digitalWrite(MT1A, LOW);
    digitalWrite(MT1B, LOW);
    digitalWrite(MT2A, LOW);
    digitalWrite(MT2B, LOW);
}

void loop()
{
  	// Clockwise Motors
  	clockwise_motors();
  	delay(TMP);
  	// Stopped Motors
  	stop_motors();
  	delay(TMP);
  	// Counter-clockwise Motors
  	counter_clockwise_motors();
  	delay(TMP);
  	// Stopped Motors
  	stop_motors();
  	delay(TMP);
}