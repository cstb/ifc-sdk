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

#ifndef IFC2X3_IFCSTRUCTURALLOADSINGLEFORCE_H
#define IFC2X3_IFCSTRUCTURALLOADSINGLEFORCE_H
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
    class IFC2X3_DLL_DEF IfcStructuralLoadSingleForce : public IfcStructuralLoadStatic {
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
        IfcForceMeasure getForceX();
        /**
         * Sets the value of the explicit attribute 'ForceX'.
         * 
         * @param value
         */
        void setForceX(IfcForceMeasure value);
        /**
         */
        IfcForceMeasure getForceY();
        /**
         * Sets the value of the explicit attribute 'ForceY'.
         * 
         * @param value
         */
        void setForceY(IfcForceMeasure value);
        /**
         */
        IfcForceMeasure getForceZ();
        /**
         * Sets the value of the explicit attribute 'ForceZ'.
         * 
         * @param value
         */
        void setForceZ(IfcForceMeasure value);
        /**
         */
        IfcTorqueMeasure getMomentX();
        /**
         * Sets the value of the explicit attribute 'MomentX'.
         * 
         * @param value
         */
        void setMomentX(IfcTorqueMeasure value);
        /**
         */
        IfcTorqueMeasure getMomentY();
        /**
         * Sets the value of the explicit attribute 'MomentY'.
         * 
         * @param value
         */
        void setMomentY(IfcTorqueMeasure value);
        /**
         */
        IfcTorqueMeasure getMomentZ();
        /**
         * Sets the value of the explicit attribute 'MomentZ'.
         * 
         * @param value
         */
        void setMomentZ(IfcTorqueMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadSingleForce(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadSingleForce();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_forceX;
        /**
         */
        Step::Real m_forceY;
        /**
         */
        Step::Real m_forceZ;
        /**
         */
        Step::Real m_momentX;
        /**
         */
        Step::Real m_momentY;
        /**
         */
        Step::Real m_momentZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADSINGLEFORCE_H
