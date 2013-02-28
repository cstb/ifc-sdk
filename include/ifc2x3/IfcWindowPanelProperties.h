// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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

#ifndef IFC2X3_IFCWINDOWPANELPROPERTIES_H
#define IFC2X3_IFCWINDOWPANELPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPropertySetDefinition.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcShapeAspect;

    /**
     * Generated class for the IfcWindowPanelProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcWindowPanelProperties : public IfcPropertySetDefinition {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'OperationType'.
         * 
         */
        virtual IfcWindowPanelOperationEnum getOperationType();
        /**
         * (const) Returns the value of the explicit attribute 'OperationType'.
         * 
         * @return the value of the explicit attribute 'OperationType'
         */
        virtual const IfcWindowPanelOperationEnum getOperationType() const;
        /**
         * Sets the value of the explicit attribute 'OperationType'.
         * 
         * @param value
         */
        virtual void setOperationType(IfcWindowPanelOperationEnum value);
        /**
         * unset the attribute 'OperationType'.
         * 
         */
        virtual void unsetOperationType();
        /**
         * Test if the attribute 'OperationType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOperationType() const;
        /**
         * Gets the value of the explicit attribute 'PanelPosition'.
         * 
         */
        virtual IfcWindowPanelPositionEnum getPanelPosition();
        /**
         * (const) Returns the value of the explicit attribute 'PanelPosition'.
         * 
         * @return the value of the explicit attribute 'PanelPosition'
         */
        virtual const IfcWindowPanelPositionEnum getPanelPosition() const;
        /**
         * Sets the value of the explicit attribute 'PanelPosition'.
         * 
         * @param value
         */
        virtual void setPanelPosition(IfcWindowPanelPositionEnum value);
        /**
         * unset the attribute 'PanelPosition'.
         * 
         */
        virtual void unsetPanelPosition();
        /**
         * Test if the attribute 'PanelPosition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPanelPosition() const;
        /**
         * Gets the value of the explicit attribute 'FrameDepth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFrameDepth();
        /**
         * (const) Returns the value of the explicit attribute 'FrameDepth'.
         * 
         * @return the value of the explicit attribute 'FrameDepth'
         */
        virtual const IfcPositiveLengthMeasure getFrameDepth() const;
        /**
         * Sets the value of the explicit attribute 'FrameDepth'.
         * 
         * @param value
         */
        virtual void setFrameDepth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'FrameDepth'.
         * 
         */
        virtual void unsetFrameDepth();
        /**
         * Test if the attribute 'FrameDepth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFrameDepth() const;
        /**
         * Gets the value of the explicit attribute 'FrameThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFrameThickness();
        /**
         * (const) Returns the value of the explicit attribute 'FrameThickness'.
         * 
         * @return the value of the explicit attribute 'FrameThickness'
         */
        virtual const IfcPositiveLengthMeasure getFrameThickness() const;
        /**
         * Sets the value of the explicit attribute 'FrameThickness'.
         * 
         * @param value
         */
        virtual void setFrameThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'FrameThickness'.
         * 
         */
        virtual void unsetFrameThickness();
        /**
         * Test if the attribute 'FrameThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFrameThickness() const;
        /**
         * Gets the value of the explicit attribute 'ShapeAspectStyle'.
         * 
         */
        virtual IfcShapeAspect *getShapeAspectStyle();
        /**
         * (const) Returns the value of the explicit attribute 'ShapeAspectStyle'.
         * 
         * @return the value of the explicit attribute 'ShapeAspectStyle'
         */
        virtual const IfcShapeAspect *getShapeAspectStyle() const;
        /**
         * Sets the value of the explicit attribute 'ShapeAspectStyle'.
         * 
         * @param value
         */
        virtual void setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value);
        /**
         * unset the attribute 'ShapeAspectStyle'.
         * 
         */
        virtual void unsetShapeAspectStyle();
        /**
         * Test if the attribute 'ShapeAspectStyle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShapeAspectStyle() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcWindowPanelProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcWindowPanelProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcWindowPanelProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcWindowPanelOperationEnum m_operationType;
        /**
         */
        IfcWindowPanelPositionEnum m_panelPosition;
        /**
         */
        Step::Real m_frameDepth;
        /**
         */
        Step::Real m_frameThickness;
        /**
         */
        Step::RefPtr< IfcShapeAspect > m_shapeAspectStyle;

    };

}

#endif // IFC2X3_IFCWINDOWPANELPROPERTIES_H
