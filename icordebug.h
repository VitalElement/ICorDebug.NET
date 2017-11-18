// SharpDX include config [icordebug] - Version 1.0

    // Use unicode
    #define UNICODE
    
    // for SAL annotations
    #define _PREFAST_
    
    // To force GUID to be declared
    #define INITGUID
    
    #define _ALLOW_KEYWORD_MACROS
    
    // Wrap all declspec for code-gen
    #define __declspec(x) __attribute__((annotate(#x)))
    
  
#include "objidlbase.h"
#include "wtypes.h"
#include "winerror.h"
#include "winbase.h"
#include "cor.h"
#include "corHdr.h"
#include "cordebug.h"
// create-cpp enum:SHARPDX_ERRORCODE visibility:undef macro:ERROR_(.*)
#include "icordebug-ext.h"
