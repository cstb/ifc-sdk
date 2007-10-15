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

#ifndef IFC2X3_IFCCOMPOSITECURVESEGMENT_H
#define IFC2X3_IFCCOMPOSITECURVESEGMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCompositeCurve;
    class IfcCurve;

    /**
     */
    class IFC2X3_DLL_DEF IfcCompositeCurveSegment : public IfcGeometricRepresentationItem {
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
        IfcTransitionCode getTransition();
        /**
         * Sets the value of the explicit attribute 'Transition'.
         * 
         * @param value
         */
        void setTransition(IfcTransitionCode value);
        /**
         */
        Step::Bool getSameSense();
        /**
         * Sets the value of the explicit attribute 'SameSense'.
         * 
         * @param value
         */
        void setSameSense(Step::Bool value);
        /**
         */
        IfcCurve *getParentCurve();
        /**
         * Sets the value of the explicit attribute 'ParentCurve'.
         * 
         * @param value
         */
        void setParentCurve(const Step::RefPtr< IfcCurve > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcCompositeCurve > > &getUsingCurves();
        /**
         */
        virtual void release();
        friend class IfcCompositeCurve;
        friend class ExpressDataSet;

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
        Step::Bool m_sameSense;
        /**
         */
        Step::RefPtr< IfcCurve > m_parentCurve;
        /**
         */
        Step::Set< Step::ObsPtr< IfcCompositeCurve > > m_usingCurves;

    };

}

#endif // IFC2X3_IFCCOMPOSITECURVESEGMENT_H
