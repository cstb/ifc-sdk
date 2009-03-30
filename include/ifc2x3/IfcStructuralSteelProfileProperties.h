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

#ifndef IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
#define IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcStructuralProfileProperties.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStructuralSteelProfileProperties Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcStructuralSteelProfileProperties : public IfcStructuralProfileProperties {
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
         * Gets the value of the explicit attribute 'ShearAreaZ'.
         * 
         */
        virtual IfcAreaMeasure getShearAreaZ();
        /**
         * (const) Returns the value of the explicit attribute 'ShearAreaZ'.
         * 
         * @return the value of the explicit attribute 'ShearAreaZ'
         */
        virtual const IfcAreaMeasure getShearAreaZ() const;
        /**
         * Sets the value of the explicit attribute 'ShearAreaZ'.
         * 
         * @param value
         */
        virtual void setShearAreaZ(IfcAreaMeasure value);
        /**
         * unset the attribute 'ShearAreaZ'.
         * 
         */
        virtual void unsetShearAreaZ();
        /**
         * Test if the attribute 'ShearAreaZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShearAreaZ() const;
        /**
         * Gets the value of the explicit attribute 'ShearAreaY'.
         * 
         */
        virtual IfcAreaMeasure getShearAreaY();
        /**
         * (const) Returns the value of the explicit attribute 'ShearAreaY'.
         * 
         * @return the value of the explicit attribute 'ShearAreaY'
         */
        virtual const IfcAreaMeasure getShearAreaY() const;
        /**
         * Sets the value of the explicit attribute 'ShearAreaY'.
         * 
         * @param value
         */
        virtual void setShearAreaY(IfcAreaMeasure value);
        /**
         * unset the attribute 'ShearAreaY'.
         * 
         */
        virtual void unsetShearAreaY();
        /**
         * Test if the attribute 'ShearAreaY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShearAreaY() const;
        /**
         * Gets the value of the explicit attribute 'PlasticShapeFactorY'.
         * 
         */
        virtual IfcPositiveRatioMeasure getPlasticShapeFactorY();
        /**
         * (const) Returns the value of the explicit attribute 'PlasticShapeFactorY'.
         * 
         * @return the value of the explicit attribute 'PlasticShapeFactorY'
         */
        virtual const IfcPositiveRatioMeasure getPlasticShapeFactorY() const;
        /**
         * Sets the value of the explicit attribute 'PlasticShapeFactorY'.
         * 
         * @param value
         */
        virtual void setPlasticShapeFactorY(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'PlasticShapeFactorY'.
         * 
         */
        virtual void unsetPlasticShapeFactorY();
        /**
         * Test if the attribute 'PlasticShapeFactorY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlasticShapeFactorY() const;
        /**
         * Gets the value of the explicit attribute 'PlasticShapeFactorZ'.
         * 
         */
        virtual IfcPositiveRatioMeasure getPlasticShapeFactorZ();
        /**
         * (const) Returns the value of the explicit attribute 'PlasticShapeFactorZ'.
         * 
         * @return the value of the explicit attribute 'PlasticShapeFactorZ'
         */
        virtual const IfcPositiveRatioMeasure getPlasticShapeFactorZ() const;
        /**
         * Sets the value of the explicit attribute 'PlasticShapeFactorZ'.
         * 
         * @param value
         */
        virtual void setPlasticShapeFactorZ(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'PlasticShapeFactorZ'.
         * 
         */
        virtual void unsetPlasticShapeFactorZ();
        /**
         * Test if the attribute 'PlasticShapeFactorZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlasticShapeFactorZ() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralSteelProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralSteelProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_shearAreaZ;
        /**
         */
        Step::Real m_shearAreaY;
        /**
         */
        Step::Real m_plasticShapeFactorY;
        /**
         */
        Step::Real m_plasticShapeFactorZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
