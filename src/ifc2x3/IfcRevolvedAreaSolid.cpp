#include "ifc2x3/IfcRevolvedAreaSolid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis1Placement.h"
#include "ifc2x3/IfcSweptAreaSolid.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRevolvedAreaSolid::IfcRevolvedAreaSolid(Step::Id id, Step::SPFData *args) : IfcSweptAreaSolid(id, args) {
    m_axis = NULL;
    m_angle = Step::getUnset(m_angle);
}

IfcRevolvedAreaSolid::~IfcRevolvedAreaSolid() {
}

bool IfcRevolvedAreaSolid::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRevolvedAreaSolid(this);
}

const std::string &IfcRevolvedAreaSolid::type() const {
    return IfcRevolvedAreaSolid::s_type.getName();
}

const Step::ClassType &IfcRevolvedAreaSolid::getClassType() {
    return IfcRevolvedAreaSolid::s_type;
}

const Step::ClassType &IfcRevolvedAreaSolid::getType() const {
    return IfcRevolvedAreaSolid::s_type;
}

bool IfcRevolvedAreaSolid::isOfType(const Step::ClassType &t) const {
    return IfcRevolvedAreaSolid::s_type == t ? true : IfcSweptAreaSolid::isOfType(t);
}

IfcAxis1Placement *IfcRevolvedAreaSolid::getAxis() {
    if (Step::BaseObject::inited()) {
        return m_axis.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis1Placement *IfcRevolvedAreaSolid::getAxis() const {
    IfcRevolvedAreaSolid * deConstObject = const_cast< IfcRevolvedAreaSolid * > (this);
    return deConstObject->getAxis();
}

void IfcRevolvedAreaSolid::setAxis(const Step::RefPtr< IfcAxis1Placement > &value) {
    m_axis = value;
}

void IfcRevolvedAreaSolid::unsetAxis() {
    m_axis = Step::getUnset(getAxis());
}

bool IfcRevolvedAreaSolid::testAxis() const {
    return !Step::isUnset(getAxis());
}

IfcPlaneAngleMeasure IfcRevolvedAreaSolid::getAngle() {
    if (Step::BaseObject::inited()) {
        return m_angle;
    }
    else {
        return Step::getUnset(m_angle);
    }
}

const IfcPlaneAngleMeasure IfcRevolvedAreaSolid::getAngle() const {
    IfcRevolvedAreaSolid * deConstObject = const_cast< IfcRevolvedAreaSolid * > (this);
    return deConstObject->getAngle();
}

void IfcRevolvedAreaSolid::setAngle(IfcPlaneAngleMeasure value) {
    m_angle = value;
}

void IfcRevolvedAreaSolid::unsetAngle() {
    m_angle = Step::getUnset(getAngle());
}

bool IfcRevolvedAreaSolid::testAngle() const {
    return !Step::isUnset(getAngle());
}

bool IfcRevolvedAreaSolid::init() {
    bool status = IfcSweptAreaSolid::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis = NULL;
    }
    else {
        m_axis = static_cast< IfcAxis1Placement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_angle = Step::getUnset(m_angle);
    }
    else {
        m_angle = Step::spfToReal(arg);
    }
    return true;
}

void IfcRevolvedAreaSolid::copy(const IfcRevolvedAreaSolid &obj, const CopyOp &copyop) {
    IfcSweptAreaSolid::copy(obj, copyop);
    setAxis((IfcAxis1Placement*)copyop(obj.m_axis.get()));
    setAngle(obj.m_angle);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRevolvedAreaSolid::s_type("IfcRevolvedAreaSolid");
