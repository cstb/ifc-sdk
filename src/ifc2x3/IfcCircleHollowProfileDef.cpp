#include "ifc2x3/IfcCircleHollowProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCircleProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcCircleHollowProfileDef::IfcCircleHollowProfileDef(Step::Id id, Step::SPFData *args) : IfcCircleProfileDef(id, args) {
    m_wallThickness = Step::getUnset(m_wallThickness);
}

IfcCircleHollowProfileDef::~IfcCircleHollowProfileDef() {
}

bool IfcCircleHollowProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCircleHollowProfileDef(this);
}

const std::string &IfcCircleHollowProfileDef::type() const {
    return IfcCircleHollowProfileDef::s_type.getName();
}

const Step::ClassType &IfcCircleHollowProfileDef::getClassType() {
    return IfcCircleHollowProfileDef::s_type;
}

const Step::ClassType &IfcCircleHollowProfileDef::getType() const {
    return IfcCircleHollowProfileDef::s_type;
}

bool IfcCircleHollowProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcCircleHollowProfileDef::s_type == t ? true : IfcCircleProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCircleHollowProfileDef::getWallThickness() {
    if (Step::BaseObject::inited()) {
        return m_wallThickness;
    }
    else {
        return Step::getUnset(m_wallThickness);
    }
}

const IfcPositiveLengthMeasure IfcCircleHollowProfileDef::getWallThickness() const {
    IfcCircleHollowProfileDef * deConstObject = const_cast< IfcCircleHollowProfileDef * > (this);
    return deConstObject->getWallThickness();
}

void IfcCircleHollowProfileDef::setWallThickness(IfcPositiveLengthMeasure value) {
    m_wallThickness = value;
}

void IfcCircleHollowProfileDef::unsetWallThickness() {
    m_wallThickness = Step::getUnset(getWallThickness());
}

bool IfcCircleHollowProfileDef::testWallThickness() const {
    return !Step::isUnset(getWallThickness());
}

bool IfcCircleHollowProfileDef::init() {
    bool status = IfcCircleProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wallThickness = Step::getUnset(m_wallThickness);
    }
    else {
        m_wallThickness = Step::spfToReal(arg);
    }
    return true;
}

void IfcCircleHollowProfileDef::copy(const IfcCircleHollowProfileDef &obj, const CopyOp &copyop) {
    IfcCircleProfileDef::copy(obj, copyop);
    setWallThickness(obj.m_wallThickness);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCircleHollowProfileDef::s_type("IfcCircleHollowProfileDef");
