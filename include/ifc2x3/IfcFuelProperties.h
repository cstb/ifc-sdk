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

#ifndef IFC2X3_IFCFUELPROPERTIES_H
#define IFC2X3_IFCFUELPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcMaterialProperties.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcFuelProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'CombustionTemperature'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getCombustionTemperature();
        /**
         * (const) Returns the value of the explicit attribute 'CombustionTemperature'.
         * 
         * @return the value of the explicit attribute 'CombustionTemperature'
         */
        virtual const IfcThermodynamicTemperatureMeasure getCombustionTemperature() const;
        /**
         * Sets the value of the explicit attribute 'CombustionTemperature'.
         * 
         * @param value
         */
        virtual void setCombustionTemperature(IfcThermodynamicTemperatureMeasure value);
        /**
         * Gets the value of the explicit attribute 'CarbonContent'.
         * 
         */
        virtual IfcPositiveRatioMeasure getCarbonContent();
        /**
         * (const) Returns the value of the explicit attribute 'CarbonContent'.
         * 
         * @return the value of the explicit attribute 'CarbonContent'
         */
        virtual const IfcPositiveRatioMeasure getCarbonContent() const;
        /**
         * Sets the value of the explicit attribute 'CarbonContent'.
         * 
         * @param value
         */
        virtual void setCarbonContent(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'LowerHeatingValue'.
         * 
         */
        virtual IfcHeatingValueMeasure getLowerHeatingValue();
        /**
         * (const) Returns the value of the explicit attribute 'LowerHeatingValue'.
         * 
         * @return the value of the explicit attribute 'LowerHeatingValue'
         */
        virtual const IfcHeatingValueMeasure getLowerHeatingValue() const;
        /**
         * Sets the value of the explicit attribute 'LowerHeatingValue'.
         * 
         * @param value
         */
        virtual void setLowerHeatingValue(IfcHeatingValueMeasure value);
        /**
         * Gets the value of the explicit attribute 'HigherHeatingValue'.
         * 
         */
        virtual IfcHeatingValueMeasure getHigherHeatingValue();
        /**
         * (const) Returns the value of the explicit attribute 'HigherHeatingValue'.
         * 
         * @return the value of the explicit attribute 'HigherHeatingValue'
         */
        virtual const IfcHeatingValueMeasure getHigherHeatingValue() const;
        /**
         * Sets the value of the explicit attribute 'HigherHeatingValue'.
         * 
         * @param value
         */
        virtual void setHigherHeatingValue(IfcHeatingValueMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFuelProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcFuelProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFuelProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_combustionTemperature;
        /**
         */
        Step::Real m_carbonContent;
        /**
         */
        Step::Real m_lowerHeatingValue;
        /**
         */
        Step::Real m_higherHeatingValue;

    };

}

#endif // IFC2X3_IFCFUELPROPERTIES_H
