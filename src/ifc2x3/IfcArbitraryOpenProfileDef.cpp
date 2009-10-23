#include "ifc2x3/IfcArbitraryOpenProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedCurve.h"
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

IfcArbitraryOpenProfileDef::IfcArbitraryOpenProfileDef(Step::Id id, Step::SPFData *args) : IfcProfileDef(id, args) {
    m_curve = NULL;
}

IfcArbitraryOpenProfileDef::~IfcArbitraryOpenProfileDef() {
}

bool IfcArbitraryOpenProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcArbitraryOpenProfileDef(this);
}

const std::string &IfcArbitraryOpenProfileDef::type() const {
    return IfcArbitraryOpenProfileDef::s_type.getName();
}

const Step::ClassType &IfcArbitraryOpenProfileDef::getClassType() {
    return IfcArbitraryOpenProfileDef::s_type;
}

const Step::ClassType &IfcArbitraryOpenProfileDef::getType() const {
    return IfcArbitraryOpenProfileDef::s_type;
}

bool IfcArbitraryOpenProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcArbitraryOpenProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcBoundedCurve *IfcArbitraryOpenProfileDef::getCurve() {
    if (Step::BaseObject::inited()) {
        return m_curve.get();
    }
    else {
        return NULL;
    }
}

const IfcBoundedCurve *IfcArbitraryOpenProfileDef::getCurve() const {
    IfcArbitraryOpenProfileDef * deConstObject = const_cast< IfcArbitraryOpenProfileDef * > (this);
    return deConstObject->getCurve();
}

void IfcArbitraryOpenProfileDef::setCurve(const Step::RefPtr< IfcBoundedCurve > &value) {
    m_curve = value;
}

void IfcArbitraryOpenProfileDef::unsetCurve() {
    m_curve = Step::getUnset(getCurve());
}

bool IfcArbitraryOpenProfileDef::testCurve() const {
    return !Step::isUnset(getCurve());
}

bool IfcArbitraryOpenProfileDef::init() {
    bool status = IfcProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curve = NULL;
    }
    else {
        m_curve = static_cast< IfcBoundedCurve * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcArbitraryOpenProfileDef::copy(const IfcArbitraryOpenProfileDef &obj, const CopyOp &copyop) {
    IfcProfileDef::copy(obj, copyop);
    setCurve((IfcBoundedCurve*)copyop(obj.m_curve.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcArbitraryOpenProfileDef::s_type("IfcArbitraryOpenProfileDef");
