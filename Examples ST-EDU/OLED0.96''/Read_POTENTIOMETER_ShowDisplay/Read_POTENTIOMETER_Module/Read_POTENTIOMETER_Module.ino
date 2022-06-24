//Example Code EP 4:Read POTENTIOMETER Module Show Display
// Summation Technology
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_Sensor.h>
#define POTENTIOMETER_PIN 4


#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const int numReadings = 50;

int readings[numReadings];      // the readings from the analog input
int readIndex = 0;              // the index of the current reading
int total = 0;                  // the running total
int average = 0;

void setup()
{
  Serial.begin(9600);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  delay(2000);
  display.setTextColor(WHITE);
  display.clearDisplay();

  for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
}
int Dat, percentage;
unsigned long count;
#define start_time 4000
void loop()
{
  display.clearDisplay();
  //  Dat = analogRead(POTENTIOMETER_PIN);
  //  percentage = map(Dat, 0, 4095, 0, 100);
  //delay(100);
  if (millis() - count <= start_time) {
    read_smoothing();
    display.setTextSize(2);
    display.setCursor(0, 0);
    display.print("Waiting...");
  } else {
    read_smoothing();
    display.setTextSize(1);
    display.setCursor(0, 0);
    display.print("Potentiomiter: ");
    display.setTextSize(2);
    display.setCursor(0, 10);
    display.print(average);
 
  }
  display.display();
}

void read_smoothing() {
  total = total - readings[readIndex];
  readings[readIndex] = analogRead(POTENTIOMETER_PIN);
  total = total + readings[readIndex];
  readIndex = readIndex + 1;

  if (readIndex >= numReadings) {
    readIndex = 0;
  }

  average = total / numReadings;
  Serial.println(average);

}
