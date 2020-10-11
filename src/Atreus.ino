// -*- mode: c++ -*-

#include "config.h"

#include <Kaleidoscope.h>
#include <Kaleidoscope-Macros.h>
#include <Kaleidoscope-TapDance.h>
#include <Kaleidoscope-OneShot.h>
#include <Kaleidoscope-Escape-OneShot.h>
#include <Kaleidoscope-MouseKeys.h>
#include <Kaleidoscope-LangPack-German.h>

#include "Macros.h"
#include "TapDance.h"
#include "OneShot.h"

#include "keydefs.h"


enum {
  QWERTY,
  FUN,
  UPPER,
  EDIT,
  SHORTCUTS,
};

/* *INDENT-OFF* */
KEYMAPS(
  [QWERTY] = KEYMAP_STACKED
  (
       Key_Q   ,Key_W            ,Key_E        ,Key_R        ,Key_T
      ,Key_A   ,Key_S            ,Key_D        ,Key_F        ,Key_G
      ,Key_Z   ,Key_X            ,Key_C        ,Key_V        ,Key_B         ,Key_Tab
      ,Key_Esc ,OSM(LeftControl) ,OSM(LeftAlt) ,OSM(LeftGui) ,Key_Backspace ,OSM(LeftShift)

                   ,Key_Y     ,Key_U       ,Key_I          ,Key_O      ,Key_P
                   ,Key_H     ,Key_J       ,Key_K          ,Key_L      ,Key_Semicolon
       ,Key_Enter  ,Key_N     ,Key_M       ,Key_Comma      ,Key_Period ,Key_Slash
       ,OSL(UPPER) ,Key_Space ,OSL(FUN)    ,OSL(SHORTCUTS) ,Key_Minus  ,Key_Backslash
  ),

  [FUN] = KEYMAP_STACKED
  (
       Key_1        ,Key_2       ,Key_3       ,Key_4       ,Key_5
      ,Key_Backtick ,Key_Eszett  ,___         ,___         ,Key_PageUp
      ,___          ,Key_AUmlaut ,Key_OUmlaut ,Key_UUmlaut ,Key_PageDown ,___
      ,___          ,___         ,___         ,___         ,Key_Delete   ,___

           ,Key_6         ,Key_7         ,Key_8       ,Key_9          ,Key_0
           ,Key_LeftArrow ,Key_DownArrow ,Key_UpArrow ,Key_RightArrow ,Key_Quote
      ,___ ,___           ,___           ,___         ,___            ,Key_Equals
      ,___ ,___           ,___           ,___         ,___            ,___
   ),

  [UPPER] = KEYMAP_STACKED
  (
       LSHIFT(Key_1)        ,LSHIFT(Key_2) ,LSHIFT(Key_3) ,LSHIFT(Key_4) ,LSHIFT(Key_5)
      ,LSHIFT(Key_Backtick) ,___           ,___           ,___           ,___
      ,___                  ,___           ,___           ,___           ,___           ,___
      ,LockLayer(EDIT)      ,___           ,___           ,___           ,Key_Delete    ,___

           ,LSHIFT(Key_6)        ,LSHIFT(Key_7)         ,LSHIFT(Key_8)   ,LSHIFT(Key_9)    ,LSHIFT(Key_0)
           ,Key_LeftCurlyBracket ,Key_RightCurlyBracket ,Key_LeftBracket ,Key_RightBracket ,LSHIFT(Key_Quote)
      ,___ ,___                  ,___                   ,___             ,___              ,LSHIFT(Key_Equals)
      ,___ ,___                  ,___                   ,___             ,___              ,___
   ),

  [EDIT] = KEYMAP_STACKED
  (
       Key_Insert          ,Key_Home      ,Key_UpArrow   ,Key_End        ,___
      ,___                 ,Key_LeftArrow ,Key_DownArrow ,Key_RightArrow ,Key_Enter
      ,Key_Z               ,Key_X         ,Key_C         ,Key_V          ,Key_Space     ,Key_Tab
      ,MoveToLayer(QWERTY) ,___           ,___           ,___            ,Key_Backspace ,___

           ,___ ,___ ,___ ,___ ,___
           ,___ ,___ ,___ ,___ ,___
      ,___ ,___ ,___ ,___ ,___ ,___
      ,___ ,___ ,___ ,___ ,___ ,___
   ),

  [SHORTCUTS] = KEYMAP_STACKED
  (
       JJ_XcodeCloseOtherEditors ,JJ_XcodeCloseEditor ,JJ_XcodeEditAllInScope   ,JJ_XcodeFindAndReplaceInWorkspace ,JJ_XcodeNewEditor
      ,JJ_XcodeShowCodeActions   ,JJ_XcodeSelectLine  ,JJ_XcodeJumpToDefinition ,JJ_XcodeFindInWorkspace           ,JJ_XcodeFindNextInWorkspace
      ,XXX                       ,XXX                 ,JJ_XcodeActivateConsole  ,JJ_XcodeRefactorExtractToVariable ,JJ_XcodeNewEditorBelow      ,___
      ,___                       ,___                 ,___                      ,___                               ,___                         ,___

                           ,JJ_XcodeRevealInProjectNavigator ,JJ_XcodeRevealInDebugNavigator            ,XXX                           ,JJ_XcodeOpenQuickly  ,JJ_XcodeUppercaseWord
                           ,JJ_XcodeGoBack                   ,JJ_XcodeJumpToNextCounterpartInNextEditor ,JJ_XcodeJumpToNextCounterpart ,JJ_XcodeGoForward    ,JJ_XcodeCapitalizeWord
      ,JJ_XcodeAssistant   ,JJ_XcodeRefactorRename           ,JJ_XcodeRefactorExtractToMethod           ,JJ_XcodeMoveLineUp            ,JJ_XcodeMoveLineDown ,JJ_XcodeLowercaseWord
      ,LALT(LSHIFT(Key_M)) ,___                              ,Key_NonUsBackslashAndPipe                 ,___                           ,___                  ,JJ_XcodeJumpToNextChange
   ),

#if ORIGINAL
  
  [XCODE] =  KEYMAP_STACKED
  (XXX,            JJ_XcodeShowRelatedItems,  JJ_XcodeCopySymbolName, JJ_XcodeCopyQualifiedSymbolName, JJ_XcodeFindCallHierarchy,         JJ_XcodeFindSelectedSymbolInWorkspace, JJ_XcodeMoveFocusToNextArea,
   XXX,            JJ_XcodeCloseOtherEditors, JJ_XcodeCloseEditor,    JJ_XcodeEditAllInScope,          JJ_XcodeFindAndReplaceInWorkspace, JJ_XcodeNewEditor,                     JJ_XcodeMoveFocusToNextEditor,
   JJ_XcodeCommit, JJ_XcodeShowCodeActions,   JJ_XcodeSelectLine,     JJ_XcodeJumpToDefinition,        JJ_XcodeFindInWorkspace,           JJ_XcodeFindNextInWorkspace,
   JJ_XcodePull,   XXX,                       XXX,                    JJ_XcodeActivateConsole,         JJ_XcodeRefactorExtractToVariable, JJ_XcodeNewEditorBelow,                XXX,
   ___, ___, ___, ___,
   ___,

   ___,                 JJ_XcodeRevealInProjectNavigator, JJ_XcodeRevealInDebugNavigator,            XXX,                           XXX,                  JJ_XcodeShowLibrary,      JJ_XcodeUppercaseWord,
   JJ_XcodeAssistant,   JJ_XcodePauseContinue,            JJ_XcodeContinueToCurrentLine,             XXX,                           JJ_XcodeOpenQuickly,  JJ_XcodeShowSpelling,     JJ_XcodeCapitalizeWord,
                        JJ_XcodeGoBack,                   JJ_XcodeJumpToNextCounterpartInNextEditor, JJ_XcodeJumpToNextCounterpart, JJ_XcodeGoForward,    JJ_XcodeCheckSpelling,    JJ_XcodeLowercaseWord,
   JJ_XcodeFocusEditor, JJ_XcodeRefactorRename,           JJ_XcodeRefactorExtractToMethod,           JJ_XcodeMoveLineUp,            JJ_XcodeMoveLineDown, JJ_XcodeCommentSelection, JJ_XcodeJumpToNextChange,
   ___, ___, ___, ___,
   ___),

  [FUN] = KEYMAP_STACKED
  (
       Key_Exclamation ,Key_At           ,Key_UpArrow   ,Key_Dollar           ,Key_Percent
      ,Key_LeftParen   ,Key_LeftArrow    ,Key_DownArrow ,Key_RightArrow       ,Key_RightParen
      ,Key_LeftBracket ,Key_RightBracket ,Key_Hash      ,Key_LeftCurlyBracket ,Key_RightCurlyBracket ,Key_Caret
      ,TG(UPPER)       ,Key_Insert       ,Key_LeftGui   ,Key_LeftShift        ,Key_Delete            ,Key_LeftControl

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
#endif
)
/* *INDENT-ON* */

KALEIDOSCOPE_INIT_PLUGINS(
  OneShot,
  EscapeOneShot,
  MouseKeys,
  Macros,
  TapDance,
  German
);

void setup() {
  Kaleidoscope.setup();

  jj::Macros::configure();
  jj::TapDance::configure();
  jj::OneShot::configure();
}

void loop() {
  Kaleidoscope.loop();
}
