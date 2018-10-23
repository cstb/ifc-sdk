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
    class Inverted_IfcVirtualGridIntersection_IntersectingAxes_type : public List_IfcGridAxis_2_2
    {

    public:
        /**
         */
        typedef List_IfcGridAxis_2_2::iterator iterator;

        /**
         */
        Inverted_IfcVirtualGridIntersection_IntersectingAxes_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range);
    #else
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual iterator erase(const Step::RefPtr< IfcGridAxis > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcVirtualGridIntersection;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcVirtualGridIntersection *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcVirtualGridIntersection *owner);
    };


    /**
     * Generated class for the IfcVirtualGridIntersection Entity.
     *
     */
    class IFC2X3_EXPORT IfcVirtualGridIntersection : public Step::BaseEntity
    {

        // Attributes
        List_IfcLengthMeasure_2_3 m_OffsetDistances;
        // InvertedAttributes
        Inverted_IfcVirtualGridIntersection_IntersectingAxes_type m_IntersectingAxes;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute OffsetDistances
        /// @{
        virtual List_IfcLengthMeasure_2_3 &getOffsetDistances();
        virtual const List_IfcLengthMeasure_2_3 &getOffsetDistances() const;
        virtual void setOffsetDistances(const List_IfcLengthMeasure_2_3 &value);
        virtual void unsetOffsetDistances();
        virtual bool testOffsetDistances() const;
        /// @}

        /// Attribute IntersectingAxes
        /// @{
        virtual List_IfcGridAxis_2_2 &getIntersectingAxes();
        virtual const List_IfcGridAxis_2_2 &getIntersectingAxes() const;
        virtual void unsetIntersectingAxes();
        virtual bool testIntersectingAxes() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcVirtualGridIntersection(Step::Id id, Step::SPFData *args);
        virtual ~IfcVirtualGridIntersection();

        virtual bool init();

        virtual void copy(const IfcVirtualGridIntersection &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3