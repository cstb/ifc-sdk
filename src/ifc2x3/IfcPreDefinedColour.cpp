#include "ifc2x3/IfcPreDefinedColour.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPreDefinedColour::IfcPreDefinedColour(Step::Id id, Step::SPFData *args) : IfcPreDefinedItem(id, args) {
}

IfcPreDefinedColour::~IfcPreDefinedColour() {
}

bool IfcPreDefinedColour::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPreDefinedColour(this);
}

const std::string &IfcPreDefinedColour::type() const {
    return IfcPreDefinedColour::s_type.getName();
}

const Step::ClassType &IfcPreDefinedColour::getClassType() {
    return IfcPreDefinedColour::s_type;
}

const Step::ClassType &IfcPreDefinedColour::getType() const {
    return IfcPreDefinedColour::s_type;
}

bool IfcPreDefinedColour::isOfType(const Step::ClassType &t) const {
    return IfcPreDefinedColour::s_type == t ? true : IfcPreDefinedItem::isOfType(t);
}

bool IfcPreDefinedColour::init() {
    bool status = IfcPreDefinedItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedColour::copy(const IfcPreDefinedColour &obj, const CopyOp &copyop) {
    IfcPreDefinedItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedColour::s_type("IfcPreDefinedColour");
