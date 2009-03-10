/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
         * Gets the value of the explicit attribute 'OwningUser'.
         * 
         */
        virtual IfcPersonAndOrganization *getOwningUser();
        /**
         * (const) Returns the value of the explicit attribute 'OwningUser'.
         * 
         * @return the value of the explicit attribute 'OwningUser'
         */
        virtual const IfcPersonAndOrganization *getOwningUser() const;
        /**
         * Sets the value of the explicit attribute 'OwningUser'.
         * 
         * @param value
         */
        virtual void setOwningUser(const Step::RefPtr< IfcPersonAndOrganization > &value);
        /**
         * Gets the value of the explicit attribute 'OwningApplication'.
         * 
         */
        virtual IfcApplication *getOwningApplication();
        /**
         * (const) Returns the value of the explicit attribute 'OwningApplication'.
         * 
         * @return the value of the explicit attribute 'OwningApplication'
         */
        virtual const IfcApplication *getOwningApplication() const;
        /**
         * Sets the value of the explicit attribute 'OwningApplication'.
         * 
         * @param value
         */
        virtual void setOwningApplication(const Step::RefPtr< IfcApplication > &value);
        /**
         * Gets the value of the explicit attribute 'State'.
         * 
         */
        virtual IfcStateEnum getState();
        /**
         * (const) Returns the value of the explicit attribute 'State'.
         * 
         * @return the value of the explicit attribute 'State'
         */
        virtual const IfcStateEnum getState() const;
        /**
         * Sets the value of the explicit attribute 'State'.
         * 
         * @param value
         */
        virtual void setState(IfcStateEnum value);
        /**
         * Gets the value of the explicit attribute 'ChangeAction'.
         * 
         */
        virtual IfcChangeActionEnum getChangeAction();
        /**
         * (const) Returns the value of the explicit attribute 'ChangeAction'.
         * 
         * @return the value of the explicit attribute 'ChangeAction'
         */
        virtual const IfcChangeActionEnum getChangeAction() const;
        /**
         * Sets the value of the explicit attribute 'ChangeAction'.
         * 
         * @param value
         */
        virtual void setChangeAction(IfcChangeActionEnum value);
        /**
         * Gets the value of the explicit attribute 'LastModifiedDate'.
         * 
         */
        virtual IfcTimeStamp getLastModifiedDate();
        /**
         * (const) Returns the value of the explicit attribute 'LastModifiedDate'.
         * 
         * @return the value of the explicit attribute 'LastModifiedDate'
         */
        virtual const IfcTimeStamp getLastModifiedDate() const;
        /**
         * Sets the value of the explicit attribute 'LastModifiedDate'.
         * 
         * @param value
         */
        virtual void setLastModifiedDate(IfcTimeStamp value);
        /**
         * Gets the value of the explicit attribute 'LastModifyingUser'.
         * 
         */
        virtual IfcPersonAndOrganization *getLastModifyingUser();
        /**
         * (const) Returns the value of the explicit attribute 'LastModifyingUser'.
         * 
         * @return the value of the explicit attribute 'LastModifyingUser'
         */
        virtual const IfcPersonAndOrganization *getLastModifyingUser() const;
        /**
         * Sets the value of the explicit attribute 'LastModifyingUser'.
         * 
         * @param value
         */
        virtual void setLastModifyingUser(const Step::RefPtr< IfcPersonAndOrganization > &value);
        /**
         * Gets the value of the explicit attribute 'LastModifyingApplication'.
         * 
         */
        virtual IfcApplication *getLastModifyingApplication();
        /**
         * (const) Returns the value of the explicit attribute 'LastModifyingApplication'.
         * 
         * @return the value of the explicit attribute 'LastModifyingApplication'
         */
        virtual const IfcApplication *getLastModifyingApplication() const;
        /**
         * Sets the value of the explicit attribute 'LastModifyingApplication'.
         * 
         * @param value
         */
        virtual void setLastModifyingApplication(const Step::RefPtr< IfcApplication > &value);
        /**
         * Gets the value of the explicit attribute 'CreationDate'.
         * 
         */
        virtual IfcTimeStamp getCreationDate();
        /**
         * (const) Returns the value of the explicit attribute 'CreationDate'.
         * 
         * @return the value of the explicit attribute 'CreationDate'
         */
        virtual const IfcTimeStamp getCreationDate() const;
        /**
         * Sets the value of the explicit attribute 'CreationDate'.
         * 
         * @param value
         */
        virtual void setCreationDate(IfcTimeStamp value);
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
