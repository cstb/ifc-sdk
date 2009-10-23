#include "ifc2x3/IfcBoundedSurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSurface.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcBoundedSurface::IfcBoundedSurface(Step::Id id, Step::SPFData *args) : IfcSurface(id, args) {
}

IfcBoundedSurface::~IfcBoundedSurface() {
}

bool IfcBoundedSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundedSurface(this);
}

const std::string &IfcBoundedSurface::type() const {
    return IfcBoundedSurface::s_type.getName();
}

const Step::ClassType &IfcBoundedSurface::getClassType() {
    return IfcBoundedSurface::s_type;
}

const Step::ClassType &IfcBoundedSurface::getType() const {
    return IfcBoundedSurface::s_type;
}

bool IfcBoundedSurface::isOfType(const Step::ClassType &t) const {
    return IfcBoundedSurface::s_type == t ? true : IfcSurface::isOfType(t);
}

bool IfcBoundedSurface::init() {
    bool status = IfcSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBoundedSurface::copy(const IfcBoundedSurface &obj, const CopyOp &copyop) {
    IfcSurface::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundedSurface::s_type("IfcBoundedSurface");
