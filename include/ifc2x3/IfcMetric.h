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

#ifndef IFC2X3_IFCMETRIC_H
#define IFC2X3_IFCMETRIC_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
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
         * Gets the value of the explicit attribute 'Benchmark'.
         * 
         */
        virtual IfcBenchmarkEnum getBenchmark();
        /**
         * (const) Returns the value of the explicit attribute 'Benchmark'.
         * 
         * @return the value of the explicit attribute 'Benchmark'
         */
        virtual const IfcBenchmarkEnum getBenchmark() const;
        /**
         * Sets the value of the explicit attribute 'Benchmark'.
         * 
         * @param value
         */
        virtual void setBenchmark(IfcBenchmarkEnum value);
        /**
         * Gets the value of the explicit attribute 'ValueSource'.
         * 
         */
        virtual IfcLabel getValueSource();
        /**
         * (const) Returns the value of the explicit attribute 'ValueSource'.
         * 
         * @return the value of the explicit attribute 'ValueSource'
         */
        virtual const IfcLabel getValueSource() const;
        /**
         * Sets the value of the explicit attribute 'ValueSource'.
         * 
         * @param value
         */
        virtual void setValueSource(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'DataValue'.
         * 
         */
        virtual IfcMetricValueSelect *getDataValue();
        /**
         * (const) Returns the value of the explicit attribute 'DataValue'.
         * 
         * @return the value of the explicit attribute 'DataValue'
         */
        virtual const IfcMetricValueSelect *getDataValue() const;
        /**
         * Sets the value of the explicit attribute 'DataValue'.
         * 
         * @param value
         */
        virtual void setDataValue(const Step::RefPtr< IfcMetricValueSelect > &value);
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
        Step::String m_valueSource;
        /**
         */
        Step::RefPtr< IfcMetricValueSelect > m_dataValue;

    };

}

#endif // IFC2X3_IFCMETRIC_H
