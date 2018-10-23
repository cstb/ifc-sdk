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
     * Generated class for the IfcDoorLiningProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcDoorLiningProperties : public IfcPropertySetDefinition
    {

        // Attributes
        IfcPositiveLengthMeasure m_LiningDepth;
        IfcPositiveLengthMeasure m_LiningThickness;
        IfcPositiveLengthMeasure m_ThresholdDepth;
        IfcPositiveLengthMeasure m_ThresholdThickness;
        IfcPositiveLengthMeasure m_TransomThickness;
        IfcLengthMeasure m_TransomOffset;
        IfcLengthMeasure m_LiningOffset;
        IfcLengthMeasure m_ThresholdOffset;
        IfcPositiveLengthMeasure m_CasingThickness;
        IfcPositiveLengthMeasure m_CasingDepth;
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

        /// Attribute ThresholdDepth
        /// @{
        virtual IfcPositiveLengthMeasure getThresholdDepth();
        virtual IfcPositiveLengthMeasure getThresholdDepth() const;
        virtual void setThresholdDepth(IfcPositiveLengthMeasure value);
        virtual void unsetThresholdDepth();
        virtual bool testThresholdDepth() const;
        /// @}

        /// Attribute ThresholdThickness
        /// @{
        virtual IfcPositiveLengthMeasure getThresholdThickness();
        virtual IfcPositiveLengthMeasure getThresholdThickness() const;
        virtual void setThresholdThickness(IfcPositiveLengthMeasure value);
        virtual void unsetThresholdThickness();
        virtual bool testThresholdThickness() const;
        /// @}

        /// Attribute TransomThickness
        /// @{
        virtual IfcPositiveLengthMeasure getTransomThickness();
        virtual IfcPositiveLengthMeasure getTransomThickness() const;
        virtual void setTransomThickness(IfcPositiveLengthMeasure value);
        virtual void unsetTransomThickness();
        virtual bool testTransomThickness() const;
        /// @}

        /// Attribute TransomOffset
        /// @{
        virtual IfcLengthMeasure getTransomOffset();
        virtual IfcLengthMeasure getTransomOffset() const;
        virtual void setTransomOffset(IfcLengthMeasure value);
        virtual void unsetTransomOffset();
        virtual bool testTransomOffset() const;
        /// @}

        /// Attribute LiningOffset
        /// @{
        virtual IfcLengthMeasure getLiningOffset();
        virtual IfcLengthMeasure getLiningOffset() const;
        virtual void setLiningOffset(IfcLengthMeasure value);
        virtual void unsetLiningOffset();
        virtual bool testLiningOffset() const;
        /// @}

        /// Attribute ThresholdOffset
        /// @{
        virtual IfcLengthMeasure getThresholdOffset();
        virtual IfcLengthMeasure getThresholdOffset() const;
        virtual void setThresholdOffset(IfcLengthMeasure value);
        virtual void unsetThresholdOffset();
        virtual bool testThresholdOffset() const;
        /// @}

        /// Attribute CasingThickness
        /// @{
        virtual IfcPositiveLengthMeasure getCasingThickness();
        virtual IfcPositiveLengthMeasure getCasingThickness() const;
        virtual void setCasingThickness(IfcPositiveLengthMeasure value);
        virtual void unsetCasingThickness();
        virtual bool testCasingThickness() const;
        /// @}

        /// Attribute CasingDepth
        /// @{
        virtual IfcPositiveLengthMeasure getCasingDepth();
        virtual IfcPositiveLengthMeasure getCasingDepth() const;
        virtual void setCasingDepth(IfcPositiveLengthMeasure value);
        virtual void unsetCasingDepth();
        virtual bool testCasingDepth() const;
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

        IfcDoorLiningProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcDoorLiningProperties();

        virtual bool init();

        virtual void copy(const IfcDoorLiningProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3