#include "ifc2x3/IfcSurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcSurface::IfcSurface(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
}

IfcSurface::~IfcSurface() {
}

bool IfcSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurface(this);
}

const std::string &IfcSurface::type() const {
    return IfcSurface::s_type.getName();
}

const Step::ClassType &IfcSurface::getClassType() {
    return IfcSurface::s_type;
}

const Step::ClassType &IfcSurface::getType() const {
    return IfcSurface::s_type;
}

bool IfcSurface::isOfType(const Step::ClassType &t) const {
    return IfcSurface::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

bool IfcSurface::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcSurface::copy(const IfcSurface &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurface::s_type("IfcSurface");
