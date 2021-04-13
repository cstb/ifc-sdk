#pragma once

#include <ifc2x3/InheritVisitor.h>

#include <vectorial/config.h>
#include <vectorial/vectorial.h>
#include <vectorial/simd4f.h>
#include <mathfu/vector_3.h>
#include <mathfu/matrix_4x4.h>

typedef mathfu::Vector<float, 3> Vec3;
typedef mathfu::Matrix<float, 4> Matrix4;

class ComputePlacementVisitor : public ifc2x3::InheritVisitor
{
    Matrix4 _transformation{ Matrix4::Identity() };

public:
    //! Constructor
    ComputePlacementVisitor();

    bool visitIfcProduct(ifc2x3::IfcProduct* value) override;
    bool visitIfcLocalPlacement(ifc2x3::IfcLocalPlacement* value) override;

    static Matrix4 getTransformation(ifc2x3::IfcLocalPlacement* value);
    static Matrix4 getTransformation(ifc2x3::IfcAxis2Placement3D* value);
    static Vec3 getPoint(ifc2x3::IfcCartesianPoint* point);
    static Vec3 getDirection(ifc2x3::IfcDirection* direction);

    Vec3 getOrigin() const;
    Matrix4 getTransformation() const;
};
