// -*- mode: c++ -*-

#pragma once

#include "config.h"


#define JJ_NextPreviousTrack TD(TAP_DANCE_NEXT_TRACK)
#if KALEIDOSCOPE_INCLUDE_XCODE
# define JJ_XcodeFind TD(TAP_DANCE_XCODE_FIND)
# define JJ_XcodeFindAndReplace TD(TAP_DANCE_XCODE_FIND_AND_REPLACE)
# define JJ_XcodeCopyOrCut TD(TAP_DANCE_XCODE_COPY_OR_CUT)
#endif


enum { TAP_DANCE_NEXT_TRACK,
       TAP_DANCE_XCODE_FIND,
       TAP_DANCE_XCODE_FIND_AND_REPLACE,
       TAP_DANCE_XCODE_COPY_OR_CUT,
     };


namespace jj {
namespace TapDance {

void configure(void);

}
}
