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

#ifndef IFC2X3_IFCAPPROVAL_H
#define IFC2X3_IFCAPPROVAL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcApprovalActorRelationship;
    class IfcApprovalRelationship;
    class IfcDateTimeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcApproval : public Step::BaseEntity {
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
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        IfcDateTimeSelect *getApprovalDateTime();
        /**
         * Sets the value of the explicit attribute 'ApprovalDateTime'.
         * 
         * @param value
         */
        void setApprovalDateTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcLabel getApprovalStatus();
        /**
         * Sets the value of the explicit attribute 'ApprovalStatus'.
         * 
         * @param value
         */
        void setApprovalStatus(const IfcLabel &value);
        /**
         */
        IfcLabel getApprovalLevel();
        /**
         * Sets the value of the explicit attribute 'ApprovalLevel'.
         * 
         * @param value
         */
        void setApprovalLevel(const IfcLabel &value);
        /**
         */
        IfcText getApprovalQualifier();
        /**
         * Sets the value of the explicit attribute 'ApprovalQualifier'.
         * 
         * @param value
         */
        void setApprovalQualifier(const IfcText &value);
        /**
         */
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
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
        Step::Set< Step::ObsPtr< IfcApprovalActorRelationship > > &getActors();
        /**
         */
        Step::Set< Step::ObsPtr< IfcApprovalRelationship > > &getIsRelatedWith();
        /**
         */
        Step::Set< Step::ObsPtr< IfcApprovalRelationship > > &getRelates();
        /**
         */
        virtual void release();
        friend class IfcApprovalRelationship;
        friend class IfcApprovalActorRelationship;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcApproval(Step::Id id, Step::SPFData *args);
        virtual ~IfcApproval();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcApproval &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_description;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_approvalDateTime;
        /**
         */
        std::string m_approvalStatus;
        /**
         */
        std::string m_approvalLevel;
        /**
         */
        std::string m_approvalQualifier;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_identifier;
        /**
         */
        Step::Set< Step::ObsPtr< IfcApprovalActorRelationship > > m_actors;
        /**
         */
        Step::Set< Step::ObsPtr< IfcApprovalRelationship > > m_isRelatedWith;
        /**
         */
        Step::Set< Step::ObsPtr< IfcApprovalRelationship > > m_relates;

    };

}

#endif // IFC2X3_IFCAPPROVAL_H
