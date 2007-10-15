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

#ifndef IFC2X3_IFCCSHAPEPROFILEDEF_H
#define IFC2X3_IFCCSHAPEPROFILEDEF_H
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
    class IFC2X3_DLL_DEF IfcCShapeProfileDef : public IfcParameterizedProfileDef {
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
        IfcPositiveLengthMeasure getWallThickness();
        /**
         * Sets the value of the explicit attribute 'WallThickness'.
         * 
         * @param value
         */
        void setWallThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getGirth();
        /**
         * Sets the value of the explicit attribute 'Girth'.
         * 
         * @param value
         */
        void setGirth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getInternalFilletRadius();
        /**
         * Sets the value of the explicit attribute 'InternalFilletRadius'.
         * 
         * @param value
         */
        void setInternalFilletRadius(IfcPositiveLengthMeasure value);
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
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcCShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCShapeProfileDef &obj, const CopyOp &copyop);

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
        Step::Real m_wallThickness;
        /**
         */
        Step::Real m_girth;
        /**
         */
        Step::Real m_internalFilletRadius;
        /**
         */
        Step::Real m_centreOfGravityInX;

    };

}

#endif // IFC2X3_IFCCSHAPEPROFILEDEF_H
