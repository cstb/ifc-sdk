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

#ifndef IFC2X3_IFCOBJECTIVE_H
#define IFC2X3_IFCOBJECTIVE_H
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
    class IfcMetric;

    /**
     */
    class IFC2X3_DLL_DEF IfcObjective : public IfcConstraint {
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
        IfcMetric *getBenchmarkValues();
        /**
         * Sets the value of the explicit attribute 'BenchmarkValues'.
         * 
         * @param value
         */
        void setBenchmarkValues(const Step::RefPtr< IfcMetric > &value);
        /**
         */
        IfcMetric *getResultValues();
        /**
         * Sets the value of the explicit attribute 'ResultValues'.
         * 
         * @param value
         */
        void setResultValues(const Step::RefPtr< IfcMetric > &value);
        /**
         */
        IfcObjectiveEnum getObjectiveQualifier();
        /**
         * Sets the value of the explicit attribute 'ObjectiveQualifier'.
         * 
         * @param value
         */
        void setObjectiveQualifier(IfcObjectiveEnum value);
        /**
         */
        IfcLabel getUserDefinedQualifier();
        /**
         * Sets the value of the explicit attribute 'UserDefinedQualifier'.
         * 
         * @param value
         */
        void setUserDefinedQualifier(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcObjective(Step::Id id, Step::SPFData *args);
        virtual ~IfcObjective();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcObjective &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcMetric > m_benchmarkValues;
        /**
         */
        Step::RefPtr< IfcMetric > m_resultValues;
        /**
         */
        IfcObjectiveEnum m_objectiveQualifier;
        /**
         */
        std::string m_userDefinedQualifier;

    };

}

#endif // IFC2X3_IFCOBJECTIVE_H
