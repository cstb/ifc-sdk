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

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseEntity.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcActorRole Entity.
     *
     */
    class IFC2X3_EXPORT IfcActorRole : public Step::BaseEntity
    {

        // Attributes
        IfcRoleEnum m_Role;
        IfcLabel m_UserDefinedRole;
        IfcText m_Description;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Role
        /// @{
        virtual IfcRoleEnum getRole();
        virtual IfcRoleEnum getRole() const;
        virtual void setRole(IfcRoleEnum value);
        virtual void unsetRole();
        virtual bool testRole() const;
        /// @}

        /// Attribute UserDefinedRole
        /// @{
        virtual IfcLabel getUserDefinedRole();
        virtual const IfcLabel getUserDefinedRole() const;
        virtual void setUserDefinedRole(const IfcLabel &value);
        virtual void unsetUserDefinedRole();
        virtual bool testUserDefinedRole() const;
        /// @}

        /// Attribute Description
        /// @{
        virtual IfcText getDescription();
        virtual const IfcText getDescription() const;
        virtual void setDescription(const IfcText &value);
        virtual void unsetDescription();
        virtual bool testDescription() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcActorRole(Step::Id id, Step::SPFData *args);
        virtual ~IfcActorRole();

        virtual bool init();

        virtual void copy(const IfcActorRole &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3