#include "CreateConstructionPointVisitor.h"
#include "ComputePlacementVisitor.h"

CreateConstructionPointVisitor::CreateConstructionPointVisitor() :
    ifc2x3::InheritVisitor()
{

}

bool CreateConstructionPointVisitor::visitIfcProduct(ifc2x3::IfcProduct* value)
{
    if(value->testRepresentation())
    {
        return value->getRepresentation()->acceptVisitor(this);
    }

    return true;
}

bool CreateConstructionPointVisitor::visitIfcProductRepresentation(
    ifc2x3::IfcProductRepresentation* value)
{
    for(auto representation : value->getRepresentations())
    {
        if(representation->acceptVisitor(this))
        {
            return true;
        }
    }

    return false;
}

bool CreateConstructionPointVisitor::visitIfcShapeRepresentation(
    ifc2x3::IfcShapeRepresentation* value)
{
    for(auto item : value->getItems())
    {
        if(item->acceptVisitor(this))
        {
            return true;
        }
    }

    return false;
}

bool CreateConstructionPointVisitor::visitIfcMappedItem(
    ifc2x3::IfcMappedItem* value)
{
    if(value->testMappingSource())
    {
        // TODO
    }

    return false;
}

bool CreateConstructionPointVisitor::visitIfcRepresentationMap(
    ifc2x3::IfcRepresentationMap* value)
{
    if(value->testMappedRepresentation())
    {
        if(value->getMappedRepresentation()->acceptVisitor(this))
        {
            if(value->testMappingOrigin()
               && value->getMappingOrigin()->currentType() ==
               ifc2x3::IfcAxis2Placement::IFCAXIS2PLACEMENT3D)
            {
                // TODO
            }

            return true;
        }
    }

    return false;
}

bool CreateConstructionPointVisitor::visitIfcExtrudedAreaSolid(
    ifc2x3::IfcExtrudedAreaSolid* value)
{
    if(value->testSweptArea())
    {
        if(value->getSweptArea()->acceptVisitor(this))
        {
            std::list<Vec3> tmpPoint = _points;

            Matrix4 transformation = ComputePlacementVisitor::getTransformation(
                                         value->getPosition());

            transformPoints(transformation);

            Vec3 extrudedDirection = ComputePlacementVisitor::getDirection(
                                         value->getExtrudedDirection());
            extrudedDirection.Normalize();
            extrudedDirection *= value->getDepth();

            for(const auto& point : tmpPoint)
            {
                _points.push_back(transformation * (point + extrudedDirection));
            }

            return true;
        }
    }

    return false;
}

bool CreateConstructionPointVisitor::visitIfcArbitraryClosedProfileDef(
    ifc2x3::IfcArbitraryClosedProfileDef* value)
{
    if(value->testOuterCurve())
    {
        return value->getOuterCurve()->acceptVisitor(this);
    }

    return false;
}

bool CreateConstructionPointVisitor::visitIfcPolyline(ifc2x3::IfcPolyline*
                                                      value)
{
    for(auto point : value->getPoints())
    {
        _points.push_back(ComputePlacementVisitor::getPoint(point.get()));
    }

    _points.pop_back();

    return _points.empty() == false;
}

std::list<Vec3> CreateConstructionPointVisitor::getPoints() const
{
    return _points;
}

void CreateConstructionPointVisitor::transformPoints(const Matrix4& transform)
{
    std::list<Vec3> tmpPoint = _points;

    _points.clear();

    for(const auto& point : tmpPoint)
    {
        _points.push_back(transform * point);
    }
}
