// -*- mode: c++ -*-

/**
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/kaleidoscope/key_defs_keyboard.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/kaleidoscope/key_defs_consumerctl.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/kaleidoscope/key_defs_sysctl.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/kaleidoscope/key_defs_keymaps.h
  */

#pragma once

#include "config.h"
#include "layers.h"
#include "Macros.h"
#include "TapDance.h"


#if KALEIDOSCOPE_INCLUDE_XCODE
// Xcode Layer
# define JJ_Xcode OSL(XCODE)

// File Menu
# define JJ_XcodeNewEditor LCTRL(LGUI(Key_T)) // T
# define JJ_XcodeNewEditorBelow LCTRL(LALT(LGUI(Key_T))) // B
# define JJ_XcodeOpenQuickly LSHIFT(LGUI(Key_O)) // O
# define JJ_XcodeCloseEditor LCTRL(LALT(LGUI(Key_W))) // W
# define JJ_XcodeCloseOtherEditors LCTRL(LALT(LSHIFT(LGUI(Key_W)))) // SHIFT W

// Edit Menu
# define JJ_XcodeUndo LGUI(Key_Z)
# define JJ_XcodeRedo LSHIFT(LGUI(Key_Z))
# define JJ_XcodeCut LGUI(Key_X)
# define JJ_XcodeCopy LGUI(Key_C)
# define JJ_XcodePaste LGUI(Key_V)
# define JJ_XcodeCopySymbolName LCTRL(LSHIFT(LGUI(Key_C)))
# define JJ_XcodeCopyQualifiedSymbolName LCTRL(LALT(LSHIFT(LGUI(Key_C))))
# define JJ_XcodeShowSpelling LGUI(LSHIFT(Key_Semicolon)) // P
# define JJ_XcodeCheckSpelling LGUI(Key_Semicolon) // ;
# define JJ_XcodeCopyOrCut TD(TAP_DANCE_XCODE_COPY_OR_CUT)

// View Menu
# define JJ_XcodeFocusEditor LCTRL(LSHIFT(LGUI(Key_Return))) // BUTTERFLY
# define JJ_XcodeShowRelatedItems LCTRL(Key_1) // 1
# define JJ_XcodeToggleCodeReview LALT(LSHIFT(LGUI(Key_Return)))
# define JJ_XcodeResetAssistantSelection LALT(LSHIFT(LGUI(Key_Z)))
# define JJ_XcodeActivateConsole LSHIFT(LGUI(Key_C)) // C
# define JJ_XcodeToggleDebugArea LSHIFT(LGUI(Key_Y))
# define JJ_XcodeShowLibrary LSHIFT(LGUI(Key_L)) // 0
# define JJ_XcodeToggleInspectors LALT(LGUI(Key_0))

// Find Menu
# define JJ_XcodeFindInWorkspace LSHIFT(LGUI(Key_F)) // F
# define JJ_XcodeFindAndReplaceInWorkspace LALT(LSHIFT(LGUI(Key_F))) // R
# define JJ_XcodeFindNextInWorkspace LCTRL(LGUI(Key_G)) // G
# define JJ_XcodeFindPreviousInWorkspace LCTRL(LSHIFT(LGUI(Key_G))) // SHIFT G
# define JJ_XcodeFindSelectedSymbolInWorkspace LCTRL(LSHIFT(LGUI(Key_F)))
# define JJ_XcodeFindCallHierarchy LCTRL(LSHIFT(LGUI(Key_H)))
# define JJ_XcodeFindInFile LGUI(Key_F)
# define JJ_XcodeFindAndReplaceInFile LGUI(LALT(Key_F))
# define JJ_XcodeFindNextInFile LGUI(Key_G)
# define JJ_XcodeFindPreviousInFile LSHIFT(LGUI(Key_G))
# define JJ_XcodeFind TD(TAP_DANCE_XCODE_FIND)
# define JJ_XcodeFindAndReplace TD(TAP_DANCE_XCODE_FIND_AND_REPLACE)

// Navigate Menu
# define JJ_XcodeRevealInProjectNavigator LSHIFT(LGUI(Key_J))
# define JJ_XcodeRevealInDebugNavigator LSHIFT(LGUI(Key_D))
# define JJ_XcodeOpenInNextEditor LALT(LGUI(Key_Comma))
# define JJ_XcodeOpenIn LSHIFT(LALT(LGUI(Key_Comma)))
# define JJ_XcodeMoveFocusToNextArea LALT(LGUI(Key_Backtick)) // `
# define JJ_XcodeMoveFocusToPreviousArea LSHIFT(LALT(LGUI(Key_Backtick))) // ALT `
# define JJ_XcodeMoveFocusToNextEditor LCTRL(Key_Backtick) // TAB
# define JJ_XcodeMoveFocusToPreviousEditor LSHIFT(LCTRL(Key_Backtick)) // SHIFT TAB
# define JJ_XcodeMoveFocusToEditor LGUI(Key_Backtick)
# define JJ_XcodeGoForward LCTRL(LGUI(Key_RightArrow)) // L
# define JJ_XcodeGoForwardInNextEditor LCTRL(LALT(LGUI(Key_RightArrow))) // ALT L
# define JJ_XcodeGoBack LGUI(LCTRL(Key_LeftArrow)) // H
# define JJ_XcodeGoBackInNextEditor LCTRL(LALT(LGUI(Key_LeftArrow))) // ALT H
# define JJ_XcodeJumpToSelection LCTRL(LGUI(Key_L))
# define JJ_XcodeJumpToDefinition LCTRL(LGUI(Key_J)) // D
# define JJ_XcodeJumpToDefinitionInNextEditor LCTRL(LALT(LGUI(Key_J))) // ALT D
# define JJ_XcodeJumpToNextIssue LGUI(Key_Quote)
# define JJ_XcodeFixNextIssue LCTRL(LGUI(Key_Quote))
# define JJ_XcodeJumpToPreviousIssue LGUI(LSHIFT(Key_Quote))
# define JJ_XcodeFixPreviousIssue LCTRL(LGUI(LSHIFT(Key_Quote)))
# define JJ_XcodeJumpToNextCounterpart LCTRL(LGUI(Key_UpArrow)) // K
# define JJ_XcodeJumpToNextCounterpartInNextEditor LCTRL(LALT(LGUI(Key_UpArrow))) // ALT K
# define JJ_XcodeJumpToPreviousCounterpart LCTRL(LGUI(Key_DownArrow)) // K
# define JJ_XcodeJumpToPreviousCounterpartInNextEditor LCTRL(LALT(LGUI(Key_DownArrow))) // ALT K
# define JJ_XcodeJumpTo LGUI(Key_L)
# define JJ_XcodeJumpToNextChange LCTRL(Key_Backslash) // '\'
# define JJ_XcodeJumpToPreviousChange LCTRL(LSHIFT(Key_Backslash)) // SHIFT '\'

// Editor Menu
# define JJ_XcodeAssistant LCTRL(LALT(LGUI(Key_Return))) // RETURN
# define JJ_XcodeShowCodeActions LSHIFT(LGUI(Key_A)) // A
# define JJ_XcodeEditAllInScope LCTRL(LGUI(Key_E)) // E
# define JJ_XcodeRefactorRename LCTRL(LALT(LSHIFT(LGUI(Key_R)))) // N (custom)
# define JJ_XcodeRefactorExtractToMethod LCTRL(LALT(LSHIFT(LGUI(Key_X)))) // M (custom)
# define JJ_XcodeRefactorExtractToVariable LCTRL(LALT(LSHIFT(LGUI(Key_V)))) // V (custom)
# define JJ_XcodeFixAllIssues LCTRL(LALT(LGUI(Key_F)))
# define JJ_XcodeShowAllIssues LCTRL(LGUI(Key_M))
# define JJ_XcodeMoveLineUp LALT(LGUI(Key_LeftBracket))
# define JJ_XcodeMoveLineDown LALT(LGUI(Key_RightBracket))
# define JJ_XcodeCommentSelection LGUI(Key_Slash)

// Product Menu
# define JJ_XcodeClean LSHIFT(LGUI(Key_K))
# define JJ_XcodeCleanBuildFolder LALT(LSHIFT(LGUI(Key_K)))

// Debug Menu
# define JJ_XcodePauseContinue LCTRL(LGUI(Key_Y)) // Y
# define JJ_XcodeContinueToCurrentLine LCTRL(LGUI(Key_C)) // U
# define JJ_XcodeActivateBreakpoints LGUI(Key_Y)
# define JJ_XcodeAddBreakpointAtCurrentLine LGUI(Key_Backslash)

// Source Control Menu
# define JJ_XcodeCommit LALT(LGUI(Key_C)) // PGUP
# define JJ_XcodePull LCTRL(LGUI(Key_X)) // PGDN

// Transformation Menu
# define JJ_XcodeLowercaseWord LCTRL(LALT(LSHIFT(LGUI(Key_L)))) // ' (custom)
# define JJ_XcodeUppercaseWord LCTRL(LALT(LSHIFT(LGUI(Key_U)))) // NUM (custom)
# define JJ_XcodeCapitalizeWord LCTRL(LSHIFT(LGUI(Key_U))) // = (custom)

// Mark & Yank
# define JJ_XcodeDeleteToMark LCTRL(Key_W)
# define JJ_XcodeSetMark LCTRL(LSHIFT(Key_2))
# define JJ_XcodeYank LCTRL(Key_Y)
# define JJ_XcodeSelectToMark M(MACRO_XCODE_SELECT_TO_MARK)
# define JJ_XcodeSwapWithMark M(MACRO_XCODE_SWAP_WITH_MARK)

// Selection
# define JJ_XcodeSelectLine LCTRL(LSHIFT(LGUI(Key_L))) // S (custom)

#else
# define JJ_Xcode ___
#endif

