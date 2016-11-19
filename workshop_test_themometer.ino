float tempC;
int sensor_voltage;
int tempPin = A0;

void setup(){
  analogReference(INTERNAL);
  Serial.begin(9600);
}

void loop() {
  sensor_voltage = analogRead(tempPin);
  tempC = sensor_voltage / 9.31;
  Serial.println(tempC);
  delay(1000);
}

