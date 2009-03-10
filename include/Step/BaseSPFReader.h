/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
#ifndef STEP_BASE_SPF_READER
#define STEP_BASE_SPF_READER

#include "StepDLL.h"
#include "ClassType.h"
#include "Types.h"
#include "SPFHeader.h"

#include <fstream>
#include <string>
#include <map>

namespace Step {
    class SPFData;
    class BaseExpressDataSet;
    class BaseSPFObject;
    /*!
    * \short Base class for loading a STEP-21 file. It reads header and entities.
    */
    class STEP_DLL_DEF BaseSPFReader {

    public:

        /*!
        \short Constructor. It does nothing.
        */
        BaseSPFReader();

        /*!
        \short Virtual Destructor
        */
        virtual ~BaseSPFReader();

        /*!
        \short Load a file from a path
        @param file an input stream from the input file
        @return true if the file was correctly read
        */
        virtual bool read(std::ifstream& file);

        /*!
        \short Get the ExpressDataSet after the loading of the file
        @return the BaseExpressDataSet created from the input file
        */
        virtual BaseExpressDataSet* getExpressDataSet() {
            return m_expressDataSet;
        }

        /*!
        \short Get the SPF Header
        @return the header from the input file
        */
        SPFHeader& getHeader() {
            return m_header;
        }

    protected:

        /*!
        \short Call the adapted load function from the name of the entity (pure virtual)
        @param s the name of the entity
        @return true if the function was correctly called
        */
        virtual bool callLoadFunction(const std::string& s) = 0;

        BaseExpressDataSet* m_expressDataSet;
        std::ifstream * m_file;
        std::string m_currentLine;
        Id m_currentId;
        AllocateFuncType m_currentType;
        unsigned int m_currentLineNb;
        BaseSPFObject*  m_currentObj;
        SPFHeader m_header;

    };
}
#endif
