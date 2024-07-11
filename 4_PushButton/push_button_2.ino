// C++ code
#define LED 4
#define BTN 3


// Status button
int btnOn = 0;
int btnOff = 0;

// Function to turn on LED
void turnLedOn() {
  if (digitalRead(LED)) {
  	digitalWrite(LED, LOW);
  } else {
  	digitalWrite(LED, HIGH); 
  }
  
}
// Function to conttrol the status button
void btnControl() {
  if (btnOn && btnOff) {
  	btnOff = 0;
    btnOn = 0;
    turnLedOn();
  }
  if (digitalRead(BTN)) {
    btnOn = 1;
    btnOff = 0;
  } else {
  	btnOff = 1;
  }
}


void setup()
{
  pinMode(BTN, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  btnControl();
}