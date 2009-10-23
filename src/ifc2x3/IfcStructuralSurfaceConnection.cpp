#include "ifc2x3/IfcStructuralSurfaceConnection.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralConnection.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcStructuralSurfaceConnection::IfcStructuralSurfaceConnection(Step::Id id, Step::SPFData *args) : IfcStructuralConnection(id, args) {
}

IfcStructuralSurfaceConnection::~IfcStructuralSurfaceConnection() {
}

bool IfcStructuralSurfaceConnection::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralSurfaceConnection(this);
}

const std::string &IfcStructuralSurfaceConnection::type() const {
    return IfcStructuralSurfaceConnection::s_type.getName();
}

const Step::ClassType &IfcStructuralSurfaceConnection::getClassType() {
    return IfcStructuralSurfaceConnection::s_type;
}

const Step::ClassType &IfcStructuralSurfaceConnection::getType() const {
    return IfcStructuralSurfaceConnection::s_type;
}

bool IfcStructuralSurfaceConnection::isOfType(const Step::ClassType &t) const {
    return IfcStructuralSurfaceConnection::s_type == t ? true : IfcStructuralConnection::isOfType(t);
}

bool IfcStructuralSurfaceConnection::init() {
    bool status = IfcStructuralConnection::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralSurfaceConnection::copy(const IfcStructuralSurfaceConnection &obj, const CopyOp &copyop) {
    IfcStructuralConnection::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralSurfaceConnection::s_type("IfcStructuralSurfaceConnection");
