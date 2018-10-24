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
     * Generated class for the IfcClassificationItem Entity.
     *
     */
    class IFC2X3_EXPORT IfcClassificationItem : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcClassificationNotationFacet > m_Notation;
        IfcLabel m_Title;
        // InvertedAttributes
        Step::RefPtr< IfcClassification > m_ItemOf;
        // InverseAttributes
        Inverse_Set_IfcClassificationItemRelationship_0_1 m_IsClassifiedItemIn;
        Inverse_Set_IfcClassificationItemRelationship_0_1 m_IsClassifyingItemIn;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Notation
        /// @{
        virtual IfcClassificationNotationFacet *getNotation();
        virtual const IfcClassificationNotationFacet *getNotation() const;
        virtual void setNotation(const Step::RefPtr< IfcClassificationNotationFacet > &value);
        virtual void unsetNotation();
        virtual bool testNotation() const;
        /// @}

        /// Attribute Title
        /// @{
        virtual IfcLabel getTitle();
        virtual const IfcLabel getTitle() const;
        virtual void setTitle(const IfcLabel &value);
        virtual void unsetTitle();
        virtual bool testTitle() const;
        /// @}

        /// Attribute ItemOf
        /// @{
        virtual IfcClassification *getItemOf();
        virtual const IfcClassification *getItemOf() const;
        virtual void setItemOf(const Step::RefPtr< IfcClassification > &value);
        virtual void unsetItemOf();
        virtual bool testItemOf() const;
        /// @}

        /// Inverse attribute IsClassifiedItemIn
        /// @{
        virtual Inverse_Set_IfcClassificationItemRelationship_0_1 &getIsClassifiedItemIn();
        virtual const Inverse_Set_IfcClassificationItemRelationship_0_1 &getIsClassifiedItemIn() const;
        virtual bool testIsClassifiedItemIn() const;

        friend class IfcClassificationItemRelationship;
        /// @}

        /// Inverse attribute IsClassifyingItemIn
        /// @{
        virtual Inverse_Set_IfcClassificationItemRelationship_0_1 &getIsClassifyingItemIn();
        virtual const Inverse_Set_IfcClassificationItemRelationship_0_1 &getIsClassifyingItemIn() const;
        virtual bool testIsClassifyingItemIn() const;

        friend class IfcClassificationItemRelationship;
        /// @}



        friend class Inverted_IfcClassificationItemRelationship_RelatedItems_type;


        friend class ExpressDataSet;

    protected:

        IfcClassificationItem(Step::Id id, Step::SPFData *args);
        virtual ~IfcClassificationItem();

        virtual bool init();

        virtual void copy(const IfcClassificationItem &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3