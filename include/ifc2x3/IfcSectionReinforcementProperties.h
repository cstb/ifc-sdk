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

#ifndef IFC2X3_IFCSECTIONREINFORCEMENTPROPERTIES_H
#define IFC2X3_IFCSECTIONREINFORCEMENTPROPERTIES_H
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
    class IfcSectionProperties;

    /**
     * Generated class for the IfcSectionReinforcementProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSectionReinforcementProperties : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'LongitudinalStartPosition'.
         * 
         */
        virtual IfcLengthMeasure getLongitudinalStartPosition();
        /**
         * (const) Returns the value of the explicit attribute 'LongitudinalStartPosition'.
         * 
         * @return the value of the explicit attribute 'LongitudinalStartPosition'
         */
        virtual const IfcLengthMeasure getLongitudinalStartPosition() const;
        /**
         * Sets the value of the explicit attribute 'LongitudinalStartPosition'.
         * 
         * @param value
         */
        virtual void setLongitudinalStartPosition(IfcLengthMeasure value);
        /**
         * unset the attribute 'LongitudinalStartPosition'.
         * 
         */
        virtual void unsetLongitudinalStartPosition();
        /**
         * Test if the attribute 'LongitudinalStartPosition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLongitudinalStartPosition() const;
        /**
         * Gets the value of the explicit attribute 'LongitudinalEndPosition'.
         * 
         */
        virtual IfcLengthMeasure getLongitudinalEndPosition();
        /**
         * (const) Returns the value of the explicit attribute 'LongitudinalEndPosition'.
         * 
         * @return the value of the explicit attribute 'LongitudinalEndPosition'
         */
        virtual const IfcLengthMeasure getLongitudinalEndPosition() const;
        /**
         * Sets the value of the explicit attribute 'LongitudinalEndPosition'.
         * 
         * @param value
         */
        virtual void setLongitudinalEndPosition(IfcLengthMeasure value);
        /**
         * unset the attribute 'LongitudinalEndPosition'.
         * 
         */
        virtual void unsetLongitudinalEndPosition();
        /**
         * Test if the attribute 'LongitudinalEndPosition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLongitudinalEndPosition() const;
        /**
         * Gets the value of the explicit attribute 'TransversePosition'.
         * 
         */
        virtual IfcLengthMeasure getTransversePosition();
        /**
         * (const) Returns the value of the explicit attribute 'TransversePosition'.
         * 
         * @return the value of the explicit attribute 'TransversePosition'
         */
        virtual const IfcLengthMeasure getTransversePosition() const;
        /**
         * Sets the value of the explicit attribute 'TransversePosition'.
         * 
         * @param value
         */
        virtual void setTransversePosition(IfcLengthMeasure value);
        /**
         * unset the attribute 'TransversePosition'.
         * 
         */
        virtual void unsetTransversePosition();
        /**
         * Test if the attribute 'TransversePosition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTransversePosition() const;
        /**
         * Gets the value of the explicit attribute 'ReinforcementRole'.
         * 
         */
        virtual IfcReinforcingBarRoleEnum getReinforcementRole();
        /**
         * (const) Returns the value of the explicit attribute 'ReinforcementRole'.
         * 
         * @return the value of the explicit attribute 'ReinforcementRole'
         */
        virtual const IfcReinforcingBarRoleEnum getReinforcementRole() const;
        /**
         * Sets the value of the explicit attribute 'ReinforcementRole'.
         * 
         * @param value
         */
        virtual void setReinforcementRole(IfcReinforcingBarRoleEnum value);
        /**
         * unset the attribute 'ReinforcementRole'.
         * 
         */
        virtual void unsetReinforcementRole();
        /**
         * Test if the attribute 'ReinforcementRole' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testReinforcementRole() const;
        /**
         * Gets the value of the explicit attribute 'SectionDefinition'.
         * 
         */
        virtual IfcSectionProperties *getSectionDefinition();
        /**
         * (const) Returns the value of the explicit attribute 'SectionDefinition'.
         * 
         * @return the value of the explicit attribute 'SectionDefinition'
         */
        virtual const IfcSectionProperties *getSectionDefinition() const;
        /**
         * Sets the value of the explicit attribute 'SectionDefinition'.
         * 
         * @param value
         */
        virtual void setSectionDefinition(const Step::RefPtr< IfcSectionProperties > &value);
        /**
         * unset the attribute 'SectionDefinition'.
         * 
         */
        virtual void unsetSectionDefinition();
        /**
         * Test if the attribute 'SectionDefinition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSectionDefinition() const;
        /**
         * Gets the value of the explicit attribute 'CrossSectionReinforcementDefinitions'.
         * 
         */
        virtual Set_IfcReinforcementBarProperties_1_n &getCrossSectionReinforcementDefinitions();
        /**
         * (const) Returns the value of the explicit attribute 'CrossSectionReinforcementDefinitions'.
         * 
         * @return the value of the explicit attribute 'CrossSectionReinforcementDefinitions'
         */
        virtual const Set_IfcReinforcementBarProperties_1_n &getCrossSectionReinforcementDefinitions() const;
        /**
         * Sets the value of the explicit attribute 'CrossSectionReinforcementDefinitions'.
         * 
         * @param value
         */
        virtual void setCrossSectionReinforcementDefinitions(const Set_IfcReinforcementBarProperties_1_n &value);
        /**
         * unset the attribute 'CrossSectionReinforcementDefinitions'.
         * 
         */
        virtual void unsetCrossSectionReinforcementDefinitions();
        /**
         * Test if the attribute 'CrossSectionReinforcementDefinitions' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCrossSectionReinforcementDefinitions() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSectionReinforcementProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcSectionReinforcementProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSectionReinforcementProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_longitudinalStartPosition;
        /**
         */
        Step::Real m_longitudinalEndPosition;
        /**
         */
        Step::Real m_transversePosition;
        /**
         */
        IfcReinforcingBarRoleEnum m_reinforcementRole;
        /**
         */
        Step::RefPtr< IfcSectionProperties > m_sectionDefinition;
        /**
         */
        Set_IfcReinforcementBarProperties_1_n m_crossSectionReinforcementDefinitions;

    };

}

#endif // IFC2X3_IFCSECTIONREINFORCEMENTPROPERTIES_H
