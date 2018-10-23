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
     * Generated class for the IfcCShapeProfileDef Entity.
     *
     */
    class IFC2X3_EXPORT IfcCShapeProfileDef : public IfcParameterizedProfileDef
    {

        // Attributes
        IfcPositiveLengthMeasure m_Depth;
        IfcPositiveLengthMeasure m_Width;
        IfcPositiveLengthMeasure m_WallThickness;
        IfcPositiveLengthMeasure m_Girth;
        IfcPositiveLengthMeasure m_InternalFilletRadius;
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

        /// Attribute Width
        /// @{
        virtual IfcPositiveLengthMeasure getWidth();
        virtual IfcPositiveLengthMeasure getWidth() const;
        virtual void setWidth(IfcPositiveLengthMeasure value);
        virtual void unsetWidth();
        virtual bool testWidth() const;
        /// @}

        /// Attribute WallThickness
        /// @{
        virtual IfcPositiveLengthMeasure getWallThickness();
        virtual IfcPositiveLengthMeasure getWallThickness() const;
        virtual void setWallThickness(IfcPositiveLengthMeasure value);
        virtual void unsetWallThickness();
        virtual bool testWallThickness() const;
        /// @}

        /// Attribute Girth
        /// @{
        virtual IfcPositiveLengthMeasure getGirth();
        virtual IfcPositiveLengthMeasure getGirth() const;
        virtual void setGirth(IfcPositiveLengthMeasure value);
        virtual void unsetGirth();
        virtual bool testGirth() const;
        /// @}

        /// Attribute InternalFilletRadius
        /// @{
        virtual IfcPositiveLengthMeasure getInternalFilletRadius();
        virtual IfcPositiveLengthMeasure getInternalFilletRadius() const;
        virtual void setInternalFilletRadius(IfcPositiveLengthMeasure value);
        virtual void unsetInternalFilletRadius();
        virtual bool testInternalFilletRadius() const;
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

        IfcCShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcCShapeProfileDef();

        virtual bool init();

        virtual void copy(const IfcCShapeProfileDef &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3