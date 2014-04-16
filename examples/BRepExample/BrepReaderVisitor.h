#ifndef BREPREADERVISITOR_H
#define BREPREADERVISITOR_H

#include "BrepBuilder.h"

#include <ifc2x3/InheritVisitor.h>

class BrepReaderVisitor : public ifc2x3::InheritVisitor
{
public:
    BrepReaderVisitor(BRepBuilder* brepBuilder);
	
    // from project to building storey
    virtual bool visitIfcObjectDefinition(ifc2x3::IfcObjectDefinition *value);
    virtual bool visitIfcRelAggregates(ifc2x3::IfcRelAggregates *value);

    // product and child classes
    virtual bool visitIfcProduct(ifc2x3::IfcProduct *value);
    virtual bool visitIfcSpatialStructureElement(ifc2x3::IfcSpatialStructureElement *value);
    virtual bool visitIfcElement(ifc2x3::IfcElement *value);
    virtual bool visitIfcOpeningElement(ifc2x3::IfcOpeningElement *value);
    virtual bool visitIfcRelContainedInSpatialStructure(ifc2x3::IfcRelContainedInSpatialStructure *value);
    virtual bool visitIfcProductRepresentation(ifc2x3::IfcProductRepresentation *value);
    virtual bool visitIfcRepresentation(ifc2x3::IfcRepresentation *value);
    virtual bool visitIfcFacetedBrep(ifc2x3::IfcFacetedBrep *value);
    virtual bool visitIfcClosedShell(ifc2x3::IfcClosedShell *value);
    virtual bool visitIfcFace(ifc2x3::IfcFace *value);
    virtual bool visitIfcPolyLoop(ifc2x3::IfcPolyLoop *value);
    virtual bool visitIfcCartesianPoint(ifc2x3::IfcCartesianPoint *value);
    
    // placement
    virtual bool visitIfcLocalPlacement(ifc2x3::IfcLocalPlacement *value);
    virtual bool visitIfcAxis2Placement(ifc2x3::IfcAxis2Placement *value);
    virtual bool visitIfcAxis2Placement3D(ifc2x3::IfcAxis2Placement3D *value);

protected:
    bool pushPlacementAndComputeRepresentation(ifc2x3::IfcProduct *value);

protected:
	BRepBuilder* _brepBuilder;
    bool _fatherIsOpeningEl;
};

#endif // BREPREADERVISITOR_H
