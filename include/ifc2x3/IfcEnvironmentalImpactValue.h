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

#ifndef IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
#define IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcAppliedValue.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcEnvironmentalImpactValue Entity.
     * 
     */
    class IFC2X3_EXPORT IfcEnvironmentalImpactValue : public IfcAppliedValue {
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
         * Gets the value of the explicit attribute 'ImpactType'.
         * 
         */
        virtual IfcLabel getImpactType();
        /**
         * (const) Returns the value of the explicit attribute 'ImpactType'.
         * 
         * @return the value of the explicit attribute 'ImpactType'
         */
        virtual const IfcLabel getImpactType() const;
        /**
         * Sets the value of the explicit attribute 'ImpactType'.
         * 
         * @param value
         */
        virtual void setImpactType(const IfcLabel &value);
        /**
         * unset the attribute 'ImpactType'.
         * 
         */
        virtual void unsetImpactType();
        /**
         * Test if the attribute 'ImpactType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testImpactType() const;
        /**
         * Gets the value of the explicit attribute 'Category'.
         * 
         */
        virtual IfcEnvironmentalImpactCategoryEnum getCategory();
        /**
         * (const) Returns the value of the explicit attribute 'Category'.
         * 
         * @return the value of the explicit attribute 'Category'
         */
        virtual const IfcEnvironmentalImpactCategoryEnum getCategory() const;
        /**
         * Sets the value of the explicit attribute 'Category'.
         * 
         * @param value
         */
        virtual void setCategory(IfcEnvironmentalImpactCategoryEnum value);
        /**
         * unset the attribute 'Category'.
         * 
         */
        virtual void unsetCategory();
        /**
         * Test if the attribute 'Category' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCategory() const;
        /**
         * Gets the value of the explicit attribute 'UserDefinedCategory'.
         * 
         */
        virtual IfcLabel getUserDefinedCategory();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedCategory'.
         * 
         * @return the value of the explicit attribute 'UserDefinedCategory'
         */
        virtual const IfcLabel getUserDefinedCategory() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedCategory'.
         * 
         * @param value
         */
        virtual void setUserDefinedCategory(const IfcLabel &value);
        /**
         * unset the attribute 'UserDefinedCategory'.
         * 
         */
        virtual void unsetUserDefinedCategory();
        /**
         * Test if the attribute 'UserDefinedCategory' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUserDefinedCategory() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcEnvironmentalImpactValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcEnvironmentalImpactValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcEnvironmentalImpactValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_impactType;
        /**
         */
        IfcEnvironmentalImpactCategoryEnum m_category;
        /**
         */
        Step::String m_userDefinedCategory;

    };

}

#endif // IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
