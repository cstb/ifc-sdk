// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCOBJECTIVE_H
#define IFC2X3_IFCOBJECTIVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcConstraint.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcMetric;

    /**
     * Generated class for the IfcObjective Entity.
     * 
     */
    class IFC2X3_EXPORT IfcObjective : public IfcConstraint {
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
         * unset the attribute 'BenchmarkValues'.
         * 
         */
        virtual void unsetBenchmarkValues();
        /**
         * Test if the attribute 'BenchmarkValues' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBenchmarkValues() const;
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
         * unset the attribute 'ResultValues'.
         * 
         */
        virtual void unsetResultValues();
        /**
         * Test if the attribute 'ResultValues' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testResultValues() const;
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
         * unset the attribute 'ObjectiveQualifier'.
         * 
         */
        virtual void unsetObjectiveQualifier();
        /**
         * Test if the attribute 'ObjectiveQualifier' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testObjectiveQualifier() const;
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
        /**
         * unset the attribute 'UserDefinedQualifier'.
         * 
         */
        virtual void unsetUserDefinedQualifier();
        /**
         * Test if the attribute 'UserDefinedQualifier' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUserDefinedQualifier() const;
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
