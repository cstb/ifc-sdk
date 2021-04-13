#include "ComputePlacementVisitor.h"

ComputePlacementVisitor::ComputePlacementVisitor() :
    ifc2x3::InheritVisitor()
{

}

bool ComputePlacementVisitor::visitIfcProduct(ifc2x3::IfcProduct* value)
{
    if(value->testObjectPlacement())
    {
        return value->getObjectPlacement()->acceptVisitor(this);
    }

    return true;
}

bool ComputePlacementVisitor::visitIfcLocalPlacement(
    ifc2x3::IfcLocalPlacement* value)
{
    if(value->testRelativePlacement())
    {
        _transformation = getTransformation(value);
    }

    return true;
}

Matrix4 ComputePlacementVisitor::getTransformation(ifc2x3::IfcLocalPlacement*
                                                   value)
{
    Matrix4 currentTransformation = Matrix4::Identity();

    if(value->testRelativePlacement() &&
       value->getRelativePlacement()->currentType() ==
       ifc2x3::IfcAxis2Placement::IFCAXIS2PLACEMENT3D)
    {
        currentTransformation = getTransformation(
                                    value->getRelativePlacement()->getIfcAxis2Placement3D());
    }

    Matrix4 totalTransformation = currentTransformation;

    if(value->testPlacementRelTo()
       && value->getPlacementRelTo()->isOfType(
           ifc2x3::IfcLocalPlacement::getClassType()))
    {
        totalTransformation = getTransformation(static_cast<ifc2x3::IfcLocalPlacement*>
                                                (value->getPlacementRelTo())) * currentTransformation;
    }

    return totalTransformation;
}

Matrix4 ComputePlacementVisitor::getTransformation(ifc2x3::IfcAxis2Placement3D*
                                                   value)
{
    Vec3 location(0.f);

    if(value->testLocation())
    {
        location = getPoint(value->getLocation());
    }

    Vec3 refDirection(1.0f, 0.0f, 0.0f);

    if(value->testRefDirection())
    {
        refDirection = getDirection(value->getRefDirection());
        refDirection.Normalize();
    }

    Vec3 axis(0.0f, 0.0f, 1.0f);

    if(value->testAxis())
    {
        axis = getDirection(value->getAxis());
        axis.Normalize();
    }

    Vec3 yAxis = Vec3::CrossProduct(axis, refDirection);

    Matrix4 transformation(
        refDirection.x(), refDirection.y(), refDirection.z(), 0.0f,
        yAxis.x(), yAxis.y(), yAxis.z(), 0.0f,
        axis.x(), axis.y(), axis.z(), 0.0f,
        location.x(), location.y(), location.z(), 1.0f
    );

    return transformation;
}

Vec3 ComputePlacementVisitor::getPoint(ifc2x3::IfcCartesianPoint* point)
{
    Vec3 vector(0.f);

    ifc2x3::List_IfcLengthMeasure_1_3& coor =
        point->getCoordinates();
    const std::size_t size = coor.size();

    vector.x() = static_cast<float>(coor[0]);

    if(size >= 2)
    {
        vector.y() = static_cast<float>(coor[1]);

        if(size >= 3)
        {
            vector.z() = static_cast<float>(coor[2]);
        }
    }

    return vector;
}

Vec3 ComputePlacementVisitor::getDirection(ifc2x3::IfcDirection* direction)
{
    ifc2x3::List_Real_2_3& dir = direction->getDirectionRatios();
    return Vec3(static_cast<float>(dir[0]), static_cast<float>(dir[1]),
                static_cast<float>((dir.size() > 2) ? (dir[2]) : (0.0f)));
}

Vec3 ComputePlacementVisitor::getOrigin() const
{
    return _transformation.TranslationVector3D();
}

Matrix4 ComputePlacementVisitor::getTransformation() const
{
    return _transformation;
}
