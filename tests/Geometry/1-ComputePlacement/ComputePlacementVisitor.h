#pragma once

#include <ifc2x3/InheritVisitor.h>

#include <vectorial/config.h>
#include <vectorial/vectorial.h>
#include <vectorial/simd4f.h>

class ComputePlacementVisitor : public ifc2x3::InheritVisitor
{
public:
    //! Constructor
    ComputePlacementVisitor();

    vectorial::vec3f getOrigin() const;
};
