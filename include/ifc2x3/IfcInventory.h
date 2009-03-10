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

#ifndef IFC2X3_IFCINVENTORY_H
#define IFC2X3_IFCINVENTORY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGroup.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcCalendarDate;
    class IfcCostValue;

    /**
     */
    class IFC2X3_DLL_DEF IfcInventory : public IfcGroup {
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
         * Gets the value of the explicit attribute 'InventoryType'.
         * 
         */
        virtual IfcInventoryTypeEnum getInventoryType();
        /**
         * (const) Returns the value of the explicit attribute 'InventoryType'.
         * 
         * @return the value of the explicit attribute 'InventoryType'
         */
        virtual const IfcInventoryTypeEnum getInventoryType() const;
        /**
         * Sets the value of the explicit attribute 'InventoryType'.
         * 
         * @param value
         */
        virtual void setInventoryType(IfcInventoryTypeEnum value);
        /**
         * Gets the value of the explicit attribute 'Jurisdiction'.
         * 
         */
        virtual IfcActorSelect *getJurisdiction();
        /**
         * (const) Returns the value of the explicit attribute 'Jurisdiction'.
         * 
         * @return the value of the explicit attribute 'Jurisdiction'
         */
        virtual const IfcActorSelect *getJurisdiction() const;
        /**
         * Sets the value of the explicit attribute 'Jurisdiction'.
         * 
         * @param value
         */
        virtual void setJurisdiction(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * Gets the value of the explicit attribute 'ResponsiblePersons'.
         * 
         */
        virtual Set_IfcPerson_1_n &getResponsiblePersons();
        /**
         * (const) Returns the value of the explicit attribute 'ResponsiblePersons'.
         * 
         * @return the value of the explicit attribute 'ResponsiblePersons'
         */
        virtual const Set_IfcPerson_1_n &getResponsiblePersons() const;
        /**
         * Sets the value of the explicit attribute 'ResponsiblePersons'.
         * 
         * @param value
         */
        virtual void setResponsiblePersons(const Set_IfcPerson_1_n &value);
        /**
         * Gets the value of the explicit attribute 'LastUpdateDate'.
         * 
         */
        virtual IfcCalendarDate *getLastUpdateDate();
        /**
         * (const) Returns the value of the explicit attribute 'LastUpdateDate'.
         * 
         * @return the value of the explicit attribute 'LastUpdateDate'
         */
        virtual const IfcCalendarDate *getLastUpdateDate() const;
        /**
         * Sets the value of the explicit attribute 'LastUpdateDate'.
         * 
         * @param value
         */
        virtual void setLastUpdateDate(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         * Gets the value of the explicit attribute 'CurrentValue'.
         * 
         */
        virtual IfcCostValue *getCurrentValue();
        /**
         * (const) Returns the value of the explicit attribute 'CurrentValue'.
         * 
         * @return the value of the explicit attribute 'CurrentValue'
         */
        virtual const IfcCostValue *getCurrentValue() const;
        /**
         * Sets the value of the explicit attribute 'CurrentValue'.
         * 
         * @param value
         */
        virtual void setCurrentValue(const Step::RefPtr< IfcCostValue > &value);
        /**
         * Gets the value of the explicit attribute 'OriginalValue'.
         * 
         */
        virtual IfcCostValue *getOriginalValue();
        /**
         * (const) Returns the value of the explicit attribute 'OriginalValue'.
         * 
         * @return the value of the explicit attribute 'OriginalValue'
         */
        virtual const IfcCostValue *getOriginalValue() const;
        /**
         * Sets the value of the explicit attribute 'OriginalValue'.
         * 
         * @param value
         */
        virtual void setOriginalValue(const Step::RefPtr< IfcCostValue > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcInventory(Step::Id id, Step::SPFData *args);
        virtual ~IfcInventory();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcInventory &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcInventoryTypeEnum m_inventoryType;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_jurisdiction;
        /**
         */
        Set_IfcPerson_1_n m_responsiblePersons;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_lastUpdateDate;
        /**
         */
        Step::RefPtr< IfcCostValue > m_currentValue;
        /**
         */
        Step::RefPtr< IfcCostValue > m_originalValue;

    };

}

#endif // IFC2X3_IFCINVENTORY_H
