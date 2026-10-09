ADC_MODE(ADC_VCC);

// adjust to match your multimeter
const float CAL_FACTOR = 1.084;  

void setup() {
  Serial.begin(115200);
}

void loop() {
  long sum = 0;
  for (int i = 0; i < 16; i++) {
    sum += ESP.getVcc();
    delay(2);
  }
  float vcc = (sum / 16.0) / 1000.0 * CAL_FACTOR;

  Serial.print("Supply voltage: ");
  Serial.print(vcc, 3);
  Serial.println(" V");
  delay(1000);
}