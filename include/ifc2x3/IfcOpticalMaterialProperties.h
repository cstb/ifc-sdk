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

#ifndef IFC2X3_IFCOPTICALMATERIALPROPERTIES_H
#define IFC2X3_IFCOPTICALMATERIALPROPERTIES_H
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
     * Generated class for the IfcOpticalMaterialProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcOpticalMaterialProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'VisibleTransmittance'.
         * 
         */
        virtual IfcPositiveRatioMeasure getVisibleTransmittance();
        /**
         * (const) Returns the value of the explicit attribute 'VisibleTransmittance'.
         * 
         * @return the value of the explicit attribute 'VisibleTransmittance'
         */
        virtual const IfcPositiveRatioMeasure getVisibleTransmittance() const;
        /**
         * Sets the value of the explicit attribute 'VisibleTransmittance'.
         * 
         * @param value
         */
        virtual void setVisibleTransmittance(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'VisibleTransmittance'.
         * 
         */
        virtual void unsetVisibleTransmittance();
        /**
         * Test if the attribute 'VisibleTransmittance' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testVisibleTransmittance() const;
        /**
         * Gets the value of the explicit attribute 'SolarTransmittance'.
         * 
         */
        virtual IfcPositiveRatioMeasure getSolarTransmittance();
        /**
         * (const) Returns the value of the explicit attribute 'SolarTransmittance'.
         * 
         * @return the value of the explicit attribute 'SolarTransmittance'
         */
        virtual const IfcPositiveRatioMeasure getSolarTransmittance() const;
        /**
         * Sets the value of the explicit attribute 'SolarTransmittance'.
         * 
         * @param value
         */
        virtual void setSolarTransmittance(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'SolarTransmittance'.
         * 
         */
        virtual void unsetSolarTransmittance();
        /**
         * Test if the attribute 'SolarTransmittance' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSolarTransmittance() const;
        /**
         * Gets the value of the explicit attribute 'ThermalIrTransmittance'.
         * 
         */
        virtual IfcPositiveRatioMeasure getThermalIrTransmittance();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalIrTransmittance'.
         * 
         * @return the value of the explicit attribute 'ThermalIrTransmittance'
         */
        virtual const IfcPositiveRatioMeasure getThermalIrTransmittance() const;
        /**
         * Sets the value of the explicit attribute 'ThermalIrTransmittance'.
         * 
         * @param value
         */
        virtual void setThermalIrTransmittance(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'ThermalIrTransmittance'.
         * 
         */
        virtual void unsetThermalIrTransmittance();
        /**
         * Test if the attribute 'ThermalIrTransmittance' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThermalIrTransmittance() const;
        /**
         * Gets the value of the explicit attribute 'ThermalIrEmissivityBack'.
         * 
         */
        virtual IfcPositiveRatioMeasure getThermalIrEmissivityBack();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalIrEmissivityBack'.
         * 
         * @return the value of the explicit attribute 'ThermalIrEmissivityBack'
         */
        virtual const IfcPositiveRatioMeasure getThermalIrEmissivityBack() const;
        /**
         * Sets the value of the explicit attribute 'ThermalIrEmissivityBack'.
         * 
         * @param value
         */
        virtual void setThermalIrEmissivityBack(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'ThermalIrEmissivityBack'.
         * 
         */
        virtual void unsetThermalIrEmissivityBack();
        /**
         * Test if the attribute 'ThermalIrEmissivityBack' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThermalIrEmissivityBack() const;
        /**
         * Gets the value of the explicit attribute 'ThermalIrEmissivityFront'.
         * 
         */
        virtual IfcPositiveRatioMeasure getThermalIrEmissivityFront();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalIrEmissivityFront'.
         * 
         * @return the value of the explicit attribute 'ThermalIrEmissivityFront'
         */
        virtual const IfcPositiveRatioMeasure getThermalIrEmissivityFront() const;
        /**
         * Sets the value of the explicit attribute 'ThermalIrEmissivityFront'.
         * 
         * @param value
         */
        virtual void setThermalIrEmissivityFront(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'ThermalIrEmissivityFront'.
         * 
         */
        virtual void unsetThermalIrEmissivityFront();
        /**
         * Test if the attribute 'ThermalIrEmissivityFront' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThermalIrEmissivityFront() const;
        /**
         * Gets the value of the explicit attribute 'VisibleReflectanceBack'.
         * 
         */
        virtual IfcPositiveRatioMeasure getVisibleReflectanceBack();
        /**
         * (const) Returns the value of the explicit attribute 'VisibleReflectanceBack'.
         * 
         * @return the value of the explicit attribute 'VisibleReflectanceBack'
         */
        virtual const IfcPositiveRatioMeasure getVisibleReflectanceBack() const;
        /**
         * Sets the value of the explicit attribute 'VisibleReflectanceBack'.
         * 
         * @param value
         */
        virtual void setVisibleReflectanceBack(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'VisibleReflectanceBack'.
         * 
         */
        virtual void unsetVisibleReflectanceBack();
        /**
         * Test if the attribute 'VisibleReflectanceBack' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testVisibleReflectanceBack() const;
        /**
         * Gets the value of the explicit attribute 'VisibleReflectanceFront'.
         * 
         */
        virtual IfcPositiveRatioMeasure getVisibleReflectanceFront();
        /**
         * (const) Returns the value of the explicit attribute 'VisibleReflectanceFront'.
         * 
         * @return the value of the explicit attribute 'VisibleReflectanceFront'
         */
        virtual const IfcPositiveRatioMeasure getVisibleReflectanceFront() const;
        /**
         * Sets the value of the explicit attribute 'VisibleReflectanceFront'.
         * 
         * @param value
         */
        virtual void setVisibleReflectanceFront(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'VisibleReflectanceFront'.
         * 
         */
        virtual void unsetVisibleReflectanceFront();
        /**
         * Test if the attribute 'VisibleReflectanceFront' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testVisibleReflectanceFront() const;
        /**
         * Gets the value of the explicit attribute 'SolarReflectanceFront'.
         * 
         */
        virtual IfcPositiveRatioMeasure getSolarReflectanceFront();
        /**
         * (const) Returns the value of the explicit attribute 'SolarReflectanceFront'.
         * 
         * @return the value of the explicit attribute 'SolarReflectanceFront'
         */
        virtual const IfcPositiveRatioMeasure getSolarReflectanceFront() const;
        /**
         * Sets the value of the explicit attribute 'SolarReflectanceFront'.
         * 
         * @param value
         */
        virtual void setSolarReflectanceFront(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'SolarReflectanceFront'.
         * 
         */
        virtual void unsetSolarReflectanceFront();
        /**
         * Test if the attribute 'SolarReflectanceFront' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSolarReflectanceFront() const;
        /**
         * Gets the value of the explicit attribute 'SolarReflectanceBack'.
         * 
         */
        virtual IfcPositiveRatioMeasure getSolarReflectanceBack();
        /**
         * (const) Returns the value of the explicit attribute 'SolarReflectanceBack'.
         * 
         * @return the value of the explicit attribute 'SolarReflectanceBack'
         */
        virtual const IfcPositiveRatioMeasure getSolarReflectanceBack() const;
        /**
         * Sets the value of the explicit attribute 'SolarReflectanceBack'.
         * 
         * @param value
         */
        virtual void setSolarReflectanceBack(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'SolarReflectanceBack'.
         * 
         */
        virtual void unsetSolarReflectanceBack();
        /**
         * Test if the attribute 'SolarReflectanceBack' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSolarReflectanceBack() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcOpticalMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcOpticalMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOpticalMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_visibleTransmittance;
        /**
         */
        Step::Real m_solarTransmittance;
        /**
         */
        Step::Real m_thermalIrTransmittance;
        /**
         */
        Step::Real m_thermalIrEmissivityBack;
        /**
         */
        Step::Real m_thermalIrEmissivityFront;
        /**
         */
        Step::Real m_visibleReflectanceBack;
        /**
         */
        Step::Real m_visibleReflectanceFront;
        /**
         */
        Step::Real m_solarReflectanceFront;
        /**
         */
        Step::Real m_solarReflectanceBack;

    };

}

#endif // IFC2X3_IFCOPTICALMATERIALPROPERTIES_H
