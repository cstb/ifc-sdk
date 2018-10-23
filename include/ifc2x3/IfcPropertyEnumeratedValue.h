#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSimpleProperty.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcPropertyEnumeratedValue Entity.
     *
     */
    class IFC2X3_EXPORT IfcPropertyEnumeratedValue : public IfcSimpleProperty
    {

        // Attributes
        List_IfcValue_1_n m_EnumerationValues;
        Step::RefPtr< IfcPropertyEnumeration > m_EnumerationReference;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute EnumerationValues
        /// @{
        virtual List_IfcValue_1_n &getEnumerationValues();
        virtual const List_IfcValue_1_n &getEnumerationValues() const;
        virtual void setEnumerationValues(const List_IfcValue_1_n &value);
        virtual void unsetEnumerationValues();
        virtual bool testEnumerationValues() const;
        /// @}

        /// Attribute EnumerationReference
        /// @{
        virtual IfcPropertyEnumeration *getEnumerationReference();
        virtual const IfcPropertyEnumeration *getEnumerationReference() const;
        virtual void setEnumerationReference(const Step::RefPtr< IfcPropertyEnumeration > &value);
        virtual void unsetEnumerationReference();
        virtual bool testEnumerationReference() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPropertyEnumeratedValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyEnumeratedValue();

        virtual bool init();

        virtual void copy(const IfcPropertyEnumeratedValue &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3