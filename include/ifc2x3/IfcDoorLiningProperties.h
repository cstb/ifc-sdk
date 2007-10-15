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

#ifndef IFC2X3_IFCDOORLININGPROPERTIES_H
#define IFC2X3_IFCDOORLININGPROPERTIES_H
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
    class IFC2X3_DLL_DEF IfcDoorLiningProperties : public IfcPropertySetDefinition {
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
        IfcPositiveLengthMeasure getLiningDepth();
        /**
         * Sets the value of the explicit attribute 'LiningDepth'.
         * 
         * @param value
         */
        void setLiningDepth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getLiningThickness();
        /**
         * Sets the value of the explicit attribute 'LiningThickness'.
         * 
         * @param value
         */
        void setLiningThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getThresholdDepth();
        /**
         * Sets the value of the explicit attribute 'ThresholdDepth'.
         * 
         * @param value
         */
        void setThresholdDepth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getThresholdThickness();
        /**
         * Sets the value of the explicit attribute 'ThresholdThickness'.
         * 
         * @param value
         */
        void setThresholdThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getTransomThickness();
        /**
         * Sets the value of the explicit attribute 'TransomThickness'.
         * 
         * @param value
         */
        void setTransomThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcLengthMeasure getTransomOffset();
        /**
         * Sets the value of the explicit attribute 'TransomOffset'.
         * 
         * @param value
         */
        void setTransomOffset(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getLiningOffset();
        /**
         * Sets the value of the explicit attribute 'LiningOffset'.
         * 
         * @param value
         */
        void setLiningOffset(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getThresholdOffset();
        /**
         * Sets the value of the explicit attribute 'ThresholdOffset'.
         * 
         * @param value
         */
        void setThresholdOffset(IfcLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getCasingThickness();
        /**
         * Sets the value of the explicit attribute 'CasingThickness'.
         * 
         * @param value
         */
        void setCasingThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getCasingDepth();
        /**
         * Sets the value of the explicit attribute 'CasingDepth'.
         * 
         * @param value
         */
        void setCasingDepth(IfcPositiveLengthMeasure value);
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
        IfcDoorLiningProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcDoorLiningProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDoorLiningProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_liningDepth;
        /**
         */
        Step::Real m_liningThickness;
        /**
         */
        Step::Real m_thresholdDepth;
        /**
         */
        Step::Real m_thresholdThickness;
        /**
         */
        Step::Real m_transomThickness;
        /**
         */
        Step::Real m_transomOffset;
        /**
         */
        Step::Real m_liningOffset;
        /**
         */
        Step::Real m_thresholdOffset;
        /**
         */
        Step::Real m_casingThickness;
        /**
         */
        Step::Real m_casingDepth;
        /**
         */
        Step::RefPtr< IfcShapeAspect > m_shapeAspectStyle;

    };

}

#endif // IFC2X3_IFCDOORLININGPROPERTIES_H
