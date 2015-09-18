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

#ifndef Step_ClientData_h
#define Step_ClientData_h

#include <Step/Export.h>

#include <Step/Types.h>

#include <string>
#include <map>

namespace Step {

    /*!
     * \short A class which encapsulates user data of step objects. It contains meta-data
     */
    class STEP_EXPORT ClientData : public Referenced
    {

    public:

        /*!
         \short Constructor, do nothing
         */
        ClientData()
        {
        }

        /*!
         \short Virtual Destructor
         */
        virtual ~ClientData()
        {
        }

        /*!
         \short Gets the name of the ClientData
         @return the name of the ClientData
         */
        virtual const std::string& getName() const
        {
            return s_defaultName;
        }

        /*!
         \short Get the description of the ClientData
         @return the description of the ClientData
         */
        virtual const std::string& getDescription() const
        {
            return s_defaultDesc;
        }

    private:
        static std::string s_defaultName;
        static std::string s_defaultDesc;
    };
}
#endif
