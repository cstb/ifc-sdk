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

#ifndef IFC2X3_IFCPHYSICALCOMPLEXQUANTITY_H
#define IFC2X3_IFCPHYSICALCOMPLEXQUANTITY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>
#include <ifc2x3/IfcPhysicalQuantity.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcPhysicalComplexQuantity;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcPhysicalComplexQuantity_HasQuantities_type : public Set_IfcPhysicalQuantity_1_n {
    public:
        /**
         */
        typedef Set_IfcPhysicalQuantity_1_n::size_type size_type;

        /**
         */
        Inverted_IfcPhysicalComplexQuantity_HasQuantities_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcPhysicalQuantity > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcPhysicalQuantity > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcPhysicalComplexQuantity;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcPhysicalComplexQuantity *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcPhysicalComplexQuantity *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcPhysicalComplexQuantity Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPhysicalComplexQuantity : public IfcPhysicalQuantity {
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
         * Gets the value of the explicit attribute 'HasQuantities'.
         * 
         */
        virtual Set_IfcPhysicalQuantity_1_n &getHasQuantities();
        /**
         * (const) Returns the value of the explicit attribute 'HasQuantities'.
         * 
         * @return the value of the explicit attribute 'HasQuantities'
         */
        virtual const Set_IfcPhysicalQuantity_1_n &getHasQuantities() const;
        /**
         * unset the attribute 'HasQuantities'.
         * 
         */
        virtual void unsetHasQuantities();
        /**
         * Test if the attribute 'HasQuantities' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasQuantities() const;
        /**
         * Gets the value of the explicit attribute 'Discrimination'.
         * 
         */
        virtual IfcLabel getDiscrimination();
        /**
         * (const) Returns the value of the explicit attribute 'Discrimination'.
         * 
         * @return the value of the explicit attribute 'Discrimination'
         */
        virtual const IfcLabel getDiscrimination() const;
        /**
         * Sets the value of the explicit attribute 'Discrimination'.
         * 
         * @param value
         */
        virtual void setDiscrimination(const IfcLabel &value);
        /**
         * unset the attribute 'Discrimination'.
         * 
         */
        virtual void unsetDiscrimination();
        /**
         * Test if the attribute 'Discrimination' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDiscrimination() const;
        /**
         * Gets the value of the explicit attribute 'Quality'.
         * 
         */
        virtual IfcLabel getQuality();
        /**
         * (const) Returns the value of the explicit attribute 'Quality'.
         * 
         * @return the value of the explicit attribute 'Quality'
         */
        virtual const IfcLabel getQuality() const;
        /**
         * Sets the value of the explicit attribute 'Quality'.
         * 
         * @param value
         */
        virtual void setQuality(const IfcLabel &value);
        /**
         * unset the attribute 'Quality'.
         * 
         */
        virtual void unsetQuality();
        /**
         * Test if the attribute 'Quality' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testQuality() const;
        /**
         * Gets the value of the explicit attribute 'Usage'.
         * 
         */
        virtual IfcLabel getUsage();
        /**
         * (const) Returns the value of the explicit attribute 'Usage'.
         * 
         * @return the value of the explicit attribute 'Usage'
         */
        virtual const IfcLabel getUsage() const;
        /**
         * Sets the value of the explicit attribute 'Usage'.
         * 
         * @param value
         */
        virtual void setUsage(const IfcLabel &value);
        /**
         * unset the attribute 'Usage'.
         * 
         */
        virtual void unsetUsage();
        /**
         * Test if the attribute 'Usage' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUsage() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPhysicalComplexQuantity(Step::Id id, Step::SPFData *args);
        virtual ~IfcPhysicalComplexQuantity();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcPhysicalComplexQuantity_HasQuantities_type m_hasQuantities;
        /**
         */
        Step::String m_discrimination;
        /**
         */
        Step::String m_quality;
        /**
         */
        Step::String m_usage;

    };

}

#endif // IFC2X3_IFCPHYSICALCOMPLEXQUANTITY_H
