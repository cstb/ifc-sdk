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
 *     Copyright (C) 2009 CSTB                                             *
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

#ifndef IFC2X3_IFCSTRUCTURALLOADTEMPERATURE_H
#define IFC2X3_IFCSTRUCTURALLOADTEMPERATURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcStructuralLoadStatic.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStructuralLoadTemperature Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcStructuralLoadTemperature : public IfcStructuralLoadStatic {
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
         * Gets the value of the explicit attribute 'DeltaT_Constant'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getDeltaT_Constant();
        /**
         * (const) Returns the value of the explicit attribute 'DeltaT_Constant'.
         * 
         * @return the value of the explicit attribute 'DeltaT_Constant'
         */
        virtual const IfcThermodynamicTemperatureMeasure getDeltaT_Constant() const;
        /**
         * Sets the value of the explicit attribute 'DeltaT_Constant'.
         * 
         * @param value
         */
        virtual void setDeltaT_Constant(IfcThermodynamicTemperatureMeasure value);
        /**
         * unset the attribute 'DeltaT_Constant'.
         * 
         */
        virtual void unsetDeltaT_Constant();
        /**
         * Test if the attribute 'DeltaT_Constant' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDeltaT_Constant() const;
        /**
         * Gets the value of the explicit attribute 'DeltaT_Y'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getDeltaT_Y();
        /**
         * (const) Returns the value of the explicit attribute 'DeltaT_Y'.
         * 
         * @return the value of the explicit attribute 'DeltaT_Y'
         */
        virtual const IfcThermodynamicTemperatureMeasure getDeltaT_Y() const;
        /**
         * Sets the value of the explicit attribute 'DeltaT_Y'.
         * 
         * @param value
         */
        virtual void setDeltaT_Y(IfcThermodynamicTemperatureMeasure value);
        /**
         * unset the attribute 'DeltaT_Y'.
         * 
         */
        virtual void unsetDeltaT_Y();
        /**
         * Test if the attribute 'DeltaT_Y' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDeltaT_Y() const;
        /**
         * Gets the value of the explicit attribute 'DeltaT_Z'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getDeltaT_Z();
        /**
         * (const) Returns the value of the explicit attribute 'DeltaT_Z'.
         * 
         * @return the value of the explicit attribute 'DeltaT_Z'
         */
        virtual const IfcThermodynamicTemperatureMeasure getDeltaT_Z() const;
        /**
         * Sets the value of the explicit attribute 'DeltaT_Z'.
         * 
         * @param value
         */
        virtual void setDeltaT_Z(IfcThermodynamicTemperatureMeasure value);
        /**
         * unset the attribute 'DeltaT_Z'.
         * 
         */
        virtual void unsetDeltaT_Z();
        /**
         * Test if the attribute 'DeltaT_Z' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDeltaT_Z() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadTemperature(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadTemperature();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadTemperature &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_deltaT_Constant;
        /**
         */
        Step::Real m_deltaT_Y;
        /**
         */
        Step::Real m_deltaT_Z;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADTEMPERATURE_H
