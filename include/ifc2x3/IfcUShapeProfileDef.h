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
     * Generated class for the IfcUShapeProfileDef Entity.
     *
     */
    class IFC2X3_EXPORT IfcUShapeProfileDef : public IfcParameterizedProfileDef
    {

        // Attributes
        IfcPositiveLengthMeasure m_Depth;
        IfcPositiveLengthMeasure m_FlangeWidth;
        IfcPositiveLengthMeasure m_WebThickness;
        IfcPositiveLengthMeasure m_FlangeThickness;
        IfcPositiveLengthMeasure m_FilletRadius;
        IfcPositiveLengthMeasure m_EdgeRadius;
        IfcPlaneAngleMeasure m_FlangeSlope;
        IfcPositiveLengthMeasure m_CentreOfGravityInX;

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

        /// Attribute EdgeRadius
        /// @{
        virtual IfcPositiveLengthMeasure getEdgeRadius();
        virtual IfcPositiveLengthMeasure getEdgeRadius() const;
        virtual void setEdgeRadius(IfcPositiveLengthMeasure value);
        virtual void unsetEdgeRadius();
        virtual bool testEdgeRadius() const;
        /// @}

        /// Attribute FlangeSlope
        /// @{
        virtual IfcPlaneAngleMeasure getFlangeSlope();
        virtual IfcPlaneAngleMeasure getFlangeSlope() const;
        virtual void setFlangeSlope(IfcPlaneAngleMeasure value);
        virtual void unsetFlangeSlope();
        virtual bool testFlangeSlope() const;
        /// @}

        /// Attribute CentreOfGravityInX
        /// @{
        virtual IfcPositiveLengthMeasure getCentreOfGravityInX();
        virtual IfcPositiveLengthMeasure getCentreOfGravityInX() const;
        virtual void setCentreOfGravityInX(IfcPositiveLengthMeasure value);
        virtual void unsetCentreOfGravityInX();
        virtual bool testCentreOfGravityInX() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcUShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcUShapeProfileDef();

        virtual bool init();

        virtual void copy(const IfcUShapeProfileDef &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3