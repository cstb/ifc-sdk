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

#ifndef IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR_H
#define IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianPoint;
    class IfcDirection;

    /**
     */
    class IFC2X3_DLL_DEF IfcCartesianTransformationOperator : public IfcGeometricRepresentationItem {
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
        IfcDirection *getAxis1();
        /**
         * Sets the value of the explicit attribute 'Axis1'.
         * 
         * @param value
         */
        void setAxis1(const Step::RefPtr< IfcDirection > &value);
        /**
         */
        IfcDirection *getAxis2();
        /**
         * Sets the value of the explicit attribute 'Axis2'.
         * 
         * @param value
         */
        void setAxis2(const Step::RefPtr< IfcDirection > &value);
        /**
         */
        IfcCartesianPoint *getLocalOrigin();
        /**
         * Sets the value of the explicit attribute 'LocalOrigin'.
         * 
         * @param value
         */
        void setLocalOrigin(const Step::RefPtr< IfcCartesianPoint > &value);
        /**
         */
        Step::Real getScale();
        /**
         * Sets the value of the explicit attribute 'Scale'.
         * 
         * @param value
         */
        void setScale(Step::Real value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCartesianTransformationOperator(Step::Id id, Step::SPFData *args);
        virtual ~IfcCartesianTransformationOperator();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCartesianTransformationOperator &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDirection > m_axis1;
        /**
         */
        Step::RefPtr< IfcDirection > m_axis2;
        /**
         */
        Step::RefPtr< IfcCartesianPoint > m_localOrigin;
        /**
         */
        Step::Real m_scale;

    };

}

#endif // IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR_H
