{ *********************************************************************************** }
{ *                                 HashLib Library                                 * }
{ *                  Copyright (c) 2016 - 2019 Ugochukwu Mmaduekwe                  * }
{ *                 Github Repository <https://github.com/Xor-el>                   * }

{ *  Distributed under the MIT software license, see the accompanying file LICENSE  * }
{ *          or visit http://www.opensource.org/licenses/mit-license.php.           * }

{ * ******************************************************************************* * }

(* &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& *)


{$DEFINE DELPHI}

(* &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& *)
{$IFDEF FPC}
{$I HashLibHelper.inc} // Had to Include this Since Delphi Does not allow "FPC_FULLVERSION" to Compile.
{$UNDEF DELPHI}
{$MODE delphi}

{$DEFINE USE_UNROLLED_VARIANT}

// Disable Overflow and RangeChecks.
{$OVERFLOWCHECKS OFF}
{$RANGECHECKS OFF}

// Enable Pointer Math
{$POINTERMATH ON}

// Disable Warnings and Hints.
{$WARNINGS OFF}
{$HINTS OFF}
{$NOTES OFF}

// Optimizations
{$OPTIMIZATION LEVEL3}
{$OPTIMIZATION PEEPHOLE}
{$OPTIMIZATION REGVAR}
{$OPTIMIZATION LOOPUNROLL}
{$OPTIMIZATION STRENGTH}
{$OPTIMIZATION CSE}
{$OPTIMIZATION DFA}

{$IFDEF CPUI386}
   {$OPTIMIZATION USEEBP}
{$ENDIF}

{$IFDEF CPUX86_64}
   {$OPTIMIZATION USERBP}
{$ENDIF}

{$ENDIF FPC}

(* &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& *)

{$IFDEF DELPHI}

  // XE3 and Above
{$IF CompilerVersion >= 24.0}
   {$DEFINE DELPHIXE3_UP}
   {$LEGACYIFEND ON}
   {$ZEROBASEDSTRINGS OFF}
{$IFEND}

 // 2010 only
{$IF CompilerVersion = 21.0}
   {$DEFINE DELPHI2010}
{$IFEND}

  // 2010 and Above
{$IF CompilerVersion >= 21.0}
   {$DEFINE DELPHI2010_UP}
{$IFEND}

  // XE and Above
{$IF CompilerVersion >= 22.0}
   {$DEFINE DELPHIXE_UP}
{$IFEND}

  // XE2 and Above
{$IF CompilerVersion >= 23.0}
   {$DEFINE DELPHIXE2_UP}
   {$DEFINE HAS_UNITSCOPE}
{$IFEND}

 // XE4 and Above
{$IF CompilerVersion >= 25.0}
   {$DEFINE DELPHIXE4_UP}
   {$DEFINE SHIFT_OVERFLOW_BUG_FIXED}
{$IFEND}

  // XE7 and Above
{$IF CompilerVersion >= 28.0}
   {$DEFINE DELPHIXE7_UP}
{$IFEND}

  // 2010 and Above
{$IFNDEF DELPHI2010_UP}
   {$MESSAGE ERROR 'This Library requires Delphi 2010 or higher.'}
{$ENDIF}

{$DEFINE USE_UNROLLED_VARIANT}

// This option is needed to enable code browsing (aka Ctrl+Click)
// It does not affect the binary size or generated code
{$DEFINITIONINFO ON}

// Disable Overflow and RangeChecks.
{$OVERFLOWCHECKS OFF}
{$RANGECHECKS OFF}

 // Enable Pointer Math
{$POINTERMATH ON}

// Disable String Checks
{$STRINGCHECKS OFF}

// Disable Duplicate Constructor Warnings
{$WARN DUPLICATE_CTOR_DTOR OFF}

{$ENDIF DELPHI}

(* &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& *)

