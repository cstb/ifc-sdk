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

#ifndef IFC2X3_IFCSWEPTDISKSOLID_H
#define IFC2X3_IFCSWEPTDISKSOLID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcSolidModel.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;

    /**
     */
    class IFC2X3_DLL_DEF IfcSweptDiskSolid : public IfcSolidModel {
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
        IfcCurve *getDirectrix();
        /**
         * Sets the value of the explicit attribute 'Directrix'.
         * 
         * @param value
         */
        void setDirectrix(const Step::RefPtr< IfcCurve > &value);
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
        IfcPositiveLengthMeasure getInnerRadius();
        /**
         * Sets the value of the explicit attribute 'InnerRadius'.
         * 
         * @param value
         */
        void setInnerRadius(IfcPositiveLengthMeasure value);
        /**
         */
        IfcParameterValue getStartParam();
        /**
         * Sets the value of the explicit attribute 'StartParam'.
         * 
         * @param value
         */
        void setStartParam(IfcParameterValue value);
        /**
         */
        IfcParameterValue getEndParam();
        /**
         * Sets the value of the explicit attribute 'EndParam'.
         * 
         * @param value
         */
        void setEndParam(IfcParameterValue value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSweptDiskSolid(Step::Id id, Step::SPFData *args);
        virtual ~IfcSweptDiskSolid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSweptDiskSolid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_directrix;
        /**
         */
        Step::Real m_radius;
        /**
         */
        Step::Real m_innerRadius;
        /**
         */
        Step::Real m_startParam;
        /**
         */
        Step::Real m_endParam;

    };

}

#endif // IFC2X3_IFCSWEPTDISKSOLID_H
