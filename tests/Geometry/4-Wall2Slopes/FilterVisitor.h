#pragma once

#include <ifc2x3/FalseVisitor.h>


class FilterVisitor : public ifc2x3::FalseVisitor
{
public:
    //! Constructor
    FilterVisitor();

    bool visitIfcBuildingElement(ifc2x3::IfcBuildingElement* value) override;
    bool visitIfcMechanicalFastener(ifc2x3::IfcMechanicalFastener* value) override;
};
