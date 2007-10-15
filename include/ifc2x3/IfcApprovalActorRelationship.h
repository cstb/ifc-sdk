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

#ifndef IFC2X3_IFCAPPROVALACTORRELATIONSHIP_H
#define IFC2X3_IFCAPPROVALACTORRELATIONSHIP_H
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
    class IfcActorRole;
    class IfcActorSelect;
    class IfcApproval;

    /**
     */
    class IFC2X3_DLL_DEF IfcApprovalActorRelationship : public Step::BaseEntity {
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
        IfcActorSelect *getActor();
        /**
         * Sets the value of the explicit attribute 'Actor'.
         * 
         * @param value
         */
        void setActor(const Step::RefPtr< IfcActorSelect > &value);
        /**
         */
        IfcApproval *getApproval();
        /**
         * Sets the value of the explicit attribute 'Approval'.
         * 
         * @param value
         */
        void setApproval(const Step::RefPtr< IfcApproval > &value);
        /**
         */
        IfcActorRole *getRole();
        /**
         * Sets the value of the explicit attribute 'Role'.
         * 
         * @param value
         */
        void setRole(const Step::RefPtr< IfcActorRole > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcApprovalActorRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcApprovalActorRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcApprovalActorRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_actor;
        /**
         */
        Step::RefPtr< IfcApproval > m_approval;
        /**
         */
        Step::RefPtr< IfcActorRole > m_role;

    };

}

#endif // IFC2X3_IFCAPPROVALACTORRELATIONSHIP_H
