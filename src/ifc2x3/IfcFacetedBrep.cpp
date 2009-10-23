#include "ifc2x3/IfcFacetedBrep.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcManifoldSolidBrep.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFacetedBrep::IfcFacetedBrep(Step::Id id, Step::SPFData *args) : IfcManifoldSolidBrep(id, args) {
}

IfcFacetedBrep::~IfcFacetedBrep() {
}

bool IfcFacetedBrep::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFacetedBrep(this);
}

const std::string &IfcFacetedBrep::type() const {
    return IfcFacetedBrep::s_type.getName();
}

const Step::ClassType &IfcFacetedBrep::getClassType() {
    return IfcFacetedBrep::s_type;
}

const Step::ClassType &IfcFacetedBrep::getType() const {
    return IfcFacetedBrep::s_type;
}

bool IfcFacetedBrep::isOfType(const Step::ClassType &t) const {
    return IfcFacetedBrep::s_type == t ? true : IfcManifoldSolidBrep::isOfType(t);
}

bool IfcFacetedBrep::init() {
    bool status = IfcManifoldSolidBrep::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFacetedBrep::copy(const IfcFacetedBrep &obj, const CopyOp &copyop) {
    IfcManifoldSolidBrep::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFacetedBrep::s_type("IfcFacetedBrep");
