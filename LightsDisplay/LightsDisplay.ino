#include <Adafruit_NeoPixel.h>
#include <Wire.h>

//Makes strip object- don't know how many LEDS there are yet, so I guessed 48?
Adafruit_NeoPixel strip = Adafruit_NeoPixel(48, 3, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void enforcersColors()
{
  for (int i = 1; i<=48;i++)
{
  if ((i%2)==0)
  {
    strip.setPixelColor(i,78, 66, 244);
  }
  else if ((i%2) == 1)
  {
    strip.setPixelColor(i,244, 238, 66);
  }
  }
strip.show();
delay(100);
}

