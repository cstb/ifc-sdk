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

#ifndef IFC2X3_IFCOWNERHISTORY_H
#define IFC2X3_IFCOWNERHISTORY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcApplication;
    class IfcPersonAndOrganization;

    /**
     */
    class IFC2X3_DLL_DEF IfcOwnerHistory : public Step::BaseEntity {
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
        IfcPersonAndOrganization *getOwningUser();
        /**
         * Sets the value of the explicit attribute 'OwningUser'.
         * 
         * @param value
         */
        void setOwningUser(const Step::RefPtr< IfcPersonAndOrganization > &value);
        /**
         */
        IfcApplication *getOwningApplication();
        /**
         * Sets the value of the explicit attribute 'OwningApplication'.
         * 
         * @param value
         */
        void setOwningApplication(const Step::RefPtr< IfcApplication > &value);
        /**
         */
        IfcStateEnum getState();
        /**
         * Sets the value of the explicit attribute 'State'.
         * 
         * @param value
         */
        void setState(IfcStateEnum value);
        /**
         */
        IfcChangeActionEnum getChangeAction();
        /**
         * Sets the value of the explicit attribute 'ChangeAction'.
         * 
         * @param value
         */
        void setChangeAction(IfcChangeActionEnum value);
        /**
         */
        IfcTimeStamp getLastModifiedDate();
        /**
         * Sets the value of the explicit attribute 'LastModifiedDate'.
         * 
         * @param value
         */
        void setLastModifiedDate(IfcTimeStamp value);
        /**
         */
        IfcPersonAndOrganization *getLastModifyingUser();
        /**
         * Sets the value of the explicit attribute 'LastModifyingUser'.
         * 
         * @param value
         */
        void setLastModifyingUser(const Step::RefPtr< IfcPersonAndOrganization > &value);
        /**
         */
        IfcApplication *getLastModifyingApplication();
        /**
         * Sets the value of the explicit attribute 'LastModifyingApplication'.
         * 
         * @param value
         */
        void setLastModifyingApplication(const Step::RefPtr< IfcApplication > &value);
        /**
         */
        IfcTimeStamp getCreationDate();
        /**
         * Sets the value of the explicit attribute 'CreationDate'.
         * 
         * @param value
         */
        void setCreationDate(IfcTimeStamp value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcOwnerHistory(Step::Id id, Step::SPFData *args);
        virtual ~IfcOwnerHistory();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOwnerHistory &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPersonAndOrganization > m_owningUser;
        /**
         */
        Step::RefPtr< IfcApplication > m_owningApplication;
        /**
         */
        IfcStateEnum m_state;
        /**
         */
        IfcChangeActionEnum m_changeAction;
        /**
         */
        Step::Integer m_lastModifiedDate;
        /**
         */
        Step::RefPtr< IfcPersonAndOrganization > m_lastModifyingUser;
        /**
         */
        Step::RefPtr< IfcApplication > m_lastModifyingApplication;
        /**
         */
        Step::Integer m_creationDate;

    };

}

#endif // IFC2X3_IFCOWNERHISTORY_H
