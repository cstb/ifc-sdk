#include "ifc2x3/IfcManifoldSolidBrep.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClosedShell.h"
#include "ifc2x3/IfcSolidModel.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcManifoldSolidBrep::IfcManifoldSolidBrep(Step::Id id, Step::SPFData *args) : IfcSolidModel(id, args) {
    m_outer = NULL;
}

IfcManifoldSolidBrep::~IfcManifoldSolidBrep() {
}

bool IfcManifoldSolidBrep::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcManifoldSolidBrep(this);
}

const std::string &IfcManifoldSolidBrep::type() const {
    return IfcManifoldSolidBrep::s_type.getName();
}

const Step::ClassType &IfcManifoldSolidBrep::getClassType() {
    return IfcManifoldSolidBrep::s_type;
}

const Step::ClassType &IfcManifoldSolidBrep::getType() const {
    return IfcManifoldSolidBrep::s_type;
}

bool IfcManifoldSolidBrep::isOfType(const Step::ClassType &t) const {
    return IfcManifoldSolidBrep::s_type == t ? true : IfcSolidModel::isOfType(t);
}

IfcClosedShell *IfcManifoldSolidBrep::getOuter() {
    if (Step::BaseObject::inited()) {
        return m_outer.get();
    }
    else {
        return NULL;
    }
}

const IfcClosedShell *IfcManifoldSolidBrep::getOuter() const {
    IfcManifoldSolidBrep * deConstObject = const_cast< IfcManifoldSolidBrep * > (this);
    return deConstObject->getOuter();
}

void IfcManifoldSolidBrep::setOuter(const Step::RefPtr< IfcClosedShell > &value) {
    m_outer = value;
}

void IfcManifoldSolidBrep::unsetOuter() {
    m_outer = Step::getUnset(getOuter());
}

bool IfcManifoldSolidBrep::testOuter() const {
    return !Step::isUnset(getOuter());
}

bool IfcManifoldSolidBrep::init() {
    bool status = IfcSolidModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_outer = NULL;
    }
    else {
        m_outer = static_cast< IfcClosedShell * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcManifoldSolidBrep::copy(const IfcManifoldSolidBrep &obj, const CopyOp &copyop) {
    IfcSolidModel::copy(obj, copyop);
    setOuter((IfcClosedShell*)copyop(obj.m_outer.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcManifoldSolidBrep::s_type("IfcManifoldSolidBrep");
