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

#ifndef IFC2X3_IFCOFFSETCURVE2D_H
#define IFC2X3_IFCOFFSETCURVE2D_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcCurve.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcOffsetCurve2D : public IfcCurve {
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
        IfcCurve *getBasisCurve();
        /**
         * Sets the value of the explicit attribute 'BasisCurve'.
         * 
         * @param value
         */
        void setBasisCurve(const Step::RefPtr< IfcCurve > &value);
        /**
         */
        IfcLengthMeasure getDistance();
        /**
         * Sets the value of the explicit attribute 'Distance'.
         * 
         * @param value
         */
        void setDistance(IfcLengthMeasure value);
        /**
         */
        Step::Logical getSelfIntersect();
        /**
         * Sets the value of the explicit attribute 'SelfIntersect'.
         * 
         * @param value
         */
        void setSelfIntersect(Step::Logical value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcOffsetCurve2D(Step::Id id, Step::SPFData *args);
        virtual ~IfcOffsetCurve2D();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOffsetCurve2D &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_basisCurve;
        /**
         */
        Step::Real m_distance;
        /**
         */
        Step::Logical m_selfIntersect;

    };

}

#endif // IFC2X3_IFCOFFSETCURVE2D_H
