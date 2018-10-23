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

#include <ifc2x3/IfcGeometricRepresentationItem.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcFillAreaStyleHatching Entity.
     *
     */
    class IFC2X3_EXPORT IfcFillAreaStyleHatching : public IfcGeometricRepresentationItem
    {

        // Attributes
        Step::RefPtr< IfcCurveStyle > m_HatchLineAppearance;
        Step::RefPtr< IfcHatchLineDistanceSelect > m_StartOfNextHatchLine;
        Step::RefPtr< IfcCartesianPoint > m_PointOfReferenceHatchLine;
        Step::RefPtr< IfcCartesianPoint > m_PatternStart;
        IfcPlaneAngleMeasure m_HatchLineAngle;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute HatchLineAppearance
        /// @{
        virtual IfcCurveStyle *getHatchLineAppearance();
        virtual const IfcCurveStyle *getHatchLineAppearance() const;
        virtual void setHatchLineAppearance(const Step::RefPtr< IfcCurveStyle > &value);
        virtual void unsetHatchLineAppearance();
        virtual bool testHatchLineAppearance() const;
        /// @}

        /// Attribute StartOfNextHatchLine
        /// @{
        virtual IfcHatchLineDistanceSelect *getStartOfNextHatchLine();
        virtual const IfcHatchLineDistanceSelect *getStartOfNextHatchLine() const;
        virtual void setStartOfNextHatchLine(const Step::RefPtr< IfcHatchLineDistanceSelect > &value);
        virtual void unsetStartOfNextHatchLine();
        virtual bool testStartOfNextHatchLine() const;
        /// @}

        /// Attribute PointOfReferenceHatchLine
        /// @{
        virtual IfcCartesianPoint *getPointOfReferenceHatchLine();
        virtual const IfcCartesianPoint *getPointOfReferenceHatchLine() const;
        virtual void setPointOfReferenceHatchLine(const Step::RefPtr< IfcCartesianPoint > &value);
        virtual void unsetPointOfReferenceHatchLine();
        virtual bool testPointOfReferenceHatchLine() const;
        /// @}

        /// Attribute PatternStart
        /// @{
        virtual IfcCartesianPoint *getPatternStart();
        virtual const IfcCartesianPoint *getPatternStart() const;
        virtual void setPatternStart(const Step::RefPtr< IfcCartesianPoint > &value);
        virtual void unsetPatternStart();
        virtual bool testPatternStart() const;
        /// @}

        /// Attribute HatchLineAngle
        /// @{
        virtual IfcPlaneAngleMeasure getHatchLineAngle();
        virtual IfcPlaneAngleMeasure getHatchLineAngle() const;
        virtual void setHatchLineAngle(IfcPlaneAngleMeasure value);
        virtual void unsetHatchLineAngle();
        virtual bool testHatchLineAngle() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcFillAreaStyleHatching(Step::Id id, Step::SPFData *args);
        virtual ~IfcFillAreaStyleHatching();

        virtual bool init();

        virtual void copy(const IfcFillAreaStyleHatching &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3