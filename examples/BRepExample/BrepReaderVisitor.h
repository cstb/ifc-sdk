#ifndef BREPREADERVISITOR_H
#define BREPREADERVISITOR_H

#include "BrepBuilder.h"

#include <ifc2x3/InheritVisitor.h>

/*!
** \class BrepReaderVisitor BrepReaderVisitor.h
** \brief Class used as interface for the BrepBuilder
** 
** From a given ifc item, scan all the child items.
** Through the BRepBuilder attribut:
** placements are pushed (at the start) and popped (at the end) when an ifcproduct is visited
** ifcproduct, ifcrepresentation, ifcclosedshell, ifcface and ifcpoint are added when they are visited
*/
class BrepReaderVisitor : public ifc2x3::InheritVisitor
{
public:
    BrepReaderVisitor(BRepBuilder* brepBuilder);
	
    /*!
    ** \brief Visit "decomposedby" items of an IfcObjectDefinition
    */
    bool visitIfcObjectDefinition(ifc2x3::IfcObjectDefinition *value) override;
    /*!
    ** \brief Visit "relatedObjects" items of an IfcRelAggregates
    */
    bool visitIfcRelAggregates(ifc2x3::IfcRelAggregates *value) override;
    
    /*!
    ** \brief Visit an IfcProduct
    ** If it has a placement, push it at the start
    ** Add the product to the BRepBuilder
    ** Visit "decomposedby" items
    ** If it has a placement, pop it at the end 
    */
    bool visitIfcProduct(ifc2x3::IfcProduct *value) override;
    /*!
    ** \brief Visit an IfcSpatialStructureElement
    ** If it has a placement, push it at the start
    ** Add the product to the BRepBuilder
    ** Visit "containsElements" items
    ** Visit "decomposedby" items
    ** If it has a placement, pop it at the end 
    */
    bool visitIfcSpatialStructureElement(ifc2x3::IfcSpatialStructureElement *value) override;
    /*!
    ** \brief Visit an IfcElement
    ** If the element fills something and its parent visitor function is not an IfcOpeningElement, do not visit the IfcElement
    ** If it has a placement, push it at the start
    ** Add the product to the BRepBuilder
    ** Visit "openings" items
    ** Visit "decomposedby" items
    ** If it has a placement, pop it at the end 
    */
    bool visitIfcElement(ifc2x3::IfcElement *value) override;
    /*!
    ** \brief Visit an IfcOpeningElement
    ** If it has a placement, push it at the start
    ** Add the product to the BRepBuilder
    ** Visit "fillings" items
    ** If it has a placement, pop it at the end 
    */
    bool visitIfcOpeningElement(ifc2x3::IfcOpeningElement *value) override;
    /*!
    ** \brief Visit "relatedElements" items of an IfcRelContainedInSpatialStructure
    */
    bool visitIfcRelContainedInSpatialStructure(ifc2x3::IfcRelContainedInSpatialStructure *value) override;
    /*!
    ** \brief Visit the "Brep" representations of an IfcProductRepresentation
    */
    bool visitIfcProductRepresentation(ifc2x3::IfcProductRepresentation *value) override;
    /*!
    ** \brief Visit "representationItems" items of an IfcRepresentation
    */
    bool visitIfcRepresentation(ifc2x3::IfcRepresentation *value) override;
    /*!
    ** \brief Visit an IfcFacetedBrep
    ** Add the representation to the BRepBuilder
    ** Visit the "closedShell" item if there is one
    */
    bool visitIfcFacetedBrep(ifc2x3::IfcFacetedBrep *value) override;
    /*!
    ** \brief Visit an IfcClosedShell
    ** Add the closedShell to the BRepBuilder
    ** Visit "faces" items
    */
    bool visitIfcClosedShell(ifc2x3::IfcClosedShell *value) override;
    /*!
    ** \brief Visit an IfcFace
    ** Add the face to the BRepBuilder
    ** Visit "polyLoop" items
    */
    bool visitIfcFace(ifc2x3::IfcFace *value) override;
    /*!
    ** \brief Visit "cartesianPoints" items of an IfcPolyLoop
    */
    bool visitIfcPolyLoop(ifc2x3::IfcPolyLoop *value) override;
    /*!
    ** \brief Visit an IfcCartesianPoint
    ** Add the point to the BRepBuilder
    */
    bool visitIfcCartesianPoint(ifc2x3::IfcCartesianPoint *value) override;
    
    /*!
    ** \brief Visit the relative placement of an IfcLocalPlacement
    */
    bool visitIfcLocalPlacement(ifc2x3::IfcLocalPlacement *value) override;
    /*!
    ** \brief Visit the IfcAxis2Placement3D of an IfcAxis2Placement if there is one
    */
    bool visitIfcAxis2Placement(ifc2x3::IfcAxis2Placement *value) override;
    /*!
    ** \brief Add the axis2Placement3D to the BRepBuilder
    */
    bool visitIfcAxis2Placement3D(ifc2x3::IfcAxis2Placement3D *value) override;
    
    /*!
    ** \brief Do not visit IfcDoor
    ** If you want to visit doors, remove or comment this method
    */
    bool visitIfcDoor(ifc2x3::IfcDoor * /*value*/) override
    {
        return true;
    };
    /*!
    ** \brief Do not visit IfcWindow
    ** If you want to visit windows, remove or comment this method
    */
    bool visitIfcWindow(ifc2x3::IfcWindow * /*value*/) override
    {
        return true;
    };

protected:
    /*!
    ** \brief Visit an IfcFace
    ** Push the object placement if there is one
    ** Add the product to the BRepBuilder
    ** Visit the representation if there is one
    ** \return if the product has an object placement
    */
    bool pushPlacementAndComputeRepresentation(ifc2x3::IfcProduct *value, bool addProduct = true);

protected:
	BRepBuilder* _brepBuilder;
    bool _fatherIsOpeningEl;
};

#endif // BREPREADERVISITOR_H
