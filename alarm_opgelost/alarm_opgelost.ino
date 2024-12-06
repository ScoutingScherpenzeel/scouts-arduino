// Herken je deze getallen? Dit zijn de GPIO pins waarop je alles op aan hebt gesloten!
#define MOTION_PIN 27
#define BUZZER_PIN 32

// Deze functie wordt eenmalig uitgevoerd.
void setup() {
  Serial.begin(115200);
  pinMode(MOTION_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

// Deze functie wordt herhaaldelijk uitgevoerd.
void loop() {
  /////////////////////////////////////////////// START HIER MET TYPEN ////////////////////////////////////////////////
  bool sensor_output = digitalRead(MOTION_PIN);
  Serial.println(omzettenNaarTekst(sensor_output));
  digitalWrite(BUZZER_PIN, sensor_output);
  ///////////////////////////////////////////////    TOT HIER TYPEN     ///////////////////////////////////////////////
}

// Deze functie zet een bool (true/false) om naar een tekst.
String omzettenNaarTekst(bool waarde) {
  if(waarde) {
    return "Ja";
  } else {
    return "Nee";
  }
}