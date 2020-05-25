/*     
    This file is part of The Open Source Protogen Collection (OSPC).

    OSPC is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OSPC is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with OSPC.  If not, see <https://www.gnu.org/licenses/>.
*/

/*                 _       _                               
     /\           | |     (_)                              
    /  \   _ __ __| |_   _ _ _ __ ______ _____      _____  
   / /\ \ | '__/ _` | | | | | '_ \______/ _ \ \ /\ / / _ \ 
  / ____ \| | | (_| | |_| | | | | |    | (_) \ V  V / (_) |
 /_/    \_\_|  \__,_|\__,_|_|_| |_|     \___/ \_/\_/ \___/ */

#include "config.h"
#include "declarations.h"

// setting up the CRGB array for FastLED, this is how we write to individual pixels
CRGB leds[NUM_LEDS];


void setup() {
  // setting up the WS2812B on pin 6
  FastLED.addLeds<NEOPIXEL, 6>(leds, NUM_LEDS);
  // draw the pattern
  drawPattern(bassClefPattern, CLEF_SIZE, red);
  // set brightness so it isn't blinding
  // this will need to be adjusted depending on how tinted your covers are
  FastLED.setBrightness(BRIGHTNESS);
  // display the created graphic
  FastLED.show();
}
void loop() {
 // nothing to loop for the shoulders in my examples   
}

// Purpose: Draws LEDs by running through the pixels, one by one, and seeing if they should be lit up according to their array
// Accepts: int[] of your desired pattern, int size of the pattern array, long int hex code
// Returns: nothing
void drawPattern(int patternArray[], int patternSize, long int colour){
    for (int i = 0; i < NUM_LEDS; i++){ // run through the entire array, pixel by pixel
    for (int j = 0; j < patternSize; j++){ // run through the array
      if (i == patternArray[j]){ // if the index of this pixel is found in the array
        leds[i] = colour; // turn on this LED with the colour specified
      }
    }
  }
}