// stdint.h workaround for Microsoft Compiler prior to 16.00
//
#ifdef _MSC_VER

#include <yvals.h>

#if (_CPPLIB_VER < 520)
#ifndef _STDINT
#define _STDINT

#include <vadefs.h>

typedef   signed char         int8_t;
typedef unsigned char         uint8_t;
typedef   signed short        int16_t;
typedef unsigned short        uint16_t;
typedef   signed int          int32_t;
typedef unsigned int          uint32_t;
typedef _Longlong             int64_t;
typedef _ULonglong            uint64_t;

#include <limits.h>

#define INT8_MIN              _I8_MIN
#define INT16_MIN             _I16_MIN
#define INT32_MIN             _I32_MIN
#define INT64_MIN             _I64_MIN

#define INT8_MAX              _I8_MAX
#define INT16_MAX             _I16_MAX
#define INT32_MAX             _I32_MAX
#define INT64_MAX             _I64_MAX

#define UINT8_MAX             _UI8_MAX
#define UINT16_MAX            _UI16_MAX
#define UINT32_MAX            _UI32_MAX
#define UINT64_MAX            _UI64_MAX

#ifndef  _WIN64
#define INTPTR_MIN             INT32_MIN
#define INTPTR_MAX             INT32_MAX
#define UINTPTR_MAX            UINT32_MAX
#else
#define INTPTR_MIN             INT64_MIN
#define INTPTR_MAX             INT64_MAX
#define UINTPTR_MAX            UINT64_MAX
#endif

#endif // _STDINT
#else
#include <stdint.h>
#endif
#else
#include <stdint.h>
#endif
