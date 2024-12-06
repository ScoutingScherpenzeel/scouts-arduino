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
  int analogValue = analogRead(POTENTIOMETER_PIN);

  int brightness = analogValue * 255 / 4095;
  int brightnessMap = map(analogValue, 0, 4095, 0, 255);

  Serial.print("Waarde uit draaiknop:");
  Serial.println(analogValue);
  Serial.print("Helderheid:");
  Serial.println(brightness);

  analogWrite(LED_PIN, brightnessMap);
  ///////////////////////////////////////////////    TOT HIER TYPEN     ///////////////////////////////////////////////
}
