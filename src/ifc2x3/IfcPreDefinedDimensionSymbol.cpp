#include "ifc2x3/IfcPreDefinedDimensionSymbol.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedSymbol.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPreDefinedDimensionSymbol::IfcPreDefinedDimensionSymbol(Step::Id id, Step::SPFData *args) : IfcPreDefinedSymbol(id, args) {
}

IfcPreDefinedDimensionSymbol::~IfcPreDefinedDimensionSymbol() {
}

bool IfcPreDefinedDimensionSymbol::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPreDefinedDimensionSymbol(this);
}

const std::string &IfcPreDefinedDimensionSymbol::type() const {
    return IfcPreDefinedDimensionSymbol::s_type.getName();
}

const Step::ClassType &IfcPreDefinedDimensionSymbol::getClassType() {
    return IfcPreDefinedDimensionSymbol::s_type;
}

const Step::ClassType &IfcPreDefinedDimensionSymbol::getType() const {
    return IfcPreDefinedDimensionSymbol::s_type;
}

bool IfcPreDefinedDimensionSymbol::isOfType(const Step::ClassType &t) const {
    return IfcPreDefinedDimensionSymbol::s_type == t ? true : IfcPreDefinedSymbol::isOfType(t);
}

bool IfcPreDefinedDimensionSymbol::init() {
    bool status = IfcPreDefinedSymbol::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedDimensionSymbol::copy(const IfcPreDefinedDimensionSymbol &obj, const CopyOp &copyop) {
    IfcPreDefinedSymbol::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedDimensionSymbol::s_type("IfcPreDefinedDimensionSymbol");
