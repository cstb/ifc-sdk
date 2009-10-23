#include "ifc2x3/IfcStructuralLoad.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcStructuralLoad::IfcStructuralLoad(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcStructuralLoad::~IfcStructuralLoad() {
}

bool IfcStructuralLoad::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLoad(this);
}

const std::string &IfcStructuralLoad::type() const {
    return IfcStructuralLoad::s_type.getName();
}

const Step::ClassType &IfcStructuralLoad::getClassType() {
    return IfcStructuralLoad::s_type;
}

const Step::ClassType &IfcStructuralLoad::getType() const {
    return IfcStructuralLoad::s_type;
}

bool IfcStructuralLoad::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLoad::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcStructuralLoad::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcStructuralLoad::getName() const {
    IfcStructuralLoad * deConstObject = const_cast< IfcStructuralLoad * > (this);
    return deConstObject->getName();
}

void IfcStructuralLoad::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcStructuralLoad::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcStructuralLoad::testName() const {
    return !Step::isUnset(getName());
}

bool IfcStructuralLoad::init() {
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

void IfcStructuralLoad::copy(const IfcStructuralLoad &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoad::s_type("IfcStructuralLoad");
