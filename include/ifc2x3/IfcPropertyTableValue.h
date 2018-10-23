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
     * Generated class for the IfcPropertyTableValue Entity.
     *
     */
    class IFC2X3_EXPORT IfcPropertyTableValue : public IfcSimpleProperty
    {

        // Attributes
        List_IfcValue_1_n m_DefiningValues;
        List_IfcValue_1_n m_DefinedValues;
        IfcText m_Expression;
        Step::RefPtr< IfcUnit > m_DefiningUnit;
        Step::RefPtr< IfcUnit > m_DefinedUnit;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute DefiningValues
        /// @{
        virtual List_IfcValue_1_n &getDefiningValues();
        virtual const List_IfcValue_1_n &getDefiningValues() const;
        virtual void setDefiningValues(const List_IfcValue_1_n &value);
        virtual void unsetDefiningValues();
        virtual bool testDefiningValues() const;
        /// @}

        /// Attribute DefinedValues
        /// @{
        virtual List_IfcValue_1_n &getDefinedValues();
        virtual const List_IfcValue_1_n &getDefinedValues() const;
        virtual void setDefinedValues(const List_IfcValue_1_n &value);
        virtual void unsetDefinedValues();
        virtual bool testDefinedValues() const;
        /// @}

        /// Attribute Expression
        /// @{
        virtual IfcText getExpression();
        virtual const IfcText getExpression() const;
        virtual void setExpression(const IfcText &value);
        virtual void unsetExpression();
        virtual bool testExpression() const;
        /// @}

        /// Attribute DefiningUnit
        /// @{
        virtual IfcUnit *getDefiningUnit();
        virtual const IfcUnit *getDefiningUnit() const;
        virtual void setDefiningUnit(const Step::RefPtr< IfcUnit > &value);
        virtual void unsetDefiningUnit();
        virtual bool testDefiningUnit() const;
        /// @}

        /// Attribute DefinedUnit
        /// @{
        virtual IfcUnit *getDefinedUnit();
        virtual const IfcUnit *getDefinedUnit() const;
        virtual void setDefinedUnit(const Step::RefPtr< IfcUnit > &value);
        virtual void unsetDefinedUnit();
        virtual bool testDefinedUnit() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPropertyTableValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyTableValue();

        virtual bool init();

        virtual void copy(const IfcPropertyTableValue &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3