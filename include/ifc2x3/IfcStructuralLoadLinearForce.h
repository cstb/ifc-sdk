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
         * Gets the value of the explicit attribute 'LinearForceX'.
         * 
         */
        virtual IfcLinearForceMeasure getLinearForceX();
        /**
         * (const) Returns the value of the explicit attribute 'LinearForceX'.
         * 
         * @return the value of the explicit attribute 'LinearForceX'
         */
        virtual const IfcLinearForceMeasure getLinearForceX() const;
        /**
         * Sets the value of the explicit attribute 'LinearForceX'.
         * 
         * @param value
         */
        virtual void setLinearForceX(IfcLinearForceMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearForceY'.
         * 
         */
        virtual IfcLinearForceMeasure getLinearForceY();
        /**
         * (const) Returns the value of the explicit attribute 'LinearForceY'.
         * 
         * @return the value of the explicit attribute 'LinearForceY'
         */
        virtual const IfcLinearForceMeasure getLinearForceY() const;
        /**
         * Sets the value of the explicit attribute 'LinearForceY'.
         * 
         * @param value
         */
        virtual void setLinearForceY(IfcLinearForceMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearForceZ'.
         * 
         */
        virtual IfcLinearForceMeasure getLinearForceZ();
        /**
         * (const) Returns the value of the explicit attribute 'LinearForceZ'.
         * 
         * @return the value of the explicit attribute 'LinearForceZ'
         */
        virtual const IfcLinearForceMeasure getLinearForceZ() const;
        /**
         * Sets the value of the explicit attribute 'LinearForceZ'.
         * 
         * @param value
         */
        virtual void setLinearForceZ(IfcLinearForceMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearMomentX'.
         * 
         */
        virtual IfcLinearMomentMeasure getLinearMomentX();
        /**
         * (const) Returns the value of the explicit attribute 'LinearMomentX'.
         * 
         * @return the value of the explicit attribute 'LinearMomentX'
         */
        virtual const IfcLinearMomentMeasure getLinearMomentX() const;
        /**
         * Sets the value of the explicit attribute 'LinearMomentX'.
         * 
         * @param value
         */
        virtual void setLinearMomentX(IfcLinearMomentMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearMomentY'.
         * 
         */
        virtual IfcLinearMomentMeasure getLinearMomentY();
        /**
         * (const) Returns the value of the explicit attribute 'LinearMomentY'.
         * 
         * @return the value of the explicit attribute 'LinearMomentY'
         */
        virtual const IfcLinearMomentMeasure getLinearMomentY() const;
        /**
         * Sets the value of the explicit attribute 'LinearMomentY'.
         * 
         * @param value
         */
        virtual void setLinearMomentY(IfcLinearMomentMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearMomentZ'.
         * 
         */
        virtual IfcLinearMomentMeasure getLinearMomentZ();
        /**
         * (const) Returns the value of the explicit attribute 'LinearMomentZ'.
         * 
         * @return the value of the explicit attribute 'LinearMomentZ'
         */
        virtual const IfcLinearMomentMeasure getLinearMomentZ() const;
        /**
         * Sets the value of the explicit attribute 'LinearMomentZ'.
         * 
         * @param value
         */
        virtual void setLinearMomentZ(IfcLinearMomentMeasure value);
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
