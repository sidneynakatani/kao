#include <SPI.h>
#include <Adafruit_GFX.h>
#include <TFT_ILI9163C.h>


// Definition of WHITE
#define WHITE   0xFFFF

/*
Connections 

 LED to 3.3V 
 SCK/SCL to D13
 SDA/SDA to D11
 A0/RS to D8
 RST to D9
 CS to D10
 GND to GND
 VCC to 3.3V 
 */
 
#define CS 10
#define DC 9

// Declare an instance of the ILI9163
TFT_ILI9163C tft = TFT_ILI9163C(CS, 8, DC);  

void setup() {
  tft.begin();
  tft.fillScreen();
}

void loop(){
  testText();
  delay(500);
}

unsigned long testText() {
  
  tft.setCursor(29, 63);
  tft.setTextColor(WHITE);  
  tft.setTextSize(1);
  tft.println("Hello World!");
  
}
