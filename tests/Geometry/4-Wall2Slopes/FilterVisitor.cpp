#include "FilterVisitor.h"
#include "ComputePlacementVisitor.h"

FilterVisitor::FilterVisitor() :
    ifc2x3::FalseVisitor()
{

}

bool FilterVisitor::visitIfcBuildingElement(ifc2x3::IfcBuildingElement* value)
{
    return true;
}

bool FilterVisitor::visitIfcMechanicalFastener(ifc2x3::IfcMechanicalFastener*
                                               value)
{
    return true;
}
