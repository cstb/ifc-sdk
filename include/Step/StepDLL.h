/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/
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
