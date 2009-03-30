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
#ifndef Step_BaseSPFReader_h
#define Step_BaseSPFReader_h

#include "StepDLL.h"

#include "ClassType.h"
#include "Types.h"
#include "SPFHeader.h"

#include <istream>
#include <string>
#include <map>

namespace Step {
    class SPFData;
    class BaseExpressDataSet;
    class BaseSPFObject;
    /*!
    * \short Base class for loading a STEP-21 file. It reads header and entities.
    */
    class STEP_DLL_DEF BaseSPFReader
    {

    public:

        /*!
        ** \short Constructor. It does nothing.
        */
        BaseSPFReader();

        /*!
        ** \short Virtual Destructor
        */
        virtual ~BaseSPFReader();

        /*!
        ** \short Load a file from a path
        ** @param input input stream to read from
        ** @return true if the stream was correctly read
        */
        virtual bool read(std::istream& input);

        /*!
        ** \short Get the ExpressDataSet after the loading of the file
        ** @return the BaseExpressDataSet created from the input file
        */
        virtual BaseExpressDataSet* getExpressDataSet();

        /*!
        ** \short Get the SPF Header
        ** @return the header from the input file
        */
        virtual SPFHeader& getHeader();

    protected:

        /*!
        ** \short Call the adapted load function from the name of the entity (pure virtual)
        ** @param s the name of the entity
        ** @return true if the function was correctly called
        */
        virtual bool callLoadFunction(const std::string& s) = 0;

        //! pointer to the data set created while reading the stream
        BaseExpressDataSet* m_expressDataSet;

        //! current Entity Id being parsed
        Id m_currentId;

        //! stores a pointer to the current entity needing allocation
        AllocateFuncType m_currentType;

        //! stores the current line number, usefull when parsing errors occurs
        unsigned int m_currentLineNb;

        //! A pointer to the current Entity
        BaseSPFObject*  m_currentObj;

        //! the SPF header
        SPFHeader m_header;
    };
}
#endif
