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

#include <ifc2x3/IfcBoundedCurve.h>

namespace ifc2x3
{
    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcCompositeCurve_Segments_type : public List_IfcCompositeCurveSegment_1_n
    {

    public:
        /**
         */
        typedef List_IfcCompositeCurveSegment_1_n::iterator iterator;

        /**
         */
        Inverted_IfcCompositeCurve_Segments_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void push_back(const Step::RefPtr< IfcCompositeCurveSegment > &value) throw(std::out_of_range);
    #else
        virtual void push_back(const Step::RefPtr< IfcCompositeCurveSegment > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual iterator erase(const Step::RefPtr< IfcCompositeCurveSegment > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcCompositeCurve;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcCompositeCurve *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcCompositeCurve *owner);
    };


    /**
     * Generated class for the IfcCompositeCurve Entity.
     *
     */
    class IFC2X3_EXPORT IfcCompositeCurve : public IfcBoundedCurve
    {

        // Attributes
        Step::Logical m_SelfIntersect;
        // InvertedAttributes
        Inverted_IfcCompositeCurve_Segments_type m_Segments;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute SelfIntersect
        /// @{
        virtual Step::Logical getSelfIntersect();
        virtual Step::Logical getSelfIntersect() const;
        virtual void setSelfIntersect(Step::Logical value);
        virtual void unsetSelfIntersect();
        virtual bool testSelfIntersect() const;
        /// @}

        /// Attribute Segments
        /// @{
        virtual List_IfcCompositeCurveSegment_1_n &getSegments();
        virtual const List_IfcCompositeCurveSegment_1_n &getSegments() const;
        virtual void unsetSegments();
        virtual bool testSegments() const;
        /// @}

        /// Derived attributes
        /// @{
        virtual Step::Integer getNSegments() const;
        virtual Step::Logical getClosedCurve() const;
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcCompositeCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcCompositeCurve();

        virtual bool init();

        virtual void copy(const IfcCompositeCurve &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3