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
     * Generated class for the IfcSectionProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcSectionProperties : public Step::BaseEntity
    {

        // Attributes
        IfcSectionTypeEnum m_SectionType;
        Step::RefPtr< IfcProfileDef > m_StartProfile;
        Step::RefPtr< IfcProfileDef > m_EndProfile;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute SectionType
        /// @{
        virtual IfcSectionTypeEnum getSectionType();
        virtual IfcSectionTypeEnum getSectionType() const;
        virtual void setSectionType(IfcSectionTypeEnum value);
        virtual void unsetSectionType();
        virtual bool testSectionType() const;
        /// @}

        /// Attribute StartProfile
        /// @{
        virtual IfcProfileDef *getStartProfile();
        virtual const IfcProfileDef *getStartProfile() const;
        virtual void setStartProfile(const Step::RefPtr< IfcProfileDef > &value);
        virtual void unsetStartProfile();
        virtual bool testStartProfile() const;
        /// @}

        /// Attribute EndProfile
        /// @{
        virtual IfcProfileDef *getEndProfile();
        virtual const IfcProfileDef *getEndProfile() const;
        virtual void setEndProfile(const Step::RefPtr< IfcProfileDef > &value);
        virtual void unsetEndProfile();
        virtual bool testEndProfile() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcSectionProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcSectionProperties();

        virtual bool init();

        virtual void copy(const IfcSectionProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3