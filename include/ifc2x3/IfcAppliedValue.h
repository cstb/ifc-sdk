/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include <Step/ClassType.h>
#include <Step/BaseEntity.h>
#include <string>
#include <Step/Aggregation.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAppliedValueRelationship;
    class IfcAppliedValueSelect;
    class IfcDateTimeSelect;
    class IfcMeasureWithUnit;
    class IfcReferencesValueDocument;

    /**
     */
    class IFC2X3_DLL_DEF IfcAppliedValue : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
        /**
         */
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        IfcAppliedValueSelect *getAppliedValue();
        /**
         * Sets the value of the explicit attribute 'AppliedValue'.
         * 
         * @param value
         */
        void setAppliedValue(const Step::RefPtr< IfcAppliedValueSelect > &value);
        /**
         */
        IfcMeasureWithUnit *getUnitBasis();
        /**
         * Sets the value of the explicit attribute 'UnitBasis'.
         * 
         * @param value
         */
        void setUnitBasis(const Step::RefPtr< IfcMeasureWithUnit > &value);
        /**
         */
        IfcDateTimeSelect *getApplicableDate();
        /**
         * Sets the value of the explicit attribute 'ApplicableDate'.
         * 
         * @param value
         */
        void setApplicableDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcDateTimeSelect *getFixedUntilDate();
        /**
         * Sets the value of the explicit attribute 'FixedUntilDate'.
         * 
         * @param value
         */
        void setFixedUntilDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcReferencesValueDocument > > &getValuesReferenced();
        /**
         */
        Step::Set< Step::ObsPtr< IfcAppliedValueRelationship > > &getValueOfComponents();
        /**
         */
        Step::Set< Step::ObsPtr< IfcAppliedValueRelationship > > &getIsComponentIn();
        /**
         */
        virtual void release();
        friend class IfcReferencesValueDocument;
        friend class IfcAppliedValueRelationship;
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
        std::string m_name;
        /**
         */
        std::string m_description;
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
        Step::Set< Step::ObsPtr< IfcReferencesValueDocument > > m_valuesReferenced;
        /**
         */
        Step::Set< Step::ObsPtr< IfcAppliedValueRelationship > > m_valueOfComponents;
        /**
         */
        Step::Set< Step::ObsPtr< IfcAppliedValueRelationship > > m_isComponentIn;

    };

}

#endif // IFC2X3_IFCAPPLIEDVALUE_H
