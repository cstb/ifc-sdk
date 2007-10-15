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

#ifndef IFC2X3_IFCSTRUCTURALLOADLINEARFORCE_H
#define IFC2X3_IFCSTRUCTURALLOADLINEARFORCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcStructuralLoadStatic.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralLoadLinearForce : public IfcStructuralLoadStatic {
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
        IfcLinearForceMeasure getLinearForceX();
        /**
         * Sets the value of the explicit attribute 'LinearForceX'.
         * 
         * @param value
         */
        void setLinearForceX(IfcLinearForceMeasure value);
        /**
         */
        IfcLinearForceMeasure getLinearForceY();
        /**
         * Sets the value of the explicit attribute 'LinearForceY'.
         * 
         * @param value
         */
        void setLinearForceY(IfcLinearForceMeasure value);
        /**
         */
        IfcLinearForceMeasure getLinearForceZ();
        /**
         * Sets the value of the explicit attribute 'LinearForceZ'.
         * 
         * @param value
         */
        void setLinearForceZ(IfcLinearForceMeasure value);
        /**
         */
        IfcLinearMomentMeasure getLinearMomentX();
        /**
         * Sets the value of the explicit attribute 'LinearMomentX'.
         * 
         * @param value
         */
        void setLinearMomentX(IfcLinearMomentMeasure value);
        /**
         */
        IfcLinearMomentMeasure getLinearMomentY();
        /**
         * Sets the value of the explicit attribute 'LinearMomentY'.
         * 
         * @param value
         */
        void setLinearMomentY(IfcLinearMomentMeasure value);
        /**
         */
        IfcLinearMomentMeasure getLinearMomentZ();
        /**
         * Sets the value of the explicit attribute 'LinearMomentZ'.
         * 
         * @param value
         */
        void setLinearMomentZ(IfcLinearMomentMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadLinearForce(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadLinearForce();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_linearForceX;
        /**
         */
        Step::Real m_linearForceY;
        /**
         */
        Step::Real m_linearForceZ;
        /**
         */
        Step::Real m_linearMomentX;
        /**
         */
        Step::Real m_linearMomentY;
        /**
         */
        Step::Real m_linearMomentZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADLINEARFORCE_H
