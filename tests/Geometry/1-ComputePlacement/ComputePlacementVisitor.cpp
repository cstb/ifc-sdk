#include "ComputePlacementVisitor.h"

ComputePlacementVisitor::ComputePlacementVisitor():
    ifc2x3::InheritVisitor()
{

}

vectorial::vec3f ComputePlacementVisitor::getOrigin() const
{
    return vectorial::vec3f::zero();
}
