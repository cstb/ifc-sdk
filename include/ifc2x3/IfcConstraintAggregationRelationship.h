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
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type : public List_IfcConstraint_1_n
    {

    public:
        /**
         */
        typedef List_IfcConstraint_1_n::iterator iterator;

        /**
         */
        Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void push_back(const Step::RefPtr< IfcConstraint > &value) throw(std::out_of_range);
    #else
        virtual void push_back(const Step::RefPtr< IfcConstraint > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual iterator erase(const Step::RefPtr< IfcConstraint > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcConstraintAggregationRelationship;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcConstraintAggregationRelationship *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcConstraintAggregationRelationship *owner);
    };


    /**
     * Generated class for the IfcConstraintAggregationRelationship Entity.
     *
     */
    class IFC2X3_EXPORT IfcConstraintAggregationRelationship : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_Name;
        IfcText m_Description;
        IfcLogicalOperatorEnum m_LogicalAggregator;
        // InvertedAttributes
        Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type m_RelatedConstraints;
        Step::RefPtr< IfcConstraint > m_RelatingConstraint;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

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

        /// Attribute LogicalAggregator
        /// @{
        virtual IfcLogicalOperatorEnum getLogicalAggregator();
        virtual IfcLogicalOperatorEnum getLogicalAggregator() const;
        virtual void setLogicalAggregator(IfcLogicalOperatorEnum value);
        virtual void unsetLogicalAggregator();
        virtual bool testLogicalAggregator() const;
        /// @}

        /// Attribute RelatedConstraints
        /// @{
        virtual List_IfcConstraint_1_n &getRelatedConstraints();
        virtual const List_IfcConstraint_1_n &getRelatedConstraints() const;
        virtual void unsetRelatedConstraints();
        virtual bool testRelatedConstraints() const;
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

        IfcConstraintAggregationRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstraintAggregationRelationship();

        virtual bool init();

        virtual void copy(const IfcConstraintAggregationRelationship &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3