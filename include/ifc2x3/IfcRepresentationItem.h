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
 *     Copyright (C) 2009 CSTB                                             *
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

#ifndef IFC2X3_IFCREPRESENTATIONITEM_H
#define IFC2X3_IFCREPRESENTATIONITEM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcRepresentationItem Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRepresentationItem : public Step::BaseEntity {
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
         * Test if the attribute 'LayerAssignments' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLayerAssignments() const;
        /**
         * Gets the value of the inverse attribute 'StyledByItem'.
         * 
         */
        Inverse_Set_IfcStyledItem_0_1 &getStyledByItem();
        /**
         * (const) Returns the value of the explicit attribute 'StyledByItem'.
         * 
         * @return the value of the explicit attribute 'StyledByItem'
         */
        virtual const Inverse_Set_IfcStyledItem_0_1 &getStyledByItem() const;
        /**
         * Test if the attribute 'StyledByItem' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStyledByItem() const;
        friend class Inverted_IfcPresentationLayerAssignment_AssignedItems_type;
        friend class IfcPresentationLayerAssignment;
        friend class ExpressDataSet;
        friend class IfcStyledItem;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRepresentationItem(Step::Id id, Step::SPFData *args);
        virtual ~IfcRepresentationItem();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRepresentationItem &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverse_Set_IfcPresentationLayerAssignment_0_n m_layerAssignments;
        /**
         */
        Inverse_Set_IfcStyledItem_0_1 m_styledByItem;

    };

}

#endif // IFC2X3_IFCREPRESENTATIONITEM_H
