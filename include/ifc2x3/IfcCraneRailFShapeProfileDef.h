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

#ifndef IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
#define IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcParameterizedProfileDef.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcCraneRailFShapeProfileDef : public IfcParameterizedProfileDef {
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
        IfcPositiveLengthMeasure getOverallHeight();
        /**
         * Sets the value of the explicit attribute 'OverallHeight'.
         * 
         * @param value
         */
        void setOverallHeight(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getHeadWidth();
        /**
         * Sets the value of the explicit attribute 'HeadWidth'.
         * 
         * @param value
         */
        void setHeadWidth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getRadius();
        /**
         * Sets the value of the explicit attribute 'Radius'.
         * 
         * @param value
         */
        void setRadius(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getHeadDepth2();
        /**
         * Sets the value of the explicit attribute 'HeadDepth2'.
         * 
         * @param value
         */
        void setHeadDepth2(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getHeadDepth3();
        /**
         * Sets the value of the explicit attribute 'HeadDepth3'.
         * 
         * @param value
         */
        void setHeadDepth3(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getWebThickness();
        /**
         * Sets the value of the explicit attribute 'WebThickness'.
         * 
         * @param value
         */
        void setWebThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getBaseDepth1();
        /**
         * Sets the value of the explicit attribute 'BaseDepth1'.
         * 
         * @param value
         */
        void setBaseDepth1(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getBaseDepth2();
        /**
         * Sets the value of the explicit attribute 'BaseDepth2'.
         * 
         * @param value
         */
        void setBaseDepth2(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getCentreOfGravityInY();
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @param value
         */
        void setCentreOfGravityInY(IfcPositiveLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCraneRailFShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcCraneRailFShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_overallHeight;
        /**
         */
        Step::Real m_headWidth;
        /**
         */
        Step::Real m_radius;
        /**
         */
        Step::Real m_headDepth2;
        /**
         */
        Step::Real m_headDepth3;
        /**
         */
        Step::Real m_webThickness;
        /**
         */
        Step::Real m_baseDepth1;
        /**
         */
        Step::Real m_baseDepth2;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
