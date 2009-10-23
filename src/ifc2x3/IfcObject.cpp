#include "ifc2x3/IfcObject.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObjectDefinition.h"
#include "ifc2x3/IfcRelDefines.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcObject::IfcObject(Step::Id id, Step::SPFData *args) : IfcObjectDefinition(id, args) {
    m_objectType = Step::getUnset(m_objectType);
}

IfcObject::~IfcObject() {
}

bool IfcObject::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcObject(this);
}

const std::string &IfcObject::type() const {
    return IfcObject::s_type.getName();
}

const Step::ClassType &IfcObject::getClassType() {
    return IfcObject::s_type;
}

const Step::ClassType &IfcObject::getType() const {
    return IfcObject::s_type;
}

bool IfcObject::isOfType(const Step::ClassType &t) const {
    return IfcObject::s_type == t ? true : IfcObjectDefinition::isOfType(t);
}

IfcLabel IfcObject::getObjectType() {
    if (Step::BaseObject::inited()) {
        return m_objectType;
    }
    else {
        return Step::getUnset(m_objectType);
    }
}

const IfcLabel IfcObject::getObjectType() const {
    IfcObject * deConstObject = const_cast< IfcObject * > (this);
    return deConstObject->getObjectType();
}

void IfcObject::setObjectType(const IfcLabel &value) {
    m_objectType = value;
}

void IfcObject::unsetObjectType() {
    m_objectType = Step::getUnset(getObjectType());
}

bool IfcObject::testObjectType() const {
    return !Step::isUnset(getObjectType());
}

Inverse_Set_IfcRelDefines_0_n &IfcObject::getIsDefinedBy() {
    if (Step::BaseObject::inited()) {
        return m_isDefinedBy;
    }
    else {
        m_isDefinedBy.setUnset(true);
        return m_isDefinedBy;
    }
}

const Inverse_Set_IfcRelDefines_0_n &IfcObject::getIsDefinedBy() const {
    IfcObject * deConstObject = const_cast< IfcObject * > (this);
    return deConstObject->getIsDefinedBy();
}

bool IfcObject::testIsDefinedBy() const {
    return !Step::isUnset(getIsDefinedBy());
}

bool IfcObject::init() {
    bool status = IfcObjectDefinition::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_objectType = Step::getUnset(m_objectType);
    }
    else {
        m_objectType = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcRelDefines::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_isDefinedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isDefinedBy.insert(static_cast< IfcRelDefines * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcObject::copy(const IfcObject &obj, const CopyOp &copyop) {
    IfcObjectDefinition::copy(obj, copyop);
    setObjectType(obj.m_objectType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcObject::s_type("IfcObject");
