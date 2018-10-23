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
     * Generated class for the IfcMetric Entity.
     *
     */
    class IFC2X3_EXPORT IfcMetric : public IfcConstraint
    {

        // Attributes
        IfcBenchmarkEnum m_Benchmark;
        IfcLabel m_ValueSource;
        Step::RefPtr< IfcMetricValueSelect > m_DataValue;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Benchmark
        /// @{
        virtual IfcBenchmarkEnum getBenchmark();
        virtual IfcBenchmarkEnum getBenchmark() const;
        virtual void setBenchmark(IfcBenchmarkEnum value);
        virtual void unsetBenchmark();
        virtual bool testBenchmark() const;
        /// @}

        /// Attribute ValueSource
        /// @{
        virtual IfcLabel getValueSource();
        virtual const IfcLabel getValueSource() const;
        virtual void setValueSource(const IfcLabel &value);
        virtual void unsetValueSource();
        virtual bool testValueSource() const;
        /// @}

        /// Attribute DataValue
        /// @{
        virtual IfcMetricValueSelect *getDataValue();
        virtual const IfcMetricValueSelect *getDataValue() const;
        virtual void setDataValue(const Step::RefPtr< IfcMetricValueSelect > &value);
        virtual void unsetDataValue();
        virtual bool testDataValue() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcMetric(Step::Id id, Step::SPFData *args);
        virtual ~IfcMetric();

        virtual bool init();

        virtual void copy(const IfcMetric &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3