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

#ifndef IFC2X3_IFCOBJECTIVE_H
#define IFC2X3_IFCOBJECTIVE_H
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
    class IfcMetric;

    /**
     */
    class IFC2X3_DLL_DEF IfcObjective : public IfcConstraint {
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
         * Gets the value of the explicit attribute 'BenchmarkValues'.
         * 
         */
        virtual IfcMetric *getBenchmarkValues();
        /**
         * (const) Returns the value of the explicit attribute 'BenchmarkValues'.
         * 
         * @return the value of the explicit attribute 'BenchmarkValues'
         */
        virtual const IfcMetric *getBenchmarkValues() const;
        /**
         * Sets the value of the explicit attribute 'BenchmarkValues'.
         * 
         * @param value
         */
        virtual void setBenchmarkValues(const Step::RefPtr< IfcMetric > &value);
        /**
         * Gets the value of the explicit attribute 'ResultValues'.
         * 
         */
        virtual IfcMetric *getResultValues();
        /**
         * (const) Returns the value of the explicit attribute 'ResultValues'.
         * 
         * @return the value of the explicit attribute 'ResultValues'
         */
        virtual const IfcMetric *getResultValues() const;
        /**
         * Sets the value of the explicit attribute 'ResultValues'.
         * 
         * @param value
         */
        virtual void setResultValues(const Step::RefPtr< IfcMetric > &value);
        /**
         * Gets the value of the explicit attribute 'ObjectiveQualifier'.
         * 
         */
        virtual IfcObjectiveEnum getObjectiveQualifier();
        /**
         * (const) Returns the value of the explicit attribute 'ObjectiveQualifier'.
         * 
         * @return the value of the explicit attribute 'ObjectiveQualifier'
         */
        virtual const IfcObjectiveEnum getObjectiveQualifier() const;
        /**
         * Sets the value of the explicit attribute 'ObjectiveQualifier'.
         * 
         * @param value
         */
        virtual void setObjectiveQualifier(IfcObjectiveEnum value);
        /**
         * Gets the value of the explicit attribute 'UserDefinedQualifier'.
         * 
         */
        virtual IfcLabel getUserDefinedQualifier();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedQualifier'.
         * 
         * @return the value of the explicit attribute 'UserDefinedQualifier'
         */
        virtual const IfcLabel getUserDefinedQualifier() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedQualifier'.
         * 
         * @param value
         */
        virtual void setUserDefinedQualifier(const IfcLabel &value);
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
        Step::String m_userDefinedQualifier;

    };

}

#endif // IFC2X3_IFCOBJECTIVE_H
