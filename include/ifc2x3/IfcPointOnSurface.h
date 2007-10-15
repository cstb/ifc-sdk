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

#ifndef IFC2X3_IFCPOINTONSURFACE_H
#define IFC2X3_IFCPOINTONSURFACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcPoint.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSurface;

    /**
     */
    class IFC2X3_DLL_DEF IfcPointOnSurface : public IfcPoint {
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
        IfcParameterValue getPointParameterU();
        /**
         * Sets the value of the explicit attribute 'PointParameterU'.
         * 
         * @param value
         */
        void setPointParameterU(IfcParameterValue value);
        /**
         */
        IfcParameterValue getPointParameterV();
        /**
         * Sets the value of the explicit attribute 'PointParameterV'.
         * 
         * @param value
         */
        void setPointParameterV(IfcParameterValue value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPointOnSurface(Step::Id id, Step::SPFData *args);
        virtual ~IfcPointOnSurface();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPointOnSurface &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSurface > m_basisSurface;
        /**
         */
        Step::Real m_pointParameterU;
        /**
         */
        Step::Real m_pointParameterV;

    };

}

#endif // IFC2X3_IFCPOINTONSURFACE_H
