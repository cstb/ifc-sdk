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
         * Gets the value of the explicit attribute 'ForceX'.
         * 
         */
        virtual IfcForceMeasure getForceX();
        /**
         * (const) Returns the value of the explicit attribute 'ForceX'.
         * 
         * @return the value of the explicit attribute 'ForceX'
         */
        virtual const IfcForceMeasure getForceX() const;
        /**
         * Sets the value of the explicit attribute 'ForceX'.
         * 
         * @param value
         */
        virtual void setForceX(IfcForceMeasure value);
        /**
         * Gets the value of the explicit attribute 'ForceY'.
         * 
         */
        virtual IfcForceMeasure getForceY();
        /**
         * (const) Returns the value of the explicit attribute 'ForceY'.
         * 
         * @return the value of the explicit attribute 'ForceY'
         */
        virtual const IfcForceMeasure getForceY() const;
        /**
         * Sets the value of the explicit attribute 'ForceY'.
         * 
         * @param value
         */
        virtual void setForceY(IfcForceMeasure value);
        /**
         * Gets the value of the explicit attribute 'ForceZ'.
         * 
         */
        virtual IfcForceMeasure getForceZ();
        /**
         * (const) Returns the value of the explicit attribute 'ForceZ'.
         * 
         * @return the value of the explicit attribute 'ForceZ'
         */
        virtual const IfcForceMeasure getForceZ() const;
        /**
         * Sets the value of the explicit attribute 'ForceZ'.
         * 
         * @param value
         */
        virtual void setForceZ(IfcForceMeasure value);
        /**
         * Gets the value of the explicit attribute 'MomentX'.
         * 
         */
        virtual IfcTorqueMeasure getMomentX();
        /**
         * (const) Returns the value of the explicit attribute 'MomentX'.
         * 
         * @return the value of the explicit attribute 'MomentX'
         */
        virtual const IfcTorqueMeasure getMomentX() const;
        /**
         * Sets the value of the explicit attribute 'MomentX'.
         * 
         * @param value
         */
        virtual void setMomentX(IfcTorqueMeasure value);
        /**
         * Gets the value of the explicit attribute 'MomentY'.
         * 
         */
        virtual IfcTorqueMeasure getMomentY();
        /**
         * (const) Returns the value of the explicit attribute 'MomentY'.
         * 
         * @return the value of the explicit attribute 'MomentY'
         */
        virtual const IfcTorqueMeasure getMomentY() const;
        /**
         * Sets the value of the explicit attribute 'MomentY'.
         * 
         * @param value
         */
        virtual void setMomentY(IfcTorqueMeasure value);
        /**
         * Gets the value of the explicit attribute 'MomentZ'.
         * 
         */
        virtual IfcTorqueMeasure getMomentZ();
        /**
         * (const) Returns the value of the explicit attribute 'MomentZ'.
         * 
         * @return the value of the explicit attribute 'MomentZ'
         */
        virtual const IfcTorqueMeasure getMomentZ() const;
        /**
         * Sets the value of the explicit attribute 'MomentZ'.
         * 
         * @param value
         */
        virtual void setMomentZ(IfcTorqueMeasure value);
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
