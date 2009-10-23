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
