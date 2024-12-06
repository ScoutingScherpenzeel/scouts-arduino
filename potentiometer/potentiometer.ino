// Herken je deze getallen? Dit zijn de GPIO pins waarop je alles op aan hebt gesloten!
#define POTENTIOMETER_PIN 4
#define LED_PIN 18

// Deze functie wordt eenmalig uitgevoerd.
void setup() {
  Serial.begin(115200);
  analogSetAttenuation(ADC_11db);
  pinMode(LED_PIN, OUTPUT);
}

// Deze functie wordt herhaaldelijk uitgevoerd.
void loop() {
  /////////////////////////////////////////////// START HIER MET TYPEN ////////////////////////////////////////////////









  ///////////////////////////////////////////////    TOT HIER TYPEN     ///////////////////////////////////////////////
}
