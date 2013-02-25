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

#ifndef IFC2X3_IFCDIMENSIONALEXPONENTS_H
#define IFC2X3_IFCDIMENSIONALEXPONENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcDimensionalExponents Entity.
     * 
     */
    class IFC2X3_EXPORT IfcDimensionalExponents : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'LengthExponent'.
         * 
         */
        virtual Step::Integer getLengthExponent();
        /**
         * (const) Returns the value of the explicit attribute 'LengthExponent'.
         * 
         * @return the value of the explicit attribute 'LengthExponent'
         */
        virtual const Step::Integer getLengthExponent() const;
        /**
         * Sets the value of the explicit attribute 'LengthExponent'.
         * 
         * @param value
         */
        virtual void setLengthExponent(Step::Integer value);
        /**
         * unset the attribute 'LengthExponent'.
         * 
         */
        virtual void unsetLengthExponent();
        /**
         * Test if the attribute 'LengthExponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLengthExponent() const;
        /**
         * Gets the value of the explicit attribute 'MassExponent'.
         * 
         */
        virtual Step::Integer getMassExponent();
        /**
         * (const) Returns the value of the explicit attribute 'MassExponent'.
         * 
         * @return the value of the explicit attribute 'MassExponent'
         */
        virtual const Step::Integer getMassExponent() const;
        /**
         * Sets the value of the explicit attribute 'MassExponent'.
         * 
         * @param value
         */
        virtual void setMassExponent(Step::Integer value);
        /**
         * unset the attribute 'MassExponent'.
         * 
         */
        virtual void unsetMassExponent();
        /**
         * Test if the attribute 'MassExponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMassExponent() const;
        /**
         * Gets the value of the explicit attribute 'TimeExponent'.
         * 
         */
        virtual Step::Integer getTimeExponent();
        /**
         * (const) Returns the value of the explicit attribute 'TimeExponent'.
         * 
         * @return the value of the explicit attribute 'TimeExponent'
         */
        virtual const Step::Integer getTimeExponent() const;
        /**
         * Sets the value of the explicit attribute 'TimeExponent'.
         * 
         * @param value
         */
        virtual void setTimeExponent(Step::Integer value);
        /**
         * unset the attribute 'TimeExponent'.
         * 
         */
        virtual void unsetTimeExponent();
        /**
         * Test if the attribute 'TimeExponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTimeExponent() const;
        /**
         * Gets the value of the explicit attribute 'ElectricCurrentExponent'.
         * 
         */
        virtual Step::Integer getElectricCurrentExponent();
        /**
         * (const) Returns the value of the explicit attribute 'ElectricCurrentExponent'.
         * 
         * @return the value of the explicit attribute 'ElectricCurrentExponent'
         */
        virtual const Step::Integer getElectricCurrentExponent() const;
        /**
         * Sets the value of the explicit attribute 'ElectricCurrentExponent'.
         * 
         * @param value
         */
        virtual void setElectricCurrentExponent(Step::Integer value);
        /**
         * unset the attribute 'ElectricCurrentExponent'.
         * 
         */
        virtual void unsetElectricCurrentExponent();
        /**
         * Test if the attribute 'ElectricCurrentExponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testElectricCurrentExponent() const;
        /**
         * Gets the value of the explicit attribute 'ThermodynamicTemperatureExponent'.
         * 
         */
        virtual Step::Integer getThermodynamicTemperatureExponent();
        /**
         * (const) Returns the value of the explicit attribute 'ThermodynamicTemperatureExponent'.
         * 
         * @return the value of the explicit attribute 'ThermodynamicTemperatureExponent'
         */
        virtual const Step::Integer getThermodynamicTemperatureExponent() const;
        /**
         * Sets the value of the explicit attribute 'ThermodynamicTemperatureExponent'.
         * 
         * @param value
         */
        virtual void setThermodynamicTemperatureExponent(Step::Integer value);
        /**
         * unset the attribute 'ThermodynamicTemperatureExponent'.
         * 
         */
        virtual void unsetThermodynamicTemperatureExponent();
        /**
         * Test if the attribute 'ThermodynamicTemperatureExponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThermodynamicTemperatureExponent() const;
        /**
         * Gets the value of the explicit attribute 'AmountOfSubstanceExponent'.
         * 
         */
        virtual Step::Integer getAmountOfSubstanceExponent();
        /**
         * (const) Returns the value of the explicit attribute 'AmountOfSubstanceExponent'.
         * 
         * @return the value of the explicit attribute 'AmountOfSubstanceExponent'
         */
        virtual const Step::Integer getAmountOfSubstanceExponent() const;
        /**
         * Sets the value of the explicit attribute 'AmountOfSubstanceExponent'.
         * 
         * @param value
         */
        virtual void setAmountOfSubstanceExponent(Step::Integer value);
        /**
         * unset the attribute 'AmountOfSubstanceExponent'.
         * 
         */
        virtual void unsetAmountOfSubstanceExponent();
        /**
         * Test if the attribute 'AmountOfSubstanceExponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAmountOfSubstanceExponent() const;
        /**
         * Gets the value of the explicit attribute 'LuminousIntensityExponent'.
         * 
         */
        virtual Step::Integer getLuminousIntensityExponent();
        /**
         * (const) Returns the value of the explicit attribute 'LuminousIntensityExponent'.
         * 
         * @return the value of the explicit attribute 'LuminousIntensityExponent'
         */
        virtual const Step::Integer getLuminousIntensityExponent() const;
        /**
         * Sets the value of the explicit attribute 'LuminousIntensityExponent'.
         * 
         * @param value
         */
        virtual void setLuminousIntensityExponent(Step::Integer value);
        /**
         * unset the attribute 'LuminousIntensityExponent'.
         * 
         */
        virtual void unsetLuminousIntensityExponent();
        /**
         * Test if the attribute 'LuminousIntensityExponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLuminousIntensityExponent() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDimensionalExponents(Step::Id id, Step::SPFData *args);
        virtual ~IfcDimensionalExponents();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDimensionalExponents &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_lengthExponent;
        /**
         */
        Step::Integer m_massExponent;
        /**
         */
        Step::Integer m_timeExponent;
        /**
         */
        Step::Integer m_electricCurrentExponent;
        /**
         */
        Step::Integer m_thermodynamicTemperatureExponent;
        /**
         */
        Step::Integer m_amountOfSubstanceExponent;
        /**
         */
        Step::Integer m_luminousIntensityExponent;

    };

}

#endif // IFC2X3_IFCDIMENSIONALEXPONENTS_H
