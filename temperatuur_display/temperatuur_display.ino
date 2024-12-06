#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Herken je deze getallen? Dit zijn de GPIO pins waarop je alles op aan hebt gesloten!
#define OLED_SDA 25
#define OLED_SCL 27
#define DHT_PIN 33

#define DHT_TYPE DHT11

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
DHT dht(DHT_PIN, DHT_TYPE);

// Deze functie wordt eenmalig uitgevoerd.
void setup() {
  Serial.begin(115200);
  Wire.begin(OLED_SDA, OLED_SCL);
  dht.begin();

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
}

// Deze functie wordt herhaaldelijk uitgevoerd.
void loop() {
  /////////////////////////////////////////////// START HIER MET TYPEN ////////////////////////////////////////////////
  Serial.println("Temperatuur:");



  ///////////////////////////////////////////////    TOT HIER TYPEN     ///////////////////////////////////////////////
}