// ----------------------------------------------------------------------------
// LCDiSpeed - LCD Interface Speed test for Adafruit_LiquidCrystal shiftreg mode
// ----------------------------------------------------------------------------
// This sketch is a wrapper sketch for the hd44780 library example LCDiSpeed.
// Note:
// This is not a normal sketch and should not be used as model or example
// of hd44780 library sketches.
// This sketch is simple wrapper that declares the needed lcd object for the
// hd44780 library sketch.
// It is provided as a convenient way to run a pre-configured sketch for
// the i/o class.
// The source code for this sketch lives in hd44780 examples:
// hd44780/examples/hd44780examples/LCDiSpeed/LCDiSpeed.ino
// From IDE:
// [File]->Examples-> hd44780/hd44780examples/LCDiSpeed
//

#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>

// ugliness to allow this sketch to locate the hd44780 example sketch
// note: hd44780.h is not needed, it is only included to get its directory on the include path
#include <hd44780.h>
#undef hd44780_h // undefine this so the example sketch does not think hd44780 is being used.


// declare the lcd object for shift register mode
const uint8_t clkPin = 2;
const uint8_t datPin = 3;
const uint8_t latPin = 4;
Adafruit_LiquidCrystal lcd(datPin, clkPin, latPin);

// tell the hd44780 sketch the lcd object has been declared
#define HD44780_LCDOBJECT

// include the hd44780 library LCDiSpeed sketch source code
#include <examples/hd44780examples/LCDiSpeed/LCDiSpeed.ino>
