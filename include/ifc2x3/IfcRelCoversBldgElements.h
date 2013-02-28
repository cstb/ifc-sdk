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

#ifndef IFC2X3_IFCRELCOVERSBLDGELEMENTS_H
#define IFC2X3_IFCRELCOVERSBLDGELEMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelConnects.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcCovering;
    class IfcRelCoversBldgElements;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcRelCoversBldgElements_RelatedCoverings_type : public Set_IfcCovering_1_n {
    public:
        /**
         */
        typedef Set_IfcCovering_1_n::size_type size_type;

        /**
         */
        Inverted_IfcRelCoversBldgElements_RelatedCoverings_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcCovering > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcCovering > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcRelCoversBldgElements;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcRelCoversBldgElements *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcRelCoversBldgElements *owner);

    };

    class CopyOp;
    class IfcElement;

    /**
     * Generated class for the IfcRelCoversBldgElements Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelCoversBldgElements : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         */
        virtual IfcElement *getRelatingBuildingElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         * @return the value of the explicit attribute 'RelatingBuildingElement'
         */
        virtual const IfcElement *getRelatingBuildingElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         * @param value
         */
        virtual void setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value);
        /**
         * unset the attribute 'RelatingBuildingElement'.
         * 
         */
        virtual void unsetRelatingBuildingElement();
        /**
         * Test if the attribute 'RelatingBuildingElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingBuildingElement() const;
        /**
         * Gets the value of the explicit attribute 'RelatedCoverings'.
         * 
         */
        virtual Set_IfcCovering_1_n &getRelatedCoverings();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedCoverings'.
         * 
         * @return the value of the explicit attribute 'RelatedCoverings'
         */
        virtual const Set_IfcCovering_1_n &getRelatedCoverings() const;
        /**
         * unset the attribute 'RelatedCoverings'.
         * 
         */
        virtual void unsetRelatedCoverings();
        /**
         * Test if the attribute 'RelatedCoverings' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedCoverings() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelCoversBldgElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelCoversBldgElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelCoversBldgElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcElement > m_relatingBuildingElement;
        /**
         */
        Inverted_IfcRelCoversBldgElements_RelatedCoverings_type m_relatedCoverings;

    };

}

#endif // IFC2X3_IFCRELCOVERSBLDGELEMENTS_H
