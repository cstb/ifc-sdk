/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCREPRESENTATION_H
#define IFC2X3_IFCREPRESENTATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRepresentationContext;

    /**
     */
    class IFC2X3_DLL_DEF IfcRepresentation : public Step::BaseEntity {
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
         * Gets the value of the inverse attribute 'RepresentationMap'.
         * 
         */
        Inverse_Set_IfcRepresentationMap_0_1 &getRepresentationMap();
        /**
         * (const) Returns the value of the explicit attribute 'RepresentationMap'.
         * 
         * @return the value of the explicit attribute 'RepresentationMap'
         */
        virtual const Inverse_Set_IfcRepresentationMap_0_1 &getRepresentationMap() const;
        /**
         * Gets the value of the inverse attribute 'LayerAssignments'.
         * 
         */
        Inverse_Set_IfcPresentationLayerAssignment_0_n &getLayerAssignments();
        /**
         * (const) Returns the value of the explicit attribute 'LayerAssignments'.
         * 
         * @return the value of the explicit attribute 'LayerAssignments'
         */
        virtual const Inverse_Set_IfcPresentationLayerAssignment_0_n &getLayerAssignments() const;
        /**
         * Gets the value of the inverse attribute 'OfProductRepresentation'.
         * 
         */
        Inverse_Set_IfcProductRepresentation_0_1 &getOfProductRepresentation();
        /**
         * (const) Returns the value of the explicit attribute 'OfProductRepresentation'.
         * 
         * @return the value of the explicit attribute 'OfProductRepresentation'
         */
        virtual const Inverse_Set_IfcProductRepresentation_0_1 &getOfProductRepresentation() const;
        friend class IfcProductRepresentation;
        friend class IfcPresentationLayerAssignment;
        friend class Inverted_IfcProductRepresentation_Representations_type;
        friend class IfcRepresentationMap;
        friend class ExpressDataSet;
        friend class Inverted_IfcPresentationLayerAssignment_AssignedItems_type;

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
