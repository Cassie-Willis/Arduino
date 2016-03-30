const int motorPin = 9;
int sensorPin = 0;


void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int sensorValue;
  sensorValue = analogRead(sensorPin);
  
  if (sensorValue <= 255) {
    analogWrite(motorPin, sensorValue);
  }
  
  else {
    sensorValue = 100;
    analogWrite(motorPin, sensorValue);
  }

}
