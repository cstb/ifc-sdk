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

#ifndef IFC2X3_IFCMETRIC_H
#define IFC2X3_IFCMETRIC_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include "ifc2x3/IfcConstraint.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcMetricValueSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcMetric : public IfcConstraint {
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
        IfcBenchmarkEnum getBenchmark();
        /**
         * Sets the value of the explicit attribute 'Benchmark'.
         * 
         * @param value
         */
        void setBenchmark(IfcBenchmarkEnum value);
        /**
         */
        IfcLabel getValueSource();
        /**
         * Sets the value of the explicit attribute 'ValueSource'.
         * 
         * @param value
         */
        void setValueSource(const IfcLabel &value);
        /**
         */
        IfcMetricValueSelect *getDataValue();
        /**
         * Sets the value of the explicit attribute 'DataValue'.
         * 
         * @param value
         */
        void setDataValue(const Step::RefPtr< IfcMetricValueSelect > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMetric(Step::Id id, Step::SPFData *args);
        virtual ~IfcMetric();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMetric &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcBenchmarkEnum m_benchmark;
        /**
         */
        std::string m_valueSource;
        /**
         */
        Step::RefPtr< IfcMetricValueSelect > m_dataValue;

    };

}

#endif // IFC2X3_IFCMETRIC_H
