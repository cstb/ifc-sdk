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

#ifndef IFC2X3_IFCASSET_H
#define IFC2X3_IFCASSET_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGroup.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcCalendarDate;
    class IfcCostValue;
    class IfcPerson;

    /**
     * Generated class for the IfcAsset Entity.
     * 
     */
    class IFC2X3_EXPORT IfcAsset : public IfcGroup {
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
         * Gets the value of the explicit attribute 'AssetID'.
         * 
         */
        virtual IfcIdentifier getAssetID();
        /**
         * (const) Returns the value of the explicit attribute 'AssetID'.
         * 
         * @return the value of the explicit attribute 'AssetID'
         */
        virtual const IfcIdentifier getAssetID() const;
        /**
         * Sets the value of the explicit attribute 'AssetID'.
         * 
         * @param value
         */
        virtual void setAssetID(const IfcIdentifier &value);
        /**
         * unset the attribute 'AssetID'.
         * 
         */
        virtual void unsetAssetID();
        /**
         * Test if the attribute 'AssetID' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAssetID() const;
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
         * Gets the value of the explicit attribute 'TotalReplacementCost'.
         * 
         */
        virtual IfcCostValue *getTotalReplacementCost();
        /**
         * (const) Returns the value of the explicit attribute 'TotalReplacementCost'.
         * 
         * @return the value of the explicit attribute 'TotalReplacementCost'
         */
        virtual const IfcCostValue *getTotalReplacementCost() const;
        /**
         * Sets the value of the explicit attribute 'TotalReplacementCost'.
         * 
         * @param value
         */
        virtual void setTotalReplacementCost(const Step::RefPtr< IfcCostValue > &value);
        /**
         * unset the attribute 'TotalReplacementCost'.
         * 
         */
        virtual void unsetTotalReplacementCost();
        /**
         * Test if the attribute 'TotalReplacementCost' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTotalReplacementCost() const;
        /**
         * Gets the value of the explicit attribute 'Owner'.
         * 
         */
        virtual IfcActorSelect *getOwner();
        /**
         * (const) Returns the value of the explicit attribute 'Owner'.
         * 
         * @return the value of the explicit attribute 'Owner'
         */
        virtual const IfcActorSelect *getOwner() const;
        /**
         * Sets the value of the explicit attribute 'Owner'.
         * 
         * @param value
         */
        virtual void setOwner(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * unset the attribute 'Owner'.
         * 
         */
        virtual void unsetOwner();
        /**
         * Test if the attribute 'Owner' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOwner() const;
        /**
         * Gets the value of the explicit attribute 'User'.
         * 
         */
        virtual IfcActorSelect *getUser();
        /**
         * (const) Returns the value of the explicit attribute 'User'.
         * 
         * @return the value of the explicit attribute 'User'
         */
        virtual const IfcActorSelect *getUser() const;
        /**
         * Sets the value of the explicit attribute 'User'.
         * 
         * @param value
         */
        virtual void setUser(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * unset the attribute 'User'.
         * 
         */
        virtual void unsetUser();
        /**
         * Test if the attribute 'User' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUser() const;
        /**
         * Gets the value of the explicit attribute 'ResponsiblePerson'.
         * 
         */
        virtual IfcPerson *getResponsiblePerson();
        /**
         * (const) Returns the value of the explicit attribute 'ResponsiblePerson'.
         * 
         * @return the value of the explicit attribute 'ResponsiblePerson'
         */
        virtual const IfcPerson *getResponsiblePerson() const;
        /**
         * Sets the value of the explicit attribute 'ResponsiblePerson'.
         * 
         * @param value
         */
        virtual void setResponsiblePerson(const Step::RefPtr< IfcPerson > &value);
        /**
         * unset the attribute 'ResponsiblePerson'.
         * 
         */
        virtual void unsetResponsiblePerson();
        /**
         * Test if the attribute 'ResponsiblePerson' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testResponsiblePerson() const;
        /**
         * Gets the value of the explicit attribute 'IncorporationDate'.
         * 
         */
        virtual IfcCalendarDate *getIncorporationDate();
        /**
         * (const) Returns the value of the explicit attribute 'IncorporationDate'.
         * 
         * @return the value of the explicit attribute 'IncorporationDate'
         */
        virtual const IfcCalendarDate *getIncorporationDate() const;
        /**
         * Sets the value of the explicit attribute 'IncorporationDate'.
         * 
         * @param value
         */
        virtual void setIncorporationDate(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         * unset the attribute 'IncorporationDate'.
         * 
         */
        virtual void unsetIncorporationDate();
        /**
         * Test if the attribute 'IncorporationDate' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIncorporationDate() const;
        /**
         * Gets the value of the explicit attribute 'DepreciatedValue'.
         * 
         */
        virtual IfcCostValue *getDepreciatedValue();
        /**
         * (const) Returns the value of the explicit attribute 'DepreciatedValue'.
         * 
         * @return the value of the explicit attribute 'DepreciatedValue'
         */
        virtual const IfcCostValue *getDepreciatedValue() const;
        /**
         * Sets the value of the explicit attribute 'DepreciatedValue'.
         * 
         * @param value
         */
        virtual void setDepreciatedValue(const Step::RefPtr< IfcCostValue > &value);
        /**
         * unset the attribute 'DepreciatedValue'.
         * 
         */
        virtual void unsetDepreciatedValue();
        /**
         * Test if the attribute 'DepreciatedValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDepreciatedValue() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAsset(Step::Id id, Step::SPFData *args);
        virtual ~IfcAsset();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAsset &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_assetID;
        /**
         */
        Step::RefPtr< IfcCostValue > m_originalValue;
        /**
         */
        Step::RefPtr< IfcCostValue > m_currentValue;
        /**
         */
        Step::RefPtr< IfcCostValue > m_totalReplacementCost;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_owner;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_user;
        /**
         */
        Step::RefPtr< IfcPerson > m_responsiblePerson;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_incorporationDate;
        /**
         */
        Step::RefPtr< IfcCostValue > m_depreciatedValue;

    };

}

#endif // IFC2X3_IFCASSET_H
