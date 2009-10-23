#include "ifc2x3/IfcParameterizedProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement2D.h"
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

IfcParameterizedProfileDef::IfcParameterizedProfileDef(Step::Id id, Step::SPFData *args) : IfcProfileDef(id, args) {
    m_position = NULL;
}

IfcParameterizedProfileDef::~IfcParameterizedProfileDef() {
}

bool IfcParameterizedProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcParameterizedProfileDef(this);
}

const std::string &IfcParameterizedProfileDef::type() const {
    return IfcParameterizedProfileDef::s_type.getName();
}

const Step::ClassType &IfcParameterizedProfileDef::getClassType() {
    return IfcParameterizedProfileDef::s_type;
}

const Step::ClassType &IfcParameterizedProfileDef::getType() const {
    return IfcParameterizedProfileDef::s_type;
}

bool IfcParameterizedProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcParameterizedProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcAxis2Placement2D *IfcParameterizedProfileDef::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement2D *IfcParameterizedProfileDef::getPosition() const {
    IfcParameterizedProfileDef * deConstObject = const_cast< IfcParameterizedProfileDef * > (this);
    return deConstObject->getPosition();
}

void IfcParameterizedProfileDef::setPosition(const Step::RefPtr< IfcAxis2Placement2D > &value) {
    m_position = value;
}

void IfcParameterizedProfileDef::unsetPosition() {
    m_position = Step::getUnset(getPosition());
}

bool IfcParameterizedProfileDef::testPosition() const {
    return !Step::isUnset(getPosition());
}

bool IfcParameterizedProfileDef::init() {
    bool status = IfcProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement2D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcParameterizedProfileDef::copy(const IfcParameterizedProfileDef &obj, const CopyOp &copyop) {
    IfcProfileDef::copy(obj, copyop);
    setPosition((IfcAxis2Placement2D*)copyop(obj.m_position.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcParameterizedProfileDef::s_type("IfcParameterizedProfileDef");
