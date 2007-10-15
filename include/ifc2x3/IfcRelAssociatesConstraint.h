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

#ifndef IFC2X3_IFCRELASSOCIATESCONSTRAINT_H
#define IFC2X3_IFCRELASSOCIATESCONSTRAINT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcRelAssociates.h"
#include <Step/SPFData.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcConstraint;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelAssociatesConstraint : public IfcRelAssociates {
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
        IfcLabel getIntent();
        /**
         * Sets the value of the explicit attribute 'Intent'.
         * 
         * @param value
         */
        void setIntent(const IfcLabel &value);
        /**
         */
        IfcConstraint *getRelatingConstraint();
        /**
         * Sets the value of the explicit attribute 'RelatingConstraint'.
         * 
         * @param value
         */
        void setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelAssociatesConstraint(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelAssociatesConstraint();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelAssociatesConstraint &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_intent;
        /**
         */
        Step::RefPtr< IfcConstraint > m_relatingConstraint;

    };

}

#endif // IFC2X3_IFCRELASSOCIATESCONSTRAINT_H
