#include "ifc2x3/IfcStructuralPointConnection.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralConnection.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcStructuralPointConnection::IfcStructuralPointConnection(Step::Id id, Step::SPFData *args) : IfcStructuralConnection(id, args) {
}

IfcStructuralPointConnection::~IfcStructuralPointConnection() {
}

bool IfcStructuralPointConnection::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralPointConnection(this);
}

const std::string &IfcStructuralPointConnection::type() const {
    return IfcStructuralPointConnection::s_type.getName();
}

const Step::ClassType &IfcStructuralPointConnection::getClassType() {
    return IfcStructuralPointConnection::s_type;
}

const Step::ClassType &IfcStructuralPointConnection::getType() const {
    return IfcStructuralPointConnection::s_type;
}

bool IfcStructuralPointConnection::isOfType(const Step::ClassType &t) const {
    return IfcStructuralPointConnection::s_type == t ? true : IfcStructuralConnection::isOfType(t);
}

bool IfcStructuralPointConnection::init() {
    bool status = IfcStructuralConnection::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralPointConnection::copy(const IfcStructuralPointConnection &obj, const CopyOp &copyop) {
    IfcStructuralConnection::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPointConnection::s_type("IfcStructuralPointConnection");
