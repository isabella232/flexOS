# Open Source Protogen Collection
 The full files created for Subwuffer the Protogen, to help anyone create their own protogen fursuit (GPLv3)

# Requirements
## Hardware
- WS2812B boards
	- I recommend 8x8 grids for cheeks and shoulders, 16x16 grids for legs, and 8x32 grids (x2) for visors
	- These can be found cheaply on AliExpress, but you can buy the more power-efficient versions from Adafruit
- Power sources
	- You'll need to do your own calculations as to how much power you'll need. I ended up going with 4 NiMH AA batteries, which gives 4.8V for every 4-battery holder
- Arduino
	- I went with Nanos, but these may be a bit limited in memory. This one is up to you. Again, cheap ones can be found on AliExpress	
- Raspberry Pi
	- This one is only if you want to switch emotes in real-time. I went with a 3B
- Hall-effect sensors or reed switches (only for emote switching)
- 220 Ohm resistors, wires etc

## Software
- Codepad of your choice (VSCode and N++ are my choice for these languages)
- Arduino IDE
	- You must also have the following libraries installed:
		- [https://github.com/FastLED/FastLED](FastLED) for drawing arrays of LEDs (can and should be installed from Library Manager)
		- [https://github.com/AaronLiddiment/LEDText](LEDText) for scrolling text
		- [https://github.com/AaronLiddiment/LEDMatrix](LEDMatrix) for drawing shapes
	- If you're coding and flashing on the go, ArduinoDroid works quite well
- [https://pixilart.com/draw](PixilArt) (web app)
- An image overlay program. For Windows there's OVERLAY2, but it's pretty persistent nagware. There's a better program out there by the name of Image Overlay Utility, but I'm not going to link it here due to (potentially false) positive malware alerts on it. If you go Googling for this, I reiterate that I'm not liable for any damage done. With that said, it seems to work fine on my machine, I have not seen any suspicious activity.

# Notes
- This is a WORK IN PROGRESS. I'm very much learning and working with this. A wiki will be made when I have time.
- These are Subwuffer's files in their entirety. You are welcome to use them as-is, but I highly encourage diving into the code and customizing things. I've made it very easy through code comments and the wiki to find your way around ^^

# License
This code is licensed under GPLv3. TL;DR you must redistribute the source code of any derivative works under this same license. For more info, see the LICENSE file.