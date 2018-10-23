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

#include <ifc2x3/IfcPropertySetDefinition.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcWindowLiningProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcWindowLiningProperties : public IfcPropertySetDefinition
    {

        // Attributes
        IfcPositiveLengthMeasure m_LiningDepth;
        IfcPositiveLengthMeasure m_LiningThickness;
        IfcPositiveLengthMeasure m_TransomThickness;
        IfcPositiveLengthMeasure m_MullionThickness;
        IfcNormalisedRatioMeasure m_FirstTransomOffset;
        IfcNormalisedRatioMeasure m_SecondTransomOffset;
        IfcNormalisedRatioMeasure m_FirstMullionOffset;
        IfcNormalisedRatioMeasure m_SecondMullionOffset;
        Step::RefPtr< IfcShapeAspect > m_ShapeAspectStyle;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LiningDepth
        /// @{
        virtual IfcPositiveLengthMeasure getLiningDepth();
        virtual IfcPositiveLengthMeasure getLiningDepth() const;
        virtual void setLiningDepth(IfcPositiveLengthMeasure value);
        virtual void unsetLiningDepth();
        virtual bool testLiningDepth() const;
        /// @}

        /// Attribute LiningThickness
        /// @{
        virtual IfcPositiveLengthMeasure getLiningThickness();
        virtual IfcPositiveLengthMeasure getLiningThickness() const;
        virtual void setLiningThickness(IfcPositiveLengthMeasure value);
        virtual void unsetLiningThickness();
        virtual bool testLiningThickness() const;
        /// @}

        /// Attribute TransomThickness
        /// @{
        virtual IfcPositiveLengthMeasure getTransomThickness();
        virtual IfcPositiveLengthMeasure getTransomThickness() const;
        virtual void setTransomThickness(IfcPositiveLengthMeasure value);
        virtual void unsetTransomThickness();
        virtual bool testTransomThickness() const;
        /// @}

        /// Attribute MullionThickness
        /// @{
        virtual IfcPositiveLengthMeasure getMullionThickness();
        virtual IfcPositiveLengthMeasure getMullionThickness() const;
        virtual void setMullionThickness(IfcPositiveLengthMeasure value);
        virtual void unsetMullionThickness();
        virtual bool testMullionThickness() const;
        /// @}

        /// Attribute FirstTransomOffset
        /// @{
        virtual IfcNormalisedRatioMeasure getFirstTransomOffset();
        virtual IfcNormalisedRatioMeasure getFirstTransomOffset() const;
        virtual void setFirstTransomOffset(IfcNormalisedRatioMeasure value);
        virtual void unsetFirstTransomOffset();
        virtual bool testFirstTransomOffset() const;
        /// @}

        /// Attribute SecondTransomOffset
        /// @{
        virtual IfcNormalisedRatioMeasure getSecondTransomOffset();
        virtual IfcNormalisedRatioMeasure getSecondTransomOffset() const;
        virtual void setSecondTransomOffset(IfcNormalisedRatioMeasure value);
        virtual void unsetSecondTransomOffset();
        virtual bool testSecondTransomOffset() const;
        /// @}

        /// Attribute FirstMullionOffset
        /// @{
        virtual IfcNormalisedRatioMeasure getFirstMullionOffset();
        virtual IfcNormalisedRatioMeasure getFirstMullionOffset() const;
        virtual void setFirstMullionOffset(IfcNormalisedRatioMeasure value);
        virtual void unsetFirstMullionOffset();
        virtual bool testFirstMullionOffset() const;
        /// @}

        /// Attribute SecondMullionOffset
        /// @{
        virtual IfcNormalisedRatioMeasure getSecondMullionOffset();
        virtual IfcNormalisedRatioMeasure getSecondMullionOffset() const;
        virtual void setSecondMullionOffset(IfcNormalisedRatioMeasure value);
        virtual void unsetSecondMullionOffset();
        virtual bool testSecondMullionOffset() const;
        /// @}

        /// Attribute ShapeAspectStyle
        /// @{
        virtual IfcShapeAspect *getShapeAspectStyle();
        virtual const IfcShapeAspect *getShapeAspectStyle() const;
        virtual void setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value);
        virtual void unsetShapeAspectStyle();
        virtual bool testShapeAspectStyle() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcWindowLiningProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcWindowLiningProperties();

        virtual bool init();

        virtual void copy(const IfcWindowLiningProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3