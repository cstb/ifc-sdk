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

#ifndef IFC2X3_IFCCURVEBOUNDEDPLANE_H
#define IFC2X3_IFCCURVEBOUNDEDPLANE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcBoundedSurface.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;
    class IfcPlane;

    /**
     */
    class IFC2X3_DLL_DEF IfcCurveBoundedPlane : public IfcBoundedSurface {
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
         * Gets the value of the explicit attribute 'BasisSurface'.
         * 
         */
        virtual IfcPlane *getBasisSurface();
        /**
         * (const) Returns the value of the explicit attribute 'BasisSurface'.
         * 
         * @return the value of the explicit attribute 'BasisSurface'
         */
        virtual const IfcPlane *getBasisSurface() const;
        /**
         * Sets the value of the explicit attribute 'BasisSurface'.
         * 
         * @param value
         */
        virtual void setBasisSurface(const Step::RefPtr< IfcPlane > &value);
        /**
         * Gets the value of the explicit attribute 'OuterBoundary'.
         * 
         */
        virtual IfcCurve *getOuterBoundary();
        /**
         * (const) Returns the value of the explicit attribute 'OuterBoundary'.
         * 
         * @return the value of the explicit attribute 'OuterBoundary'
         */
        virtual const IfcCurve *getOuterBoundary() const;
        /**
         * Sets the value of the explicit attribute 'OuterBoundary'.
         * 
         * @param value
         */
        virtual void setOuterBoundary(const Step::RefPtr< IfcCurve > &value);
        /**
         * Gets the value of the explicit attribute 'InnerBoundaries'.
         * 
         */
        virtual Set_IfcCurve_0_n &getInnerBoundaries();
        /**
         * (const) Returns the value of the explicit attribute 'InnerBoundaries'.
         * 
         * @return the value of the explicit attribute 'InnerBoundaries'
         */
        virtual const Set_IfcCurve_0_n &getInnerBoundaries() const;
        /**
         * Sets the value of the explicit attribute 'InnerBoundaries'.
         * 
         * @param value
         */
        virtual void setInnerBoundaries(const Set_IfcCurve_0_n &value);
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
        IfcCurveBoundedPlane(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurveBoundedPlane();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCurveBoundedPlane &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPlane > m_basisSurface;
        /**
         */
        Step::RefPtr< IfcCurve > m_outerBoundary;
        /**
         */
        Set_IfcCurve_0_n m_innerBoundaries;

    };

}

#endif // IFC2X3_IFCCURVEBOUNDEDPLANE_H
