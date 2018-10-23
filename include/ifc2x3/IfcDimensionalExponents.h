#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseEntity.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcDimensionalExponents Entity.
     *
     */
    class IFC2X3_EXPORT IfcDimensionalExponents : public Step::BaseEntity
    {

        // Attributes
        Step::Integer m_LengthExponent;
        Step::Integer m_MassExponent;
        Step::Integer m_TimeExponent;
        Step::Integer m_ElectricCurrentExponent;
        Step::Integer m_ThermodynamicTemperatureExponent;
        Step::Integer m_AmountOfSubstanceExponent;
        Step::Integer m_LuminousIntensityExponent;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LengthExponent
        /// @{
        virtual Step::Integer getLengthExponent();
        virtual Step::Integer getLengthExponent() const;
        virtual void setLengthExponent(Step::Integer value);
        virtual void unsetLengthExponent();
        virtual bool testLengthExponent() const;
        /// @}

        /// Attribute MassExponent
        /// @{
        virtual Step::Integer getMassExponent();
        virtual Step::Integer getMassExponent() const;
        virtual void setMassExponent(Step::Integer value);
        virtual void unsetMassExponent();
        virtual bool testMassExponent() const;
        /// @}

        /// Attribute TimeExponent
        /// @{
        virtual Step::Integer getTimeExponent();
        virtual Step::Integer getTimeExponent() const;
        virtual void setTimeExponent(Step::Integer value);
        virtual void unsetTimeExponent();
        virtual bool testTimeExponent() const;
        /// @}

        /// Attribute ElectricCurrentExponent
        /// @{
        virtual Step::Integer getElectricCurrentExponent();
        virtual Step::Integer getElectricCurrentExponent() const;
        virtual void setElectricCurrentExponent(Step::Integer value);
        virtual void unsetElectricCurrentExponent();
        virtual bool testElectricCurrentExponent() const;
        /// @}

        /// Attribute ThermodynamicTemperatureExponent
        /// @{
        virtual Step::Integer getThermodynamicTemperatureExponent();
        virtual Step::Integer getThermodynamicTemperatureExponent() const;
        virtual void setThermodynamicTemperatureExponent(Step::Integer value);
        virtual void unsetThermodynamicTemperatureExponent();
        virtual bool testThermodynamicTemperatureExponent() const;
        /// @}

        /// Attribute AmountOfSubstanceExponent
        /// @{
        virtual Step::Integer getAmountOfSubstanceExponent();
        virtual Step::Integer getAmountOfSubstanceExponent() const;
        virtual void setAmountOfSubstanceExponent(Step::Integer value);
        virtual void unsetAmountOfSubstanceExponent();
        virtual bool testAmountOfSubstanceExponent() const;
        /// @}

        /// Attribute LuminousIntensityExponent
        /// @{
        virtual Step::Integer getLuminousIntensityExponent();
        virtual Step::Integer getLuminousIntensityExponent() const;
        virtual void setLuminousIntensityExponent(Step::Integer value);
        virtual void unsetLuminousIntensityExponent();
        virtual bool testLuminousIntensityExponent() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcDimensionalExponents(Step::Id id, Step::SPFData *args);
        virtual ~IfcDimensionalExponents();

        virtual bool init();

        virtual void copy(const IfcDimensionalExponents &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3