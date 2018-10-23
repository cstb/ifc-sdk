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
     * Generated class for the IfcCurrencyRelationship Entity.
     *
     */
    class IFC2X3_EXPORT IfcCurrencyRelationship : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcMonetaryUnit > m_RelatingMonetaryUnit;
        Step::RefPtr< IfcMonetaryUnit > m_RelatedMonetaryUnit;
        IfcPositiveRatioMeasure m_ExchangeRate;
        Step::RefPtr< IfcDateAndTime > m_RateDateTime;
        Step::RefPtr< IfcLibraryInformation > m_RateSource;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RelatingMonetaryUnit
        /// @{
        virtual IfcMonetaryUnit *getRelatingMonetaryUnit();
        virtual const IfcMonetaryUnit *getRelatingMonetaryUnit() const;
        virtual void setRelatingMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value);
        virtual void unsetRelatingMonetaryUnit();
        virtual bool testRelatingMonetaryUnit() const;
        /// @}

        /// Attribute RelatedMonetaryUnit
        /// @{
        virtual IfcMonetaryUnit *getRelatedMonetaryUnit();
        virtual const IfcMonetaryUnit *getRelatedMonetaryUnit() const;
        virtual void setRelatedMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value);
        virtual void unsetRelatedMonetaryUnit();
        virtual bool testRelatedMonetaryUnit() const;
        /// @}

        /// Attribute ExchangeRate
        /// @{
        virtual IfcPositiveRatioMeasure getExchangeRate();
        virtual IfcPositiveRatioMeasure getExchangeRate() const;
        virtual void setExchangeRate(IfcPositiveRatioMeasure value);
        virtual void unsetExchangeRate();
        virtual bool testExchangeRate() const;
        /// @}

        /// Attribute RateDateTime
        /// @{
        virtual IfcDateAndTime *getRateDateTime();
        virtual const IfcDateAndTime *getRateDateTime() const;
        virtual void setRateDateTime(const Step::RefPtr< IfcDateAndTime > &value);
        virtual void unsetRateDateTime();
        virtual bool testRateDateTime() const;
        /// @}

        /// Attribute RateSource
        /// @{
        virtual IfcLibraryInformation *getRateSource();
        virtual const IfcLibraryInformation *getRateSource() const;
        virtual void setRateSource(const Step::RefPtr< IfcLibraryInformation > &value);
        virtual void unsetRateSource();
        virtual bool testRateSource() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcCurrencyRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurrencyRelationship();

        virtual bool init();

        virtual void copy(const IfcCurrencyRelationship &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3