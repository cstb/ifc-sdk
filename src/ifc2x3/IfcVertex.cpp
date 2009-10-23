#include "ifc2x3/IfcVertex.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcVertex::IfcVertex(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
}

IfcVertex::~IfcVertex() {
}

bool IfcVertex::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcVertex(this);
}

const std::string &IfcVertex::type() const {
    return IfcVertex::s_type.getName();
}

const Step::ClassType &IfcVertex::getClassType() {
    return IfcVertex::s_type;
}

const Step::ClassType &IfcVertex::getType() const {
    return IfcVertex::s_type;
}

bool IfcVertex::isOfType(const Step::ClassType &t) const {
    return IfcVertex::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

bool IfcVertex::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcVertex::copy(const IfcVertex &obj, const CopyOp &copyop) {
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcVertex::s_type("IfcVertex");
