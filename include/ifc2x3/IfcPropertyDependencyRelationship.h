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

#ifndef IFC2X3_IFCPROPERTYDEPENDENCYRELATIONSHIP_H
#define IFC2X3_IFCPROPERTYDEPENDENCYRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcProperty;

    /**
     * Generated class for the IfcPropertyDependencyRelationship Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPropertyDependencyRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'DependingProperty'.
         * 
         */
        virtual IfcProperty *getDependingProperty();
        /**
         * (const) Returns the value of the explicit attribute 'DependingProperty'.
         * 
         * @return the value of the explicit attribute 'DependingProperty'
         */
        virtual const IfcProperty *getDependingProperty() const;
        /**
         * Sets the value of the explicit attribute 'DependingProperty'.
         * 
         * @param value
         */
        virtual void setDependingProperty(const Step::RefPtr< IfcProperty > &value);
        /**
         * unset the attribute 'DependingProperty'.
         * 
         */
        virtual void unsetDependingProperty();
        /**
         * Test if the attribute 'DependingProperty' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDependingProperty() const;
        /**
         * Gets the value of the explicit attribute 'DependantProperty'.
         * 
         */
        virtual IfcProperty *getDependantProperty();
        /**
         * (const) Returns the value of the explicit attribute 'DependantProperty'.
         * 
         * @return the value of the explicit attribute 'DependantProperty'
         */
        virtual const IfcProperty *getDependantProperty() const;
        /**
         * Sets the value of the explicit attribute 'DependantProperty'.
         * 
         * @param value
         */
        virtual void setDependantProperty(const Step::RefPtr< IfcProperty > &value);
        /**
         * unset the attribute 'DependantProperty'.
         * 
         */
        virtual void unsetDependantProperty();
        /**
         * Test if the attribute 'DependantProperty' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDependantProperty() const;
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
         * Gets the value of the explicit attribute 'Expression'.
         * 
         */
        virtual IfcText getExpression();
        /**
         * (const) Returns the value of the explicit attribute 'Expression'.
         * 
         * @return the value of the explicit attribute 'Expression'
         */
        virtual const IfcText getExpression() const;
        /**
         * Sets the value of the explicit attribute 'Expression'.
         * 
         * @param value
         */
        virtual void setExpression(const IfcText &value);
        /**
         * unset the attribute 'Expression'.
         * 
         */
        virtual void unsetExpression();
        /**
         * Test if the attribute 'Expression' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testExpression() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertyDependencyRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyDependencyRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertyDependencyRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcProperty > m_dependingProperty;
        /**
         */
        Step::RefPtr< IfcProperty > m_dependantProperty;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        Step::String m_expression;

    };

}

#endif // IFC2X3_IFCPROPERTYDEPENDENCYRELATIONSHIP_H
