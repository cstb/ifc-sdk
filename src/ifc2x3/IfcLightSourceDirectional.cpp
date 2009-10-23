#include "ifc2x3/IfcLightSourceDirectional.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcLightSource.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcLightSourceDirectional::IfcLightSourceDirectional(Step::Id id, Step::SPFData *args) : IfcLightSource(id, args) {
    m_orientation = NULL;
}

IfcLightSourceDirectional::~IfcLightSourceDirectional() {
}

bool IfcLightSourceDirectional::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLightSourceDirectional(this);
}

const std::string &IfcLightSourceDirectional::type() const {
    return IfcLightSourceDirectional::s_type.getName();
}

const Step::ClassType &IfcLightSourceDirectional::getClassType() {
    return IfcLightSourceDirectional::s_type;
}

const Step::ClassType &IfcLightSourceDirectional::getType() const {
    return IfcLightSourceDirectional::s_type;
}

bool IfcLightSourceDirectional::isOfType(const Step::ClassType &t) const {
    return IfcLightSourceDirectional::s_type == t ? true : IfcLightSource::isOfType(t);
}

IfcDirection *IfcLightSourceDirectional::getOrientation() {
    if (Step::BaseObject::inited()) {
        return m_orientation.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcLightSourceDirectional::getOrientation() const {
    IfcLightSourceDirectional * deConstObject = const_cast< IfcLightSourceDirectional * > (this);
    return deConstObject->getOrientation();
}

void IfcLightSourceDirectional::setOrientation(const Step::RefPtr< IfcDirection > &value) {
    m_orientation = value;
}

void IfcLightSourceDirectional::unsetOrientation() {
    m_orientation = Step::getUnset(getOrientation());
}

bool IfcLightSourceDirectional::testOrientation() const {
    return !Step::isUnset(getOrientation());
}

bool IfcLightSourceDirectional::init() {
    bool status = IfcLightSource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientation = NULL;
    }
    else {
        m_orientation = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcLightSourceDirectional::copy(const IfcLightSourceDirectional &obj, const CopyOp &copyop) {
    IfcLightSource::copy(obj, copyop);
    setOrientation((IfcDirection*)copyop(obj.m_orientation.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSourceDirectional::s_type("IfcLightSourceDirectional");
