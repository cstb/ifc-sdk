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
     * Generated class for the IfcPersonAndOrganization Entity.
     *
     */
    class IFC2X3_EXPORT IfcPersonAndOrganization : public Step::BaseEntity
    {

        // Attributes
        List_IfcActorRole_1_n m_Roles;
        // InvertedAttributes
        Step::RefPtr< IfcPerson > m_ThePerson;
        Step::RefPtr< IfcOrganization > m_TheOrganization;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Roles
        /// @{
        virtual List_IfcActorRole_1_n &getRoles();
        virtual const List_IfcActorRole_1_n &getRoles() const;
        virtual void setRoles(const List_IfcActorRole_1_n &value);
        virtual void unsetRoles();
        virtual bool testRoles() const;
        /// @}

        /// Attribute ThePerson
        /// @{
        virtual IfcPerson *getThePerson();
        virtual const IfcPerson *getThePerson() const;
        virtual void setThePerson(const Step::RefPtr< IfcPerson > &value);
        virtual void unsetThePerson();
        virtual bool testThePerson() const;
        /// @}

        /// Attribute TheOrganization
        /// @{
        virtual IfcOrganization *getTheOrganization();
        virtual const IfcOrganization *getTheOrganization() const;
        virtual void setTheOrganization(const Step::RefPtr< IfcOrganization > &value);
        virtual void unsetTheOrganization();
        virtual bool testTheOrganization() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPersonAndOrganization(Step::Id id, Step::SPFData *args);
        virtual ~IfcPersonAndOrganization();

        virtual bool init();

        virtual void copy(const IfcPersonAndOrganization &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3