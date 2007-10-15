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

#ifndef IFC2X3_IFCLSHAPEPROFILEDEF_H
#define IFC2X3_IFCLSHAPEPROFILEDEF_H
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
    class IFC2X3_DLL_DEF IfcLShapeProfileDef : public IfcParameterizedProfileDef {
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
        IfcPositiveLengthMeasure getDepth();
        /**
         * Sets the value of the explicit attribute 'Depth'.
         * 
         * @param value
         */
        void setDepth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getWidth();
        /**
         * Sets the value of the explicit attribute 'Width'.
         * 
         * @param value
         */
        void setWidth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getThickness();
        /**
         * Sets the value of the explicit attribute 'Thickness'.
         * 
         * @param value
         */
        void setThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getFilletRadius();
        /**
         * Sets the value of the explicit attribute 'FilletRadius'.
         * 
         * @param value
         */
        void setFilletRadius(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getEdgeRadius();
        /**
         * Sets the value of the explicit attribute 'EdgeRadius'.
         * 
         * @param value
         */
        void setEdgeRadius(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPlaneAngleMeasure getLegSlope();
        /**
         * Sets the value of the explicit attribute 'LegSlope'.
         * 
         * @param value
         */
        void setLegSlope(IfcPlaneAngleMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getCentreOfGravityInX();
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         * @param value
         */
        void setCentreOfGravityInX(IfcPositiveLengthMeasure value);
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
        IfcLShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcLShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_depth;
        /**
         */
        Step::Real m_width;
        /**
         */
        Step::Real m_thickness;
        /**
         */
        Step::Real m_filletRadius;
        /**
         */
        Step::Real m_edgeRadius;
        /**
         */
        Step::Real m_legSlope;
        /**
         */
        Step::Real m_centreOfGravityInX;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCLSHAPEPROFILEDEF_H
