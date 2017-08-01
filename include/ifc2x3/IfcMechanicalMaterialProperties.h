// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCMECHANICALMATERIALPROPERTIES_H
#define IFC2X3_IFCMECHANICALMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcMaterialProperties.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcMechanicalMaterialProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcMechanicalMaterialProperties : public IfcMaterialProperties {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        bool acceptVisitor(Step::BaseVisitor *visitor) override;
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        const std::string &type() const override;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        const Step::ClassType &getType() const override;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        bool isOfType(const Step::ClassType &t) const override;
        /**
         * Gets the value of the explicit attribute 'DynamicViscosity'.
         * 
         */
        virtual IfcDynamicViscosityMeasure getDynamicViscosity();
        /**
         * (const) Returns the value of the explicit attribute 'DynamicViscosity'.
         * 
         * @return the value of the explicit attribute 'DynamicViscosity'
         */
        virtual const IfcDynamicViscosityMeasure getDynamicViscosity() const;
        /**
         * Sets the value of the explicit attribute 'DynamicViscosity'.
         * 
         * @param value
         */
        virtual void setDynamicViscosity(IfcDynamicViscosityMeasure value);
        /**
         * unset the attribute 'DynamicViscosity'.
         * 
         */
        virtual void unsetDynamicViscosity();
        /**
         * Test if the attribute 'DynamicViscosity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDynamicViscosity() const;
        /**
         * Gets the value of the explicit attribute 'YoungModulus'.
         * 
         */
        virtual IfcModulusOfElasticityMeasure getYoungModulus();
        /**
         * (const) Returns the value of the explicit attribute 'YoungModulus'.
         * 
         * @return the value of the explicit attribute 'YoungModulus'
         */
        virtual const IfcModulusOfElasticityMeasure getYoungModulus() const;
        /**
         * Sets the value of the explicit attribute 'YoungModulus'.
         * 
         * @param value
         */
        virtual void setYoungModulus(IfcModulusOfElasticityMeasure value);
        /**
         * unset the attribute 'YoungModulus'.
         * 
         */
        virtual void unsetYoungModulus();
        /**
         * Test if the attribute 'YoungModulus' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testYoungModulus() const;
        /**
         * Gets the value of the explicit attribute 'ShearModulus'.
         * 
         */
        virtual IfcModulusOfElasticityMeasure getShearModulus();
        /**
         * (const) Returns the value of the explicit attribute 'ShearModulus'.
         * 
         * @return the value of the explicit attribute 'ShearModulus'
         */
        virtual const IfcModulusOfElasticityMeasure getShearModulus() const;
        /**
         * Sets the value of the explicit attribute 'ShearModulus'.
         * 
         * @param value
         */
        virtual void setShearModulus(IfcModulusOfElasticityMeasure value);
        /**
         * unset the attribute 'ShearModulus'.
         * 
         */
        virtual void unsetShearModulus();
        /**
         * Test if the attribute 'ShearModulus' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShearModulus() const;
        /**
         * Gets the value of the explicit attribute 'PoissonRatio'.
         * 
         */
        virtual IfcPositiveRatioMeasure getPoissonRatio();
        /**
         * (const) Returns the value of the explicit attribute 'PoissonRatio'.
         * 
         * @return the value of the explicit attribute 'PoissonRatio'
         */
        virtual const IfcPositiveRatioMeasure getPoissonRatio() const;
        /**
         * Sets the value of the explicit attribute 'PoissonRatio'.
         * 
         * @param value
         */
        virtual void setPoissonRatio(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'PoissonRatio'.
         * 
         */
        virtual void unsetPoissonRatio();
        /**
         * Test if the attribute 'PoissonRatio' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPoissonRatio() const;
        /**
         * Gets the value of the explicit attribute 'ThermalExpansionCoefficient'.
         * 
         */
        virtual IfcThermalExpansionCoefficientMeasure getThermalExpansionCoefficient();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalExpansionCoefficient'.
         * 
         * @return the value of the explicit attribute 'ThermalExpansionCoefficient'
         */
        virtual const IfcThermalExpansionCoefficientMeasure getThermalExpansionCoefficient() const;
        /**
         * Sets the value of the explicit attribute 'ThermalExpansionCoefficient'.
         * 
         * @param value
         */
        virtual void setThermalExpansionCoefficient(IfcThermalExpansionCoefficientMeasure value);
        /**
         * unset the attribute 'ThermalExpansionCoefficient'.
         * 
         */
        virtual void unsetThermalExpansionCoefficient();
        /**
         * Test if the attribute 'ThermalExpansionCoefficient' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThermalExpansionCoefficient() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMechanicalMaterialProperties(Step::Id id, Step::SPFData *args);
        ~IfcMechanicalMaterialProperties() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMechanicalMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_dynamicViscosity;
        /**
         */
        Step::Real m_youngModulus;
        /**
         */
        Step::Real m_shearModulus;
        /**
         */
        Step::Real m_poissonRatio;
        /**
         */
        Step::Real m_thermalExpansionCoefficient;

    };

}

#endif // IFC2X3_IFCMECHANICALMATERIALPROPERTIES_H
