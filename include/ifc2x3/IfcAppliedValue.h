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

#ifndef IFC2X3_IFCAPPLIEDVALUE_H
#define IFC2X3_IFCAPPLIEDVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAppliedValueSelect;
    class IfcDateTimeSelect;
    class IfcMeasureWithUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcAppliedValue : public Step::BaseEntity {
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
         * Gets the value of the inverse attribute 'ValuesReferenced'.
         * 
         */
        Inverse_Set_IfcReferencesValueDocument_0_n &getValuesReferenced();
        /**
         * (const) Returns the value of the explicit attribute 'ValuesReferenced'.
         * 
         * @return the value of the explicit attribute 'ValuesReferenced'
         */
        virtual const Inverse_Set_IfcReferencesValueDocument_0_n &getValuesReferenced() const;
        /**
         * Gets the value of the inverse attribute 'ValueOfComponents'.
         * 
         */
        Inverse_Set_IfcAppliedValueRelationship_0_n &getValueOfComponents();
        /**
         * (const) Returns the value of the explicit attribute 'ValueOfComponents'.
         * 
         * @return the value of the explicit attribute 'ValueOfComponents'
         */
        virtual const Inverse_Set_IfcAppliedValueRelationship_0_n &getValueOfComponents() const;
        /**
         * Gets the value of the inverse attribute 'IsComponentIn'.
         * 
         */
        Inverse_Set_IfcAppliedValueRelationship_0_n &getIsComponentIn();
        /**
         * (const) Returns the value of the explicit attribute 'IsComponentIn'.
         * 
         * @return the value of the explicit attribute 'IsComponentIn'
         */
        virtual const Inverse_Set_IfcAppliedValueRelationship_0_n &getIsComponentIn() const;
        friend class IfcReferencesValueDocument;
        friend class Inverted_IfcReferencesValueDocument_ReferencingValues_type;
        friend class IfcAppliedValueRelationship;
        friend class Inverted_IfcAppliedValueRelationship_Components_type;
        friend class ExpressDataSet;

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
