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
     * Generated class for the IfcLocalTime Entity.
     *
     */
    class IFC2X3_EXPORT IfcLocalTime : public Step::BaseEntity
    {

        // Attributes
        IfcHourInDay m_HourComponent;
        IfcMinuteInHour m_MinuteComponent;
        IfcSecondInMinute m_SecondComponent;
        Step::RefPtr< IfcCoordinatedUniversalTimeOffset > m_Zone;
        IfcDaylightSavingHour m_DaylightSavingOffset;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute HourComponent
        /// @{
        virtual IfcHourInDay getHourComponent();
        virtual IfcHourInDay getHourComponent() const;
        virtual void setHourComponent(IfcHourInDay value);
        virtual void unsetHourComponent();
        virtual bool testHourComponent() const;
        /// @}

        /// Attribute MinuteComponent
        /// @{
        virtual IfcMinuteInHour getMinuteComponent();
        virtual IfcMinuteInHour getMinuteComponent() const;
        virtual void setMinuteComponent(IfcMinuteInHour value);
        virtual void unsetMinuteComponent();
        virtual bool testMinuteComponent() const;
        /// @}

        /// Attribute SecondComponent
        /// @{
        virtual IfcSecondInMinute getSecondComponent();
        virtual IfcSecondInMinute getSecondComponent() const;
        virtual void setSecondComponent(IfcSecondInMinute value);
        virtual void unsetSecondComponent();
        virtual bool testSecondComponent() const;
        /// @}

        /// Attribute Zone
        /// @{
        virtual IfcCoordinatedUniversalTimeOffset *getZone();
        virtual const IfcCoordinatedUniversalTimeOffset *getZone() const;
        virtual void setZone(const Step::RefPtr< IfcCoordinatedUniversalTimeOffset > &value);
        virtual void unsetZone();
        virtual bool testZone() const;
        /// @}

        /// Attribute DaylightSavingOffset
        /// @{
        virtual IfcDaylightSavingHour getDaylightSavingOffset();
        virtual IfcDaylightSavingHour getDaylightSavingOffset() const;
        virtual void setDaylightSavingOffset(IfcDaylightSavingHour value);
        virtual void unsetDaylightSavingOffset();
        virtual bool testDaylightSavingOffset() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcLocalTime(Step::Id id, Step::SPFData *args);
        virtual ~IfcLocalTime();

        virtual bool init();

        virtual void copy(const IfcLocalTime &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3