#include "ifc2x3/IfcCircle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConic.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcCircle::IfcCircle(Step::Id id, Step::SPFData *args) : IfcConic(id, args) {
    m_radius = Step::getUnset(m_radius);
}

IfcCircle::~IfcCircle() {
}

bool IfcCircle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCircle(this);
}

const std::string &IfcCircle::type() const {
    return IfcCircle::s_type.getName();
}

const Step::ClassType &IfcCircle::getClassType() {
    return IfcCircle::s_type;
}

const Step::ClassType &IfcCircle::getType() const {
    return IfcCircle::s_type;
}

bool IfcCircle::isOfType(const Step::ClassType &t) const {
    return IfcCircle::s_type == t ? true : IfcConic::isOfType(t);
}

IfcPositiveLengthMeasure IfcCircle::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

const IfcPositiveLengthMeasure IfcCircle::getRadius() const {
    IfcCircle * deConstObject = const_cast< IfcCircle * > (this);
    return deConstObject->getRadius();
}

void IfcCircle::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcCircle::unsetRadius() {
    m_radius = Step::getUnset(getRadius());
}

bool IfcCircle::testRadius() const {
    return !Step::isUnset(getRadius());
}

bool IfcCircle::init() {
    bool status = IfcConic::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_radius = Step::getUnset(m_radius);
    }
    else {
        m_radius = Step::spfToReal(arg);
    }
    return true;
}

void IfcCircle::copy(const IfcCircle &obj, const CopyOp &copyop) {
    IfcConic::copy(obj, copyop);
    setRadius(obj.m_radius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCircle::s_type("IfcCircle");
