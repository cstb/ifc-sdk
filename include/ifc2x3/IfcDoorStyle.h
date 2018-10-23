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

#include <ifc2x3/IfcTypeProduct.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcDoorStyle Entity.
     *
     */
    class IFC2X3_EXPORT IfcDoorStyle : public IfcTypeProduct
    {

        // Attributes
        IfcDoorStyleOperationEnum m_OperationType;
        IfcDoorStyleConstructionEnum m_ConstructionType;
        Step::Boolean m_ParameterTakesPrecedence;
        Step::Boolean m_Sizeable;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute OperationType
        /// @{
        virtual IfcDoorStyleOperationEnum getOperationType();
        virtual IfcDoorStyleOperationEnum getOperationType() const;
        virtual void setOperationType(IfcDoorStyleOperationEnum value);
        virtual void unsetOperationType();
        virtual bool testOperationType() const;
        /// @}

        /// Attribute ConstructionType
        /// @{
        virtual IfcDoorStyleConstructionEnum getConstructionType();
        virtual IfcDoorStyleConstructionEnum getConstructionType() const;
        virtual void setConstructionType(IfcDoorStyleConstructionEnum value);
        virtual void unsetConstructionType();
        virtual bool testConstructionType() const;
        /// @}

        /// Attribute ParameterTakesPrecedence
        /// @{
        virtual Step::Boolean getParameterTakesPrecedence();
        virtual Step::Boolean getParameterTakesPrecedence() const;
        virtual void setParameterTakesPrecedence(Step::Boolean value);
        virtual void unsetParameterTakesPrecedence();
        virtual bool testParameterTakesPrecedence() const;
        /// @}

        /// Attribute Sizeable
        /// @{
        virtual Step::Boolean getSizeable();
        virtual Step::Boolean getSizeable() const;
        virtual void setSizeable(Step::Boolean value);
        virtual void unsetSizeable();
        virtual bool testSizeable() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcDoorStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcDoorStyle();

        virtual bool init();

        virtual void copy(const IfcDoorStyle &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3