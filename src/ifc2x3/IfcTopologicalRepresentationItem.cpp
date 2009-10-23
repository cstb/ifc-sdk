#include "ifc2x3/IfcTopologicalRepresentationItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcTopologicalRepresentationItem::IfcTopologicalRepresentationItem(Step::Id id, Step::SPFData *args) : IfcRepresentationItem(id, args) {
}

IfcTopologicalRepresentationItem::~IfcTopologicalRepresentationItem() {
}

bool IfcTopologicalRepresentationItem::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTopologicalRepresentationItem(this);
}

const std::string &IfcTopologicalRepresentationItem::type() const {
    return IfcTopologicalRepresentationItem::s_type.getName();
}

const Step::ClassType &IfcTopologicalRepresentationItem::getClassType() {
    return IfcTopologicalRepresentationItem::s_type;
}

const Step::ClassType &IfcTopologicalRepresentationItem::getType() const {
    return IfcTopologicalRepresentationItem::s_type;
}

bool IfcTopologicalRepresentationItem::isOfType(const Step::ClassType &t) const {
    return IfcTopologicalRepresentationItem::s_type == t ? true : IfcRepresentationItem::isOfType(t);
}

bool IfcTopologicalRepresentationItem::init() {
    bool status = IfcRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcTopologicalRepresentationItem::copy(const IfcTopologicalRepresentationItem &obj, const CopyOp &copyop) {
    IfcRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTopologicalRepresentationItem::s_type("IfcTopologicalRepresentationItem");
