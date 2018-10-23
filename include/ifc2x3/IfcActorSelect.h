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

#include <Step/BaseObject.h>

namespace ifc2x3
{
    /**
     * Generated class for the IfcActorSelect Select type.
     *
     */
    class IFC2X3_EXPORT IfcActorSelect : public Step::BaseObject

    {
        ClassType_definitions()

    public:
        enum IfcActorSelect_select 
        {
            IFCORGANIZATION,
            IFCPERSON,
            IFCPERSONANDORGANIZATION,
            UNSET
        };

        union IfcActorSelect_union
        {
            IfcOrganization *m_IfcOrganization;
            IfcPerson *m_IfcPerson;
            IfcPersonAndOrganization *m_IfcPersonAndOrganization;
        };

        IfcActorSelect();
        virtual ~IfcActorSelect();

        virtual void copy(const IfcActorSelect &obj, const CopyOp &copyop);

        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        std::string currentTypeName() const;

        IfcActorSelect_select currentType() const;

        void deleteUnion();

        void set(Step::BaseObject *v);

        IfcOrganization *getIfcOrganization() const;
        void setIfcOrganization(IfcOrganization *value);

        IfcPerson *getIfcPerson() const;
        void setIfcPerson(IfcPerson *value);

        IfcPersonAndOrganization *getIfcPersonAndOrganization() const;
        void setIfcPersonAndOrganization(IfcPersonAndOrganization *value);


    protected:
        IfcActorSelect(Step::SPFData *args);

        virtual bool init();

    private:
        IfcActorSelect_select m_type;
  
        IfcActorSelect_union m_union;
    };
} // namespace ifc2x3