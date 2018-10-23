#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcConstraint.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcObjective Entity.
     *
     */
    class IFC2X3_EXPORT IfcObjective : public IfcConstraint
    {

        // Attributes
        Step::RefPtr< IfcMetric > m_BenchmarkValues;
        Step::RefPtr< IfcMetric > m_ResultValues;
        IfcObjectiveEnum m_ObjectiveQualifier;
        IfcLabel m_UserDefinedQualifier;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute BenchmarkValues
        /// @{
        virtual IfcMetric *getBenchmarkValues();
        virtual const IfcMetric *getBenchmarkValues() const;
        virtual void setBenchmarkValues(const Step::RefPtr< IfcMetric > &value);
        virtual void unsetBenchmarkValues();
        virtual bool testBenchmarkValues() const;
        /// @}

        /// Attribute ResultValues
        /// @{
        virtual IfcMetric *getResultValues();
        virtual const IfcMetric *getResultValues() const;
        virtual void setResultValues(const Step::RefPtr< IfcMetric > &value);
        virtual void unsetResultValues();
        virtual bool testResultValues() const;
        /// @}

        /// Attribute ObjectiveQualifier
        /// @{
        virtual IfcObjectiveEnum getObjectiveQualifier();
        virtual IfcObjectiveEnum getObjectiveQualifier() const;
        virtual void setObjectiveQualifier(IfcObjectiveEnum value);
        virtual void unsetObjectiveQualifier();
        virtual bool testObjectiveQualifier() const;
        /// @}

        /// Attribute UserDefinedQualifier
        /// @{
        virtual IfcLabel getUserDefinedQualifier();
        virtual const IfcLabel getUserDefinedQualifier() const;
        virtual void setUserDefinedQualifier(const IfcLabel &value);
        virtual void unsetUserDefinedQualifier();
        virtual bool testUserDefinedQualifier() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcObjective(Step::Id id, Step::SPFData *args);
        virtual ~IfcObjective();

        virtual bool init();

        virtual void copy(const IfcObjective &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3