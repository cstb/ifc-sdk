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

#ifndef IFC2X3_IFCCONDITIONCRITERIONSELECT_H
#define IFC2X3_IFCCONDITIONCRITERIONSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcMeasureWithUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcConditionCriterionSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcConditionCriterionSelect_select {
            IFCLABEL,
            IFCMEASUREWITHUNIT,
            UNSET,
        };

        union IfcConditionCriterionSelect_union {
            IfcLabel *m_IfcLabel;
            IfcMeasureWithUnit *m_IfcMeasureWithUnit;
        };
        /**
         */
        IfcConditionCriterionSelect();
        virtual ~IfcConditionCriterionSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConditionCriterionSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcConditionCriterionSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcLabel getIfcLabel();
        /**
         * @param value
         */
        void setIfcLabel(const IfcLabel &value);
        /**
         */
        IfcMeasureWithUnit *getIfcMeasureWithUnit();
        /**
         * @param value
         */
        void setIfcMeasureWithUnit(IfcMeasureWithUnit *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcConditionCriterionSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcConditionCriterionSelect_select m_type;
        /**
         */
        IfcConditionCriterionSelect_union m_IfcConditionCriterionSelect_union;

    };

}

#endif // IFC2X3_IFCCONDITIONCRITERIONSELECT_H
