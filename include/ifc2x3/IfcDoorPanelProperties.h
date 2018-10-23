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
     * Generated class for the IfcDoorPanelProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcDoorPanelProperties : public IfcPropertySetDefinition
    {

        // Attributes
        IfcPositiveLengthMeasure m_PanelDepth;
        IfcDoorPanelOperationEnum m_PanelOperation;
        IfcNormalisedRatioMeasure m_PanelWidth;
        IfcDoorPanelPositionEnum m_PanelPosition;
        Step::RefPtr< IfcShapeAspect > m_ShapeAspectStyle;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute PanelDepth
        /// @{
        virtual IfcPositiveLengthMeasure getPanelDepth();
        virtual IfcPositiveLengthMeasure getPanelDepth() const;
        virtual void setPanelDepth(IfcPositiveLengthMeasure value);
        virtual void unsetPanelDepth();
        virtual bool testPanelDepth() const;
        /// @}

        /// Attribute PanelOperation
        /// @{
        virtual IfcDoorPanelOperationEnum getPanelOperation();
        virtual IfcDoorPanelOperationEnum getPanelOperation() const;
        virtual void setPanelOperation(IfcDoorPanelOperationEnum value);
        virtual void unsetPanelOperation();
        virtual bool testPanelOperation() const;
        /// @}

        /// Attribute PanelWidth
        /// @{
        virtual IfcNormalisedRatioMeasure getPanelWidth();
        virtual IfcNormalisedRatioMeasure getPanelWidth() const;
        virtual void setPanelWidth(IfcNormalisedRatioMeasure value);
        virtual void unsetPanelWidth();
        virtual bool testPanelWidth() const;
        /// @}

        /// Attribute PanelPosition
        /// @{
        virtual IfcDoorPanelPositionEnum getPanelPosition();
        virtual IfcDoorPanelPositionEnum getPanelPosition() const;
        virtual void setPanelPosition(IfcDoorPanelPositionEnum value);
        virtual void unsetPanelPosition();
        virtual bool testPanelPosition() const;
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

        IfcDoorPanelProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcDoorPanelProperties();

        virtual bool init();

        virtual void copy(const IfcDoorPanelProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3