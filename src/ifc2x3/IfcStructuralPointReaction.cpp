#include "ifc2x3/IfcStructuralPointReaction.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralReaction.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcStructuralPointReaction::IfcStructuralPointReaction(Step::Id id, Step::SPFData *args) : IfcStructuralReaction(id, args) {
}

IfcStructuralPointReaction::~IfcStructuralPointReaction() {
}

bool IfcStructuralPointReaction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralPointReaction(this);
}

const std::string &IfcStructuralPointReaction::type() const {
    return IfcStructuralPointReaction::s_type.getName();
}

const Step::ClassType &IfcStructuralPointReaction::getClassType() {
    return IfcStructuralPointReaction::s_type;
}

const Step::ClassType &IfcStructuralPointReaction::getType() const {
    return IfcStructuralPointReaction::s_type;
}

bool IfcStructuralPointReaction::isOfType(const Step::ClassType &t) const {
    return IfcStructuralPointReaction::s_type == t ? true : IfcStructuralReaction::isOfType(t);
}

bool IfcStructuralPointReaction::init() {
    bool status = IfcStructuralReaction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralPointReaction::copy(const IfcStructuralPointReaction &obj, const CopyOp &copyop) {
    IfcStructuralReaction::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPointReaction::s_type("IfcStructuralPointReaction");
