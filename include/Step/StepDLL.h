#ifndef Step_StepDLL_h
#define Step_StepDLL_h

#ifdef _MSC_VER
# pragma warning(disable : 4251) // [...] needs to have dll-interface
# pragma warning(disable : 4267) // conversion from 'size_t' to 'unsigned int'
# ifdef Step_EXPORTS
#  define STEP_DLL_DEF __declspec(dllexport)
# else
#  ifdef Step_STATIC
#   define STEP_DLL_DEF
#  else
#   define STEP_DLL_DEF __declspec(dllimport)
#  endif
# endif
#else
# define STEP_DLL_DEF
# endif
#endif
