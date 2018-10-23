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
     * Generated class for the IfcCalendarDate Entity.
     *
     */
    class IFC2X3_EXPORT IfcCalendarDate : public Step::BaseEntity
    {

        // Attributes
        IfcDayInMonthNumber m_DayComponent;
        IfcMonthInYearNumber m_MonthComponent;
        IfcYearNumber m_YearComponent;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute DayComponent
        /// @{
        virtual IfcDayInMonthNumber getDayComponent();
        virtual IfcDayInMonthNumber getDayComponent() const;
        virtual void setDayComponent(IfcDayInMonthNumber value);
        virtual void unsetDayComponent();
        virtual bool testDayComponent() const;
        /// @}

        /// Attribute MonthComponent
        /// @{
        virtual IfcMonthInYearNumber getMonthComponent();
        virtual IfcMonthInYearNumber getMonthComponent() const;
        virtual void setMonthComponent(IfcMonthInYearNumber value);
        virtual void unsetMonthComponent();
        virtual bool testMonthComponent() const;
        /// @}

        /// Attribute YearComponent
        /// @{
        virtual IfcYearNumber getYearComponent();
        virtual IfcYearNumber getYearComponent() const;
        virtual void setYearComponent(IfcYearNumber value);
        virtual void unsetYearComponent();
        virtual bool testYearComponent() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcCalendarDate(Step::Id id, Step::SPFData *args);
        virtual ~IfcCalendarDate();

        virtual bool init();

        virtual void copy(const IfcCalendarDate &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3