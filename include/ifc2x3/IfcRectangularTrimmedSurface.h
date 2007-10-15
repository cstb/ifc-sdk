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

#ifndef IFC2X3_IFCRECTANGULARTRIMMEDSURFACE_H
#define IFC2X3_IFCRECTANGULARTRIMMEDSURFACE_H
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
    class IfcSurface;

    /**
     */
    class IFC2X3_DLL_DEF IfcRectangularTrimmedSurface : public IfcBoundedSurface {
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
        IfcSurface *getBasisSurface();
        /**
         * Sets the value of the explicit attribute 'BasisSurface'.
         * 
         * @param value
         */
        void setBasisSurface(const Step::RefPtr< IfcSurface > &value);
        /**
         */
        IfcParameterValue getU1();
        /**
         * Sets the value of the explicit attribute 'U1'.
         * 
         * @param value
         */
        void setU1(IfcParameterValue value);
        /**
         */
        IfcParameterValue getV1();
        /**
         * Sets the value of the explicit attribute 'V1'.
         * 
         * @param value
         */
        void setV1(IfcParameterValue value);
        /**
         */
        IfcParameterValue getU2();
        /**
         * Sets the value of the explicit attribute 'U2'.
         * 
         * @param value
         */
        void setU2(IfcParameterValue value);
        /**
         */
        IfcParameterValue getV2();
        /**
         * Sets the value of the explicit attribute 'V2'.
         * 
         * @param value
         */
        void setV2(IfcParameterValue value);
        /**
         */
        Step::Bool getUsense();
        /**
         * Sets the value of the explicit attribute 'Usense'.
         * 
         * @param value
         */
        void setUsense(Step::Bool value);
        /**
         */
        Step::Bool getVsense();
        /**
         * Sets the value of the explicit attribute 'Vsense'.
         * 
         * @param value
         */
        void setVsense(Step::Bool value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRectangularTrimmedSurface(Step::Id id, Step::SPFData *args);
        virtual ~IfcRectangularTrimmedSurface();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSurface > m_basisSurface;
        /**
         */
        Step::Real m_u1;
        /**
         */
        Step::Real m_v1;
        /**
         */
        Step::Real m_u2;
        /**
         */
        Step::Real m_v2;
        /**
         */
        Step::Bool m_usense;
        /**
         */
        Step::Bool m_vsense;

    };

}

#endif // IFC2X3_IFCRECTANGULARTRIMMEDSURFACE_H
