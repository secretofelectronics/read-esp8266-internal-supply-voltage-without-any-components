ADC_MODE(ADC_VCC);  
// Must be at the top, outside any function

void setup() {
  Serial.begin(115200);
}

void loop() {
  // raw value is in millivolts
  float vcc = ESP.getVcc() / 1000.0;  
  Serial.print("Supply voltage: ");
  Serial.print(vcc, 3);
  Serial.println(" V");
  delay(1000);
}