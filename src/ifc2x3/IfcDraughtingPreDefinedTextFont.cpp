#include "ifc2x3/IfcDraughtingPreDefinedTextFont.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedTextFont.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcDraughtingPreDefinedTextFont::IfcDraughtingPreDefinedTextFont(Step::Id id, Step::SPFData *args) : IfcPreDefinedTextFont(id, args) {
}

IfcDraughtingPreDefinedTextFont::~IfcDraughtingPreDefinedTextFont() {
}

bool IfcDraughtingPreDefinedTextFont::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDraughtingPreDefinedTextFont(this);
}

const std::string &IfcDraughtingPreDefinedTextFont::type() const {
    return IfcDraughtingPreDefinedTextFont::s_type.getName();
}

const Step::ClassType &IfcDraughtingPreDefinedTextFont::getClassType() {
    return IfcDraughtingPreDefinedTextFont::s_type;
}

const Step::ClassType &IfcDraughtingPreDefinedTextFont::getType() const {
    return IfcDraughtingPreDefinedTextFont::s_type;
}

bool IfcDraughtingPreDefinedTextFont::isOfType(const Step::ClassType &t) const {
    return IfcDraughtingPreDefinedTextFont::s_type == t ? true : IfcPreDefinedTextFont::isOfType(t);
}

bool IfcDraughtingPreDefinedTextFont::init() {
    bool status = IfcPreDefinedTextFont::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDraughtingPreDefinedTextFont::copy(const IfcDraughtingPreDefinedTextFont &obj, const CopyOp &copyop) {
    IfcPreDefinedTextFont::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingPreDefinedTextFont::s_type("IfcDraughtingPreDefinedTextFont");
