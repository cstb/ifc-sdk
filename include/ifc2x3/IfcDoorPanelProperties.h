/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcPositiveLengthMeasure getPanelDepth();
        /**
         * Sets the value of the explicit attribute 'PanelDepth'.
         * 
         * @param value
         */
        void setPanelDepth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcDoorPanelOperationEnum getPanelOperation();
        /**
         * Sets the value of the explicit attribute 'PanelOperation'.
         * 
         * @param value
         */
        void setPanelOperation(IfcDoorPanelOperationEnum value);
        /**
         */
        IfcNormalisedRatioMeasure getPanelWidth();
        /**
         * Sets the value of the explicit attribute 'PanelWidth'.
         * 
         * @param value
         */
        void setPanelWidth(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcDoorPanelPositionEnum getPanelPosition();
        /**
         * Sets the value of the explicit attribute 'PanelPosition'.
         * 
         * @param value
         */
        void setPanelPosition(IfcDoorPanelPositionEnum value);
        /**
         */
        IfcShapeAspect *getShapeAspectStyle();
        /**
         * Sets the value of the explicit attribute 'ShapeAspectStyle'.
         * 
         * @param value
         */
        void setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value);
        /**
         */
        virtual void release();
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
