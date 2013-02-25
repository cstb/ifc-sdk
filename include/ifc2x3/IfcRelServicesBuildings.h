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

#ifndef IFC2X3_IFCRELSERVICESBUILDINGS_H
#define IFC2X3_IFCRELSERVICESBUILDINGS_H
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

    class IfcRelServicesBuildings;
    class IfcSpatialStructureElement;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcRelServicesBuildings_RelatedBuildings_type : public Set_IfcSpatialStructureElement_1_n {
    public:
        /**
         */
        typedef Set_IfcSpatialStructureElement_1_n::size_type size_type;

        /**
         */
        Inverted_IfcRelServicesBuildings_RelatedBuildings_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcSpatialStructureElement > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcRelServicesBuildings;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcRelServicesBuildings *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcRelServicesBuildings *owner);

    };

    class CopyOp;
    class IfcSystem;

    /**
     * Generated class for the IfcRelServicesBuildings Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelServicesBuildings : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingSystem'.
         * 
         */
        virtual IfcSystem *getRelatingSystem();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingSystem'.
         * 
         * @return the value of the explicit attribute 'RelatingSystem'
         */
        virtual const IfcSystem *getRelatingSystem() const;
        /**
         * Sets the value of the explicit attribute 'RelatingSystem'.
         * 
         * @param value
         */
        virtual void setRelatingSystem(const Step::RefPtr< IfcSystem > &value);
        /**
         * unset the attribute 'RelatingSystem'.
         * 
         */
        virtual void unsetRelatingSystem();
        /**
         * Test if the attribute 'RelatingSystem' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingSystem() const;
        /**
         * Gets the value of the explicit attribute 'RelatedBuildings'.
         * 
         */
        virtual Set_IfcSpatialStructureElement_1_n &getRelatedBuildings();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedBuildings'.
         * 
         * @return the value of the explicit attribute 'RelatedBuildings'
         */
        virtual const Set_IfcSpatialStructureElement_1_n &getRelatedBuildings() const;
        /**
         * unset the attribute 'RelatedBuildings'.
         * 
         */
        virtual void unsetRelatedBuildings();
        /**
         * Test if the attribute 'RelatedBuildings' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedBuildings() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelServicesBuildings(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelServicesBuildings();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelServicesBuildings &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSystem > m_relatingSystem;
        /**
         */
        Inverted_IfcRelServicesBuildings_RelatedBuildings_type m_relatedBuildings;

    };

}

#endif // IFC2X3_IFCRELSERVICESBUILDINGS_H
