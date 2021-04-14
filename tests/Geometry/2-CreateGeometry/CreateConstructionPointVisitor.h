#pragma once

#include <ifc2x3/InheritVisitor.h>

#include <vectorial/config.h>
#include <vectorial/vectorial.h>
#include <vectorial/simd4f.h>
#include <mathfu/vector_3.h>
#include <mathfu/matrix_4x4.h>

typedef mathfu::Vector<float, 3> Vec3;
typedef mathfu::Matrix<float, 4> Matrix4;

class CreateConstructionPointVisitor : public ifc2x3::InheritVisitor
{
    std::list<Vec3> _points;

public:
    //! Constructor
    CreateConstructionPointVisitor();

    bool visitIfcProduct(ifc2x3::IfcProduct* value) override;
    bool visitIfcProductRepresentation(ifc2x3::IfcProductRepresentation* value)
    override;
    bool visitIfcShapeRepresentation(ifc2x3::IfcShapeRepresentation* value)
    override;
    bool visitIfcExtrudedAreaSolid(ifc2x3::IfcExtrudedAreaSolid* value)
    override;
    bool visitIfcArbitraryClosedProfileDef(ifc2x3::IfcArbitraryClosedProfileDef*
                                           value) override;
    bool visitIfcPolyline(ifc2x3::IfcPolyline* value) override;

    std::list<Vec3> getPoints() const;
    void transformPoints(const Matrix4& transform);
};
