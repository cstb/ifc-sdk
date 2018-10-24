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

#include <ifc2x3/IfcPropertyDefinition.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcPropertySetDefinition Entity.
     *
     */
    class IFC2X3_EXPORT IfcPropertySetDefinition : public IfcPropertyDefinition
    {

        // InverseAttributes
        Inverse_Set_IfcRelDefinesByProperties_0_1 m_PropertyDefinitionOf;
        Inverse_Set_IfcTypeObject_0_1 m_DefinesType;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Inverse attribute PropertyDefinitionOf
        /// @{
        virtual Inverse_Set_IfcRelDefinesByProperties_0_1 &getPropertyDefinitionOf();
        virtual const Inverse_Set_IfcRelDefinesByProperties_0_1 &getPropertyDefinitionOf() const;
        virtual bool testPropertyDefinitionOf() const;

        friend class IfcRelDefinesByProperties;
        /// @}

        /// Inverse attribute DefinesType
        /// @{
        virtual Inverse_Set_IfcTypeObject_0_1 &getDefinesType();
        virtual const Inverse_Set_IfcTypeObject_0_1 &getDefinesType() const;
        virtual bool testDefinesType() const;

        friend class IfcTypeObject;
        /// @}



        friend class Inverted_IfcTypeObject_HasPropertySets_type;


        friend class ExpressDataSet;

    protected:

        IfcPropertySetDefinition(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertySetDefinition();

        virtual bool init();

        virtual void copy(const IfcPropertySetDefinition &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3