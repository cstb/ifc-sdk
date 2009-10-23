#include "ifc2x3/IfcPreDefinedCurveFont.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPreDefinedCurveFont::IfcPreDefinedCurveFont(Step::Id id, Step::SPFData *args) : IfcPreDefinedItem(id, args) {
}

IfcPreDefinedCurveFont::~IfcPreDefinedCurveFont() {
}

bool IfcPreDefinedCurveFont::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPreDefinedCurveFont(this);
}

const std::string &IfcPreDefinedCurveFont::type() const {
    return IfcPreDefinedCurveFont::s_type.getName();
}

const Step::ClassType &IfcPreDefinedCurveFont::getClassType() {
    return IfcPreDefinedCurveFont::s_type;
}

const Step::ClassType &IfcPreDefinedCurveFont::getType() const {
    return IfcPreDefinedCurveFont::s_type;
}

bool IfcPreDefinedCurveFont::isOfType(const Step::ClassType &t) const {
    return IfcPreDefinedCurveFont::s_type == t ? true : IfcPreDefinedItem::isOfType(t);
}

bool IfcPreDefinedCurveFont::init() {
    bool status = IfcPreDefinedItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedCurveFont::copy(const IfcPreDefinedCurveFont &obj, const CopyOp &copyop) {
    IfcPreDefinedItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedCurveFont::s_type("IfcPreDefinedCurveFont");
