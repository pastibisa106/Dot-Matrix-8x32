#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 3
#define CS_PIN 1

MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

// Setup for software SPI:
// #define DATAPIN 2
// #define CLK_PIN 4
// MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup() {
  // Intialize the object:
  myDisplay.begin();
  // Set the intensity (brightness) of the display (0-15):
  myDisplay.setIntensity(0);
  // Clear the display:
  myDisplay.displayClear();
  myDisplay.displayText("RAFIQUL HAKIM", PA_CENTER, 100, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
}

void loop() {
  // myDisplay.displayText("Sinau Programming", PA_CENTER, 100, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
  if (myDisplay.displayAnimate()) {
    myDisplay.setTextAlignment(PA_CENTER);
  myDisplay.print("vcool");
  delay(2000);
  myDisplay.setTextAlignment(PA_LEFT);
  myDisplay.print("Kiri");
  delay(2000);
  myDisplay.setTextAlignment(PA_RIGHT);
  myDisplay.print("Kanan");
  
  delay(2000);
  myDisplay.setTextAlignment(PA_CENTER);
  myDisplay.setInvert(true);
  myDisplay.print("VCOOL");
  delay(2000);
  myDisplay.setInvert(false);
  myDisplay.print(1234);
  delay(2000);
 
  }
  delay(100);
}
