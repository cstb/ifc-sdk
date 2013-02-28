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

#ifndef IFC2X3_IFCCOSTSCHEDULE_H
#define IFC2X3_IFCCOSTSCHEDULE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcControl.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcDateTimeSelect;

    /**
     * Generated class for the IfcCostSchedule Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCostSchedule : public IfcControl {
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
         * Gets the value of the explicit attribute 'SubmittedBy'.
         * 
         */
        virtual IfcActorSelect *getSubmittedBy();
        /**
         * (const) Returns the value of the explicit attribute 'SubmittedBy'.
         * 
         * @return the value of the explicit attribute 'SubmittedBy'
         */
        virtual const IfcActorSelect *getSubmittedBy() const;
        /**
         * Sets the value of the explicit attribute 'SubmittedBy'.
         * 
         * @param value
         */
        virtual void setSubmittedBy(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * unset the attribute 'SubmittedBy'.
         * 
         */
        virtual void unsetSubmittedBy();
        /**
         * Test if the attribute 'SubmittedBy' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSubmittedBy() const;
        /**
         * Gets the value of the explicit attribute 'PreparedBy'.
         * 
         */
        virtual IfcActorSelect *getPreparedBy();
        /**
         * (const) Returns the value of the explicit attribute 'PreparedBy'.
         * 
         * @return the value of the explicit attribute 'PreparedBy'
         */
        virtual const IfcActorSelect *getPreparedBy() const;
        /**
         * Sets the value of the explicit attribute 'PreparedBy'.
         * 
         * @param value
         */
        virtual void setPreparedBy(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * unset the attribute 'PreparedBy'.
         * 
         */
        virtual void unsetPreparedBy();
        /**
         * Test if the attribute 'PreparedBy' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPreparedBy() const;
        /**
         * Gets the value of the explicit attribute 'SubmittedOn'.
         * 
         */
        virtual IfcDateTimeSelect *getSubmittedOn();
        /**
         * (const) Returns the value of the explicit attribute 'SubmittedOn'.
         * 
         * @return the value of the explicit attribute 'SubmittedOn'
         */
        virtual const IfcDateTimeSelect *getSubmittedOn() const;
        /**
         * Sets the value of the explicit attribute 'SubmittedOn'.
         * 
         * @param value
         */
        virtual void setSubmittedOn(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * unset the attribute 'SubmittedOn'.
         * 
         */
        virtual void unsetSubmittedOn();
        /**
         * Test if the attribute 'SubmittedOn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSubmittedOn() const;
        /**
         * Gets the value of the explicit attribute 'Status'.
         * 
         */
        virtual IfcLabel getStatus();
        /**
         * (const) Returns the value of the explicit attribute 'Status'.
         * 
         * @return the value of the explicit attribute 'Status'
         */
        virtual const IfcLabel getStatus() const;
        /**
         * Sets the value of the explicit attribute 'Status'.
         * 
         * @param value
         */
        virtual void setStatus(const IfcLabel &value);
        /**
         * unset the attribute 'Status'.
         * 
         */
        virtual void unsetStatus();
        /**
         * Test if the attribute 'Status' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStatus() const;
        /**
         * Gets the value of the explicit attribute 'TargetUsers'.
         * 
         */
        virtual Set_IfcActorSelect_1_n &getTargetUsers();
        /**
         * (const) Returns the value of the explicit attribute 'TargetUsers'.
         * 
         * @return the value of the explicit attribute 'TargetUsers'
         */
        virtual const Set_IfcActorSelect_1_n &getTargetUsers() const;
        /**
         * Sets the value of the explicit attribute 'TargetUsers'.
         * 
         * @param value
         */
        virtual void setTargetUsers(const Set_IfcActorSelect_1_n &value);
        /**
         * unset the attribute 'TargetUsers'.
         * 
         */
        virtual void unsetTargetUsers();
        /**
         * Test if the attribute 'TargetUsers' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTargetUsers() const;
        /**
         * Gets the value of the explicit attribute 'UpdateDate'.
         * 
         */
        virtual IfcDateTimeSelect *getUpdateDate();
        /**
         * (const) Returns the value of the explicit attribute 'UpdateDate'.
         * 
         * @return the value of the explicit attribute 'UpdateDate'
         */
        virtual const IfcDateTimeSelect *getUpdateDate() const;
        /**
         * Sets the value of the explicit attribute 'UpdateDate'.
         * 
         * @param value
         */
        virtual void setUpdateDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * unset the attribute 'UpdateDate'.
         * 
         */
        virtual void unsetUpdateDate();
        /**
         * Test if the attribute 'UpdateDate' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUpdateDate() const;
        /**
         * Gets the value of the explicit attribute 'ID'.
         * 
         */
        virtual IfcIdentifier getID();
        /**
         * (const) Returns the value of the explicit attribute 'ID'.
         * 
         * @return the value of the explicit attribute 'ID'
         */
        virtual const IfcIdentifier getID() const;
        /**
         * Sets the value of the explicit attribute 'ID'.
         * 
         * @param value
         */
        virtual void setID(const IfcIdentifier &value);
        /**
         * unset the attribute 'ID'.
         * 
         */
        virtual void unsetID();
        /**
         * Test if the attribute 'ID' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testID() const;
        /**
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcCostScheduleTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcCostScheduleTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcCostScheduleTypeEnum value);
        /**
         * unset the attribute 'PredefinedType'.
         * 
         */
        virtual void unsetPredefinedType();
        /**
         * Test if the attribute 'PredefinedType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPredefinedType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCostSchedule(Step::Id id, Step::SPFData *args);
        virtual ~IfcCostSchedule();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCostSchedule &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_submittedBy;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_preparedBy;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_submittedOn;
        /**
         */
        Step::String m_status;
        /**
         */
        Set_IfcActorSelect_1_n m_targetUsers;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_updateDate;
        /**
         */
        Step::String m_iD;
        /**
         */
        IfcCostScheduleTypeEnum m_predefinedType;

    };

}

#endif // IFC2X3_IFCCOSTSCHEDULE_H
