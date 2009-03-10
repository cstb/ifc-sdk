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

#ifndef IFC2X3_IFCCOMPOSITECURVESEGMENT_H
#define IFC2X3_IFCCOMPOSITECURVESEGMENT_H
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
    class IfcCurve;

    /**
     */
    class IFC2X3_DLL_DEF IfcCompositeCurveSegment : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'Transition'.
         * 
         */
        virtual IfcTransitionCode getTransition();
        /**
         * (const) Returns the value of the explicit attribute 'Transition'.
         * 
         * @return the value of the explicit attribute 'Transition'
         */
        virtual const IfcTransitionCode getTransition() const;
        /**
         * Sets the value of the explicit attribute 'Transition'.
         * 
         * @param value
         */
        virtual void setTransition(IfcTransitionCode value);
        /**
         * Gets the value of the explicit attribute 'SameSense'.
         * 
         */
        virtual Step::Boolean getSameSense();
        /**
         * (const) Returns the value of the explicit attribute 'SameSense'.
         * 
         * @return the value of the explicit attribute 'SameSense'
         */
        virtual const Step::Boolean getSameSense() const;
        /**
         * Sets the value of the explicit attribute 'SameSense'.
         * 
         * @param value
         */
        virtual void setSameSense(Step::Boolean value);
        /**
         * Gets the value of the explicit attribute 'ParentCurve'.
         * 
         */
        virtual IfcCurve *getParentCurve();
        /**
         * (const) Returns the value of the explicit attribute 'ParentCurve'.
         * 
         * @return the value of the explicit attribute 'ParentCurve'
         */
        virtual const IfcCurve *getParentCurve() const;
        /**
         * Sets the value of the explicit attribute 'ParentCurve'.
         * 
         * @param value
         */
        virtual void setParentCurve(const Step::RefPtr< IfcCurve > &value);
        /**
         * Gets the value of the inverse attribute 'UsingCurves'.
         * 
         */
        Inverse_Set_IfcCompositeCurve_1_n &getUsingCurves();
        /**
         * (const) Returns the value of the explicit attribute 'UsingCurves'.
         * 
         * @return the value of the explicit attribute 'UsingCurves'
         */
        virtual const Inverse_Set_IfcCompositeCurve_1_n &getUsingCurves() const;
        /**
         * Gets the value of the derived attribute 'Dim'.
         * 
         */
        virtual IfcDimensionCount getDim() const;
        friend class IfcCompositeCurve;
        friend class ExpressDataSet;
        friend class Inverted_IfcCompositeCurve_Segments_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCompositeCurveSegment(Step::Id id, Step::SPFData *args);
        virtual ~IfcCompositeCurveSegment();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCompositeCurveSegment &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcTransitionCode m_transition;
        /**
         */
        Step::Boolean m_sameSense;
        /**
         */
        Step::RefPtr< IfcCurve > m_parentCurve;
        /**
         */
        Inverse_Set_IfcCompositeCurve_1_n m_usingCurves;

    };

}

#endif // IFC2X3_IFCCOMPOSITECURVESEGMENT_H
