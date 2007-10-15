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

#ifndef IFC2X3_IFCMEASUREWITHUNIT_H
#define IFC2X3_IFCMEASUREWITHUNIT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcUnit;
    class IfcValue;

    /**
     */
    class IFC2X3_DLL_DEF IfcMeasureWithUnit : public Step::BaseEntity {
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
        IfcValue *getValueComponent();
        /**
         * Sets the value of the explicit attribute 'ValueComponent'.
         * 
         * @param value
         */
        void setValueComponent(const Step::RefPtr< IfcValue > &value);
        /**
         */
        IfcUnit *getUnitComponent();
        /**
         * Sets the value of the explicit attribute 'UnitComponent'.
         * 
         * @param value
         */
        void setUnitComponent(const Step::RefPtr< IfcUnit > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMeasureWithUnit(Step::Id id, Step::SPFData *args);
        virtual ~IfcMeasureWithUnit();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMeasureWithUnit &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcValue > m_valueComponent;
        /**
         */
        Step::RefPtr< IfcUnit > m_unitComponent;

    };

}

#endif // IFC2X3_IFCMEASUREWITHUNIT_H
