#include <stdio.h>
#include <string.h>
#include "hash.h"

//#define UNICODE

#ifdef  UNICODE 

#define _tprintf    wprintf
#define _tscanf     wscanf
#define _tcslen     wcslen

#define _TCHAR      wchar_t
#define _T(x)       L##x

#else   //not defined UNICODE

#define _tprintf    printf
#define _tscanf     scanf
#define _tcslen     strlen

#define _TCHAR      char
#define _T(x)       x

#endif  //

int
main(void)
{
#if 1
    unsigned char szRight[117] = {
        0x6A, 0x13, 0x6A, 0x0D, 0x8D, 0x55, 0x88, 0x52, 0xE8, 0x6F, 0x01, 0x00, 0x00, 0x83, 0xC4, 0x04, 
            0xD1, 0xE0, 0x50, 0x8D, 0x45, 0x88, 0x50, 0xE8, 0xA3, 0xFA, 0xFF, 0xFF, 0x83, 0xC4, 0x10, 0x3D, 
            0x6D, 0x5D, 0x9B, 0xDA, 0x74, 0x26, 0x6A, 0x13, 0x6A, 0x0D, 0x8D, 0x4D, 0x88, 0x51, 0xE8, 0x49, 
            0x01, 0x00, 0x00, 0x83, 0xC4, 0x04, 0xD1, 0xE0, 0x50, 0x8D, 0x55, 0x88, 0x52, 0xE8, 0x7D, 0xFA, 
            0xFF, 0xFF, 0x83, 0xC4, 0x10, 0x3D, 0x9A, 0xB5, 0x69, 0xA9, 0x75, 0x02, 0xEB, 0x05, 0xE9, 0x27, 
            0xFF, 0xFF, 0xFF, 0x83, 0x7D, 0x84, 0x03, 0x75, 0x0F, 0x68, 0x4C, 0x50, 0x42, 0x00, 0xE8, 0x49, 
            0x05, 0x00, 0x00, 0x83, 0xC4, 0x04, 0xEB, 0x0D, 0x68, 0x1C, 0x50, 0x42, 0x00, 0xE8, 0x3A, 0x05, 
            0x00, 0x00, 0x83, 0xC4, 0x04
};

    unsigned long hash = ror_hash(szRight, 117, 14, 7);
#else


    unsigned long hash;
    _TCHAR szInput[16];
    
    _tprintf(_T("Please Enter the passwd, "));
    
    _tscanf(_T("%15s"), szInput);
    fflush(stdin);

    //UNICODE 0xa969b59a  
    //ANSI    0xda9b5d6d

    hash = ror_hash(szInput, _tcslen(szInput) * sizeof(_TCHAR), 13, 19);
#endif
    return 0;
}