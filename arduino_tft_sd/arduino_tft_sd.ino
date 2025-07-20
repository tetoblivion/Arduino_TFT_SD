#include <SD.h>
#include <SPI.h>
#include <TFT.h>  

const int chipSelect = 4;

#define cs 10
#define dc 9
#define rst 8

TFT TFTscreen = TFT(cs, dc, rst);

PImage smll;

void setup() {

  // Open serial communications and wait for port to open:
 
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
 
  TFTscreen.begin();
  
  SD.begin(4000000,chipSelect);
  
  TFTscreen.background(0,0,0);
 
  smll = TFTscreen.loadImage("small.bmp");
  TFTscreen.image(smll,10,10);
  
}

void loop(void) {
}



//https://buymeacoffee.com/RobotZer0
//https://youtu.be/3ND6nqT9OY0