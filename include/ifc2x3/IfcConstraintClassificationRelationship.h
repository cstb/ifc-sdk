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
     * Generated class for the IfcConstraintClassificationRelationship Entity.
     *
     */
    class IFC2X3_EXPORT IfcConstraintClassificationRelationship : public Step::BaseEntity
    {

        // Attributes
        Set_IfcClassificationNotationSelect_1_n m_RelatedClassifications;
        // InvertedAttributes
        Step::RefPtr< IfcConstraint > m_ClassifiedConstraint;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RelatedClassifications
        /// @{
        virtual Set_IfcClassificationNotationSelect_1_n &getRelatedClassifications();
        virtual const Set_IfcClassificationNotationSelect_1_n &getRelatedClassifications() const;
        virtual void setRelatedClassifications(const Set_IfcClassificationNotationSelect_1_n &value);
        virtual void unsetRelatedClassifications();
        virtual bool testRelatedClassifications() const;
        /// @}

        /// Attribute ClassifiedConstraint
        /// @{
        virtual IfcConstraint *getClassifiedConstraint();
        virtual const IfcConstraint *getClassifiedConstraint() const;
        virtual void setClassifiedConstraint(const Step::RefPtr< IfcConstraint > &value);
        virtual void unsetClassifiedConstraint();
        virtual bool testClassifiedConstraint() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcConstraintClassificationRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstraintClassificationRelationship();

        virtual bool init();

        virtual void copy(const IfcConstraintClassificationRelationship &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3