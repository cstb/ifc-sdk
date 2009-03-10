/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Scale2'.
         * 
         */
        virtual Step::Real getScale2();
        /**
         * (const) Returns the value of the explicit attribute 'Scale2'.
         * 
         * @return the value of the explicit attribute 'Scale2'
         */
        virtual const Step::Real getScale2() const;
        /**
         * Sets the value of the explicit attribute 'Scale2'.
         * 
         * @param value
         */
        virtual void setScale2(Step::Real value);
        /**
         * Gets the value of the explicit attribute 'Scale3'.
         * 
         */
        virtual Step::Real getScale3();
        /**
         * (const) Returns the value of the explicit attribute 'Scale3'.
         * 
         * @return the value of the explicit attribute 'Scale3'
         */
        virtual const Step::Real getScale3() const;
        /**
         * Sets the value of the explicit attribute 'Scale3'.
         * 
         * @param value
         */
        virtual void setScale3(Step::Real value);
        /**
         * Gets the value of the derived attribute 'Scl2'.
         * 
         */
        virtual Step::Real getScl2() const;
        /**
         * Gets the value of the derived attribute 'Scl3'.
         * 
         */
        virtual Step::Real getScl3() const;
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
