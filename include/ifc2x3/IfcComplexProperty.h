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

#ifndef IFC2X3_IFCCOMPLEXPROPERTY_H
#define IFC2X3_IFCCOMPLEXPROPERTY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>
#include <ifc2x3/IfcComplexProperty.h>
#include <ifc2x3/IfcProperty.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcComplexProperty_HasProperties_type : public Set_IfcProperty_1_n {
    public:
        /**
         */
        typedef Set_IfcProperty_1_n::size_type size_type;

        /**
         */
        Inverted_IfcComplexProperty_HasProperties_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        void insert(const Step::RefPtr< IfcProperty > &value) throw(std::out_of_range) override;
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        size_type erase(const Step::RefPtr< IfcProperty > &value) override;
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcComplexProperty;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcComplexProperty *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcComplexProperty *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcComplexProperty Entity.
     * 
     */
    class IFC2X3_EXPORT IfcComplexProperty : public IfcProperty {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        bool acceptVisitor(Step::BaseVisitor *visitor) override;
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        const std::string &type() const override;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        const Step::ClassType &getType() const override;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        bool isOfType(const Step::ClassType &t) const override;
        /**
         * Gets the value of the explicit attribute 'UsageName'.
         * 
         */
        virtual IfcIdentifier getUsageName();
        /**
         * (const) Returns the value of the explicit attribute 'UsageName'.
         * 
         * @return the value of the explicit attribute 'UsageName'
         */
        virtual const IfcIdentifier getUsageName() const;
        /**
         * Sets the value of the explicit attribute 'UsageName'.
         * 
         * @param value
         */
        virtual void setUsageName(const IfcIdentifier &value);
        /**
         * unset the attribute 'UsageName'.
         * 
         */
        virtual void unsetUsageName();
        /**
         * Test if the attribute 'UsageName' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUsageName() const;
        /**
         * Gets the value of the explicit attribute 'HasProperties'.
         * 
         */
        virtual Set_IfcProperty_1_n &getHasProperties();
        /**
         * (const) Returns the value of the explicit attribute 'HasProperties'.
         * 
         * @return the value of the explicit attribute 'HasProperties'
         */
        virtual const Set_IfcProperty_1_n &getHasProperties() const;
        /**
         * unset the attribute 'HasProperties'.
         * 
         */
        virtual void unsetHasProperties();
        /**
         * Test if the attribute 'HasProperties' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasProperties() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcComplexProperty(Step::Id id, Step::SPFData *args);
        ~IfcComplexProperty() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcComplexProperty &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_usageName;
        /**
         */
        Inverted_IfcComplexProperty_HasProperties_type m_hasProperties;

    };

}

#endif // IFC2X3_IFCCOMPLEXPROPERTY_H
