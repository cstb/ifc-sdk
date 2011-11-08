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

#ifndef Step_BaseSPFWriter_h
#define Step_BaseSPFWriter_h

#include "StepDLL.h"

#include "ClassType.h"
#include "Types.h"
#include "BaseExpressDataSet.h"
#include "BaseEntity.h"
#include "SimpleTypes.h"
#include "CallBack.h"

#include <ostream>
#include <string>
#include <sstream>
#include <map>
#include <iomanip>

namespace Step {
    class SPFData;
    class BaseSPFObject;
    class SPFHeader;

    /*!
    ** \short Base class to write a STEP-21 file from a Model
    */
    class STEP_DLL_DEF BaseSPFWriter
    {

    public:

        /*!
        ** \short Constructor from a BaseExpressDataSet
        ** @param e The Express data set
        */
        BaseSPFWriter(BaseExpressDataSet * e);

        /*!
        ** \short Virtual Destructor. It does nothing
        */
        virtual ~BaseSPFWriter();

        /*!
        ** \short Write the STEP-21 file from a path
        ** @param filepath the output STEP-21 file path
        ** @return true if the model was correctly saved
        */
        virtual bool writeSPF(const std::string& filepath) = 0;

        /*!
        ** \short Write the STEP-21 file to an ostream
        ** @param filestream the output STEP-21 stream
        ** @return true if the model was correctly saved
        */
        virtual bool writeSPF(std::ostream& filestream) = 0;

        /*!
        ** \short Set the decimal precision for writing Real values
        ** The decimal precision determines the maximum number of digits
        ** to be written on insertion operations to express floating-point values.
        ** @param precision the new decimal precision to use
        */
        virtual void setDecimalPrecision(const int precision);
                         
        void setCallBack(CallBack *callback) { _callback = callback; }

    protected:

        std::ostream &outputStream() {return *m_out;}

        /*!
        ** \short Init the output stream
        ** @param filestream the output STEP-21 stream
        ** @return true if the output stream was correctly inited
        */
        bool init(std::ostream& filestream);

        /*!
        ** \short Write SPF header
        */
        void writeHeader();

        /*!
        ** \short Write the end of a STEP-21 file
        */
        void writeEnder();

        /*!
        ** \short Write method a non-inited entity (lazy loading concept)
        ** @param id the id of the entity
        ** @return true if the entity has been saved. It returns false if the entity was not \
        ** written because it was inited.
        */
        bool writeIfNotInited(Id id);

        /*!
        ** \short Write an Attribute (entity ref)
        ** @param entity A pointer to an entity
        */
        void writeAttribute(BaseEntity* entity);

        /*!
        ** \short Write an Attribute (Real number)
        ** @param value a Real value
        */
        void writeAttribute(Real value);

        /*!
        ** \short Write an Attribute (Integer number)
        ** @param value an Integer value
        */
        void writeAttribute(Integer value);

        /*!
        ** \short Write an Attribute (Boolean value)
        ** @param value an EXPRESS boolean value
        */
        void writeAttribute(Boolean value);

        /*!
        ** \short Write an Attribute (Logical value)
        ** @param value an EXPRESS Logical value
        */
        void writeAttribute(Logical value);

        /*!
        ** \short Write an Attribute (string value)
        ** @param value a String value
        */
        void writeAttribute(const String& value);

        /*!
        ** \short Write an Attribute (Binary value)
        ** @param value an EXPRESS binary value
        */
        template<int N>
        inline void writeAttribute(Binary<N>& value)
        {
            if (isUnset(value))
                *m_out << "$";
            else
                *m_out << "\"" << value.to_spfstring() << "\"";
        }

        //! output stream
        std::ostream *m_out;

        //! a pointer to the data set to write
        BaseExpressDataSet *m_expressDataSet;

        //! the precision with which to write floating point value
        int m_precision;     
        
        //! our callback
        CallBack *_callback;
    };
}

#endif

