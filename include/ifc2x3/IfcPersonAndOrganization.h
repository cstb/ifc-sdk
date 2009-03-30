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
 *     Copyright (C) 2009 CSTB                                             *
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

#ifndef IFC2X3_IFCPERSONANDORGANIZATION_H
#define IFC2X3_IFCPERSONANDORGANIZATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcOrganization;
    class IfcPerson;

    /**
     * Generated class for the IfcPersonAndOrganization Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcPersonAndOrganization : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ThePerson'.
         * 
         */
        virtual IfcPerson *getThePerson();
        /**
         * (const) Returns the value of the explicit attribute 'ThePerson'.
         * 
         * @return the value of the explicit attribute 'ThePerson'
         */
        virtual const IfcPerson *getThePerson() const;
        /**
         * Sets the value of the explicit attribute 'ThePerson'.
         * 
         * @param value
         */
        virtual void setThePerson(const Step::RefPtr< IfcPerson > &value);
        /**
         * unset the attribute 'ThePerson'.
         * 
         */
        virtual void unsetThePerson();
        /**
         * Test if the attribute 'ThePerson' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThePerson() const;
        /**
         * Gets the value of the explicit attribute 'TheOrganization'.
         * 
         */
        virtual IfcOrganization *getTheOrganization();
        /**
         * (const) Returns the value of the explicit attribute 'TheOrganization'.
         * 
         * @return the value of the explicit attribute 'TheOrganization'
         */
        virtual const IfcOrganization *getTheOrganization() const;
        /**
         * Sets the value of the explicit attribute 'TheOrganization'.
         * 
         * @param value
         */
        virtual void setTheOrganization(const Step::RefPtr< IfcOrganization > &value);
        /**
         * unset the attribute 'TheOrganization'.
         * 
         */
        virtual void unsetTheOrganization();
        /**
         * Test if the attribute 'TheOrganization' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTheOrganization() const;
        /**
         * Gets the value of the explicit attribute 'Roles'.
         * 
         */
        virtual List_IfcActorRole_1_n &getRoles();
        /**
         * (const) Returns the value of the explicit attribute 'Roles'.
         * 
         * @return the value of the explicit attribute 'Roles'
         */
        virtual const List_IfcActorRole_1_n &getRoles() const;
        /**
         * Sets the value of the explicit attribute 'Roles'.
         * 
         * @param value
         */
        virtual void setRoles(const List_IfcActorRole_1_n &value);
        /**
         * unset the attribute 'Roles'.
         * 
         */
        virtual void unsetRoles();
        /**
         * Test if the attribute 'Roles' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRoles() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPersonAndOrganization(Step::Id id, Step::SPFData *args);
        virtual ~IfcPersonAndOrganization();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPersonAndOrganization &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPerson > m_thePerson;
        /**
         */
        Step::RefPtr< IfcOrganization > m_theOrganization;
        /**
         */
        List_IfcActorRole_1_n m_roles;

    };

}

#endif // IFC2X3_IFCPERSONANDORGANIZATION_H
