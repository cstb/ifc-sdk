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
#ifndef Step_SPFData_h
#define Step_SPFData_h

#include "StepDLL.h"

#include "Types.h"
#include "ClassType.h"

#include <map>
#include <string>

namespace Step {
    /*!
     * \short Base Class to encapsulate data from a line of a STEP-21 file
     */
    class STEP_DLL_DEF SPFData
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
        virtual std::string getNext();

        /*!
         \short Gets information about an inverse link
         @param cl The classtype of the entity containing the inverse link
         @param i The identification of the inverse link within the entity
         @return An aggregation of associated inverse links
         */
        virtual std::vector<Id>* getInverses(ClassType cl, int i);

        /*!
         \short Adds an inverse link to the SPF data
         @param cl The classtype of the entity containing the inverse link
         @param i The identification of the inverse link within the entity
         @param id An id of an entity to be added as an inverse link
         */
        virtual void addInverse(ClassType cl, int i, Id id);

        /*!
         \short Gets the number of parameters
         @return the number of parameters
         */
        inline int argc() const
        {
            return m_argc;
        }

        /*!
         \short Gets the current index among parameters
         @return the current index among parameters
         */
        inline int index() const
        {
            return m_index;
        }

        /*!
         \short Gets the parameter at a specified index
         @param i the index of the parameter
         @return the string of the parameter
         */
        inline const std::string& operator[](int i) const
        {
            return m_argv[i];
        }

        /*!
         \short Gets the parameter at a specified index
         @param i the index of the parameter
         @return the string of the parameter
         */
        inline const std::string& at(int i) const
        {
            return m_argv[i];
        }

        /*!
         \short Sets the current index of the parameters
         @param i the current index of the parameters
         */
        inline void setIndex(int i)
        {
            m_index = i;
        }

        /*!
         \short Import a string and convert it into a set of parameters
         @param s the input string
         */
        bool setParams(const char* s);

    private:
        int m_argc;
        int m_index;
        std::string* m_argv;
        std::map<std::pair<ClassType, int>, std::vector<Step::Id> > m_inverses;
    };
}
#endif
