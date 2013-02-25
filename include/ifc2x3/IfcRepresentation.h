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

#ifndef IFC2X3_IFCREPRESENTATION_H
#define IFC2X3_IFCREPRESENTATION_H
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
    class IfcRepresentationContext;

    /**
     * Generated class for the IfcRepresentation Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRepresentation : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ContextOfItems'.
         * 
         */
        virtual IfcRepresentationContext *getContextOfItems();
        /**
         * (const) Returns the value of the explicit attribute 'ContextOfItems'.
         * 
         * @return the value of the explicit attribute 'ContextOfItems'
         */
        virtual const IfcRepresentationContext *getContextOfItems() const;
        /**
         * Sets the value of the explicit attribute 'ContextOfItems'.
         * 
         * @param value
         */
        virtual void setContextOfItems(const Step::RefPtr< IfcRepresentationContext > &value);
        /**
         * unset the attribute 'ContextOfItems'.
         * 
         */
        virtual void unsetContextOfItems();
        /**
         * Test if the attribute 'ContextOfItems' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testContextOfItems() const;
        /**
         * Gets the value of the explicit attribute 'RepresentationIdentifier'.
         * 
         */
        virtual IfcLabel getRepresentationIdentifier();
        /**
         * (const) Returns the value of the explicit attribute 'RepresentationIdentifier'.
         * 
         * @return the value of the explicit attribute 'RepresentationIdentifier'
         */
        virtual const IfcLabel getRepresentationIdentifier() const;
        /**
         * Sets the value of the explicit attribute 'RepresentationIdentifier'.
         * 
         * @param value
         */
        virtual void setRepresentationIdentifier(const IfcLabel &value);
        /**
         * unset the attribute 'RepresentationIdentifier'.
         * 
         */
        virtual void unsetRepresentationIdentifier();
        /**
         * Test if the attribute 'RepresentationIdentifier' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRepresentationIdentifier() const;
        /**
         * Gets the value of the explicit attribute 'RepresentationType'.
         * 
         */
        virtual IfcLabel getRepresentationType();
        /**
         * (const) Returns the value of the explicit attribute 'RepresentationType'.
         * 
         * @return the value of the explicit attribute 'RepresentationType'
         */
        virtual const IfcLabel getRepresentationType() const;
        /**
         * Sets the value of the explicit attribute 'RepresentationType'.
         * 
         * @param value
         */
        virtual void setRepresentationType(const IfcLabel &value);
        /**
         * unset the attribute 'RepresentationType'.
         * 
         */
        virtual void unsetRepresentationType();
        /**
         * Test if the attribute 'RepresentationType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRepresentationType() const;
        /**
         * Gets the value of the explicit attribute 'Items'.
         * 
         */
        virtual Set_IfcRepresentationItem_1_n &getItems();
        /**
         * (const) Returns the value of the explicit attribute 'Items'.
         * 
         * @return the value of the explicit attribute 'Items'
         */
        virtual const Set_IfcRepresentationItem_1_n &getItems() const;
        /**
         * Sets the value of the explicit attribute 'Items'.
         * 
         * @param value
         */
        virtual void setItems(const Set_IfcRepresentationItem_1_n &value);
        /**
         * unset the attribute 'Items'.
         * 
         */
        virtual void unsetItems();
        /**
         * Test if the attribute 'Items' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testItems() const;
        /**
         * Gets the value of the inverse attribute 'RepresentationMap'.
         * 
         */
        virtual Inverse_Set_IfcRepresentationMap_0_1 &getRepresentationMap();
        /**
         * (const) Returns the value of the explicit attribute 'RepresentationMap'.
         * 
         * @return the value of the explicit attribute 'RepresentationMap'
         */
        const virtual Inverse_Set_IfcRepresentationMap_0_1 &getRepresentationMap() const;
        /**
         * Test if the attribute 'RepresentationMap' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRepresentationMap() const;
        /**
         * Gets the value of the inverse attribute 'LayerAssignments'.
         * 
         */
        virtual Inverse_Set_IfcPresentationLayerAssignment_0_n &getLayerAssignments();
        /**
         * (const) Returns the value of the explicit attribute 'LayerAssignments'.
         * 
         * @return the value of the explicit attribute 'LayerAssignments'
         */
        const virtual Inverse_Set_IfcPresentationLayerAssignment_0_n &getLayerAssignments() const;
        /**
         * Test if the attribute 'LayerAssignments' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLayerAssignments() const;
        /**
         * Gets the value of the inverse attribute 'OfProductRepresentation'.
         * 
         */
        virtual Inverse_Set_IfcProductRepresentation_0_1 &getOfProductRepresentation();
        /**
         * (const) Returns the value of the explicit attribute 'OfProductRepresentation'.
         * 
         * @return the value of the explicit attribute 'OfProductRepresentation'
         */
        const virtual Inverse_Set_IfcProductRepresentation_0_1 &getOfProductRepresentation() const;
        /**
         * Test if the attribute 'OfProductRepresentation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOfProductRepresentation() const;
        friend class Inverted_IfcPresentationLayerAssignment_AssignedItems_type;
        friend class IfcPresentationLayerAssignment;
        friend class IfcRepresentationMap;
        friend class ExpressDataSet;
        friend class Inverted_IfcProductRepresentation_Representations_type;
        friend class IfcProductRepresentation;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRepresentation(Step::Id id, Step::SPFData *args);
        virtual ~IfcRepresentation();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRepresentation &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcRepresentationContext > m_contextOfItems;
        /**
         */
        Step::String m_representationIdentifier;
        /**
         */
        Step::String m_representationType;
        /**
         */
        Set_IfcRepresentationItem_1_n m_items;
        /**
         */
        Inverse_Set_IfcRepresentationMap_0_1 m_representationMap;
        /**
         */
        Inverse_Set_IfcPresentationLayerAssignment_0_n m_layerAssignments;
        /**
         */
        Inverse_Set_IfcProductRepresentation_0_1 m_ofProductRepresentation;

    };

}

#endif // IFC2X3_IFCREPRESENTATION_H
