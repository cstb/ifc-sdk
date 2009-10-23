#include "ifc2x3/IfcCostItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcCostItem::IfcCostItem(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
}

IfcCostItem::~IfcCostItem() {
}

bool IfcCostItem::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCostItem(this);
}

const std::string &IfcCostItem::type() const {
    return IfcCostItem::s_type.getName();
}

const Step::ClassType &IfcCostItem::getClassType() {
    return IfcCostItem::s_type;
}

const Step::ClassType &IfcCostItem::getType() const {
    return IfcCostItem::s_type;
}

bool IfcCostItem::isOfType(const Step::ClassType &t) const {
    return IfcCostItem::s_type == t ? true : IfcControl::isOfType(t);
}

bool IfcCostItem::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCostItem::copy(const IfcCostItem &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCostItem::s_type("IfcCostItem");
