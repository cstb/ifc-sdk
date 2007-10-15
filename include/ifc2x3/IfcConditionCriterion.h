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

#ifndef IFC2X3_IFCCONDITIONCRITERION_H
#define IFC2X3_IFCCONDITIONCRITERION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcControl.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcConditionCriterionSelect;
    class IfcDateTimeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcConditionCriterion : public IfcControl {
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
        IfcConditionCriterionSelect *getCriterion();
        /**
         * Sets the value of the explicit attribute 'Criterion'.
         * 
         * @param value
         */
        void setCriterion(const Step::RefPtr< IfcConditionCriterionSelect > &value);
        /**
         */
        IfcDateTimeSelect *getCriterionDateTime();
        /**
         * Sets the value of the explicit attribute 'CriterionDateTime'.
         * 
         * @param value
         */
        void setCriterionDateTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConditionCriterion(Step::Id id, Step::SPFData *args);
        virtual ~IfcConditionCriterion();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConditionCriterion &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcConditionCriterionSelect > m_criterion;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_criterionDateTime;

    };

}

#endif // IFC2X3_IFCCONDITIONCRITERION_H
