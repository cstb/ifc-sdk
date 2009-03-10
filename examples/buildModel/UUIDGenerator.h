#ifndef UUIDGenerator_h_h
#define UUIDGenerator_h_h

#ifdef WIN32
#	ifdef _MSC_VER
# 		define _UID_UINT32 unsigned int
#	elif defined(__GNUC__)
#		define _UID_UINT32 unsigned int
#	endif
#elif defined(sgi)
	#define _UID_UINT32 uint32_t 
#elif defined(linux)
# define _UID_UINT32 unsigned int
#else // Update this to take into account different OS
# define _UID_UINT32 unsigned int
#endif


#include <string>

class UUIDGenerator
{
public:
	static std::string generateUUID();
	static std::string generateIfcGloballyUniqueId();
	static std::string generateEveUniqueId();
private:
	static std::string EncodeBase85(std::string s);
	static std::string DecodeBase85(std::string s);
	static bool cnv_int32_to_base85(_UID_UINT32 num, int digit_limit, char * strResult);
	static bool cnv_base85_to_int32(char * str, _UID_UINT32 &n);
	static _UID_UINT32 cnv_hex_to_int32(char * strhex);
	static std::string sBase85string;
	UUIDGenerator() {}
};


#endif
