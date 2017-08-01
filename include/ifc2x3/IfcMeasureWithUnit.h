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

#ifndef IFC2X3_IFCMEASUREWITHUNIT_H
#define IFC2X3_IFCMEASUREWITHUNIT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcUnit;
    class IfcValue;

    /**
     * Generated class for the IfcMeasureWithUnit Entity.
     * 
     */
    class IFC2X3_EXPORT IfcMeasureWithUnit : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        bool acceptVisitor(Step::BaseVisitor *visitor) override;
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        const std::string &type() const override;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        const Step::ClassType &getType() const override;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        bool isOfType(const Step::ClassType &t) const override;
        /**
         * Gets the value of the explicit attribute 'ValueComponent'.
         * 
         */
        virtual IfcValue *getValueComponent();
        /**
         * (const) Returns the value of the explicit attribute 'ValueComponent'.
         * 
         * @return the value of the explicit attribute 'ValueComponent'
         */
        virtual const IfcValue *getValueComponent() const;
        /**
         * Sets the value of the explicit attribute 'ValueComponent'.
         * 
         * @param value
         */
        virtual void setValueComponent(const Step::RefPtr< IfcValue > &value);
        /**
         * unset the attribute 'ValueComponent'.
         * 
         */
        virtual void unsetValueComponent();
        /**
         * Test if the attribute 'ValueComponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testValueComponent() const;
        /**
         * Gets the value of the explicit attribute 'UnitComponent'.
         * 
         */
        virtual IfcUnit *getUnitComponent();
        /**
         * (const) Returns the value of the explicit attribute 'UnitComponent'.
         * 
         * @return the value of the explicit attribute 'UnitComponent'
         */
        virtual const IfcUnit *getUnitComponent() const;
        /**
         * Sets the value of the explicit attribute 'UnitComponent'.
         * 
         * @param value
         */
        virtual void setUnitComponent(const Step::RefPtr< IfcUnit > &value);
        /**
         * unset the attribute 'UnitComponent'.
         * 
         */
        virtual void unsetUnitComponent();
        /**
         * Test if the attribute 'UnitComponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUnitComponent() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMeasureWithUnit(Step::Id id, Step::SPFData *args);
        ~IfcMeasureWithUnit() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMeasureWithUnit &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcValue > m_valueComponent;
        /**
         */
        Step::RefPtr< IfcUnit > m_unitComponent;

    };

}

#endif // IFC2X3_IFCMEASUREWITHUNIT_H
