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
     * Generated class for the IfcCraneRailFShapeProfileDef Entity.
     *
     */
    class IFC2X3_EXPORT IfcCraneRailFShapeProfileDef : public IfcParameterizedProfileDef
    {

        // Attributes
        IfcPositiveLengthMeasure m_OverallHeight;
        IfcPositiveLengthMeasure m_HeadWidth;
        IfcPositiveLengthMeasure m_Radius;
        IfcPositiveLengthMeasure m_HeadDepth2;
        IfcPositiveLengthMeasure m_HeadDepth3;
        IfcPositiveLengthMeasure m_WebThickness;
        IfcPositiveLengthMeasure m_BaseDepth1;
        IfcPositiveLengthMeasure m_BaseDepth2;
        IfcPositiveLengthMeasure m_CentreOfGravityInY;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute OverallHeight
        /// @{
        virtual IfcPositiveLengthMeasure getOverallHeight();
        virtual IfcPositiveLengthMeasure getOverallHeight() const;
        virtual void setOverallHeight(IfcPositiveLengthMeasure value);
        virtual void unsetOverallHeight();
        virtual bool testOverallHeight() const;
        /// @}

        /// Attribute HeadWidth
        /// @{
        virtual IfcPositiveLengthMeasure getHeadWidth();
        virtual IfcPositiveLengthMeasure getHeadWidth() const;
        virtual void setHeadWidth(IfcPositiveLengthMeasure value);
        virtual void unsetHeadWidth();
        virtual bool testHeadWidth() const;
        /// @}

        /// Attribute Radius
        /// @{
        virtual IfcPositiveLengthMeasure getRadius();
        virtual IfcPositiveLengthMeasure getRadius() const;
        virtual void setRadius(IfcPositiveLengthMeasure value);
        virtual void unsetRadius();
        virtual bool testRadius() const;
        /// @}

        /// Attribute HeadDepth2
        /// @{
        virtual IfcPositiveLengthMeasure getHeadDepth2();
        virtual IfcPositiveLengthMeasure getHeadDepth2() const;
        virtual void setHeadDepth2(IfcPositiveLengthMeasure value);
        virtual void unsetHeadDepth2();
        virtual bool testHeadDepth2() const;
        /// @}

        /// Attribute HeadDepth3
        /// @{
        virtual IfcPositiveLengthMeasure getHeadDepth3();
        virtual IfcPositiveLengthMeasure getHeadDepth3() const;
        virtual void setHeadDepth3(IfcPositiveLengthMeasure value);
        virtual void unsetHeadDepth3();
        virtual bool testHeadDepth3() const;
        /// @}

        /// Attribute WebThickness
        /// @{
        virtual IfcPositiveLengthMeasure getWebThickness();
        virtual IfcPositiveLengthMeasure getWebThickness() const;
        virtual void setWebThickness(IfcPositiveLengthMeasure value);
        virtual void unsetWebThickness();
        virtual bool testWebThickness() const;
        /// @}

        /// Attribute BaseDepth1
        /// @{
        virtual IfcPositiveLengthMeasure getBaseDepth1();
        virtual IfcPositiveLengthMeasure getBaseDepth1() const;
        virtual void setBaseDepth1(IfcPositiveLengthMeasure value);
        virtual void unsetBaseDepth1();
        virtual bool testBaseDepth1() const;
        /// @}

        /// Attribute BaseDepth2
        /// @{
        virtual IfcPositiveLengthMeasure getBaseDepth2();
        virtual IfcPositiveLengthMeasure getBaseDepth2() const;
        virtual void setBaseDepth2(IfcPositiveLengthMeasure value);
        virtual void unsetBaseDepth2();
        virtual bool testBaseDepth2() const;
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

        IfcCraneRailFShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcCraneRailFShapeProfileDef();

        virtual bool init();

        virtual void copy(const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3