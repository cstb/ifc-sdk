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

#include <ifc2x3/IfcGroup.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcInventory Entity.
     *
     */
    class IFC2X3_EXPORT IfcInventory : public IfcGroup
    {

        // Attributes
        IfcInventoryTypeEnum m_InventoryType;
        Step::RefPtr< IfcActorSelect > m_Jurisdiction;
        Set_IfcPerson_1_n m_ResponsiblePersons;
        Step::RefPtr< IfcCalendarDate > m_LastUpdateDate;
        Step::RefPtr< IfcCostValue > m_CurrentValue;
        Step::RefPtr< IfcCostValue > m_OriginalValue;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute InventoryType
        /// @{
        virtual IfcInventoryTypeEnum getInventoryType();
        virtual IfcInventoryTypeEnum getInventoryType() const;
        virtual void setInventoryType(IfcInventoryTypeEnum value);
        virtual void unsetInventoryType();
        virtual bool testInventoryType() const;
        /// @}

        /// Attribute Jurisdiction
        /// @{
        virtual IfcActorSelect *getJurisdiction();
        virtual const IfcActorSelect *getJurisdiction() const;
        virtual void setJurisdiction(const Step::RefPtr< IfcActorSelect > &value);
        virtual void unsetJurisdiction();
        virtual bool testJurisdiction() const;
        /// @}

        /// Attribute ResponsiblePersons
        /// @{
        virtual Set_IfcPerson_1_n &getResponsiblePersons();
        virtual const Set_IfcPerson_1_n &getResponsiblePersons() const;
        virtual void setResponsiblePersons(const Set_IfcPerson_1_n &value);
        virtual void unsetResponsiblePersons();
        virtual bool testResponsiblePersons() const;
        /// @}

        /// Attribute LastUpdateDate
        /// @{
        virtual IfcCalendarDate *getLastUpdateDate();
        virtual const IfcCalendarDate *getLastUpdateDate() const;
        virtual void setLastUpdateDate(const Step::RefPtr< IfcCalendarDate > &value);
        virtual void unsetLastUpdateDate();
        virtual bool testLastUpdateDate() const;
        /// @}

        /// Attribute CurrentValue
        /// @{
        virtual IfcCostValue *getCurrentValue();
        virtual const IfcCostValue *getCurrentValue() const;
        virtual void setCurrentValue(const Step::RefPtr< IfcCostValue > &value);
        virtual void unsetCurrentValue();
        virtual bool testCurrentValue() const;
        /// @}

        /// Attribute OriginalValue
        /// @{
        virtual IfcCostValue *getOriginalValue();
        virtual const IfcCostValue *getOriginalValue() const;
        virtual void setOriginalValue(const Step::RefPtr< IfcCostValue > &value);
        virtual void unsetOriginalValue();
        virtual bool testOriginalValue() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcInventory(Step::Id id, Step::SPFData *args);
        virtual ~IfcInventory();

        virtual bool init();

        virtual void copy(const IfcInventory &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3