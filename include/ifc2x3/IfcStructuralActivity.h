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

#ifndef IFC2X3_IFCSTRUCTURALACTIVITY_H
#define IFC2X3_IFCSTRUCTURALACTIVITY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcProduct.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelConnectsStructuralActivity;
    class IfcStructuralLoad;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralActivity : public IfcProduct {
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
        IfcStructuralLoad *getAppliedLoad();
        /**
         * Sets the value of the explicit attribute 'AppliedLoad'.
         * 
         * @param value
         */
        void setAppliedLoad(const Step::RefPtr< IfcStructuralLoad > &value);
        /**
         */
        IfcGlobalOrLocalEnum getGlobalOrLocal();
        /**
         * Sets the value of the explicit attribute 'GlobalOrLocal'.
         * 
         * @param value
         */
        void setGlobalOrLocal(IfcGlobalOrLocalEnum value);
        /**
         */
        IfcRelConnectsStructuralActivity *getAssignedToStructuralItem();
        /**
         */
        virtual void release();
        friend class IfcRelConnectsStructuralActivity;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralActivity(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralActivity();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralActivity &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcStructuralLoad > m_appliedLoad;
        /**
         */
        IfcGlobalOrLocalEnum m_globalOrLocal;
        /**
         */
        Step::ObsPtr< IfcRelConnectsStructuralActivity > m_assignedToStructuralItem;

    };

}

#endif // IFC2X3_IFCSTRUCTURALACTIVITY_H
