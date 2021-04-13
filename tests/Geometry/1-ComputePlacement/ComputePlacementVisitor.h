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
    bool visitIfcAxis2Placement3D(ifc2x3::IfcAxis2Placement3D* value) override;

    Matrix4 getTransformation(ifc2x3::IfcLocalPlacement* value) const;
    Matrix4 getTransformation(ifc2x3::IfcAxis2Placement3D* value) const;
    Vec3 getPoint(ifc2x3::IfcCartesianPoint* point) const;
    Vec3 getDirection(ifc2x3::IfcDirection* direction) const;

    Vec3 getOrigin() const;
};
