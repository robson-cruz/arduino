// C++ code
#define RPM 3
#define MOTOR_1A 5
#define MOTOR_1B 4


void start_clockwise(int rpm) {
  digitalWrite(MOTOR_1A, LOW);
  digitalWrite(MOTOR_1B, HIGH);
  analogWrite(RPM, rpm);
  delay(3000);
}

void start_counterClockwise(int rpm) {
  digitalWrite(MOTOR_1A, HIGH);
  digitalWrite(MOTOR_1B, LOW);
  analogWrite(RPM, rpm);
  delay(3000);
}

void stop_motor() {
  digitalWrite(MOTOR_1A, LOW);
  digitalWrite(MOTOR_1B, LOW);
  analogWrite(RPM, 0);
  delay(3000);
}



void setup()
{
  pinMode(RPM, OUTPUT);
  pinMode(MOTOR_1A, OUTPUT);
  pinMode(MOTOR_1B, OUTPUT);
  digitalWrite(MOTOR_1A, LOW);
  digitalWrite(MOTOR_1B, LOW);
  
}

void loop()
{
  start_clockwise(255);
  //delay(TMP);
  
  stop_motor();
  //delay(TMP);
  
  start_counterClockwise(255);
  //delay(TMP);
  
  stop_motor();
  //delay(TMP);
}