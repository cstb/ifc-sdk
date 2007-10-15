/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCCOSTSCHEDULE_H
#define IFC2X3_IFCCOSTSCHEDULE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcControl.h"
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include "ifc2x3/IfcActorSelect.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDateTimeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcCostSchedule : public IfcControl {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcActorSelect *getSubmittedBy();
        /**
         * Sets the value of the explicit attribute 'SubmittedBy'.
         * 
         * @param value
         */
        void setSubmittedBy(const Step::RefPtr< IfcActorSelect > &value);
        /**
         */
        IfcActorSelect *getPreparedBy();
        /**
         * Sets the value of the explicit attribute 'PreparedBy'.
         * 
         * @param value
         */
        void setPreparedBy(const Step::RefPtr< IfcActorSelect > &value);
        /**
         */
        IfcDateTimeSelect *getSubmittedOn();
        /**
         * Sets the value of the explicit attribute 'SubmittedOn'.
         * 
         * @param value
         */
        void setSubmittedOn(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcLabel getStatus();
        /**
         * Sets the value of the explicit attribute 'Status'.
         * 
         * @param value
         */
        void setStatus(const IfcLabel &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcActorSelect > > &getTargetUsers();
        /**
         * Sets the value of the explicit attribute 'TargetUsers'.
         * 
         * @param value
         */
        void setTargetUsers(const Step::Set< Step::RefPtr< IfcActorSelect > > &value);
        /**
         */
        IfcDateTimeSelect *getUpdateDate();
        /**
         * Sets the value of the explicit attribute 'UpdateDate'.
         * 
         * @param value
         */
        void setUpdateDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcIdentifier getID();
        /**
         * Sets the value of the explicit attribute 'ID'.
         * 
         * @param value
         */
        void setID(const IfcIdentifier &value);
        /**
         */
        IfcCostScheduleTypeEnum getPredefinedType();
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        void setPredefinedType(IfcCostScheduleTypeEnum value);
        /**
         */
        virtual void release();
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
        std::string m_status;
        /**
         */
        Step::Set< Step::RefPtr< IfcActorSelect > > m_targetUsers;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_updateDate;
        /**
         */
        std::string m_iD;
        /**
         */
        IfcCostScheduleTypeEnum m_predefinedType;

    };

}

#endif // IFC2X3_IFCCOSTSCHEDULE_H
