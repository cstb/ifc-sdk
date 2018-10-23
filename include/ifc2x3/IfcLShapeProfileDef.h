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
     * Generated class for the IfcLShapeProfileDef Entity.
     *
     */
    class IFC2X3_EXPORT IfcLShapeProfileDef : public IfcParameterizedProfileDef
    {

        // Attributes
        IfcPositiveLengthMeasure m_Depth;
        IfcPositiveLengthMeasure m_Width;
        IfcPositiveLengthMeasure m_Thickness;
        IfcPositiveLengthMeasure m_FilletRadius;
        IfcPositiveLengthMeasure m_EdgeRadius;
        IfcPlaneAngleMeasure m_LegSlope;
        IfcPositiveLengthMeasure m_CentreOfGravityInX;
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

        /// Attribute Width
        /// @{
        virtual IfcPositiveLengthMeasure getWidth();
        virtual IfcPositiveLengthMeasure getWidth() const;
        virtual void setWidth(IfcPositiveLengthMeasure value);
        virtual void unsetWidth();
        virtual bool testWidth() const;
        /// @}

        /// Attribute Thickness
        /// @{
        virtual IfcPositiveLengthMeasure getThickness();
        virtual IfcPositiveLengthMeasure getThickness() const;
        virtual void setThickness(IfcPositiveLengthMeasure value);
        virtual void unsetThickness();
        virtual bool testThickness() const;
        /// @}

        /// Attribute FilletRadius
        /// @{
        virtual IfcPositiveLengthMeasure getFilletRadius();
        virtual IfcPositiveLengthMeasure getFilletRadius() const;
        virtual void setFilletRadius(IfcPositiveLengthMeasure value);
        virtual void unsetFilletRadius();
        virtual bool testFilletRadius() const;
        /// @}

        /// Attribute EdgeRadius
        /// @{
        virtual IfcPositiveLengthMeasure getEdgeRadius();
        virtual IfcPositiveLengthMeasure getEdgeRadius() const;
        virtual void setEdgeRadius(IfcPositiveLengthMeasure value);
        virtual void unsetEdgeRadius();
        virtual bool testEdgeRadius() const;
        /// @}

        /// Attribute LegSlope
        /// @{
        virtual IfcPlaneAngleMeasure getLegSlope();
        virtual IfcPlaneAngleMeasure getLegSlope() const;
        virtual void setLegSlope(IfcPlaneAngleMeasure value);
        virtual void unsetLegSlope();
        virtual bool testLegSlope() const;
        /// @}

        /// Attribute CentreOfGravityInX
        /// @{
        virtual IfcPositiveLengthMeasure getCentreOfGravityInX();
        virtual IfcPositiveLengthMeasure getCentreOfGravityInX() const;
        virtual void setCentreOfGravityInX(IfcPositiveLengthMeasure value);
        virtual void unsetCentreOfGravityInX();
        virtual bool testCentreOfGravityInX() const;
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

        IfcLShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcLShapeProfileDef();

        virtual bool init();

        virtual void copy(const IfcLShapeProfileDef &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3