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

#ifndef IFC2X3_IFCSTRUCTURALCONNECTION_H
#define IFC2X3_IFCSTRUCTURALCONNECTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcStructuralItem.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcBoundaryCondition;
    class IfcRelConnectsStructuralMember;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralConnection : public IfcStructuralItem {
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
        IfcBoundaryCondition *getAppliedCondition();
        /**
         * Sets the value of the explicit attribute 'AppliedCondition'.
         * 
         * @param value
         */
        void setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsStructuralMember > > &getConnectsStructuralMembers();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcRelConnectsStructuralMember;

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
        Step::Set< Step::ObsPtr< IfcRelConnectsStructuralMember > > m_connectsStructuralMembers;

    };

}

#endif // IFC2X3_IFCSTRUCTURALCONNECTION_H
