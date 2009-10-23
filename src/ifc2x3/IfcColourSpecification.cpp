#include "ifc2x3/IfcColourSpecification.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcColourSpecification::IfcColourSpecification(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcColourSpecification::~IfcColourSpecification() {
}

bool IfcColourSpecification::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcColourSpecification(this);
}

const std::string &IfcColourSpecification::type() const {
    return IfcColourSpecification::s_type.getName();
}

const Step::ClassType &IfcColourSpecification::getClassType() {
    return IfcColourSpecification::s_type;
}

const Step::ClassType &IfcColourSpecification::getType() const {
    return IfcColourSpecification::s_type;
}

bool IfcColourSpecification::isOfType(const Step::ClassType &t) const {
    return IfcColourSpecification::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcColourSpecification::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcColourSpecification::getName() const {
    IfcColourSpecification * deConstObject = const_cast< IfcColourSpecification * > (this);
    return deConstObject->getName();
}

void IfcColourSpecification::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcColourSpecification::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcColourSpecification::testName() const {
    return !Step::isUnset(getName());
}

bool IfcColourSpecification::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcColourSpecification::copy(const IfcColourSpecification &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcColourSpecification::s_type("IfcColourSpecification");
