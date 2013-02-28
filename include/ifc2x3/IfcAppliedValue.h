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

#ifndef IFC2X3_IFCAPPLIEDVALUE_H
#define IFC2X3_IFCAPPLIEDVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcAppliedValueSelect;
    class IfcDateTimeSelect;
    class IfcMeasureWithUnit;

    /**
     * Generated class for the IfcAppliedValue Entity.
     * 
     */
    class IFC2X3_EXPORT IfcAppliedValue : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * unset the attribute 'Description'.
         * 
         */
        virtual void unsetDescription();
        /**
         * Test if the attribute 'Description' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDescription() const;
        /**
         * Gets the value of the explicit attribute 'AppliedValue'.
         * 
         */
        virtual IfcAppliedValueSelect *getAppliedValue();
        /**
         * (const) Returns the value of the explicit attribute 'AppliedValue'.
         * 
         * @return the value of the explicit attribute 'AppliedValue'
         */
        virtual const IfcAppliedValueSelect *getAppliedValue() const;
        /**
         * Sets the value of the explicit attribute 'AppliedValue'.
         * 
         * @param value
         */
        virtual void setAppliedValue(const Step::RefPtr< IfcAppliedValueSelect > &value);
        /**
         * unset the attribute 'AppliedValue'.
         * 
         */
        virtual void unsetAppliedValue();
        /**
         * Test if the attribute 'AppliedValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAppliedValue() const;
        /**
         * Gets the value of the explicit attribute 'UnitBasis'.
         * 
         */
        virtual IfcMeasureWithUnit *getUnitBasis();
        /**
         * (const) Returns the value of the explicit attribute 'UnitBasis'.
         * 
         * @return the value of the explicit attribute 'UnitBasis'
         */
        virtual const IfcMeasureWithUnit *getUnitBasis() const;
        /**
         * Sets the value of the explicit attribute 'UnitBasis'.
         * 
         * @param value
         */
        virtual void setUnitBasis(const Step::RefPtr< IfcMeasureWithUnit > &value);
        /**
         * unset the attribute 'UnitBasis'.
         * 
         */
        virtual void unsetUnitBasis();
        /**
         * Test if the attribute 'UnitBasis' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUnitBasis() const;
        /**
         * Gets the value of the explicit attribute 'ApplicableDate'.
         * 
         */
        virtual IfcDateTimeSelect *getApplicableDate();
        /**
         * (const) Returns the value of the explicit attribute 'ApplicableDate'.
         * 
         * @return the value of the explicit attribute 'ApplicableDate'
         */
        virtual const IfcDateTimeSelect *getApplicableDate() const;
        /**
         * Sets the value of the explicit attribute 'ApplicableDate'.
         * 
         * @param value
         */
        virtual void setApplicableDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * unset the attribute 'ApplicableDate'.
         * 
         */
        virtual void unsetApplicableDate();
        /**
         * Test if the attribute 'ApplicableDate' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApplicableDate() const;
        /**
         * Gets the value of the explicit attribute 'FixedUntilDate'.
         * 
         */
        virtual IfcDateTimeSelect *getFixedUntilDate();
        /**
         * (const) Returns the value of the explicit attribute 'FixedUntilDate'.
         * 
         * @return the value of the explicit attribute 'FixedUntilDate'
         */
        virtual const IfcDateTimeSelect *getFixedUntilDate() const;
        /**
         * Sets the value of the explicit attribute 'FixedUntilDate'.
         * 
         * @param value
         */
        virtual void setFixedUntilDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * unset the attribute 'FixedUntilDate'.
         * 
         */
        virtual void unsetFixedUntilDate();
        /**
         * Test if the attribute 'FixedUntilDate' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFixedUntilDate() const;
        /**
         * Gets the value of the inverse attribute 'ValuesReferenced'.
         * 
         */
        virtual Inverse_Set_IfcReferencesValueDocument_0_n &getValuesReferenced();
        /**
         * (const) Returns the value of the explicit attribute 'ValuesReferenced'.
         * 
         * @return the value of the explicit attribute 'ValuesReferenced'
         */
        const virtual Inverse_Set_IfcReferencesValueDocument_0_n &getValuesReferenced() const;
        /**
         * Test if the attribute 'ValuesReferenced' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testValuesReferenced() const;
        /**
         * Gets the value of the inverse attribute 'ValueOfComponents'.
         * 
         */
        virtual Inverse_Set_IfcAppliedValueRelationship_0_n &getValueOfComponents();
        /**
         * (const) Returns the value of the explicit attribute 'ValueOfComponents'.
         * 
         * @return the value of the explicit attribute 'ValueOfComponents'
         */
        const virtual Inverse_Set_IfcAppliedValueRelationship_0_n &getValueOfComponents() const;
        /**
         * Test if the attribute 'ValueOfComponents' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testValueOfComponents() const;
        /**
         * Gets the value of the inverse attribute 'IsComponentIn'.
         * 
         */
        virtual Inverse_Set_IfcAppliedValueRelationship_0_n &getIsComponentIn();
        /**
         * (const) Returns the value of the explicit attribute 'IsComponentIn'.
         * 
         * @return the value of the explicit attribute 'IsComponentIn'
         */
        const virtual Inverse_Set_IfcAppliedValueRelationship_0_n &getIsComponentIn() const;
        /**
         * Test if the attribute 'IsComponentIn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsComponentIn() const;
        friend class IfcReferencesValueDocument;
        friend class IfcAppliedValueRelationship;
        friend class ExpressDataSet;
        friend class Inverted_IfcAppliedValueRelationship_Components_type;
        friend class Inverted_IfcReferencesValueDocument_ReferencingValues_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAppliedValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcAppliedValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAppliedValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        Step::RefPtr< IfcAppliedValueSelect > m_appliedValue;
        /**
         */
        Step::RefPtr< IfcMeasureWithUnit > m_unitBasis;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_applicableDate;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_fixedUntilDate;
        /**
         */
        Inverse_Set_IfcReferencesValueDocument_0_n m_valuesReferenced;
        /**
         */
        Inverse_Set_IfcAppliedValueRelationship_0_n m_valueOfComponents;
        /**
         */
        Inverse_Set_IfcAppliedValueRelationship_0_n m_isComponentIn;

    };

}

#endif // IFC2X3_IFCAPPLIEDVALUE_H
