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
     * Generated class for the IfcPermeableCoveringProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcPermeableCoveringProperties : public IfcPropertySetDefinition
    {

        // Attributes
        IfcPermeableCoveringOperationEnum m_OperationType;
        IfcWindowPanelPositionEnum m_PanelPosition;
        IfcPositiveLengthMeasure m_FrameDepth;
        IfcPositiveLengthMeasure m_FrameThickness;
        Step::RefPtr< IfcShapeAspect > m_ShapeAspectStyle;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute OperationType
        /// @{
        virtual IfcPermeableCoveringOperationEnum getOperationType();
        virtual IfcPermeableCoveringOperationEnum getOperationType() const;
        virtual void setOperationType(IfcPermeableCoveringOperationEnum value);
        virtual void unsetOperationType();
        virtual bool testOperationType() const;
        /// @}

        /// Attribute PanelPosition
        /// @{
        virtual IfcWindowPanelPositionEnum getPanelPosition();
        virtual IfcWindowPanelPositionEnum getPanelPosition() const;
        virtual void setPanelPosition(IfcWindowPanelPositionEnum value);
        virtual void unsetPanelPosition();
        virtual bool testPanelPosition() const;
        /// @}

        /// Attribute FrameDepth
        /// @{
        virtual IfcPositiveLengthMeasure getFrameDepth();
        virtual IfcPositiveLengthMeasure getFrameDepth() const;
        virtual void setFrameDepth(IfcPositiveLengthMeasure value);
        virtual void unsetFrameDepth();
        virtual bool testFrameDepth() const;
        /// @}

        /// Attribute FrameThickness
        /// @{
        virtual IfcPositiveLengthMeasure getFrameThickness();
        virtual IfcPositiveLengthMeasure getFrameThickness() const;
        virtual void setFrameThickness(IfcPositiveLengthMeasure value);
        virtual void unsetFrameThickness();
        virtual bool testFrameThickness() const;
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

        IfcPermeableCoveringProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcPermeableCoveringProperties();

        virtual bool init();

        virtual void copy(const IfcPermeableCoveringProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3