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

#include <ifc2x3/IfcObjectDefinition.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcObject Entity.
     *
     */
    class IFC2X3_EXPORT IfcObject : public IfcObjectDefinition
    {

        // Attributes
        IfcLabel m_ObjectType;
        // InverseAttributes
        Inverse_Set_IfcRelDefines_0_n m_IsDefinedBy;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ObjectType
        /// @{
        virtual IfcLabel getObjectType();
        virtual const IfcLabel getObjectType() const;
        virtual void setObjectType(const IfcLabel &value);
        virtual void unsetObjectType();
        virtual bool testObjectType() const;
        /// @}

        /// Inverse attribute IsDefinedBy
        /// @{
        virtual Inverse_Set_IfcRelDefines_0_n &getIsDefinedBy();
        virtual const Inverse_Set_IfcRelDefines_0_n &getIsDefinedBy() const;
        virtual bool testIsDefinedBy() const;

        friend class IfcRelDefines;
        /// @}



        friend class Inverted_IfcRelDefines_RelatedObjects_type;


        friend class ExpressDataSet;

    protected:

        IfcObject(Step::Id id, Step::SPFData *args);
        virtual ~IfcObject();

        virtual bool init();

        virtual void copy(const IfcObject &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3