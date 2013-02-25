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

#ifndef IFC2X3_IFCTHERMALMATERIALPROPERTIES_H
#define IFC2X3_IFCTHERMALMATERIALPROPERTIES_H
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
     * Generated class for the IfcThermalMaterialProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcThermalMaterialProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         */
        virtual IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity();
        /**
         * (const) Returns the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         * @return the value of the explicit attribute 'SpecificHeatCapacity'
         */
        virtual const IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity() const;
        /**
         * Sets the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         * @param value
         */
        virtual void setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value);
        /**
         * unset the attribute 'SpecificHeatCapacity'.
         * 
         */
        virtual void unsetSpecificHeatCapacity();
        /**
         * Test if the attribute 'SpecificHeatCapacity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSpecificHeatCapacity() const;
        /**
         * Gets the value of the explicit attribute 'BoilingPoint'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getBoilingPoint();
        /**
         * (const) Returns the value of the explicit attribute 'BoilingPoint'.
         * 
         * @return the value of the explicit attribute 'BoilingPoint'
         */
        virtual const IfcThermodynamicTemperatureMeasure getBoilingPoint() const;
        /**
         * Sets the value of the explicit attribute 'BoilingPoint'.
         * 
         * @param value
         */
        virtual void setBoilingPoint(IfcThermodynamicTemperatureMeasure value);
        /**
         * unset the attribute 'BoilingPoint'.
         * 
         */
        virtual void unsetBoilingPoint();
        /**
         * Test if the attribute 'BoilingPoint' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBoilingPoint() const;
        /**
         * Gets the value of the explicit attribute 'FreezingPoint'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getFreezingPoint();
        /**
         * (const) Returns the value of the explicit attribute 'FreezingPoint'.
         * 
         * @return the value of the explicit attribute 'FreezingPoint'
         */
        virtual const IfcThermodynamicTemperatureMeasure getFreezingPoint() const;
        /**
         * Sets the value of the explicit attribute 'FreezingPoint'.
         * 
         * @param value
         */
        virtual void setFreezingPoint(IfcThermodynamicTemperatureMeasure value);
        /**
         * unset the attribute 'FreezingPoint'.
         * 
         */
        virtual void unsetFreezingPoint();
        /**
         * Test if the attribute 'FreezingPoint' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFreezingPoint() const;
        /**
         * Gets the value of the explicit attribute 'ThermalConductivity'.
         * 
         */
        virtual IfcThermalConductivityMeasure getThermalConductivity();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalConductivity'.
         * 
         * @return the value of the explicit attribute 'ThermalConductivity'
         */
        virtual const IfcThermalConductivityMeasure getThermalConductivity() const;
        /**
         * Sets the value of the explicit attribute 'ThermalConductivity'.
         * 
         * @param value
         */
        virtual void setThermalConductivity(IfcThermalConductivityMeasure value);
        /**
         * unset the attribute 'ThermalConductivity'.
         * 
         */
        virtual void unsetThermalConductivity();
        /**
         * Test if the attribute 'ThermalConductivity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThermalConductivity() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcThermalMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcThermalMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcThermalMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_specificHeatCapacity;
        /**
         */
        Step::Real m_boilingPoint;
        /**
         */
        Step::Real m_freezingPoint;
        /**
         */
        Step::Real m_thermalConductivity;

    };

}

#endif // IFC2X3_IFCTHERMALMATERIALPROPERTIES_H
