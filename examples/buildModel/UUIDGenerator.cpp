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



#ifdef WIN32
#	ifdef _MSC_VER
#		include <rpc.h>
#	elif defined(__GNUC__)
#		include <basetyps.h>
#	endif
#elif defined(sgi)
extern "C" {
  #include <sys/types.h>
  #include <sys/uuid.h>
}
#else // Here we imply that we have a standard implementation of uuid generator
 extern "C" {
  #include <uuid/uuid.h>
 };
#endif


#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>

 
 std::string UUIDGenerator::sBase85string = std::string("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&^|*+,-./:;<=>?~`@_");
 
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

std::string UUIDGenerator::generateIfcGloballyUniqueId() {
	return EncodeBase85(generateUUID());
}

std::string UUIDGenerator::generateEveUniqueId() {
	std::string res = generateIfcGloballyUniqueId();
	unsigned int i;
	for (i=0; i<res.size(); i++) if (res[i]=='|') res[i]='{';
	return res;
}

// **************************************************************************
// EncodeBase85 function
//
//  adachi@ai.isl.secom.co.jp
//  1999/11/26

std::string UUIDGenerator::EncodeBase85(std::string s) 
{
	_UID_UINT32 num;
	char str[33];
	char strtmp[10];
	char strres[10];
	char strBase85[33];
	int i, j, len;

	len = s.length();
	if (len==36) {
		char out[37];
		strcpy(out, s.data());	
		// we have now 8-4-4-4-12 string = 36 char
		// we want 32 char
	
		int i;
		for (i=9;i<=12;i++)
			out[i-1]=out[i];
		for (i=14;i<=17;i++)
			out[i-2]=out[i];
		for (i=19;i<=22;i++)
			out[i-3]=out[i];
		for (i=24;i<=35;i++)
			out[i-4]=out[i];
		out[32]='\0';	
		strncpy(str,out,33);
		len=32;
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

	for (i=0; i <= (int)((len - 1) / 8); i++)
	{
		for (j=0; j < 8; j++)
		{
			if (i * 8 + j > len-1) break;
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

// **************************************************************************
// DecodeBase85 function
//	BSTR CIFCsvr::DecodeBase85(LPCTSTR strValue)  
//  adachi@ai.isl.secom.co.jp
//  1999/11/26

std::string UUIDGenerator::DecodeBase85(std::string s) 
{
	_UID_UINT32 num;
	char str[32], strtmp[10], strGUID[64], str2[32];
	int i, j, len;

	len = s.length();
	if (len > 20) return s;
	strcpy(str, s.data());
	strGUID[0] = '\0';

	for (i=0; i < (int)(len / 5); i++)
	{
		for (j=0; j < 5; j++)
		{
			if (i * 5 + j > len - 1) break;
			strtmp[j] = str[i * 5 + j];
		}
		strtmp[j] = '\0';

		cnv_base85_to_int32(strtmp, num);
		sprintf(str2,"%X", num);
		strcat(strGUID, str2);
	}

	return std::string(strGUID);
}

// **************************************************************************
// Base85 converter functions
//
//  marache@cstb.fr
//  2001/05/10
//  adachi@ai.isl.secom.co.jp
//  1999/11/26

bool UUIDGenerator::cnv_int32_to_base85(_UID_UINT32 num, int digit_limit, char * strResult)
{
   _UID_UINT32 n;
   int array[5];
   int m;
   int i;
   int zeroes;
   char result[128];

   m = 0;
   n = num;
   do {
      if (m > digit_limit - 1) return false;
      array[m] = n % 85;
      n = n / 85;
      m++;
   } while (n > 0);
   
   zeroes= digit_limit - m;
   for (i = m - 1; i >= 0; i--) {
	   result[zeroes + m - i - 1]= sBase85string[array[i]];
   }
   //
   // Filling in leading zeroes
   //
   for(i=0; i < zeroes; i++) {
      result[i]= '0';
   }
   result[digit_limit]='\0';
   strcpy(strResult, result);
   return true;
}

bool UUIDGenerator::cnv_base85_to_int32(char * str, _UID_UINT32 &n)
{
	int len, i, j, index;
	_UID_UINT32 fact;

	len=strlen(str);
	if (len > 5) return false;

	n = 0;
	fact=1;
	for (i=len-1; i >= 0; i--) {
		index=-1;
		for(j=0; j < 85; j++) {
			if (sBase85string[j] == str[i]) {
				index=j;
			break;
			}
		}
		if (index == -1) return false;
		n += index * fact;
		fact *= 85;
	}
	return true;
}

_UID_UINT32 UUIDGenerator::cnv_hex_to_int32(char * strhex)
{
	_UID_UINT32 n;
	_UID_UINT32 result, weight[8];
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

	result=0;
	for(i=0; i < len; i++)
	{
		//strcpy(&str[2], &strhex[i]);
		str[2] = strhex[len - i - 1];
		str[3] = '\0';
		n = (_UID_UINT32)strtoul(str,&stopstring,0);
		result = result + n * weight[i]; // u32pow(16,i);
			//char s0[80];
			//sprintf(s0, "(%d) str : %s, %u * %u : result = %u", i, str, n, weight[i], result);
			//AfxMessageBox(s0, MB_OK);

	}
	return result;
}
