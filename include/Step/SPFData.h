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

#ifndef Step_SPFData_h
#define Step_SPFData_h

#include <Step/Export.h>

#include <Step/Types.h>
#include <Step/ClassType.h>

#include <map>
#include <string>

namespace Step {
    /*!
     * \short Base Class to encapsulate data from a line of a STEP-21 file
     */
    class STEP_EXPORT SPFData
    {

    public:

        /*!
         \short Default constructor. Inits properties with null values
         */
        SPFData() :
            m_argc(0), m_index(0), m_argv(0)
        {
        }

        /*!
         \short Virtual Destructor. It releases the memory of arguments
         */
        virtual ~SPFData();

        /*!
         \short Gets next parameter
         */
        virtual const std::string &getNext();

        /*!
         \short Gets information about an inverse link
         @param cl The classtype of the entity containing the inverse link
         @param i The identification of the inverse link within the entity
         @return An aggregation of associated inverse links
         */
        virtual std::vector<Id>* getInverses(ClassType cl, unsigned i);

        /*!
         \short Adds an inverse link to the SPF data
         @param cl The classtype of the entity containing the inverse link
         @param i The identification of the inverse link within the entity
         @param id An id of an entity to be added as an inverse link
         */
        virtual void addInverse(ClassType cl, unsigned i, Id id);

        /*!
         \short Gets the number of parameters
         @return the number of parameters
         */
        inline unsigned argc() const
        {
            return m_argc;
        }

        /*!
         \short Gets the current index among parameters
         @return the current index among parameters
         */
        inline unsigned index() const
        {
            return m_index;
        }

        /*!
         \short Gets the parameter at a specified index
         @param i the index of the parameter
         @return the string of the parameter
         */
        inline const std::string& operator[](unsigned i) const
        {
            return m_argv[i];
        }

        /*!
         \short Gets the parameter at a specified index
         @param i the index of the parameter
         @return the string of the parameter
         */
        inline const std::string& at(unsigned i) const
        {
            return m_argv[i];
        }

        /*!
         \short Sets the current index of the parameters
         @param i the current index of the parameters
         */
        inline void setIndex(unsigned i)
        {
            m_index = i;
        }

        /*!
         \short Import a string and convert it into a set of parameters
         @param s the input string
         */
        bool setParams(const char* s);

    private:
        unsigned m_argc;
        unsigned m_index;
        std::vector<std::string> m_argv;
        std::map<std::pair<ClassType, unsigned>, std::vector<Step::Id> > m_inverses;
    };
}
#endif
