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
         * Gets the value of the explicit attribute 'Criterion'.
         * 
         */
        virtual IfcConditionCriterionSelect *getCriterion();
        /**
         * (const) Returns the value of the explicit attribute 'Criterion'.
         * 
         * @return the value of the explicit attribute 'Criterion'
         */
        virtual const IfcConditionCriterionSelect *getCriterion() const;
        /**
         * Sets the value of the explicit attribute 'Criterion'.
         * 
         * @param value
         */
        virtual void setCriterion(const Step::RefPtr< IfcConditionCriterionSelect > &value);
        /**
         * Gets the value of the explicit attribute 'CriterionDateTime'.
         * 
         */
        virtual IfcDateTimeSelect *getCriterionDateTime();
        /**
         * (const) Returns the value of the explicit attribute 'CriterionDateTime'.
         * 
         * @return the value of the explicit attribute 'CriterionDateTime'
         */
        virtual const IfcDateTimeSelect *getCriterionDateTime() const;
        /**
         * Sets the value of the explicit attribute 'CriterionDateTime'.
         * 
         * @param value
         */
        virtual void setCriterionDateTime(const Step::RefPtr< IfcDateTimeSelect > &value);
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
