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
     * Generated class for the IfcCurveStyleFontPattern Entity.
     *
     */
    class IFC2X3_EXPORT IfcCurveStyleFontPattern : public Step::BaseEntity
    {

        // Attributes
        IfcLengthMeasure m_VisibleSegmentLength;
        IfcPositiveLengthMeasure m_InvisibleSegmentLength;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute VisibleSegmentLength
        /// @{
        virtual IfcLengthMeasure getVisibleSegmentLength();
        virtual IfcLengthMeasure getVisibleSegmentLength() const;
        virtual void setVisibleSegmentLength(IfcLengthMeasure value);
        virtual void unsetVisibleSegmentLength();
        virtual bool testVisibleSegmentLength() const;
        /// @}

        /// Attribute InvisibleSegmentLength
        /// @{
        virtual IfcPositiveLengthMeasure getInvisibleSegmentLength();
        virtual IfcPositiveLengthMeasure getInvisibleSegmentLength() const;
        virtual void setInvisibleSegmentLength(IfcPositiveLengthMeasure value);
        virtual void unsetInvisibleSegmentLength();
        virtual bool testInvisibleSegmentLength() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcCurveStyleFontPattern(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurveStyleFontPattern();

        virtual bool init();

        virtual void copy(const IfcCurveStyleFontPattern &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3