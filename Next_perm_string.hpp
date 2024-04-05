// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Next_perm_string.pas' rev: 36.00 (Windows)

#ifndef Next_perm_stringHPP
#define Next_perm_stringHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Next_perm_string
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall swapBy(System::PByte a, System::PByte b);
extern DELPHI_PACKAGE void __fastcall swapCh(char &a, char &b);
extern DELPHI_PACKAGE void __fastcall reverse(System::AnsiString &s, const System::Byte a, const System::Byte x_);
extern DELPHI_PACKAGE bool __fastcall D_next_permutation(System::AnsiString &s, const System::Byte first, const System::Byte end_);
}	/* namespace Next_perm_string */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_NEXT_PERM_STRING)
using namespace Next_perm_string;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Next_perm_stringHPP
