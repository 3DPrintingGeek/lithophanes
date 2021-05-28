#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        12 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 42 // Popular NeoPixel ring size


// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

/* setup function */
void setup(void) {
  // Own setup code
  strip.begin();
  strip.setBrightness(40); // 1/6 brightness
  for (int i=0;i<42;i++){
   strip.setPixelColor(i,255,255,255);
  }
  strip.show();
}

void loop(void) {
  // Own program code
  delay(1);
}
