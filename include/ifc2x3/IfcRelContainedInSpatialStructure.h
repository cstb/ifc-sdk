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

#ifndef IFC2X3_IFCRELCONTAINEDINSPATIALSTRUCTURE_H
#define IFC2X3_IFCRELCONTAINEDINSPATIALSTRUCTURE_H
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

    class IfcProduct;
    class IfcRelContainedInSpatialStructure;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type : public Set_IfcProduct_1_n {
    public:
        /**
         */
        typedef Set_IfcProduct_1_n::size_type size_type;

        /**
         */
        Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcProduct > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcProduct > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcRelContainedInSpatialStructure;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcRelContainedInSpatialStructure *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcRelContainedInSpatialStructure *owner);

    };

    class CopyOp;
    class IfcSpatialStructureElement;

    /**
     * Generated class for the IfcRelContainedInSpatialStructure Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelContainedInSpatialStructure : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatedElements'.
         * 
         */
        virtual Set_IfcProduct_1_n &getRelatedElements();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedElements'.
         * 
         * @return the value of the explicit attribute 'RelatedElements'
         */
        virtual const Set_IfcProduct_1_n &getRelatedElements() const;
        /**
         * unset the attribute 'RelatedElements'.
         * 
         */
        virtual void unsetRelatedElements();
        /**
         * Test if the attribute 'RelatedElements' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedElements() const;
        /**
         * Gets the value of the explicit attribute 'RelatingStructure'.
         * 
         */
        virtual IfcSpatialStructureElement *getRelatingStructure();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingStructure'.
         * 
         * @return the value of the explicit attribute 'RelatingStructure'
         */
        virtual const IfcSpatialStructureElement *getRelatingStructure() const;
        /**
         * Sets the value of the explicit attribute 'RelatingStructure'.
         * 
         * @param value
         */
        virtual void setRelatingStructure(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         * unset the attribute 'RelatingStructure'.
         * 
         */
        virtual void unsetRelatingStructure();
        /**
         * Test if the attribute 'RelatingStructure' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingStructure() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelContainedInSpatialStructure(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelContainedInSpatialStructure();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelContainedInSpatialStructure &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type m_relatedElements;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_relatingStructure;

    };

}

#endif // IFC2X3_IFCRELCONTAINEDINSPATIALSTRUCTURE_H
