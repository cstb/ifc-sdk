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
     * Generated class for the IfcCostSchedule Entity.
     *
     */
    class IFC2X3_EXPORT IfcCostSchedule : public IfcControl
    {

        // Attributes
        Step::RefPtr< IfcActorSelect > m_SubmittedBy;
        Step::RefPtr< IfcActorSelect > m_PreparedBy;
        Step::RefPtr< IfcDateTimeSelect > m_SubmittedOn;
        IfcLabel m_Status;
        Set_IfcActorSelect_1_n m_TargetUsers;
        Step::RefPtr< IfcDateTimeSelect > m_UpdateDate;
        IfcIdentifier m_ID;
        IfcCostScheduleTypeEnum m_PredefinedType;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute SubmittedBy
        /// @{
        virtual IfcActorSelect *getSubmittedBy();
        virtual const IfcActorSelect *getSubmittedBy() const;
        virtual void setSubmittedBy(const Step::RefPtr< IfcActorSelect > &value);
        virtual void unsetSubmittedBy();
        virtual bool testSubmittedBy() const;
        /// @}

        /// Attribute PreparedBy
        /// @{
        virtual IfcActorSelect *getPreparedBy();
        virtual const IfcActorSelect *getPreparedBy() const;
        virtual void setPreparedBy(const Step::RefPtr< IfcActorSelect > &value);
        virtual void unsetPreparedBy();
        virtual bool testPreparedBy() const;
        /// @}

        /// Attribute SubmittedOn
        /// @{
        virtual IfcDateTimeSelect *getSubmittedOn();
        virtual const IfcDateTimeSelect *getSubmittedOn() const;
        virtual void setSubmittedOn(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetSubmittedOn();
        virtual bool testSubmittedOn() const;
        /// @}

        /// Attribute Status
        /// @{
        virtual IfcLabel getStatus();
        virtual const IfcLabel getStatus() const;
        virtual void setStatus(const IfcLabel &value);
        virtual void unsetStatus();
        virtual bool testStatus() const;
        /// @}

        /// Attribute TargetUsers
        /// @{
        virtual Set_IfcActorSelect_1_n &getTargetUsers();
        virtual const Set_IfcActorSelect_1_n &getTargetUsers() const;
        virtual void setTargetUsers(const Set_IfcActorSelect_1_n &value);
        virtual void unsetTargetUsers();
        virtual bool testTargetUsers() const;
        /// @}

        /// Attribute UpdateDate
        /// @{
        virtual IfcDateTimeSelect *getUpdateDate();
        virtual const IfcDateTimeSelect *getUpdateDate() const;
        virtual void setUpdateDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetUpdateDate();
        virtual bool testUpdateDate() const;
        /// @}

        /// Attribute ID
        /// @{
        virtual IfcIdentifier getID();
        virtual const IfcIdentifier getID() const;
        virtual void setID(const IfcIdentifier &value);
        virtual void unsetID();
        virtual bool testID() const;
        /// @}

        /// Attribute PredefinedType
        /// @{
        virtual IfcCostScheduleTypeEnum getPredefinedType();
        virtual IfcCostScheduleTypeEnum getPredefinedType() const;
        virtual void setPredefinedType(IfcCostScheduleTypeEnum value);
        virtual void unsetPredefinedType();
        virtual bool testPredefinedType() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcCostSchedule(Step::Id id, Step::SPFData *args);
        virtual ~IfcCostSchedule();

        virtual bool init();

        virtual void copy(const IfcCostSchedule &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3