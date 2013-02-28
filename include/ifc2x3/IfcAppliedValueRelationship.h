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

#ifndef IFC2X3_IFCAPPLIEDVALUERELATIONSHIP_H
#define IFC2X3_IFCAPPLIEDVALUERELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcAppliedValue;
    class IfcAppliedValueRelationship;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcAppliedValueRelationship_Components_type : public Set_IfcAppliedValue_1_n {
    public:
        /**
         */
        typedef Set_IfcAppliedValue_1_n::size_type size_type;

        /**
         */
        Inverted_IfcAppliedValueRelationship_Components_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcAppliedValue > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcAppliedValue > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcAppliedValueRelationship;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcAppliedValueRelationship *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcAppliedValueRelationship *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcAppliedValueRelationship Entity.
     * 
     */
    class IFC2X3_EXPORT IfcAppliedValueRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ComponentOfTotal'.
         * 
         */
        virtual IfcAppliedValue *getComponentOfTotal();
        /**
         * (const) Returns the value of the explicit attribute 'ComponentOfTotal'.
         * 
         * @return the value of the explicit attribute 'ComponentOfTotal'
         */
        virtual const IfcAppliedValue *getComponentOfTotal() const;
        /**
         * Sets the value of the explicit attribute 'ComponentOfTotal'.
         * 
         * @param value
         */
        virtual void setComponentOfTotal(const Step::RefPtr< IfcAppliedValue > &value);
        /**
         * unset the attribute 'ComponentOfTotal'.
         * 
         */
        virtual void unsetComponentOfTotal();
        /**
         * Test if the attribute 'ComponentOfTotal' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testComponentOfTotal() const;
        /**
         * Gets the value of the explicit attribute 'Components'.
         * 
         */
        virtual Set_IfcAppliedValue_1_n &getComponents();
        /**
         * (const) Returns the value of the explicit attribute 'Components'.
         * 
         * @return the value of the explicit attribute 'Components'
         */
        virtual const Set_IfcAppliedValue_1_n &getComponents() const;
        /**
         * unset the attribute 'Components'.
         * 
         */
        virtual void unsetComponents();
        /**
         * Test if the attribute 'Components' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testComponents() const;
        /**
         * Gets the value of the explicit attribute 'ArithmeticOperator'.
         * 
         */
        virtual IfcArithmeticOperatorEnum getArithmeticOperator();
        /**
         * (const) Returns the value of the explicit attribute 'ArithmeticOperator'.
         * 
         * @return the value of the explicit attribute 'ArithmeticOperator'
         */
        virtual const IfcArithmeticOperatorEnum getArithmeticOperator() const;
        /**
         * Sets the value of the explicit attribute 'ArithmeticOperator'.
         * 
         * @param value
         */
        virtual void setArithmeticOperator(IfcArithmeticOperatorEnum value);
        /**
         * unset the attribute 'ArithmeticOperator'.
         * 
         */
        virtual void unsetArithmeticOperator();
        /**
         * Test if the attribute 'ArithmeticOperator' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testArithmeticOperator() const;
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
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAppliedValueRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcAppliedValueRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAppliedValueRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAppliedValue > m_componentOfTotal;
        /**
         */
        Inverted_IfcAppliedValueRelationship_Components_type m_components;
        /**
         */
        IfcArithmeticOperatorEnum m_arithmeticOperator;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;

    };

}

#endif // IFC2X3_IFCAPPLIEDVALUERELATIONSHIP_H
