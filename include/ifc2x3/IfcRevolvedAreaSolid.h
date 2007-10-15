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

#ifndef IFC2X3_IFCREVOLVEDAREASOLID_H
#define IFC2X3_IFCREVOLVEDAREASOLID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcSweptAreaSolid.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis1Placement;

    /**
     */
    class IFC2X3_DLL_DEF IfcRevolvedAreaSolid : public IfcSweptAreaSolid {
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
        IfcAxis1Placement *getAxis();
        /**
         * Sets the value of the explicit attribute 'Axis'.
         * 
         * @param value
         */
        void setAxis(const Step::RefPtr< IfcAxis1Placement > &value);
        /**
         */
        IfcPlaneAngleMeasure getAngle();
        /**
         * Sets the value of the explicit attribute 'Angle'.
         * 
         * @param value
         */
        void setAngle(IfcPlaneAngleMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRevolvedAreaSolid(Step::Id id, Step::SPFData *args);
        virtual ~IfcRevolvedAreaSolid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRevolvedAreaSolid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAxis1Placement > m_axis;
        /**
         */
        Step::Real m_angle;

    };

}

#endif // IFC2X3_IFCREVOLVEDAREASOLID_H
