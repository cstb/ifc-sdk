/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCDOORPANELPROPERTIES_H
#define IFC2X3_IFCDOORPANELPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcPropertySetDefinition.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcShapeAspect;

    /**
     */
    class IFC2X3_DLL_DEF IfcDoorPanelProperties : public IfcPropertySetDefinition {
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
         * Gets the value of the explicit attribute 'PanelDepth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getPanelDepth();
        /**
         * (const) Returns the value of the explicit attribute 'PanelDepth'.
         * 
         * @return the value of the explicit attribute 'PanelDepth'
         */
        virtual const IfcPositiveLengthMeasure getPanelDepth() const;
        /**
         * Sets the value of the explicit attribute 'PanelDepth'.
         * 
         * @param value
         */
        virtual void setPanelDepth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'PanelOperation'.
         * 
         */
        virtual IfcDoorPanelOperationEnum getPanelOperation();
        /**
         * (const) Returns the value of the explicit attribute 'PanelOperation'.
         * 
         * @return the value of the explicit attribute 'PanelOperation'
         */
        virtual const IfcDoorPanelOperationEnum getPanelOperation() const;
        /**
         * Sets the value of the explicit attribute 'PanelOperation'.
         * 
         * @param value
         */
        virtual void setPanelOperation(IfcDoorPanelOperationEnum value);
        /**
         * Gets the value of the explicit attribute 'PanelWidth'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getPanelWidth();
        /**
         * (const) Returns the value of the explicit attribute 'PanelWidth'.
         * 
         * @return the value of the explicit attribute 'PanelWidth'
         */
        virtual const IfcNormalisedRatioMeasure getPanelWidth() const;
        /**
         * Sets the value of the explicit attribute 'PanelWidth'.
         * 
         * @param value
         */
        virtual void setPanelWidth(IfcNormalisedRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'PanelPosition'.
         * 
         */
        virtual IfcDoorPanelPositionEnum getPanelPosition();
        /**
         * (const) Returns the value of the explicit attribute 'PanelPosition'.
         * 
         * @return the value of the explicit attribute 'PanelPosition'
         */
        virtual const IfcDoorPanelPositionEnum getPanelPosition() const;
        /**
         * Sets the value of the explicit attribute 'PanelPosition'.
         * 
         * @param value
         */
        virtual void setPanelPosition(IfcDoorPanelPositionEnum value);
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
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDoorPanelProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcDoorPanelProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDoorPanelProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_panelDepth;
        /**
         */
        IfcDoorPanelOperationEnum m_panelOperation;
        /**
         */
        Step::Real m_panelWidth;
        /**
         */
        IfcDoorPanelPositionEnum m_panelPosition;
        /**
         */
        Step::RefPtr< IfcShapeAspect > m_shapeAspectStyle;

    };

}

#endif // IFC2X3_IFCDOORPANELPROPERTIES_H
