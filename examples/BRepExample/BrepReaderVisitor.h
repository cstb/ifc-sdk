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
    virtual bool visitIfcObjectDefinition(ifc2x3::IfcObjectDefinition *value);
    /*!
    ** \brief Visit "relatedObjects" items of an IfcRelAggregates
    */
    virtual bool visitIfcRelAggregates(ifc2x3::IfcRelAggregates *value);
    
    /*!
    ** \brief Visit an IfcProduct
    ** If it has a placement, push it at the start
    ** Add the product to the BRepBuilder
    ** Visit "decomposedby" items
    ** If it has a placement, pop it at the end 
    */
    virtual bool visitIfcProduct(ifc2x3::IfcProduct *value);
    /*!
    ** \brief Visit an IfcSpatialStructureElement
    ** If it has a placement, push it at the start
    ** Add the product to the BRepBuilder
    ** Visit "containsElements" items
    ** Visit "decomposedby" items
    ** If it has a placement, pop it at the end 
    */
    virtual bool visitIfcSpatialStructureElement(ifc2x3::IfcSpatialStructureElement *value);
    /*!
    ** \brief Visit an IfcElement
    ** If the element fills something and its parent visitor function is not an IfcOpeningElement, do not visit the IfcElement
    ** If it has a placement, push it at the start
    ** Add the product to the BRepBuilder
    ** Visit "openings" items
    ** Visit "decomposedby" items
    ** If it has a placement, pop it at the end 
    */
    virtual bool visitIfcElement(ifc2x3::IfcElement *value);
    /*!
    ** \brief Visit an IfcOpeningElement
    ** If it has a placement, push it at the start
    ** Add the product to the BRepBuilder
    ** Visit "fillings" items
    ** If it has a placement, pop it at the end 
    */
    virtual bool visitIfcOpeningElement(ifc2x3::IfcOpeningElement *value);
    /*!
    ** \brief Visit "relatedElements" items of an IfcRelContainedInSpatialStructure
    */
    virtual bool visitIfcRelContainedInSpatialStructure(ifc2x3::IfcRelContainedInSpatialStructure *value);
    /*!
    ** \brief Visit the "Brep" representations of an IfcProductRepresentation
    */
    virtual bool visitIfcProductRepresentation(ifc2x3::IfcProductRepresentation *value);
    /*!
    ** \brief Visit "representationItems" items of an IfcRepresentation
    */
    virtual bool visitIfcRepresentation(ifc2x3::IfcRepresentation *value);
    /*!
    ** \brief Visit an IfcFacetedBrep
    ** Add the representation to the BRepBuilder
    ** Visit the "closedShell" item if there is one
    */
    virtual bool visitIfcFacetedBrep(ifc2x3::IfcFacetedBrep *value);
    /*!
    ** \brief Visit an IfcClosedShell
    ** Add the closedShell to the BRepBuilder
    ** Visit "faces" items
    */
    virtual bool visitIfcClosedShell(ifc2x3::IfcClosedShell *value);
    /*!
    ** \brief Visit an IfcFace
    ** Add the face to the BRepBuilder
    ** Visit "polyLoop" items
    */
    virtual bool visitIfcFace(ifc2x3::IfcFace *value);
    /*!
    ** \brief Visit "cartesianPoints" items of an IfcPolyLoop
    */
    virtual bool visitIfcPolyLoop(ifc2x3::IfcPolyLoop *value);
    /*!
    ** \brief Visit an IfcCartesianPoint
    ** Add the point to the BRepBuilder
    */
    virtual bool visitIfcCartesianPoint(ifc2x3::IfcCartesianPoint *value);
    
    /*!
    ** \brief Visit the relative placement of an IfcLocalPlacement
    */
    virtual bool visitIfcLocalPlacement(ifc2x3::IfcLocalPlacement *value);
    /*!
    ** \brief Visit the IfcAxis2Placement3D of an IfcAxis2Placement if there is one
    */
    virtual bool visitIfcAxis2Placement(ifc2x3::IfcAxis2Placement *value);
    /*!
    ** \brief Add the axis2Placement3D to the BRepBuilder
    */
    virtual bool visitIfcAxis2Placement3D(ifc2x3::IfcAxis2Placement3D *value);

protected:
    /*!
    ** \brief Visit an IfcFace
    ** Push the object placement if there is one
    ** Add the product to the BRepBuilder
    ** Visit the representation if there is one
    ** \return if the product has an object placement
    */
    bool pushPlacementAndComputeRepresentation(ifc2x3::IfcProduct *value);

protected:
	BRepBuilder* _brepBuilder;
    bool _fatherIsOpeningEl;
};

#endif // BREPREADERVISITOR_H
