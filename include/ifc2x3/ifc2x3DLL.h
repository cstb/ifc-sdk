#ifdef _MSC_VER
#pragma warning(disable : 4251) // [...] needs to have dll-interface								//  to be used by clients of [...]
#ifdef _STATIC_IFC2X3
#define IFC2X3_DLL_DEF
#else
#if defined(ifc2x3_EXPORTS) || defined(IFC2X3_EXPORTS)
#define IFC2X3_DLL_DEF __declspec(dllexport)
#else
#define IFC2X3_DLL_DEF __declspec(dllimport)
#pragma comment(lib,"ifc2x3")
#endif
#endif
#else
#define IFC2X3_DLL_DEF
#endif
