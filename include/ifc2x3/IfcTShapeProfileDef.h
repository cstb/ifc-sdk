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

#include <ifc2x3/IfcParameterizedProfileDef.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcTShapeProfileDef Entity.
     *
     */
    class IFC2X3_EXPORT IfcTShapeProfileDef : public IfcParameterizedProfileDef
    {

        // Attributes
        IfcPositiveLengthMeasure m_Depth;
        IfcPositiveLengthMeasure m_FlangeWidth;
        IfcPositiveLengthMeasure m_WebThickness;
        IfcPositiveLengthMeasure m_FlangeThickness;
        IfcPositiveLengthMeasure m_FilletRadius;
        IfcPositiveLengthMeasure m_FlangeEdgeRadius;
        IfcPositiveLengthMeasure m_WebEdgeRadius;
        IfcPlaneAngleMeasure m_WebSlope;
        IfcPlaneAngleMeasure m_FlangeSlope;
        IfcPositiveLengthMeasure m_CentreOfGravityInY;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Depth
        /// @{
        virtual IfcPositiveLengthMeasure getDepth();
        virtual IfcPositiveLengthMeasure getDepth() const;
        virtual void setDepth(IfcPositiveLengthMeasure value);
        virtual void unsetDepth();
        virtual bool testDepth() const;
        /// @}

        /// Attribute FlangeWidth
        /// @{
        virtual IfcPositiveLengthMeasure getFlangeWidth();
        virtual IfcPositiveLengthMeasure getFlangeWidth() const;
        virtual void setFlangeWidth(IfcPositiveLengthMeasure value);
        virtual void unsetFlangeWidth();
        virtual bool testFlangeWidth() const;
        /// @}

        /// Attribute WebThickness
        /// @{
        virtual IfcPositiveLengthMeasure getWebThickness();
        virtual IfcPositiveLengthMeasure getWebThickness() const;
        virtual void setWebThickness(IfcPositiveLengthMeasure value);
        virtual void unsetWebThickness();
        virtual bool testWebThickness() const;
        /// @}

        /// Attribute FlangeThickness
        /// @{
        virtual IfcPositiveLengthMeasure getFlangeThickness();
        virtual IfcPositiveLengthMeasure getFlangeThickness() const;
        virtual void setFlangeThickness(IfcPositiveLengthMeasure value);
        virtual void unsetFlangeThickness();
        virtual bool testFlangeThickness() const;
        /// @}

        /// Attribute FilletRadius
        /// @{
        virtual IfcPositiveLengthMeasure getFilletRadius();
        virtual IfcPositiveLengthMeasure getFilletRadius() const;
        virtual void setFilletRadius(IfcPositiveLengthMeasure value);
        virtual void unsetFilletRadius();
        virtual bool testFilletRadius() const;
        /// @}

        /// Attribute FlangeEdgeRadius
        /// @{
        virtual IfcPositiveLengthMeasure getFlangeEdgeRadius();
        virtual IfcPositiveLengthMeasure getFlangeEdgeRadius() const;
        virtual void setFlangeEdgeRadius(IfcPositiveLengthMeasure value);
        virtual void unsetFlangeEdgeRadius();
        virtual bool testFlangeEdgeRadius() const;
        /// @}

        /// Attribute WebEdgeRadius
        /// @{
        virtual IfcPositiveLengthMeasure getWebEdgeRadius();
        virtual IfcPositiveLengthMeasure getWebEdgeRadius() const;
        virtual void setWebEdgeRadius(IfcPositiveLengthMeasure value);
        virtual void unsetWebEdgeRadius();
        virtual bool testWebEdgeRadius() const;
        /// @}

        /// Attribute WebSlope
        /// @{
        virtual IfcPlaneAngleMeasure getWebSlope();
        virtual IfcPlaneAngleMeasure getWebSlope() const;
        virtual void setWebSlope(IfcPlaneAngleMeasure value);
        virtual void unsetWebSlope();
        virtual bool testWebSlope() const;
        /// @}

        /// Attribute FlangeSlope
        /// @{
        virtual IfcPlaneAngleMeasure getFlangeSlope();
        virtual IfcPlaneAngleMeasure getFlangeSlope() const;
        virtual void setFlangeSlope(IfcPlaneAngleMeasure value);
        virtual void unsetFlangeSlope();
        virtual bool testFlangeSlope() const;
        /// @}

        /// Attribute CentreOfGravityInY
        /// @{
        virtual IfcPositiveLengthMeasure getCentreOfGravityInY();
        virtual IfcPositiveLengthMeasure getCentreOfGravityInY() const;
        virtual void setCentreOfGravityInY(IfcPositiveLengthMeasure value);
        virtual void unsetCentreOfGravityInY();
        virtual bool testCentreOfGravityInY() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcTShapeProfileDef();

        virtual bool init();

        virtual void copy(const IfcTShapeProfileDef &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3