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
         * Gets the value of the explicit attribute 'Axis1'.
         * 
         */
        virtual IfcDirection *getAxis1();
        /**
         * (const) Returns the value of the explicit attribute 'Axis1'.
         * 
         * @return the value of the explicit attribute 'Axis1'
         */
        virtual const IfcDirection *getAxis1() const;
        /**
         * Sets the value of the explicit attribute 'Axis1'.
         * 
         * @param value
         */
        virtual void setAxis1(const Step::RefPtr< IfcDirection > &value);
        /**
         * Gets the value of the explicit attribute 'Axis2'.
         * 
         */
        virtual IfcDirection *getAxis2();
        /**
         * (const) Returns the value of the explicit attribute 'Axis2'.
         * 
         * @return the value of the explicit attribute 'Axis2'
         */
        virtual const IfcDirection *getAxis2() const;
        /**
         * Sets the value of the explicit attribute 'Axis2'.
         * 
         * @param value
         */
        virtual void setAxis2(const Step::RefPtr< IfcDirection > &value);
        /**
         * Gets the value of the explicit attribute 'LocalOrigin'.
         * 
         */
        virtual IfcCartesianPoint *getLocalOrigin();
        /**
         * (const) Returns the value of the explicit attribute 'LocalOrigin'.
         * 
         * @return the value of the explicit attribute 'LocalOrigin'
         */
        virtual const IfcCartesianPoint *getLocalOrigin() const;
        /**
         * Sets the value of the explicit attribute 'LocalOrigin'.
         * 
         * @param value
         */
        virtual void setLocalOrigin(const Step::RefPtr< IfcCartesianPoint > &value);
        /**
         * Gets the value of the explicit attribute 'Scale'.
         * 
         */
        virtual Step::Real getScale();
        /**
         * (const) Returns the value of the explicit attribute 'Scale'.
         * 
         * @return the value of the explicit attribute 'Scale'
         */
        virtual const Step::Real getScale() const;
        /**
         * Sets the value of the explicit attribute 'Scale'.
         * 
         * @param value
         */
        virtual void setScale(Step::Real value);
        /**
         * Gets the value of the derived attribute 'Scl'.
         * 
         */
        virtual Step::Real getScl() const;
        /**
         * Gets the value of the derived attribute 'Dim'.
         * 
         */
        virtual IfcDimensionCount getDim() const;
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
