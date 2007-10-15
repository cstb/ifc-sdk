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

#ifndef IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR3DNONUNIFORM_H
#define IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR3DNONUNIFORM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcCartesianTransformationOperator3D.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcCartesianTransformationOperator3DnonUniform : public IfcCartesianTransformationOperator3D {
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
        Step::Real getScale2();
        /**
         * Sets the value of the explicit attribute 'Scale2'.
         * 
         * @param value
         */
        void setScale2(Step::Real value);
        /**
         */
        Step::Real getScale3();
        /**
         * Sets the value of the explicit attribute 'Scale3'.
         * 
         * @param value
         */
        void setScale3(Step::Real value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCartesianTransformationOperator3DnonUniform(Step::Id id, Step::SPFData *args);
        virtual ~IfcCartesianTransformationOperator3DnonUniform();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCartesianTransformationOperator3DnonUniform &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_scale2;
        /**
         */
        Step::Real m_scale3;

    };

}

#endif // IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR3DNONUNIFORM_H
