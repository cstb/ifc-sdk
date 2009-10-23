#include "ifc2x3/IfcWall.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcWall::IfcWall(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcWall::~IfcWall() {
}

bool IfcWall::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWall(this);
}

const std::string &IfcWall::type() const {
    return IfcWall::s_type.getName();
}

const Step::ClassType &IfcWall::getClassType() {
    return IfcWall::s_type;
}

const Step::ClassType &IfcWall::getType() const {
    return IfcWall::s_type;
}

bool IfcWall::isOfType(const Step::ClassType &t) const {
    return IfcWall::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

bool IfcWall::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcWall::copy(const IfcWall &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWall::s_type("IfcWall");
