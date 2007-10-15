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

#ifndef IFC2X3_IFCPERMEABLECOVERINGPROPERTIES_H
#define IFC2X3_IFCPERMEABLECOVERINGPROPERTIES_H
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
    class IFC2X3_DLL_DEF IfcPermeableCoveringProperties : public IfcPropertySetDefinition {
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
        IfcPermeableCoveringOperationEnum getOperationType();
        /**
         * Sets the value of the explicit attribute 'OperationType'.
         * 
         * @param value
         */
        void setOperationType(IfcPermeableCoveringOperationEnum value);
        /**
         */
        IfcWindowPanelPositionEnum getPanelPosition();
        /**
         * Sets the value of the explicit attribute 'PanelPosition'.
         * 
         * @param value
         */
        void setPanelPosition(IfcWindowPanelPositionEnum value);
        /**
         */
        IfcPositiveLengthMeasure getFrameDepth();
        /**
         * Sets the value of the explicit attribute 'FrameDepth'.
         * 
         * @param value
         */
        void setFrameDepth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getFrameThickness();
        /**
         * Sets the value of the explicit attribute 'FrameThickness'.
         * 
         * @param value
         */
        void setFrameThickness(IfcPositiveLengthMeasure value);
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
        IfcPermeableCoveringProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcPermeableCoveringProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPermeableCoveringProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcPermeableCoveringOperationEnum m_operationType;
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

#endif // IFC2X3_IFCPERMEABLECOVERINGPROPERTIES_H
