#include "DHT.h"
DHT dht11_p3(3, DHT11);

#include <Arduino.h>
#include <U8x8lib.h>
U8X8_SSD1306_128X64_ALT0_HW_I2C u8x8(/* reset=*/ U8X8_PIN_NONE);

// set pin
// int LED
// int button
// int lightSensor
// int soundSensor

// set variables

void setup(){
  u8x8.begin();
  u8x8.setFlipMode(1);
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  // set LED and button pinMode
  Serial.begin(9600);
}


void loop(){
  if(){     //button pressed
    // val = 
    u8x8.clearDisplay();
  }
  Serial.println(val);
  // setCursor
  if(val < 256){
    // temp mode 
  }
  else if(val < 512){
    // humi mode
  }
  else if(val < 768){
    // brightness mode
  }
  else{
    // volume mode
  }
  delay(200);
}
