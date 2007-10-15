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

#ifndef IFC2X3_IFCSTRUCTURALMEMBER_H
#define IFC2X3_IFCSTRUCTURALMEMBER_H
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
    class IfcRelConnectsStructuralElement;
    class IfcRelConnectsStructuralMember;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralMember : public IfcStructuralItem {
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
        Step::Set< Step::ObsPtr< IfcRelConnectsStructuralElement > > &getReferencesElement();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsStructuralMember > > &getConnectedBy();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcRelConnectsStructuralElement;
        friend class IfcRelConnectsStructuralMember;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralMember(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralMember();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralMember &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsStructuralElement > > m_referencesElement;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsStructuralMember > > m_connectedBy;

    };

}

#endif // IFC2X3_IFCSTRUCTURALMEMBER_H
