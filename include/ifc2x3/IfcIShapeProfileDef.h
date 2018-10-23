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
     * Generated class for the IfcIShapeProfileDef Entity.
     *
     */
    class IFC2X3_EXPORT IfcIShapeProfileDef : public IfcParameterizedProfileDef
    {

        // Attributes
        IfcPositiveLengthMeasure m_OverallWidth;
        IfcPositiveLengthMeasure m_OverallDepth;
        IfcPositiveLengthMeasure m_WebThickness;
        IfcPositiveLengthMeasure m_FlangeThickness;
        IfcPositiveLengthMeasure m_FilletRadius;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute OverallWidth
        /// @{
        virtual IfcPositiveLengthMeasure getOverallWidth();
        virtual IfcPositiveLengthMeasure getOverallWidth() const;
        virtual void setOverallWidth(IfcPositiveLengthMeasure value);
        virtual void unsetOverallWidth();
        virtual bool testOverallWidth() const;
        /// @}

        /// Attribute OverallDepth
        /// @{
        virtual IfcPositiveLengthMeasure getOverallDepth();
        virtual IfcPositiveLengthMeasure getOverallDepth() const;
        virtual void setOverallDepth(IfcPositiveLengthMeasure value);
        virtual void unsetOverallDepth();
        virtual bool testOverallDepth() const;
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





        friend class ExpressDataSet;

    protected:

        IfcIShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcIShapeProfileDef();

        virtual bool init();

        virtual void copy(const IfcIShapeProfileDef &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3