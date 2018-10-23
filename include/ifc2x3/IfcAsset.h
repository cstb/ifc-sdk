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
     * Generated class for the IfcAsset Entity.
     *
     */
    class IFC2X3_EXPORT IfcAsset : public IfcGroup
    {

        // Attributes
        IfcIdentifier m_AssetID;
        Step::RefPtr< IfcCostValue > m_OriginalValue;
        Step::RefPtr< IfcCostValue > m_CurrentValue;
        Step::RefPtr< IfcCostValue > m_TotalReplacementCost;
        Step::RefPtr< IfcActorSelect > m_Owner;
        Step::RefPtr< IfcActorSelect > m_User;
        Step::RefPtr< IfcPerson > m_ResponsiblePerson;
        Step::RefPtr< IfcCalendarDate > m_IncorporationDate;
        Step::RefPtr< IfcCostValue > m_DepreciatedValue;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute AssetID
        /// @{
        virtual IfcIdentifier getAssetID();
        virtual const IfcIdentifier getAssetID() const;
        virtual void setAssetID(const IfcIdentifier &value);
        virtual void unsetAssetID();
        virtual bool testAssetID() const;
        /// @}

        /// Attribute OriginalValue
        /// @{
        virtual IfcCostValue *getOriginalValue();
        virtual const IfcCostValue *getOriginalValue() const;
        virtual void setOriginalValue(const Step::RefPtr< IfcCostValue > &value);
        virtual void unsetOriginalValue();
        virtual bool testOriginalValue() const;
        /// @}

        /// Attribute CurrentValue
        /// @{
        virtual IfcCostValue *getCurrentValue();
        virtual const IfcCostValue *getCurrentValue() const;
        virtual void setCurrentValue(const Step::RefPtr< IfcCostValue > &value);
        virtual void unsetCurrentValue();
        virtual bool testCurrentValue() const;
        /// @}

        /// Attribute TotalReplacementCost
        /// @{
        virtual IfcCostValue *getTotalReplacementCost();
        virtual const IfcCostValue *getTotalReplacementCost() const;
        virtual void setTotalReplacementCost(const Step::RefPtr< IfcCostValue > &value);
        virtual void unsetTotalReplacementCost();
        virtual bool testTotalReplacementCost() const;
        /// @}

        /// Attribute Owner
        /// @{
        virtual IfcActorSelect *getOwner();
        virtual const IfcActorSelect *getOwner() const;
        virtual void setOwner(const Step::RefPtr< IfcActorSelect > &value);
        virtual void unsetOwner();
        virtual bool testOwner() const;
        /// @}

        /// Attribute User
        /// @{
        virtual IfcActorSelect *getUser();
        virtual const IfcActorSelect *getUser() const;
        virtual void setUser(const Step::RefPtr< IfcActorSelect > &value);
        virtual void unsetUser();
        virtual bool testUser() const;
        /// @}

        /// Attribute ResponsiblePerson
        /// @{
        virtual IfcPerson *getResponsiblePerson();
        virtual const IfcPerson *getResponsiblePerson() const;
        virtual void setResponsiblePerson(const Step::RefPtr< IfcPerson > &value);
        virtual void unsetResponsiblePerson();
        virtual bool testResponsiblePerson() const;
        /// @}

        /// Attribute IncorporationDate
        /// @{
        virtual IfcCalendarDate *getIncorporationDate();
        virtual const IfcCalendarDate *getIncorporationDate() const;
        virtual void setIncorporationDate(const Step::RefPtr< IfcCalendarDate > &value);
        virtual void unsetIncorporationDate();
        virtual bool testIncorporationDate() const;
        /// @}

        /// Attribute DepreciatedValue
        /// @{
        virtual IfcCostValue *getDepreciatedValue();
        virtual const IfcCostValue *getDepreciatedValue() const;
        virtual void setDepreciatedValue(const Step::RefPtr< IfcCostValue > &value);
        virtual void unsetDepreciatedValue();
        virtual bool testDepreciatedValue() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcAsset(Step::Id id, Step::SPFData *args);
        virtual ~IfcAsset();

        virtual bool init();

        virtual void copy(const IfcAsset &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3