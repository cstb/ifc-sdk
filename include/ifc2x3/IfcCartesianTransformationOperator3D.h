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

#ifndef IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR3D_H
#define IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR3D_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcCartesianTransformationOperator.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;

    /**
     */
    class IFC2X3_DLL_DEF IfcCartesianTransformationOperator3D : public IfcCartesianTransformationOperator {
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
        IfcDirection *getAxis3();
        /**
         * Sets the value of the explicit attribute 'Axis3'.
         * 
         * @param value
         */
        void setAxis3(const Step::RefPtr< IfcDirection > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCartesianTransformationOperator3D(Step::Id id, Step::SPFData *args);
        virtual ~IfcCartesianTransformationOperator3D();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCartesianTransformationOperator3D &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDirection > m_axis3;

    };

}

#endif // IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR3D_H
