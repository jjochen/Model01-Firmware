// -*- mode: c++ -*-

#include "config.h"

#include <Kaleidoscope.h>
#include <Kaleidoscope-Leader.h>
#include <Kaleidoscope-Macros.h>
#include <Kaleidoscope-TapDance.h>
#include <Kaleidoscope-OneShot.h>
#include <Kaleidoscope-Escape-OneShot.h>
#include <Kaleidoscope-MouseKeys.h>
#include <Kaleidoscope-LangPack-German.h>

#include "Macros.h"
#include "TapDance.h"
#include "Leader.h"
#include "OneShot.h"



#define MO(n) ShiftToLayer(n)
#define TG(n) LockLayer(n)

#define Key_Exclamation LSHIFT(Key_1)
#define Key_At LSHIFT(Key_2)
#define Key_Hash LSHIFT(Key_3)
#define Key_Dollar LSHIFT(Key_4)
#define Key_Percent LSHIFT(Key_5)
#define Key_Caret LSHIFT(Key_6)
#define Key_And LSHIFT(Key_7)
#define Key_Star LSHIFT(Key_8)
#define Key_Plus LSHIFT(Key_Equals)

enum {
  QWERTY,
  FUN,
  UPPER
};

/* *INDENT-OFF* */
KEYMAPS(
  [QWERTY] = KEYMAP_STACKED
  (
       Key_Q   ,Key_W        ,Key_E           ,Key_R       ,Key_T
      ,Key_A   ,Key_S        ,Key_D           ,Key_F       ,Key_G
      ,Key_Z   ,Key_X        ,Key_C           ,Key_V       ,Key_B, Key_Tab
      ,Key_Esc ,Key_Backtick ,Key_LeftControl ,Key_LeftGui ,Key_Backspace ,Key_LeftShift

                    ,Key_Y     ,Key_U      ,Key_I     ,Key_O      ,Key_P
                    ,Key_H     ,Key_J      ,Key_K     ,Key_L      ,Key_Semicolon
       ,Key_Enter   ,Key_N     ,Key_M      ,Key_Comma ,Key_Period ,Key_Slash
       ,Key_LeftAlt ,Key_Space ,MO(FUN)    ,Key_Minus ,Key_Quote  ,Key_Backslash
  ),

  [FUN] = KEYMAP_STACKED
  (
       Key_Exclamation ,Key_At           ,Key_UpArrow   ,Key_Dollar           ,Key_Percent
      ,Key_LeftParen   ,Key_LeftArrow    ,Key_DownArrow ,Key_RightArrow       ,Key_RightParen
      ,Key_LeftBracket ,Key_RightBracket ,Key_Hash      ,Key_LeftCurlyBracket ,Key_RightCurlyBracket ,Key_Caret
      ,TG(UPPER)       ,Key_Insert       ,Key_LeftGui   ,Key_LeftShift        ,Key_Delete         ,Key_LeftControl

                   ,Key_PageUp   ,Key_7 ,Key_8      ,Key_9 ,Key_Backspace
                   ,Key_PageDown ,Key_4 ,Key_5      ,Key_6 ,___
      ,Key_And     ,Key_Star     ,Key_1 ,Key_2      ,Key_3 ,Key_Plus
      ,Key_LeftAlt ,Key_Space    ,___   ,Key_Period ,Key_0 ,Key_Equals
   ),

  [UPPER] = KEYMAP_STACKED
  (
       Key_Insert            ,Key_Home                 ,Key_UpArrow   ,Key_End        ,Key_PageUp
      ,Key_Delete            ,Key_LeftArrow            ,Key_DownArrow ,Key_RightArrow ,Key_PageDown
      ,M(MACRO_VERSION_INFO) ,Consumer_VolumeIncrement ,XXX           ,XXX            ,___ ,___
      ,MoveToLayer(QWERTY)   ,Consumer_VolumeDecrement ,___           ,___            ,___ ,___

                ,Key_UpArrow   ,Key_F7              ,Key_F8          ,Key_F9         ,Key_F10
                ,Key_DownArrow ,Key_F4              ,Key_F5          ,Key_F6         ,Key_F11
      ,___      ,XXX           ,Key_F1              ,Key_F2          ,Key_F3         ,Key_F12
      ,___      ,___           ,MoveToLayer(QWERTY) ,Key_PrintScreen ,Key_ScrollLock ,Consumer_PlaySlashPause
   )
)
/* *INDENT-ON* */

KALEIDOSCOPE_INIT_PLUGINS(
  OneShot,
  EscapeOneShot,
  MouseKeys,
  Macros,
  TapDance,
  Leader,
  German
);

void setup() {
  Kaleidoscope.setup();

  jj::Macros::configure();
  jj::TapDance::configure();
  jj::Leader::configure();
  jj::OneShot::configure();
}

void loop() {
  Kaleidoscope.loop();
}
