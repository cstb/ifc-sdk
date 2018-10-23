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
     * Generated class for the IfcPropertyConstraintRelationship Entity.
     *
     */
    class IFC2X3_EXPORT IfcPropertyConstraintRelationship : public Step::BaseEntity
    {

        // Attributes
        Set_IfcProperty_1_n m_RelatedProperties;
        IfcLabel m_Name;
        IfcText m_Description;
        // InvertedAttributes
        Step::RefPtr< IfcConstraint > m_RelatingConstraint;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RelatedProperties
        /// @{
        virtual Set_IfcProperty_1_n &getRelatedProperties();
        virtual const Set_IfcProperty_1_n &getRelatedProperties() const;
        virtual void setRelatedProperties(const Set_IfcProperty_1_n &value);
        virtual void unsetRelatedProperties();
        virtual bool testRelatedProperties() const;
        /// @}

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute Description
        /// @{
        virtual IfcText getDescription();
        virtual const IfcText getDescription() const;
        virtual void setDescription(const IfcText &value);
        virtual void unsetDescription();
        virtual bool testDescription() const;
        /// @}

        /// Attribute RelatingConstraint
        /// @{
        virtual IfcConstraint *getRelatingConstraint();
        virtual const IfcConstraint *getRelatingConstraint() const;
        virtual void setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value);
        virtual void unsetRelatingConstraint();
        virtual bool testRelatingConstraint() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPropertyConstraintRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyConstraintRelationship();

        virtual bool init();

        virtual void copy(const IfcPropertyConstraintRelationship &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3