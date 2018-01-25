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

#ifndef IFC2X3_IFCPROPERTY_H
#define IFC2X3_IFCPROPERTY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcProperty Entity.
     * 
     */
    class IFC2X3_EXPORT IfcProperty : public Step::BaseEntity {
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
        virtual IfcIdentifier getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcIdentifier getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcIdentifier &value);
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
         * Gets the value of the inverse attribute 'PartOfPset'.
         * 
         */
        Inverse_Set_IfcPropertySet_0_n &getPartOfPset();
        /**
         * (const) Returns the value of the explicit attribute 'PartOfPset'.
         * 
         * @return the value of the explicit attribute 'PartOfPset'
         */
        virtual const Inverse_Set_IfcPropertySet_0_n &getPartOfPset() const;
        /**
         * Test if the attribute 'PartOfPset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPartOfPset() const;
        /**
         * Gets the value of the inverse attribute 'PropertyForDependance'.
         * 
         */
        virtual Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyForDependance();
        /**
         * (const) Returns the value of the explicit attribute 'PropertyForDependance'.
         * 
         * @return the value of the explicit attribute 'PropertyForDependance'
         */
        const virtual Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyForDependance() const;
        /**
         * Test if the attribute 'PropertyForDependance' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPropertyForDependance() const;
        /**
         * Gets the value of the inverse attribute 'PropertyDependsOn'.
         * 
         */
        virtual Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyDependsOn();
        /**
         * (const) Returns the value of the explicit attribute 'PropertyDependsOn'.
         * 
         * @return the value of the explicit attribute 'PropertyDependsOn'
         */
        const virtual Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyDependsOn() const;
        /**
         * Test if the attribute 'PropertyDependsOn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPropertyDependsOn() const;
        /**
         * Gets the value of the inverse attribute 'PartOfComplex'.
         * 
         */
        virtual Inverse_Set_IfcComplexProperty_0_1 &getPartOfComplex();
        /**
         * (const) Returns the value of the explicit attribute 'PartOfComplex'.
         * 
         * @return the value of the explicit attribute 'PartOfComplex'
         */
        const virtual Inverse_Set_IfcComplexProperty_0_1 &getPartOfComplex() const;
        /**
         * Test if the attribute 'PartOfComplex' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPartOfComplex() const;
        friend class IfcPropertyDependencyRelationship;
        friend class ExpressDataSet;
        friend class IfcComplexProperty;
        friend class Inverted_IfcComplexProperty_HasProperties_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProperty(Step::Id id, Step::SPFData *args);
        virtual ~IfcProperty();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProperty &obj, const CopyOp &copyop);

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
        Inverse_Set_IfcPropertySet_0_n *m_partOfPset;
        /**
         */
        Inverse_Set_IfcPropertyDependencyRelationship_0_n *m_propertyForDependance;
        /**
         */
        Inverse_Set_IfcPropertyDependencyRelationship_0_n *m_propertyDependsOn;
        /**
         */
        Inverse_Set_IfcComplexProperty_0_1 *m_partOfComplex;

    };

}

#endif // IFC2X3_IFCPROPERTY_H
