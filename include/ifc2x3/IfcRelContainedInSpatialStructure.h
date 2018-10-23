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

#include <ifc2x3/IfcRelConnects.h>

namespace ifc2x3
{
    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type : public Set_IfcProduct_1_n
    {

    public:
        /**
         */
        typedef Set_IfcProduct_1_n::size_type size_type;

        /**
         */
        Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcProduct > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcProduct > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcProduct > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcRelContainedInSpatialStructure;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcRelContainedInSpatialStructure *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcRelContainedInSpatialStructure *owner);
    };


    /**
     * Generated class for the IfcRelContainedInSpatialStructure Entity.
     *
     */
    class IFC2X3_EXPORT IfcRelContainedInSpatialStructure : public IfcRelConnects
    {

        // InvertedAttributes
        Step::RefPtr< IfcSpatialStructureElement > m_RelatingStructure;
        Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type m_RelatedElements;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RelatingStructure
        /// @{
        virtual IfcSpatialStructureElement *getRelatingStructure();
        virtual const IfcSpatialStructureElement *getRelatingStructure() const;
        virtual void setRelatingStructure(const Step::RefPtr< IfcSpatialStructureElement > &value);
        virtual void unsetRelatingStructure();
        virtual bool testRelatingStructure() const;
        /// @}

        /// Attribute RelatedElements
        /// @{
        virtual Set_IfcProduct_1_n &getRelatedElements();
        virtual const Set_IfcProduct_1_n &getRelatedElements() const;
        virtual void unsetRelatedElements();
        virtual bool testRelatedElements() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRelContainedInSpatialStructure(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelContainedInSpatialStructure();

        virtual bool init();

        virtual void copy(const IfcRelContainedInSpatialStructure &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3