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

#ifndef IFC2X3_IFCAPPROVALPROPERTYRELATIONSHIP_H
#define IFC2X3_IFCAPPROVALPROPERTYRELATIONSHIP_H
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
    class IfcApproval;

    /**
     * Generated class for the IfcApprovalPropertyRelationship Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcApprovalPropertyRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ApprovedProperties'.
         * 
         */
        virtual Set_IfcProperty_1_n &getApprovedProperties();
        /**
         * (const) Returns the value of the explicit attribute 'ApprovedProperties'.
         * 
         * @return the value of the explicit attribute 'ApprovedProperties'
         */
        virtual const Set_IfcProperty_1_n &getApprovedProperties() const;
        /**
         * Sets the value of the explicit attribute 'ApprovedProperties'.
         * 
         * @param value
         */
        virtual void setApprovedProperties(const Set_IfcProperty_1_n &value);
        /**
         * unset the attribute 'ApprovedProperties'.
         * 
         */
        virtual void unsetApprovedProperties();
        /**
         * Test if the attribute 'ApprovedProperties' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApprovedProperties() const;
        /**
         * Gets the value of the explicit attribute 'Approval'.
         * 
         */
        virtual IfcApproval *getApproval();
        /**
         * (const) Returns the value of the explicit attribute 'Approval'.
         * 
         * @return the value of the explicit attribute 'Approval'
         */
        virtual const IfcApproval *getApproval() const;
        /**
         * Sets the value of the explicit attribute 'Approval'.
         * 
         * @param value
         */
        virtual void setApproval(const Step::RefPtr< IfcApproval > &value);
        /**
         * unset the attribute 'Approval'.
         * 
         */
        virtual void unsetApproval();
        /**
         * Test if the attribute 'Approval' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApproval() const;
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
        Set_IfcProperty_1_n m_approvedProperties;
        /**
         */
        Step::RefPtr< IfcApproval > m_approval;

    };

}

#endif // IFC2X3_IFCAPPROVALPROPERTYRELATIONSHIP_H
