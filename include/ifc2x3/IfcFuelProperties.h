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

#ifndef IFC2X3_IFCFUELPROPERTIES_H
#define IFC2X3_IFCFUELPROPERTIES_H
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
     * Generated class for the IfcFuelProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcFuelProperties : public IfcMaterialProperties {
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
         * unset the attribute 'CombustionTemperature'.
         * 
         */
        virtual void unsetCombustionTemperature();
        /**
         * Test if the attribute 'CombustionTemperature' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCombustionTemperature() const;
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
         * unset the attribute 'CarbonContent'.
         * 
         */
        virtual void unsetCarbonContent();
        /**
         * Test if the attribute 'CarbonContent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCarbonContent() const;
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
         * unset the attribute 'LowerHeatingValue'.
         * 
         */
        virtual void unsetLowerHeatingValue();
        /**
         * Test if the attribute 'LowerHeatingValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLowerHeatingValue() const;
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
        /**
         * unset the attribute 'HigherHeatingValue'.
         * 
         */
        virtual void unsetHigherHeatingValue();
        /**
         * Test if the attribute 'HigherHeatingValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHigherHeatingValue() const;
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
