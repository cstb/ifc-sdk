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

#ifndef IFC2X3_IFCREGULARTIMESERIES_H
#define IFC2X3_IFCREGULARTIMESERIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcTimeSeries.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcTimeSeriesValue;

    /**
     */
    class IFC2X3_DLL_DEF IfcRegularTimeSeries : public IfcTimeSeries {
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
        IfcTimeMeasure getTimeStep();
        /**
         * Sets the value of the explicit attribute 'TimeStep'.
         * 
         * @param value
         */
        void setTimeStep(IfcTimeMeasure value);
        /**
         */
        Step::List< Step::RefPtr< IfcTimeSeriesValue > > &getValues();
        /**
         * Sets the value of the explicit attribute 'Values'.
         * 
         * @param value
         */
        void setValues(const Step::List< Step::RefPtr< IfcTimeSeriesValue > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRegularTimeSeries(Step::Id id, Step::SPFData *args);
        virtual ~IfcRegularTimeSeries();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRegularTimeSeries &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_timeStep;
        /**
         */
        Step::List< Step::RefPtr< IfcTimeSeriesValue > > m_values;

    };

}

#endif // IFC2X3_IFCREGULARTIMESERIES_H
