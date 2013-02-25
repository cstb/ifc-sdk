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

#ifndef IFC2X3_IFCINVENTORY_H
#define IFC2X3_IFCINVENTORY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGroup.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcCalendarDate;
    class IfcCostValue;

    /**
     * Generated class for the IfcInventory Entity.
     * 
     */
    class IFC2X3_EXPORT IfcInventory : public IfcGroup {
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
         * unset the attribute 'InventoryType'.
         * 
         */
        virtual void unsetInventoryType();
        /**
         * Test if the attribute 'InventoryType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testInventoryType() const;
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
         * unset the attribute 'Jurisdiction'.
         * 
         */
        virtual void unsetJurisdiction();
        /**
         * Test if the attribute 'Jurisdiction' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testJurisdiction() const;
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
         * unset the attribute 'ResponsiblePersons'.
         * 
         */
        virtual void unsetResponsiblePersons();
        /**
         * Test if the attribute 'ResponsiblePersons' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testResponsiblePersons() const;
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
         * unset the attribute 'LastUpdateDate'.
         * 
         */
        virtual void unsetLastUpdateDate();
        /**
         * Test if the attribute 'LastUpdateDate' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLastUpdateDate() const;
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
         * unset the attribute 'CurrentValue'.
         * 
         */
        virtual void unsetCurrentValue();
        /**
         * Test if the attribute 'CurrentValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCurrentValue() const;
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
        /**
         * unset the attribute 'OriginalValue'.
         * 
         */
        virtual void unsetOriginalValue();
        /**
         * Test if the attribute 'OriginalValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOriginalValue() const;
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
