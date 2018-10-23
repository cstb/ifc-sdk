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

#include <ifc2x3/IfcControl.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcWorkControl Entity.
     *
     */
    class IFC2X3_EXPORT IfcWorkControl : public IfcControl
    {

        // Attributes
        IfcIdentifier m_Identifier;
        Step::RefPtr< IfcDateTimeSelect > m_CreationDate;
        Set_IfcPerson_1_n m_Creators;
        IfcLabel m_Purpose;
        IfcTimeMeasure m_Duration;
        IfcTimeMeasure m_TotalFloat;
        Step::RefPtr< IfcDateTimeSelect > m_StartTime;
        Step::RefPtr< IfcDateTimeSelect > m_FinishTime;
        IfcWorkControlTypeEnum m_WorkControlType;
        IfcLabel m_UserDefinedControlType;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Identifier
        /// @{
        virtual IfcIdentifier getIdentifier();
        virtual const IfcIdentifier getIdentifier() const;
        virtual void setIdentifier(const IfcIdentifier &value);
        virtual void unsetIdentifier();
        virtual bool testIdentifier() const;
        /// @}

        /// Attribute CreationDate
        /// @{
        virtual IfcDateTimeSelect *getCreationDate();
        virtual const IfcDateTimeSelect *getCreationDate() const;
        virtual void setCreationDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetCreationDate();
        virtual bool testCreationDate() const;
        /// @}

        /// Attribute Creators
        /// @{
        virtual Set_IfcPerson_1_n &getCreators();
        virtual const Set_IfcPerson_1_n &getCreators() const;
        virtual void setCreators(const Set_IfcPerson_1_n &value);
        virtual void unsetCreators();
        virtual bool testCreators() const;
        /// @}

        /// Attribute Purpose
        /// @{
        virtual IfcLabel getPurpose();
        virtual const IfcLabel getPurpose() const;
        virtual void setPurpose(const IfcLabel &value);
        virtual void unsetPurpose();
        virtual bool testPurpose() const;
        /// @}

        /// Attribute Duration
        /// @{
        virtual IfcTimeMeasure getDuration();
        virtual IfcTimeMeasure getDuration() const;
        virtual void setDuration(IfcTimeMeasure value);
        virtual void unsetDuration();
        virtual bool testDuration() const;
        /// @}

        /// Attribute TotalFloat
        /// @{
        virtual IfcTimeMeasure getTotalFloat();
        virtual IfcTimeMeasure getTotalFloat() const;
        virtual void setTotalFloat(IfcTimeMeasure value);
        virtual void unsetTotalFloat();
        virtual bool testTotalFloat() const;
        /// @}

        /// Attribute StartTime
        /// @{
        virtual IfcDateTimeSelect *getStartTime();
        virtual const IfcDateTimeSelect *getStartTime() const;
        virtual void setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetStartTime();
        virtual bool testStartTime() const;
        /// @}

        /// Attribute FinishTime
        /// @{
        virtual IfcDateTimeSelect *getFinishTime();
        virtual const IfcDateTimeSelect *getFinishTime() const;
        virtual void setFinishTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetFinishTime();
        virtual bool testFinishTime() const;
        /// @}

        /// Attribute WorkControlType
        /// @{
        virtual IfcWorkControlTypeEnum getWorkControlType();
        virtual IfcWorkControlTypeEnum getWorkControlType() const;
        virtual void setWorkControlType(IfcWorkControlTypeEnum value);
        virtual void unsetWorkControlType();
        virtual bool testWorkControlType() const;
        /// @}

        /// Attribute UserDefinedControlType
        /// @{
        virtual IfcLabel getUserDefinedControlType();
        virtual const IfcLabel getUserDefinedControlType() const;
        virtual void setUserDefinedControlType(const IfcLabel &value);
        virtual void unsetUserDefinedControlType();
        virtual bool testUserDefinedControlType() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcWorkControl(Step::Id id, Step::SPFData *args);
        virtual ~IfcWorkControl();

        virtual bool init();

        virtual void copy(const IfcWorkControl &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3