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

#include <ifc2x3/IfcPropertySetDefinition.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcServiceLifeFactor Entity.
     *
     */
    class IFC2X3_EXPORT IfcServiceLifeFactor : public IfcPropertySetDefinition
    {

        // Attributes
        IfcServiceLifeFactorTypeEnum m_PredefinedType;
        Step::RefPtr< IfcMeasureValue > m_UpperValue;
        Step::RefPtr< IfcMeasureValue > m_MostUsedValue;
        Step::RefPtr< IfcMeasureValue > m_LowerValue;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute PredefinedType
        /// @{
        virtual IfcServiceLifeFactorTypeEnum getPredefinedType();
        virtual IfcServiceLifeFactorTypeEnum getPredefinedType() const;
        virtual void setPredefinedType(IfcServiceLifeFactorTypeEnum value);
        virtual void unsetPredefinedType();
        virtual bool testPredefinedType() const;
        /// @}

        /// Attribute UpperValue
        /// @{
        virtual IfcMeasureValue *getUpperValue();
        virtual const IfcMeasureValue *getUpperValue() const;
        virtual void setUpperValue(const Step::RefPtr< IfcMeasureValue > &value);
        virtual void unsetUpperValue();
        virtual bool testUpperValue() const;
        /// @}

        /// Attribute MostUsedValue
        /// @{
        virtual IfcMeasureValue *getMostUsedValue();
        virtual const IfcMeasureValue *getMostUsedValue() const;
        virtual void setMostUsedValue(const Step::RefPtr< IfcMeasureValue > &value);
        virtual void unsetMostUsedValue();
        virtual bool testMostUsedValue() const;
        /// @}

        /// Attribute LowerValue
        /// @{
        virtual IfcMeasureValue *getLowerValue();
        virtual const IfcMeasureValue *getLowerValue() const;
        virtual void setLowerValue(const Step::RefPtr< IfcMeasureValue > &value);
        virtual void unsetLowerValue();
        virtual bool testLowerValue() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcServiceLifeFactor(Step::Id id, Step::SPFData *args);
        virtual ~IfcServiceLifeFactor();

        virtual bool init();

        virtual void copy(const IfcServiceLifeFactor &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3