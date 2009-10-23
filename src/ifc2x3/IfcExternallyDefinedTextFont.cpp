#include "ifc2x3/IfcExternallyDefinedTextFont.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcExternalReference.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcExternallyDefinedTextFont::IfcExternallyDefinedTextFont(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
}

IfcExternallyDefinedTextFont::~IfcExternallyDefinedTextFont() {
}

bool IfcExternallyDefinedTextFont::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcExternallyDefinedTextFont(this);
}

const std::string &IfcExternallyDefinedTextFont::type() const {
    return IfcExternallyDefinedTextFont::s_type.getName();
}

const Step::ClassType &IfcExternallyDefinedTextFont::getClassType() {
    return IfcExternallyDefinedTextFont::s_type;
}

const Step::ClassType &IfcExternallyDefinedTextFont::getType() const {
    return IfcExternallyDefinedTextFont::s_type;
}

bool IfcExternallyDefinedTextFont::isOfType(const Step::ClassType &t) const {
    return IfcExternallyDefinedTextFont::s_type == t ? true : IfcExternalReference::isOfType(t);
}

bool IfcExternallyDefinedTextFont::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcExternallyDefinedTextFont::copy(const IfcExternallyDefinedTextFont &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcExternallyDefinedTextFont::s_type("IfcExternallyDefinedTextFont");
