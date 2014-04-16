#include "BrepReaderVisitor.h"

#include <ifc2x3/ExpressDataSet.h>


BrepReaderVisitor::BrepReaderVisitor(BRepBuilder* brepBuilder) 
    : _brepBuilder(brepBuilder),
      _fatherIsOpeningEl(false)
{
}

bool BrepReaderVisitor::visitIfcObjectDefinition(ifc2x3::IfcObjectDefinition *value)
{
    ifc2x3::Inverse_Set_IfcRelDecomposes_0_n::iterator itDecomposedBy = value->getIsDecomposedBy().begin();
    while (itDecomposedBy != value->getIsDecomposedBy().end())
    {
        ifc2x3::IfcRelDecomposes* rd = const_cast<ifc2x3::IfcRelDecomposes*> (itDecomposedBy->get());
        rd->acceptVisitor(this);
        ++itDecomposedBy;
    }

    return true;
}

bool BrepReaderVisitor::visitIfcRelAggregates(ifc2x3::IfcRelAggregates *value)
{
    ifc2x3::Set_IfcObjectDefinition_1_n::iterator it = value->getRelatedObjects().begin();
    while (it != value->getRelatedObjects().end())
    {
        (*it)->acceptVisitor(this);
        ++it;
    }

    return true;
}

bool BrepReaderVisitor::pushPlacementAndComputeRepresentation(ifc2x3::IfcProduct *value)
{
    //push placement
    bool hasPlacement = false;
    if(value->testObjectPlacement())
    {
        hasPlacement = value->getObjectPlacement()->acceptVisitor(this);
    }

    _brepBuilder->addProduct(value);
    
    // work on representation
    ifc2x3::IfcProductRepresentation * pr = value->getRepresentation();
    if(pr)
    {
        pr->acceptVisitor(this);
    }

    return hasPlacement;
}

bool BrepReaderVisitor::visitIfcProduct(ifc2x3::IfcProduct *value)
{
    //push placement
    bool hasPlacement = pushPlacementAndComputeRepresentation(value);
    
    // visit decomposed by object
    visitIfcObjectDefinition(value);

    // pop placement
    if(hasPlacement)
        _brepBuilder->popPlacement();

    return true;
}

bool BrepReaderVisitor::visitIfcElement(ifc2x3::IfcElement *value)
{
    // test if this element fills something; its father must be an opening element
    if(value->getFillsVoids().size() > 0 && !_fatherIsOpeningEl)
        return true;

    // push placement
    bool hasPlacement = pushPlacementAndComputeRepresentation(value);

    // visit opening elements
    ifc2x3::Inverse_Set_IfcRelVoidsElement_0_n::iterator it = value->getHasOpenings().begin();
    while (it != value->getHasOpenings().end())
    {     
        ifc2x3::IfcFeatureElementSubtraction* elt = const_cast<ifc2x3::IfcFeatureElementSubtraction*> ((*it)->getRelatedOpeningElement());
        elt->acceptVisitor(this); 
        ++it;        
    }
    
    // visit decomposed by object
    visitIfcObjectDefinition(value);

    // pop placement
    if(hasPlacement)
        _brepBuilder->popPlacement();
    
    return true;
}

bool BrepReaderVisitor::visitIfcOpeningElement(ifc2x3::IfcOpeningElement *value)
{
    // push placement
    bool hasPlacement = pushPlacementAndComputeRepresentation(value);

    // visit fillings
    _fatherIsOpeningEl = true;
    ifc2x3::Inverse_Set_IfcRelFillsElement_0_n::iterator it = value->getHasFillings().begin();
    while (it != value->getHasFillings().end())
    {     
        ifc2x3::IfcElement *elt = const_cast<ifc2x3::IfcElement*>((*it)->getRelatedBuildingElement());
        elt->acceptVisitor(this);
        ++it;        
    }
    _fatherIsOpeningEl = false;

    // pop placement
    if(hasPlacement)
        _brepBuilder->popPlacement();

    return true;
}

bool BrepReaderVisitor::visitIfcSpatialStructureElement(ifc2x3::IfcSpatialStructureElement *value)
{
    // push placement
    bool hasPlacement = pushPlacementAndComputeRepresentation(value);

    // visit contained elements
    ifc2x3::Inverse_Set_IfcRelContainedInSpatialStructure_0_n::iterator itContainsElements = value->getContainsElements().begin();
    while (itContainsElements != value->getContainsElements().end())
    {
        ifc2x3::IfcRelContainedInSpatialStructure* rel = const_cast<ifc2x3::IfcRelContainedInSpatialStructure *> (itContainsElements->get());
        rel->acceptVisitor(this);
        ++itContainsElements;
    }
    
    // visit decomposed by object
    visitIfcObjectDefinition(value);

    // pop placement
    if(hasPlacement)
        _brepBuilder->popPlacement();
    
    return true;
}

bool BrepReaderVisitor::visitIfcRelContainedInSpatialStructure(ifc2x3::IfcRelContainedInSpatialStructure *value)
{
    ifc2x3::Set_IfcProduct_1_n::iterator itRelatedElement = value->getRelatedElements().begin();
    while (itRelatedElement != value->getRelatedElements().end())
    {
        (*itRelatedElement)->acceptVisitor(this);
        ++itRelatedElement;
    }
    return true;
}

bool BrepReaderVisitor::visitIfcProductRepresentation(ifc2x3::IfcProductRepresentation *value)
{
    ifc2x3::List_IfcRepresentation_1_n::iterator it = value->getRepresentations().begin();
    while (it != value->getRepresentations().end())
    {
        Step::String representationType = (*it)->getRepresentationType();
        if (representationType == Step::String("Brep") )
        {
            (*it)->acceptVisitor(this);
        }
        ++it;
    }

    return true;
}

bool BrepReaderVisitor::visitIfcRepresentation(ifc2x3::IfcRepresentation *value)
{
    ifc2x3::Set_IfcRepresentationItem_1_n::iterator it = value->getItems().begin();
    while (it != value->getItems().end())
    {
        (*it)->acceptVisitor(this);
        ++it;
    }

    return true;
}

bool BrepReaderVisitor::visitIfcFacetedBrep(ifc2x3::IfcFacetedBrep *value)
{
    ifc2x3::IfcClosedShell* closedShell = value->getOuter();
    if(closedShell)
    {
        closedShell->acceptVisitor(this);
    }

    return true;
}

bool BrepReaderVisitor::visitIfcClosedShell(ifc2x3::IfcClosedShell *value)
{
    _brepBuilder->addClosedShell(value);

    ifc2x3::Set_IfcFace_1_n::iterator it = value->getCfsFaces().begin();
    while (it != value->getCfsFaces().end())
    {
        (*it)->acceptVisitor(this);
        ++it;
    }

    return true;
}

bool BrepReaderVisitor::visitIfcFace(ifc2x3::IfcFace *value)
{
    _brepBuilder->addFace(value);

    ifc2x3::Set_IfcFaceBound_1_n::iterator it = value->getBounds().begin();
    while (it != value->getBounds().end())
    {
        ifc2x3::IfcPolyLoop * poly = dynamic_cast<ifc2x3::IfcPolyLoop*>((*it)->getBound());
        if(poly)
        {
            poly->acceptVisitor(this);
        }

        ++it;
    }

    return true;
}

bool BrepReaderVisitor::visitIfcPolyLoop(ifc2x3::IfcPolyLoop *value)
{
    ifc2x3::List_IfcCartesianPoint_3_n::iterator it = value->getPolygon().begin();
    while (it != value->getPolygon().end())
    {
        (*it)->acceptVisitor(this);
        ++it;
    }

    return true;
}

bool BrepReaderVisitor::visitIfcCartesianPoint(ifc2x3::IfcCartesianPoint *value)
{
    _brepBuilder->addPoint(value);
    return true;
}

// placement
bool BrepReaderVisitor::visitIfcLocalPlacement(ifc2x3::IfcLocalPlacement *value)
{
    return value->getRelativePlacement()->acceptVisitor(this);
}

bool BrepReaderVisitor::visitIfcAxis2Placement(ifc2x3::IfcAxis2Placement * value)
{
    ifc2x3::IfcAxis2Placement3D * axis3placement3d = value->getIfcAxis2Placement3D();
    if(axis3placement3d)
    {
        return axis3placement3d->acceptVisitor(this);
    }

    return true;
}

bool BrepReaderVisitor::visitIfcAxis2Placement3D(ifc2x3::IfcAxis2Placement3D * value)
{
    _brepBuilder->pushPlacement(value);

    return true;
}