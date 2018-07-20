// -*- mode: c++ -*-

#include "config.h"

#include "LEDControl.h"
#include <Kaleidoscope-LEDControl.h>
#include <Kaleidoscope-LEDToggle.h>
#include <Kaleidoscope-LED-ActiveModColor.h>
#include <Kaleidoscope-LED-AlphaSquare.h>
#include <Kaleidoscope-LED-Stalker.h>
#include <Kaleidoscope-LEDEffect-BootGreeting.h>
#include <Kaleidoscope-LEDEffect-Breathe.h>
#include <Kaleidoscope-LEDEffect-Chase.h>
#include <Kaleidoscope-LEDEffect-DigitalRain.h>
#include <Kaleidoscope-LEDEffect-Rainbow.h>
#include <Kaleidoscope-LEDEffect-SolidColor.h>
#include <LED-Off.h>

#if KALEIDOSCOPE_INCLUDE_HEATMAP
# include <Kaleidoscope-Heatmap.h>
#endif


namespace jj {
namespace LEDControl {
namespace {

}
}
}


namespace jj {
namespace LEDControl {

void configure(void) {
  ::BootGreetingEffect.search_key = Key_LEDToggle;
  ::BootGreetingEffect.hue = 0;

#if KALEIDOSCOPE_INCLUDE_MORE_LED_EFFECTS
  ::AlphaSquare.color = CRGB(255, 0, 0);
  ::LEDRainbowEffect.brightness(150); // 0-255
  ::LEDRainbowWaveEffect.brightness(150); // 0-255
  ::StalkerEffect.variant = STALKER(BlazingTrail);
#endif

  ::LEDOff.activate();
}

void pauseLEDs(void) {
  ::LEDControl.paused = true;
  ::LEDControl.set_all_leds_to({0, 0, 0});
  ::LEDControl.syncLeds();
}

void unpauseLEDs(void) {
  ::LEDControl.paused = false;
  ::LEDControl.refreshAll();
}

namespace {


} // namespace
} // namespace LEDConfig
} // namespacce jj




