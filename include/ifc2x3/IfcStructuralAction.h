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

#ifndef IFC2X3_IFCSTRUCTURALACTION_H
#define IFC2X3_IFCSTRUCTURALACTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcStructuralActivity.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcStructuralReaction;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralAction : public IfcStructuralActivity {
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
        Step::Bool getDestabilizingLoad();
        /**
         * Sets the value of the explicit attribute 'DestabilizingLoad'.
         * 
         * @param value
         */
        void setDestabilizingLoad(Step::Bool value);
        /**
         */
        IfcStructuralReaction *getCausedBy();
        /**
         * Sets the value of the explicit attribute 'CausedBy'.
         * 
         * @param value
         */
        void setCausedBy(const Step::RefPtr< IfcStructuralReaction > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralAction(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralAction();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralAction &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Bool m_destabilizingLoad;
        /**
         */
        Step::RefPtr< IfcStructuralReaction > m_causedBy;

    };

}

#endif // IFC2X3_IFCSTRUCTURALACTION_H
