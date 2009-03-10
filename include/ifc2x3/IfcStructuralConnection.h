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

#ifndef IFC2X3_IFCSTRUCTURALCONNECTION_H
#define IFC2X3_IFCSTRUCTURALCONNECTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcStructuralItem.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcBoundaryCondition;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralConnection : public IfcStructuralItem {
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
         * Gets the value of the explicit attribute 'AppliedCondition'.
         * 
         */
        virtual IfcBoundaryCondition *getAppliedCondition();
        /**
         * (const) Returns the value of the explicit attribute 'AppliedCondition'.
         * 
         * @return the value of the explicit attribute 'AppliedCondition'
         */
        virtual const IfcBoundaryCondition *getAppliedCondition() const;
        /**
         * Sets the value of the explicit attribute 'AppliedCondition'.
         * 
         * @param value
         */
        virtual void setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value);
        /**
         * Gets the value of the inverse attribute 'ConnectsStructuralMembers'.
         * 
         */
        Inverse_Set_IfcRelConnectsStructuralMember_1_n &getConnectsStructuralMembers();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectsStructuralMembers'.
         * 
         * @return the value of the explicit attribute 'ConnectsStructuralMembers'
         */
        virtual const Inverse_Set_IfcRelConnectsStructuralMember_1_n &getConnectsStructuralMembers() const;
        friend class IfcRelConnectsStructuralMember;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralConnection(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralConnection();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralConnection &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcBoundaryCondition > m_appliedCondition;
        /**
         */
        Inverse_Set_IfcRelConnectsStructuralMember_1_n m_connectsStructuralMembers;

    };

}

#endif // IFC2X3_IFCSTRUCTURALCONNECTION_H
