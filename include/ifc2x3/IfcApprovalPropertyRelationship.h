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

#ifndef IFC2X3_IFCAPPROVALPROPERTYRELATIONSHIP_H
#define IFC2X3_IFCAPPROVALPROPERTYRELATIONSHIP_H
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
    class IfcApproval;
    class IfcProperty;

    /**
     */
    class IFC2X3_DLL_DEF IfcApprovalPropertyRelationship : public Step::BaseEntity {
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
        Step::Set< Step::RefPtr< IfcProperty > > &getApprovedProperties();
        /**
         * Sets the value of the explicit attribute 'ApprovedProperties'.
         * 
         * @param value
         */
        void setApprovedProperties(const Step::Set< Step::RefPtr< IfcProperty > > &value);
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
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcApprovalPropertyRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcApprovalPropertyRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcApprovalPropertyRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::RefPtr< IfcProperty > > m_approvedProperties;
        /**
         */
        Step::RefPtr< IfcApproval > m_approval;

    };

}

#endif // IFC2X3_IFCAPPROVALPROPERTYRELATIONSHIP_H
