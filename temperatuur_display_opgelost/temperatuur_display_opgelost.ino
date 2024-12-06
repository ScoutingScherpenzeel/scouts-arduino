#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_SDA 25
#define OLED_SCL 27

#define DHT_PIN 33
#define DHT_TYPE DHT11

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
DHT dht(DHT_PIN, DHT_TYPE);

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

void loop() {
  /////////////////////////////////////////////// START HIER MET TYPEN ////////////////////////////////////////////////
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  display.clearDisplay();

  // Toon temperatuur
  display.setCursor(0, 10);
  display.println("Temperatuur:");
  display.print(t);
  display.println(" C");

  // Lege regel
  display.println();

  // Toon vochtigheid
  display.println("Vochtigheid:");
  display.print(h);
  display.println(" %");

  // Update scherm
  display.display();

  // Vertraging, update elke 1 seconden (=1000ms)
  delay(1000);
  ///////////////////////////////////////////////    TOT HIER TYPEN     ///////////////////////////////////////////////
}