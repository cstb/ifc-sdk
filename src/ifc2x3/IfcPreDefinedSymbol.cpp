#include "ifc2x3/IfcPreDefinedSymbol.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPreDefinedSymbol::IfcPreDefinedSymbol(Step::Id id, Step::SPFData *args) : IfcPreDefinedItem(id, args) {
}

IfcPreDefinedSymbol::~IfcPreDefinedSymbol() {
}

bool IfcPreDefinedSymbol::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPreDefinedSymbol(this);
}

const std::string &IfcPreDefinedSymbol::type() const {
    return IfcPreDefinedSymbol::s_type.getName();
}

const Step::ClassType &IfcPreDefinedSymbol::getClassType() {
    return IfcPreDefinedSymbol::s_type;
}

const Step::ClassType &IfcPreDefinedSymbol::getType() const {
    return IfcPreDefinedSymbol::s_type;
}

bool IfcPreDefinedSymbol::isOfType(const Step::ClassType &t) const {
    return IfcPreDefinedSymbol::s_type == t ? true : IfcPreDefinedItem::isOfType(t);
}

bool IfcPreDefinedSymbol::init() {
    bool status = IfcPreDefinedItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedSymbol::copy(const IfcPreDefinedSymbol &obj, const CopyOp &copyop) {
    IfcPreDefinedItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedSymbol::s_type("IfcPreDefinedSymbol");
