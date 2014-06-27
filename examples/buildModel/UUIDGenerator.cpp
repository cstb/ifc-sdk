// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// Due to symbol conflicts, these files must be included before debug_new.h
#include <iostream>
#include <fstream>

#ifdef MEMORY_LEAK_DETECTION
//#define _DEBUG_NEW_NO_NEW_REDEFINITION
#include "debug_new.h"
#else
#define debug_new new
#endif

#include "UUIDGenerator.h"

// Creating of a GUID string using the CoCreateGuid function from Microsoft
// as originally proposed by Jim Forester
// implemented previously by Jeremy Tammik using hex-encoding
//
// This version uses a number system with base 64 to obtain a string with 22 characters.
// Also provides conversion routines for the mapping of the base 85 strings (20 chars).
//
// Peter Muigg, June 1998
// Janos Maros, July 2000
//

#if defined _MSC_VER
#pragma warning (disable: 4115)
#endif

#ifdef WIN32
#include <Windows.h>
#include <Rpcdce.h>
#else // Here we imply that we have a standard implementation of uuid generator
extern "C"
{
#include <uuid/uuid.h>
};
#endif

#if defined _MSC_VER
#pragma warning (default: 4115)
#endif

#include    <cstdio>
#include    <cstring>
#include    <cstdlib>

#ifndef WIN32
//
// For non windows platforms you probably will need
// the following definitions instead of <Windows.h>
// to use this module:


typedef struct _GUID            // size is 16
{
    unsigned long Data1;
    unsigned short  Data2;
    unsigned short  Data3;
    unsigned char Data4[8];
} GUID;

typedef long BOOL;


#define FALSE    0
#define TRUE     1

//const GUID GUID_NULL = { 0, 0, 0, { 0, 0, 0, 0, 0, 0, 0, 0 } };
//static long CoCreateGuid( GUID   *pGuid );

// (CoCreateGuid should be written to produce the globally unique data.)
//

#endif

static char * getString16FromGuid( const GUID   *pGuid, char * buf, int len );

static char * getString64FromGuid( const GUID *pGuid, char * buf, int len );
static BOOL  getGuidFromString64( const char *string, GUID *pGuid );
static BOOL cv_to_64( const unsigned long number, char *code, int len );
static BOOL cv_from_64( unsigned long *pRes, const char *str );

static BOOL  getGuidFromString85( const char    *string, GUID *pGuid );
static char * getString85FromGuid( const GUID *pGuid, char * buf, int len );
static BOOL cv_to_85( const unsigned long number, char *code, int len );
static BOOL cv_from_85( unsigned long *pRes, const char *str );
static char * String85_To_String64( const char *string85, char * buf, int len );

static const char *cConversionTable85 =
//          1         2         3         4         5         6         7         8
//0123456789012345678901234567890123456789012345678901234567890123456789012345678901234
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&^|*+,-./:;<=>?~`@_";

static const char *cConversionTable =
//          1         2         3         4         5         6
//0123456789012345678901234567890123456789012345678901234567890123
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_$";

// Conversion Table must start with "0", this is the digit for the additive unit


  
#ifdef WIN32
#	ifdef _MSC_VER
#pragma warning(disable : 4996)
std::string UUIDGenerator::generateUUID() 
{
	GUID guid;
	char str[37];

	::CoCreateGuid(&guid);

	sprintf(
		str,
		"%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
		guid.Data1,
		guid.Data2,
		guid.Data3,
		guid.Data4[0],guid.Data4[1],guid.Data4[2],guid.Data4[3],
		guid.Data4[4],guid.Data4[5],guid.Data4[6],guid.Data4[7]
		);

	return std::string(str);
}
#	elif __GNU_C__
std::string UUIDGenerator::generateUUID() 
{
	UUID guid;
	char str[37];

	UuidCreate(&guid);

	sprintf(
		str,
		"%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
		guid.Data1,
		guid.Data2,
		guid.Data3,
		guid.Data4[0],guid.Data4[1],guid.Data4[2],guid.Data4[3],
		guid.Data4[4],guid.Data4[5],guid.Data4[6],guid.Data4[7]
		);

	return std::string(str);
}
#	endif

#elif defined(sgi)
std::string UUIDGenerator::generateUUID() 
{
	uuid_t uuid;
	uint_t status;
	char str[37];

	uuid_create(&uuid,&status);
		
	sprintf(
		str,
		"%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X",
		uuid.__u_bits[0],
		uuid.__u_bits[1],
		uuid.__u_bits[2],
		uuid.__u_bits[3],
		uuid.__u_bits[4],
		uuid.__u_bits[5],
		uuid.__u_bits[6],
		uuid.__u_bits[7],
		uuid.__u_bits[8],
		uuid.__u_bits[9],
		uuid.__u_bits[10],
		uuid.__u_bits[11],
		uuid.__u_bits[12],
		uuid.__u_bits[13],
		uuid.__u_bits[14],
		uuid.__u_bits[15]);
	
	return std::string(str);
	
}
#else // Here we imply that we have a standard implementation of uuid generator
std::string UUIDGenerator::generateUUID() 
{
	uuid_t uuid;
	
	uuid_generate(uuid);
	char out[256];
	uuid_unparse(uuid,out);
	return std::string(out);
}
#endif


std::string EncodeBase85(std::string s)
{
    unsigned int num;
    char str[33];
    char strtmp[10];
    char strres[10];
    char strBase85[33];
    int i, j, len;

    len = s.length();
    if (len == 36)
    {
        char out[37];
        strcpy(out, s.data());
        // we have now 8-4-4-4-12 string = 36 char
        // we want 32 char

        int i;
        for (i = 9; i <= 12; i++)
            out[i - 1] = out[i];
        for (i = 14; i <= 17; i++)
            out[i - 2] = out[i];
        for (i = 19; i <= 22; i++)
            out[i - 3] = out[i];
        for (i = 24; i <= 35; i++)
            out[i - 4] = out[i];
        strncpy(str, out, 32);
        str[32] = '\0';
        len = 32;
    }
    else if ((len < 1) || (32 < len))
    {
        return s;
    }
    else
    {
        strcpy(str, s.data());
    }

    strBase85[0] = '\0';

    for (i = 0; i <= (int)((len - 1) / 8); i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (i * 8 + j > len - 1) break;
            strtmp[j] = str[i * 8 + j];
        }
        strtmp[j] = '\0';
        num = cnv_hex_to_int32(strtmp);
        //char s0[80];
        //sprintf(s0, "__int32 num : %u", num);
        //AfxMessageBox(s0, MB_OK);
        cnv_int32_to_base85(num, 5, strres);
        strcat(strBase85, strres);
        //char s2[80];
        //sprintf(s2, "strres : %s", strres);
        //AfxMessageBox(s2, MB_OK);
    }

    return std::string(strBase85);
}

std::string UUIDGenerator::generateIfcGloballyUniqueId() {

    std::string temp = EncodeBase85(generateUUID());

    char * buf = new char[23];

    return std::string (String85_To_String64(temp.c_str(), buf, 23));
}

std::string UUIDGenerator::generateEveUniqueId() {
	std::string res = generateIfcGloballyUniqueId();
	unsigned int i;
	for (i=0; i<res.size(); i++) if (res[i]=='|') res[i]='{';
	return res;
}


//
// Creation of the string representing the GUID, the buffer must be able
// to hold 22 characters + 1 for the terminating 0
//

#ifdef WIN32
char * CreateCompressedGuidString( char * buf, int len )
{
    GUID                guid;

    guid = GUID_NULL;

    //
    // Call to the function from Microsoft
    //
    CoCreateGuid (&guid);

    if (memcmp (&GUID_NULL, &guid, sizeof (GUID)) == 0)
    {
        return NULL;
    }
    return getString64FromGuid (&guid, buf, len);
}
#else

bool cnv_int32_to_base85(unsigned int num, int digit_limit, char * strResult)
{
    unsigned int n;
    int array[5];
    int m;
    int i;
    int zeroes;
    char result[128];

    m = 0;
    n = num;
    do
    {
        if (m > digit_limit - 1) return false;
        array[m] = n % 85;
        n = n / 85;
        m++;
    }
    while (n > 0);

    zeroes = digit_limit - m;
    for (i = m - 1; i >= 0; i--)
    {
        result[zeroes + m - i - 1] = cConversionTable85[array[i]];
    }
    //
    // Filling in leading zeroes
    //
    for (i = 0; i < zeroes; i++)
    {
        result[i] = '0';
    }
    result[digit_limit] = '\0';
    strcpy(strResult, result);
    return true;
}

unsigned int cnv_hex_to_int32(char * strhex)
{
    unsigned int n;
    unsigned int result, weight[8];
    char str[64], * stopstring;
    int i, len;

    weight[0] = 1;
    weight[1] = 16;
    weight[2] = 256;
    weight[3] = 4096;
    weight[4] = 65536;
    weight[5] = 1048576;
    weight[6] = 16777216;
    weight[7] = 268435456;

    strcpy(str, "0x");
    len = (int)strlen(strhex);
    if (len > 8) return 0;

    result = 0;
    for (i = 0; i < len; i++)
    {
        //strcpy(&str[2], &strhex[i]);
        str[2] = strhex[len - i - 1];
        str[3] = '\0';
        n = (unsigned int)strtoul(str, &stopstring, 0);
        result = result + n * weight[i]; // u32pow(16,i);
        //char s0[80];
        //sprintf(s0, "(%d) str : %s, %u * %u : result = %u", i, str, n, weight[i], result);
        //AfxMessageBox(s0, MB_OK);

    }
    return result;
}

char *CreateCompressedGuidString( char * buf, int len)
{

    uuid_t uuid;

    //UUID guid;
    //char str[37];

    uuid_generate(uuid);
    char out[256];
    uuid_unparse(uuid, out);

    std::string temp5 = out;
    std::string temp6 = EncodeBase85(temp5);

    return String85_To_String64(temp6.c_str(), buf, len);
}
#    endif

char *uuid2String64(const char *uuid, char * buf, int len)
{
#ifdef WIN32
    GUID                guid;
    UuidFromStringA((unsigned char *)uuid, &guid);
    return getString64FromGuid (&guid, buf, len);
#else
    std::string s = uuid;
    std::string temp6 = EncodeBase85(s);
    return String85_To_String64(temp6.c_str(), buf, len);
#endif
}

//
// Mapping the base 64 string to the conventional GUID string.
//
char * String64_To_HexaGuidString( const char *string64, char * buf, int len )
{
    GUID    guid;

    if (getGuidFromString64 (string64, &guid))
    {
        return getString16FromGuid (&guid, buf, len);
    }
    return NULL;
}

//
// Mapping the base 64 string to the base 85 string through GUID.
//
char * String64_To_String85( const char *string64, char * buf, int len )
{
    GUID    guid;

    if (getGuidFromString64 (string64, &guid))
    {
        return getString85FromGuid (&guid, buf, len);
    }
    return NULL;
}

//
// Mapping the base 85 string to the base 64 string through GUID.
//
char * String85_To_String64( const char *string85, char * buf, int len )
{
    GUID    guid;

    if (getGuidFromString85 (string85, &guid))
    {
        return getString64FromGuid (&guid, buf, len);
    }
    return NULL;
}


//
// Conversion of a GUID to a string representing the GUID, the buffer must be able
// to hold 36 characters + 1 for the terminating 0 (4 extra characters for the separation)
//
char * getString16FromGuid( const GUID  *pGuid, char * buf, int len )
{
    if (len < 37)
    {
        return NULL;
    }
    sprintf (buf, "%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
             pGuid->Data1,
             pGuid->Data2,
             pGuid->Data3,
             pGuid->Data4[0],
             pGuid->Data4[1],
             pGuid->Data4[2],
             pGuid->Data4[3],
             pGuid->Data4[4],
             pGuid->Data4[5],
             pGuid->Data4[6],
             pGuid->Data4[7]);
    return buf;
}

//
// Conversion of a GUID to a string representing the GUID, the buffer must be able
// to hold 22 characters + 1 for the terminating 0
//
char * getString64FromGuid( const GUID *pGuid, char * buf, int len )
{
    unsigned long   num[6];
    char            str[6][5];
    int             i, n;

    if (len < 23)
    {
        return NULL;
    }

    //
    // Creation of six 32 Bit integers from the components of the GUID structure
    //
    num[0] = (unsigned long) (pGuid->Data1 / 16777216);                                                 //    16. byte  (pGuid->Data1 / 16777216) is the same as (pGuid->Data1 >> 24)
    num[1] = (unsigned long) (pGuid->Data1 % 16777216);                                                 // 15-13. bytes (pGuid->Data1 % 16777216) is the same as (pGuid->Data1 & 0xFFFFFF)
    num[2] = (unsigned long) (pGuid->Data2 * 256 + pGuid->Data3 / 256);                                 // 12-10. bytes
    num[3] = (unsigned long) ((pGuid->Data3 % 256) * 65536 + pGuid->Data4[0] * 256 + pGuid->Data4[1]);  // 09-07. bytes
    num[4] = (unsigned long) (pGuid->Data4[2] * 65536 + pGuid->Data4[3] * 256 + pGuid->Data4[4]);       // 06-04. bytes
    num[5] = (unsigned long) (pGuid->Data4[5] * 65536 + pGuid->Data4[6] * 256 + pGuid->Data4[7]);       // 03-01. bytes
    //
    // Conversion of the numbers into a system using a base of 64
    //
    buf[0] = '\0';
    n = 3;
    for (i = 0; i < 6; i++)
    {
        if (!cv_to_64 (num[i], str[i], n))
        {
            return NULL;
        }
        strcat (buf, str[i]);
        n = 5;
    }
    return buf;
}

//
// Reconstruction of the GUID structure from the coded string
//
BOOL  getGuidFromString64( const char   *string, GUID *pGuid )
{
    char            str[6][5];
    int             len, i, j, m;
    unsigned long   num[6];

    len = (int) strlen (string);
    if (len != 22)
        return FALSE;

    j = 0;
    m = 2;

    for (i = 0; i < 6; i++)
    {
        strncpy (str[i], &string[j], (unsigned)m);
        str[i][m] = '\0';
        j = j + m;
        m = 4;
    }
    for (i = 0; i < 6; i++)
    {
        if (!cv_from_64 (&num[i], str[i]))
        {
            return FALSE;
        }
    }

    pGuid->Data1 = (unsigned long) (num[0] * 16777216 + num[1]);                // 16-13. bytes
    pGuid->Data2 = (unsigned short) (num[2] / 256);                             // 12-11. bytes
    pGuid->Data3 = (unsigned short) ((num[2] % 256) * 256 + num[3] / 65536);    // 10-09. bytes

    pGuid->Data4[0] = (unsigned char) ((num[3] / 256) % 256);                   //    08. byte
    pGuid->Data4[1] = (unsigned char) (num[3] % 256);                           //    07. byte
    pGuid->Data4[2] = (unsigned char) (num[4] / 65536);                         //    06. byte
    pGuid->Data4[3] = (unsigned char) ((num[4] / 256) % 256);                   //    05. byte
    pGuid->Data4[4] = (unsigned char) (num[4] % 256);                           //    04. byte
    pGuid->Data4[5] = (unsigned char) (num[5] / 65536);                         //    03. byte
    pGuid->Data4[6] = (unsigned char) ((num[5] / 256) % 256);                   //    02. byte
    pGuid->Data4[7] = (unsigned char) (num[5] % 256);                           //    01. byte

    return TRUE;
}

//
// Conversion of an integer into a number with base 64
// using the coside table cConveronTable
//
BOOL cv_to_64( const unsigned long number, char *code, int len )
{
    unsigned long   act;
    int             iDigit, nDigits;
    char            result[5];

    if (len > 5)
        return FALSE;

    act = number;
    nDigits = len - 1;

    for (iDigit = 0; iDigit < nDigits; iDigit++)
    {
        result[nDigits - iDigit - 1] = cConversionTable[(int) (act % 64)];
        act /= 64;
    }
    result[len - 1] = '\0';

    if (act != 0)
        return FALSE;

    strcpy (code, result);
    return TRUE;
}

//
// The reverse function to calculate the number from the code
//
BOOL cv_from_64( unsigned long *pRes, const char *str )
{
    int len, i, j, index;

    len = (int) strlen (str);
    if (len > 4)
        return FALSE;

    *pRes = 0;

    for (i = 0; i < len; i++)
    {
        index = -1;
        for (j = 0; j < 64; j++)
        {
            if (cConversionTable[j] == str[i])
            {
                index = j;
                break;
            }
        }
        if (index == -1)
            return FALSE;
        *pRes = *pRes * 64 + (unsigned)index;
    }
    return TRUE;
}

//
// Conversion of a GUID to a string representing the GUID, the buffer must be able
// to hold 20 characters + 1 for the terminating 0
//
char * getString85FromGuid( const GUID *pGuid, char * buf, int len )
{
    unsigned long num[4];
    char str[4][6];
    int i;

    if (pGuid == NULL || len < 21)
        return NULL;

    //
    // Creation of four 32 Bit integer from the components of the GUID structure
    //
    num[0] = (unsigned long) pGuid->Data1;
    num[1] = (unsigned long) (pGuid->Data2  * 65536 + pGuid->Data3);
    num[2] = (unsigned long) (
                 pGuid->Data4[0] +
                 pGuid->Data4[1] * 256 +
                 pGuid->Data4[2] * 65536 +
                 pGuid->Data4[3] * 16777216
             );
    num[3] = (unsigned long) (
                 pGuid->Data4[4] +
                 pGuid->Data4[5] * 256 +
                 pGuid->Data4[6] * 65536 +
                 pGuid->Data4[7] * 16777216
             );
    //
    // Conversion of the numbers into a system using a base of 85
    //
    buf[0] = '\0';
    for (i = 0; i < 4; i++)
    {
        if (!cv_to_85 (num[i], str[i], 6))
            return NULL;
        strcat (buf, str[i]);
    }
    return buf;
}

//
// Reconstruction of the GUID structure from the coded string
//
BOOL  getGuidFromString85( const char   *string, GUID *pGuid )
{
    char str[4][6];
    int len, i;
    unsigned long data, num[4];

    len = (int) strlen (string);
    if (len != 20)
        return FALSE;
    for (i = 0; i < 4; i++)
    {
        strncpy (str[i], &string[i * 5], 5);
        str[i][5] = '\0';
    }
    for (i = 0; i < 4; i++)
    {
        if (!cv_from_85 (&num[i], str[i]))
            return FALSE;
    }
    pGuid->Data1 = (unsigned long) num[0];
    data = num[1];
    data = data >> 16;
    pGuid->Data2 = (unsigned short) data;
    pGuid->Data3 = (unsigned short) (num[1] & 65535);
    data = num[2];
    for (i = 0; i < 4; i++)
    {
        pGuid->Data4[i] = (unsigned char) (data & 255);
        data = data >> 8;
    }
    data = num[3];
    for (i = 4; i < 8; i++)
    {
        pGuid->Data4[i] = (unsigned char) (data & 255);
        data = data >> 8;
    }
    return TRUE;
}

//
// Conversion of an integer into a number with base 85
// using the code table cConversionTable85
//
BOOL cv_to_85( const unsigned long number, char *code, int len )
{
    unsigned long  act;
    int  z_array[5], ndig, i, zeroes;
    char result[6];

    if (len < 6)
        return FALSE;
    ndig = 0;
    act = number;
    do
    {
        if (ndig > 4)
            return FALSE;
        z_array[ndig] = (int) (act % 85);
        act /= 85;
        ndig++;
    }
    while (act > 0);
    ndig--;
    zeroes = 4 - ndig;
    for (i = ndig; i >= 0; i--)
    {
        result[zeroes + ndig - i] = cConversionTable85[z_array[i]];
    }
    //
    // Filling in leading zeroes
    //
    for (i = 0; i < zeroes; i++)
    {
        result[i] = '0';
    }
    result[5] = '\0';
    strcpy (code, result);
    return TRUE;
}

//
// The reverse function to calculate the number from the code
//
BOOL cv_from_85( unsigned long *pRes, const char *str )
{
    int len, i, j, index;
    unsigned long fact;

    len = (int) strlen (str);
    if (len > 5)
        return FALSE;

    *pRes = 0;
    fact = 1;
    for (i = len - 1; i >= 0; i--)
    {
        index = -1;
        for (j = 0; j < 85; j++)
        {
            if (cConversionTable85[j] == str[i])
            {
                index = j;
                break;
            }
        }
        if (index == -1)
            return FALSE;
        *pRes += (unsigned)index * fact;
        fact *= 85;
    }
    return TRUE;
}
