// -*- mode: c++ -*-


#include "TapDance.h"
#include <Kaleidoscope-TapDance.h>

#include "keydefs.h"

namespace jj {
namespace TapDance {
namespace {

}
}
}


namespace jj {
namespace TapDance {

void configure(void) {

}

namespace {

} // namespace
} // namespace TapDance
} // namespacce jj


void tapDanceAction(uint8_t tap_dance_index, KeyAddr key_addr, uint8_t tap_count, kaleidoscope::plugin::TapDance::ActionType tap_dance_action) {
  switch (tap_dance_index) {
  case TAP_DANCE_NEXT_TRACK:
    return tapDanceActionKeys(tap_count, tap_dance_action, Consumer_ScanNextTrack, Consumer_ScanPreviousTrack);
#if KALEIDOSCOPE_INCLUDE_XCODE
  case TAP_DANCE_XCODE_FIND:
    return tapDanceActionKeys(tap_count, tap_dance_action, JJ_XcodeFindInFile, JJ_XcodeFindInWorkspace);
  case TAP_DANCE_XCODE_FIND_AND_REPLACE:
    return tapDanceActionKeys(tap_count, tap_dance_action, JJ_XcodeFindAndReplaceInFile, JJ_XcodeFindAndReplaceInWorkspace);
  case TAP_DANCE_XCODE_COPY_OR_CUT:
    return tapDanceActionKeys(tap_count, tap_dance_action, JJ_XcodeCopy, JJ_XcodeCut);
#endif
  }
}




