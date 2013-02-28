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

#ifndef IFC2X3_IFCREPRESENTATIONMAP_H
#define IFC2X3_IFCREPRESENTATIONMAP_H
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
    class IfcAxis2Placement;
    class IfcRepresentation;

    /**
     * Generated class for the IfcRepresentationMap Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRepresentationMap : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'MappingOrigin'.
         * 
         */
        virtual IfcAxis2Placement *getMappingOrigin();
        /**
         * (const) Returns the value of the explicit attribute 'MappingOrigin'.
         * 
         * @return the value of the explicit attribute 'MappingOrigin'
         */
        virtual const IfcAxis2Placement *getMappingOrigin() const;
        /**
         * Sets the value of the explicit attribute 'MappingOrigin'.
         * 
         * @param value
         */
        virtual void setMappingOrigin(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         * unset the attribute 'MappingOrigin'.
         * 
         */
        virtual void unsetMappingOrigin();
        /**
         * Test if the attribute 'MappingOrigin' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMappingOrigin() const;
        /**
         * Gets the value of the explicit attribute 'MappedRepresentation'.
         * 
         */
        virtual IfcRepresentation *getMappedRepresentation();
        /**
         * (const) Returns the value of the explicit attribute 'MappedRepresentation'.
         * 
         * @return the value of the explicit attribute 'MappedRepresentation'
         */
        virtual const IfcRepresentation *getMappedRepresentation() const;
        /**
         * Sets the value of the explicit attribute 'MappedRepresentation'.
         * 
         * @param value
         */
        virtual void setMappedRepresentation(const Step::RefPtr< IfcRepresentation > &value);
        /**
         * unset the attribute 'MappedRepresentation'.
         * 
         */
        virtual void unsetMappedRepresentation();
        /**
         * Test if the attribute 'MappedRepresentation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMappedRepresentation() const;
        /**
         * Gets the value of the inverse attribute 'MapUsage'.
         * 
         */
        virtual Inverse_Set_IfcMappedItem_0_n &getMapUsage();
        /**
         * (const) Returns the value of the explicit attribute 'MapUsage'.
         * 
         * @return the value of the explicit attribute 'MapUsage'
         */
        const virtual Inverse_Set_IfcMappedItem_0_n &getMapUsage() const;
        /**
         * Test if the attribute 'MapUsage' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMapUsage() const;
        friend class IfcMappedItem;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRepresentationMap(Step::Id id, Step::SPFData *args);
        virtual ~IfcRepresentationMap();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRepresentationMap &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_mappingOrigin;
        /**
         */
        Step::RefPtr< IfcRepresentation > m_mappedRepresentation;
        /**
         */
        Inverse_Set_IfcMappedItem_0_n m_mapUsage;

    };

}

#endif // IFC2X3_IFCREPRESENTATIONMAP_H
