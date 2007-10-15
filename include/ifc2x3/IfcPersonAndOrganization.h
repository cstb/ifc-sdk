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

#ifndef IFC2X3_IFCPERSONANDORGANIZATION_H
#define IFC2X3_IFCPERSONANDORGANIZATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorRole;
    class IfcOrganization;
    class IfcPerson;

    /**
     */
    class IFC2X3_DLL_DEF IfcPersonAndOrganization : public Step::BaseEntity {
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
        IfcPerson *getThePerson();
        /**
         * Sets the value of the explicit attribute 'ThePerson'.
         * 
         * @param value
         */
        void setThePerson(const Step::RefPtr< IfcPerson > &value);
        /**
         */
        IfcOrganization *getTheOrganization();
        /**
         * Sets the value of the explicit attribute 'TheOrganization'.
         * 
         * @param value
         */
        void setTheOrganization(const Step::RefPtr< IfcOrganization > &value);
        /**
         */
        Step::List< Step::RefPtr< IfcActorRole > > &getRoles();
        /**
         * Sets the value of the explicit attribute 'Roles'.
         * 
         * @param value
         */
        void setRoles(const Step::List< Step::RefPtr< IfcActorRole > > &value);
        /**
         */
        virtual void release();
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
        Step::List< Step::RefPtr< IfcActorRole > > m_roles;

    };

}

#endif // IFC2X3_IFCPERSONANDORGANIZATION_H
