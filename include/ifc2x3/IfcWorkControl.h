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

#ifndef IFC2X3_IFCWORKCONTROL_H
#define IFC2X3_IFCWORKCONTROL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcControl.h"
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDateTimeSelect;
    class IfcPerson;

    /**
     */
    class IFC2X3_DLL_DEF IfcWorkControl : public IfcControl {
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
        IfcIdentifier getIdentifier();
        /**
         * Sets the value of the explicit attribute 'Identifier'.
         * 
         * @param value
         */
        void setIdentifier(const IfcIdentifier &value);
        /**
         */
        IfcDateTimeSelect *getCreationDate();
        /**
         * Sets the value of the explicit attribute 'CreationDate'.
         * 
         * @param value
         */
        void setCreationDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcPerson > > &getCreators();
        /**
         * Sets the value of the explicit attribute 'Creators'.
         * 
         * @param value
         */
        void setCreators(const Step::Set< Step::RefPtr< IfcPerson > > &value);
        /**
         */
        IfcLabel getPurpose();
        /**
         * Sets the value of the explicit attribute 'Purpose'.
         * 
         * @param value
         */
        void setPurpose(const IfcLabel &value);
        /**
         */
        IfcTimeMeasure getDuration();
        /**
         * Sets the value of the explicit attribute 'Duration'.
         * 
         * @param value
         */
        void setDuration(IfcTimeMeasure value);
        /**
         */
        IfcTimeMeasure getTotalFloat();
        /**
         * Sets the value of the explicit attribute 'TotalFloat'.
         * 
         * @param value
         */
        void setTotalFloat(IfcTimeMeasure value);
        /**
         */
        IfcDateTimeSelect *getStartTime();
        /**
         * Sets the value of the explicit attribute 'StartTime'.
         * 
         * @param value
         */
        void setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcDateTimeSelect *getFinishTime();
        /**
         * Sets the value of the explicit attribute 'FinishTime'.
         * 
         * @param value
         */
        void setFinishTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcWorkControlTypeEnum getWorkControlType();
        /**
         * Sets the value of the explicit attribute 'WorkControlType'.
         * 
         * @param value
         */
        void setWorkControlType(IfcWorkControlTypeEnum value);
        /**
         */
        IfcLabel getUserDefinedControlType();
        /**
         * Sets the value of the explicit attribute 'UserDefinedControlType'.
         * 
         * @param value
         */
        void setUserDefinedControlType(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcWorkControl(Step::Id id, Step::SPFData *args);
        virtual ~IfcWorkControl();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcWorkControl &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_identifier;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_creationDate;
        /**
         */
        Step::Set< Step::RefPtr< IfcPerson > > m_creators;
        /**
         */
        std::string m_purpose;
        /**
         */
        Step::Real m_duration;
        /**
         */
        Step::Real m_totalFloat;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_startTime;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_finishTime;
        /**
         */
        IfcWorkControlTypeEnum m_workControlType;
        /**
         */
        std::string m_userDefinedControlType;

    };

}

#endif // IFC2X3_IFCWORKCONTROL_H
