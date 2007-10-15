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

#ifndef IFC2X3_IFCAPPLIEDVALUESELECT_H
#define IFC2X3_IFCAPPLIEDVALUESELECT_H
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
    class IFC2X3_DLL_DEF IfcAppliedValueSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcAppliedValueSelect_select {
            IFCRATIOMEASURE,
            IFCMEASUREWITHUNIT,
            IFCMONETARYMEASURE,
            UNSET,
        };

        union IfcAppliedValueSelect_union {
            IfcRatioMeasure m_IfcRatioMeasure;
            IfcMeasureWithUnit *m_IfcMeasureWithUnit;
            IfcMonetaryMeasure m_IfcMonetaryMeasure;
        };
        /**
         */
        IfcAppliedValueSelect();
        virtual ~IfcAppliedValueSelect();
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
        virtual void copy(const IfcAppliedValueSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcAppliedValueSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcRatioMeasure getIfcRatioMeasure();
        /**
         * @param value
         */
        void setIfcRatioMeasure(IfcRatioMeasure value);
        /**
         */
        IfcMeasureWithUnit *getIfcMeasureWithUnit();
        /**
         * @param value
         */
        void setIfcMeasureWithUnit(IfcMeasureWithUnit *value);
        /**
         */
        IfcMonetaryMeasure getIfcMonetaryMeasure();
        /**
         * @param value
         */
        void setIfcMonetaryMeasure(IfcMonetaryMeasure value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcAppliedValueSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcAppliedValueSelect_select m_type;
        /**
         */
        IfcAppliedValueSelect_union m_IfcAppliedValueSelect_union;

    };

}

#endif // IFC2X3_IFCAPPLIEDVALUESELECT_H
