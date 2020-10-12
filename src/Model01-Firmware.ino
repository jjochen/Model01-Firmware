// -*- mode: c++ -*-

#include "config.h"

#include <Kaleidoscope.h>
#include <Kaleidoscope-Leader.h>
#include <Kaleidoscope-Config-Leader.h>
#include <Kaleidoscope-Macros.h>
#include <Kaleidoscope-Config-Macros.h>
#include <Kaleidoscope-TapDance.h>
#include <Kaleidoscope-Config-TapDance.h>
#include <Kaleidoscope-OneShot.h>
#include <Kaleidoscope-Config-OneShot.h>
#include <Kaleidoscope-HostOS.h>
#include <Kaleidoscope-HostPowerManagement.h>
#include <Kaleidoscope-Config-System.h>
#include <Kaleidoscope-OneShot.h>
#include <Kaleidoscope-Escape-OneShot.h>
#include <Kaleidoscope-Config-OneShot.h>
#include <Kaleidoscope-MouseKeys.h>
#include <Kaleidoscope-LangPack-German.h>
#include <Kaleidoscope-LEDControl.h>
#include <Kaleidoscope-Config-LEDControl.h>
#include <Kaleidoscope-LEDToggle.h>
#include <Kaleidoscope-LED-ActiveModColor.h>
#include <Kaleidoscope-LED-AlphaSquare.h>
#include <Kaleidoscope-LED-Stalker.h>
#include <Kaleidoscope-LEDEffect-BootGreeting.h>
#include <Kaleidoscope-LEDEffect-Breathe.h>
#include <Kaleidoscope-LEDEffect-Chase.h>
//#include <Kaleidoscope-LEDEffect-DigitalRain.h>
#include <Kaleidoscope-LEDEffect-Rainbow.h>
#include <Kaleidoscope-LEDEffect-SolidColor.h>
#include <Kaleidoscope-HardwareTestMode.h>
#include <Kaleidoscope-Config-Specials.h>
#include <Kaleidoscope-Xcode-Shortcuts.h>

enum { QWERTY,
       FUNCTION,
       XCODE,
     };

// *INDENT-OFF*

KEYMAPS(

  [QWERTY] = KEYMAP_STACKED
  (Key_CapsLock, Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDToggleOnOff,
   Key_Backtick, Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
   Key_PageUp,   Key_A, Key_S, Key_D, Key_F, Key_G,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,
   OSM(LeftGui), Key_Backspace, OSM(LeftControl), OSM(LeftShift),
   ShiftToLayer(FUNCTION),

   OSL(XCODE), Key_6, Key_7, Key_8,     Key_9,      Key_0,         Key_Minus,
   Key_Enter,  Key_Y, Key_U, Key_I,     Key_O,      Key_P,         Key_Equals,
               Key_H, Key_J, Key_K,     Key_L,      Key_Semicolon, Key_Quote,
   LEAD(MAIN), Key_N, Key_M, Key_Comma, Key_Period, Key_Slash,     Key_Backslash,
   OSM(RightShift), OSM(LeftAlt), Key_Spacebar, OSM(RightGui),
   ShiftToLayer(FUNCTION)),

  [FUNCTION] =  KEYMAP_STACKED
  (M(MACRO_LOCK), Key_F1,     Key_F2,      Key_F3,     Key_F4,        Key_F5, Key_LEDToggleNext,
   Key_Tab,       ___,        Key_mouseUp, ___,        Key_mouseBtnR, ___,    Key_Enter,
   Key_Home,      Key_mouseL, Key_mouseDn, Key_mouseR, Key_mouseBtnL, ___,
   Key_End,       ___,        ___,         ___,        ___,           ___,    Key_Spacebar,
   ___, Key_Delete, ___, ___,
   ___,

   ___,                     Key_F6,               Key_F7,                   Key_F8,                   Key_F9,          Key_F10,          Key_Eszett,
   Consumer_PlaySlashPause, ___,                  Key_LeftCurlyBracket,     Key_RightCurlyBracket,    Key_LeftBracket, Key_RightBracket, Key_UUmlaut,
                            Key_LeftArrow,        Key_DownArrow,            Key_UpArrow,              Key_RightArrow,  Key_OUmlaut,      Key_AUmlaut,
   ___,                     JJ_NextPreviousTrack, Consumer_VolumeDecrement, Consumer_VolumeIncrement, ___,             ___,              ___,
   ___, ___, Key_Enter, ___,
   ___),

   // unused: PROG, `, Z, X, ESC, 8, 9, I
  [XCODE] =  KEYMAP_STACKED
  (XXX,             Key_XcodeShowRelatedItems,  Key_XcodeCopySymbolName, Key_XcodeCopyQualifiedSymbolName, Key_XcodeFindCallHierarchy,         Key_XcodeFindSelectedSymbolInWorkspace, Key_XcodeMoveFocusToNextArea,
   XXX,             Key_XcodeCloseOtherEditors, Key_XcodeCloseEditor,    Key_XcodeEditAllInScope,          Key_XcodeFindAndReplaceInWorkspace, Key_XcodeNewEditor,                     Key_XcodeMoveFocusToNextEditor,
   Key_XcodeCommit, Key_XcodeShowCodeActions,   Key_XcodeSelectLine,     Key_XcodeJumpToDefinition,        Key_XcodeFindInWorkspace,           Key_XcodeFindNextInWorkspace,
   Key_XcodePull,   XXX,                        XXX,                     Key_XcodeActivateConsole,         Key_XcodeRefactorExtractToVariable, Key_XcodeNewEditorBelow,                XXX,
   ___, ___, ___, ___,
   ___,

   ___,                  Key_XcodeRevealInProjectNavigator, Key_XcodeRevealInDebugNavigator,            XXX,                            XXX,                   Key_XcodeShowLibrary,      Key_XcodeUppercaseWord,
   Key_XcodeAssistant,   Key_XcodePauseContinue,            Key_XcodeContinueToCurrentLine,             XXX,                            Key_XcodeOpenQuickly,  Key_XcodeShowSpelling,     Key_XcodeCapitalizeWord,
                         Key_XcodeGoBack,                   Key_XcodeJumpToNextCounterpartInNextEditor, Key_XcodeJumpToNextCounterpart, Key_XcodeGoForward,    Key_XcodeCheckSpelling,    Key_XcodeLowercaseWord,
   Key_XcodeFocusEditor, Key_XcodeRefactorRename,           Key_XcodeRefactorExtractToMethod,           Key_XcodeMoveLineUp,            Key_XcodeMoveLineDown, Key_XcodeCommentSelection, Key_XcodeJumpToNextChange,
   ___, ___, ___, ___,
   ___),

	) // KEYMAPS(

// *INDENT-ON*

KALEIDOSCOPE_INIT_PLUGINS(
#if KALEIDOSCOPE_INCLUDE_TEST_MODE
  HardwareTestMode,
#endif
  OneShot,
  EscapeOneShot,
  MouseKeys,
  HostOS,
  HostPowerManagement,
  Macros,
  TapDance,
  Leader,
  BootGreetingEffect,
  LEDControl,
  LEDOff,
  LEDToggle,
  ActiveModColorEffect,
  jj::LEDControl::solidRed,
  jj::LEDControl::solidPaleRed,
  LEDBreatheEffect,
  jj::LEDControl::solidBrightRed,
  jj::LEDControl::solidIndigo,
  jj::LEDControl::solidPaleWhite,
// LEDDigitalRainEffect,
#if KALEIDOSCOPE_INCLUDE_MORE_LED_EFFECTS
  LEDRainbowEffect,
  LEDRainbowWaveEffect,
  LEDChaseEffect,
  AlphaSquareEffect,
  StalkerEffect,
  jj::LEDControl::solidOrange,
  jj::LEDControl::solidYellow,
  jj::LEDControl::solidGreen,
  jj::LEDControl::solidBlue,
  jj::LEDControl::solidViolet,
#endif
  German
);

void setup() {
  Kaleidoscope.setup();

  jj::System::configure();
  jj::Macros::configure();
  jj::TapDance::configure();
  jj::Leader::configure();
  jj::OneShot::configure();
  jj::LEDControl::configure();
  jj::Specials::configure();
}

void loop() {
  Kaleidoscope.loop();
}
