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

#include <ifc2x3/IfcPropertySetDefinition.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcSoundValue Entity.
     *
     */
    class IFC2X3_EXPORT IfcSoundValue : public IfcPropertySetDefinition
    {

        // Attributes
        Step::RefPtr< IfcTimeSeries > m_SoundLevelTimeSeries;
        IfcFrequencyMeasure m_Frequency;
        Step::RefPtr< IfcDerivedMeasureValue > m_SoundLevelSingleValue;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute SoundLevelTimeSeries
        /// @{
        virtual IfcTimeSeries *getSoundLevelTimeSeries();
        virtual const IfcTimeSeries *getSoundLevelTimeSeries() const;
        virtual void setSoundLevelTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        virtual void unsetSoundLevelTimeSeries();
        virtual bool testSoundLevelTimeSeries() const;
        /// @}

        /// Attribute Frequency
        /// @{
        virtual IfcFrequencyMeasure getFrequency();
        virtual IfcFrequencyMeasure getFrequency() const;
        virtual void setFrequency(IfcFrequencyMeasure value);
        virtual void unsetFrequency();
        virtual bool testFrequency() const;
        /// @}

        /// Attribute SoundLevelSingleValue
        /// @{
        virtual IfcDerivedMeasureValue *getSoundLevelSingleValue();
        virtual const IfcDerivedMeasureValue *getSoundLevelSingleValue() const;
        virtual void setSoundLevelSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value);
        virtual void unsetSoundLevelSingleValue();
        virtual bool testSoundLevelSingleValue() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcSoundValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcSoundValue();

        virtual bool init();

        virtual void copy(const IfcSoundValue &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3