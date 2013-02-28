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

#ifndef IFC2X3_IFCHYGROSCOPICMATERIALPROPERTIES_H
#define IFC2X3_IFCHYGROSCOPICMATERIALPROPERTIES_H
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
     * Generated class for the IfcHygroscopicMaterialProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcHygroscopicMaterialProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'UpperVaporResistanceFactor'.
         * 
         */
        virtual IfcPositiveRatioMeasure getUpperVaporResistanceFactor();
        /**
         * (const) Returns the value of the explicit attribute 'UpperVaporResistanceFactor'.
         * 
         * @return the value of the explicit attribute 'UpperVaporResistanceFactor'
         */
        virtual const IfcPositiveRatioMeasure getUpperVaporResistanceFactor() const;
        /**
         * Sets the value of the explicit attribute 'UpperVaporResistanceFactor'.
         * 
         * @param value
         */
        virtual void setUpperVaporResistanceFactor(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'UpperVaporResistanceFactor'.
         * 
         */
        virtual void unsetUpperVaporResistanceFactor();
        /**
         * Test if the attribute 'UpperVaporResistanceFactor' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUpperVaporResistanceFactor() const;
        /**
         * Gets the value of the explicit attribute 'LowerVaporResistanceFactor'.
         * 
         */
        virtual IfcPositiveRatioMeasure getLowerVaporResistanceFactor();
        /**
         * (const) Returns the value of the explicit attribute 'LowerVaporResistanceFactor'.
         * 
         * @return the value of the explicit attribute 'LowerVaporResistanceFactor'
         */
        virtual const IfcPositiveRatioMeasure getLowerVaporResistanceFactor() const;
        /**
         * Sets the value of the explicit attribute 'LowerVaporResistanceFactor'.
         * 
         * @param value
         */
        virtual void setLowerVaporResistanceFactor(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'LowerVaporResistanceFactor'.
         * 
         */
        virtual void unsetLowerVaporResistanceFactor();
        /**
         * Test if the attribute 'LowerVaporResistanceFactor' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLowerVaporResistanceFactor() const;
        /**
         * Gets the value of the explicit attribute 'IsothermalMoistureCapacity'.
         * 
         */
        virtual IfcIsothermalMoistureCapacityMeasure getIsothermalMoistureCapacity();
        /**
         * (const) Returns the value of the explicit attribute 'IsothermalMoistureCapacity'.
         * 
         * @return the value of the explicit attribute 'IsothermalMoistureCapacity'
         */
        virtual const IfcIsothermalMoistureCapacityMeasure getIsothermalMoistureCapacity() const;
        /**
         * Sets the value of the explicit attribute 'IsothermalMoistureCapacity'.
         * 
         * @param value
         */
        virtual void setIsothermalMoistureCapacity(IfcIsothermalMoistureCapacityMeasure value);
        /**
         * unset the attribute 'IsothermalMoistureCapacity'.
         * 
         */
        virtual void unsetIsothermalMoistureCapacity();
        /**
         * Test if the attribute 'IsothermalMoistureCapacity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsothermalMoistureCapacity() const;
        /**
         * Gets the value of the explicit attribute 'VaporPermeability'.
         * 
         */
        virtual IfcVaporPermeabilityMeasure getVaporPermeability();
        /**
         * (const) Returns the value of the explicit attribute 'VaporPermeability'.
         * 
         * @return the value of the explicit attribute 'VaporPermeability'
         */
        virtual const IfcVaporPermeabilityMeasure getVaporPermeability() const;
        /**
         * Sets the value of the explicit attribute 'VaporPermeability'.
         * 
         * @param value
         */
        virtual void setVaporPermeability(IfcVaporPermeabilityMeasure value);
        /**
         * unset the attribute 'VaporPermeability'.
         * 
         */
        virtual void unsetVaporPermeability();
        /**
         * Test if the attribute 'VaporPermeability' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testVaporPermeability() const;
        /**
         * Gets the value of the explicit attribute 'MoistureDiffusivity'.
         * 
         */
        virtual IfcMoistureDiffusivityMeasure getMoistureDiffusivity();
        /**
         * (const) Returns the value of the explicit attribute 'MoistureDiffusivity'.
         * 
         * @return the value of the explicit attribute 'MoistureDiffusivity'
         */
        virtual const IfcMoistureDiffusivityMeasure getMoistureDiffusivity() const;
        /**
         * Sets the value of the explicit attribute 'MoistureDiffusivity'.
         * 
         * @param value
         */
        virtual void setMoistureDiffusivity(IfcMoistureDiffusivityMeasure value);
        /**
         * unset the attribute 'MoistureDiffusivity'.
         * 
         */
        virtual void unsetMoistureDiffusivity();
        /**
         * Test if the attribute 'MoistureDiffusivity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMoistureDiffusivity() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcHygroscopicMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcHygroscopicMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcHygroscopicMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_upperVaporResistanceFactor;
        /**
         */
        Step::Real m_lowerVaporResistanceFactor;
        /**
         */
        Step::Real m_isothermalMoistureCapacity;
        /**
         */
        Step::Real m_vaporPermeability;
        /**
         */
        Step::Real m_moistureDiffusivity;

    };

}

#endif // IFC2X3_IFCHYGROSCOPICMATERIALPROPERTIES_H
