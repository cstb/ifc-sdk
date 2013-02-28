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

#ifndef IFC2X3_IFCPROPERTYSETDEFINITION_H
#define IFC2X3_IFCPROPERTYSETDEFINITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPropertyDefinition.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcPropertySetDefinition Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPropertySetDefinition : public IfcPropertyDefinition {
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
         * Gets the value of the inverse attribute 'PropertyDefinitionOf'.
         * 
         */
        virtual Inverse_Set_IfcRelDefinesByProperties_0_1 &getPropertyDefinitionOf();
        /**
         * (const) Returns the value of the explicit attribute 'PropertyDefinitionOf'.
         * 
         * @return the value of the explicit attribute 'PropertyDefinitionOf'
         */
        const virtual Inverse_Set_IfcRelDefinesByProperties_0_1 &getPropertyDefinitionOf() const;
        /**
         * Test if the attribute 'PropertyDefinitionOf' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPropertyDefinitionOf() const;
        /**
         * Gets the value of the inverse attribute 'DefinesType'.
         * 
         */
        virtual Inverse_Set_IfcTypeObject_0_1 &getDefinesType();
        /**
         * (const) Returns the value of the explicit attribute 'DefinesType'.
         * 
         * @return the value of the explicit attribute 'DefinesType'
         */
        const virtual Inverse_Set_IfcTypeObject_0_1 &getDefinesType() const;
        /**
         * Test if the attribute 'DefinesType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDefinesType() const;
        friend class Inverted_IfcTypeObject_HasPropertySets_type;
        friend class IfcRelDefinesByProperties;
        friend class ExpressDataSet;
        friend class IfcTypeObject;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertySetDefinition(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertySetDefinition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertySetDefinition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverse_Set_IfcRelDefinesByProperties_0_1 m_propertyDefinitionOf;
        /**
         */
        Inverse_Set_IfcTypeObject_0_1 m_definesType;

    };

}

#endif // IFC2X3_IFCPROPERTYSETDEFINITION_H
