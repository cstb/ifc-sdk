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

#ifndef IFC2X3_IFCSERVICELIFEFACTOR_H
#define IFC2X3_IFCSERVICELIFEFACTOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPropertySetDefinition.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcMeasureValue;

    /**
     * Generated class for the IfcServiceLifeFactor Entity.
     * 
     */
    class IFC2X3_EXPORT IfcServiceLifeFactor : public IfcPropertySetDefinition {
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
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcServiceLifeFactorTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcServiceLifeFactorTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcServiceLifeFactorTypeEnum value);
        /**
         * unset the attribute 'PredefinedType'.
         * 
         */
        virtual void unsetPredefinedType();
        /**
         * Test if the attribute 'PredefinedType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPredefinedType() const;
        /**
         * Gets the value of the explicit attribute 'UpperValue'.
         * 
         */
        virtual IfcMeasureValue *getUpperValue();
        /**
         * (const) Returns the value of the explicit attribute 'UpperValue'.
         * 
         * @return the value of the explicit attribute 'UpperValue'
         */
        virtual const IfcMeasureValue *getUpperValue() const;
        /**
         * Sets the value of the explicit attribute 'UpperValue'.
         * 
         * @param value
         */
        virtual void setUpperValue(const Step::RefPtr< IfcMeasureValue > &value);
        /**
         * unset the attribute 'UpperValue'.
         * 
         */
        virtual void unsetUpperValue();
        /**
         * Test if the attribute 'UpperValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUpperValue() const;
        /**
         * Gets the value of the explicit attribute 'MostUsedValue'.
         * 
         */
        virtual IfcMeasureValue *getMostUsedValue();
        /**
         * (const) Returns the value of the explicit attribute 'MostUsedValue'.
         * 
         * @return the value of the explicit attribute 'MostUsedValue'
         */
        virtual const IfcMeasureValue *getMostUsedValue() const;
        /**
         * Sets the value of the explicit attribute 'MostUsedValue'.
         * 
         * @param value
         */
        virtual void setMostUsedValue(const Step::RefPtr< IfcMeasureValue > &value);
        /**
         * unset the attribute 'MostUsedValue'.
         * 
         */
        virtual void unsetMostUsedValue();
        /**
         * Test if the attribute 'MostUsedValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMostUsedValue() const;
        /**
         * Gets the value of the explicit attribute 'LowerValue'.
         * 
         */
        virtual IfcMeasureValue *getLowerValue();
        /**
         * (const) Returns the value of the explicit attribute 'LowerValue'.
         * 
         * @return the value of the explicit attribute 'LowerValue'
         */
        virtual const IfcMeasureValue *getLowerValue() const;
        /**
         * Sets the value of the explicit attribute 'LowerValue'.
         * 
         * @param value
         */
        virtual void setLowerValue(const Step::RefPtr< IfcMeasureValue > &value);
        /**
         * unset the attribute 'LowerValue'.
         * 
         */
        virtual void unsetLowerValue();
        /**
         * Test if the attribute 'LowerValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLowerValue() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcServiceLifeFactor(Step::Id id, Step::SPFData *args);
        virtual ~IfcServiceLifeFactor();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcServiceLifeFactor &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcServiceLifeFactorTypeEnum m_predefinedType;
        /**
         */
        Step::RefPtr< IfcMeasureValue > m_upperValue;
        /**
         */
        Step::RefPtr< IfcMeasureValue > m_mostUsedValue;
        /**
         */
        Step::RefPtr< IfcMeasureValue > m_lowerValue;

    };

}

#endif // IFC2X3_IFCSERVICELIFEFACTOR_H
