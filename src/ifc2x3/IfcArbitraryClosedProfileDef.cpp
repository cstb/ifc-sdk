#include "ifc2x3/IfcArbitraryClosedProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcArbitraryClosedProfileDef::IfcArbitraryClosedProfileDef(Step::Id id, Step::SPFData *args) : IfcProfileDef(id, args) {
    m_outerCurve = NULL;
}

IfcArbitraryClosedProfileDef::~IfcArbitraryClosedProfileDef() {
}

bool IfcArbitraryClosedProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcArbitraryClosedProfileDef(this);
}

const std::string &IfcArbitraryClosedProfileDef::type() const {
    return IfcArbitraryClosedProfileDef::s_type.getName();
}

const Step::ClassType &IfcArbitraryClosedProfileDef::getClassType() {
    return IfcArbitraryClosedProfileDef::s_type;
}

const Step::ClassType &IfcArbitraryClosedProfileDef::getType() const {
    return IfcArbitraryClosedProfileDef::s_type;
}

bool IfcArbitraryClosedProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcArbitraryClosedProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcCurve *IfcArbitraryClosedProfileDef::getOuterCurve() {
    if (Step::BaseObject::inited()) {
        return m_outerCurve.get();
    }
    else {
        return NULL;
    }
}

const IfcCurve *IfcArbitraryClosedProfileDef::getOuterCurve() const {
    IfcArbitraryClosedProfileDef * deConstObject = const_cast< IfcArbitraryClosedProfileDef * > (this);
    return deConstObject->getOuterCurve();
}

void IfcArbitraryClosedProfileDef::setOuterCurve(const Step::RefPtr< IfcCurve > &value) {
    m_outerCurve = value;
}

void IfcArbitraryClosedProfileDef::unsetOuterCurve() {
    m_outerCurve = Step::getUnset(getOuterCurve());
}

bool IfcArbitraryClosedProfileDef::testOuterCurve() const {
    return !Step::isUnset(getOuterCurve());
}

bool IfcArbitraryClosedProfileDef::init() {
    bool status = IfcProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_outerCurve = NULL;
    }
    else {
        m_outerCurve = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcArbitraryClosedProfileDef::copy(const IfcArbitraryClosedProfileDef &obj, const CopyOp &copyop) {
    IfcProfileDef::copy(obj, copyop);
    setOuterCurve((IfcCurve*)copyop(obj.m_outerCurve.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcArbitraryClosedProfileDef::s_type("IfcArbitraryClosedProfileDef");
