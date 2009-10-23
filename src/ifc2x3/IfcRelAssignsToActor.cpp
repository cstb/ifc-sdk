#include "ifc2x3/IfcRelAssignsToActor.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActor.h"
#include "ifc2x3/IfcActorRole.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelAssignsToActor::IfcRelAssignsToActor(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingActor = NULL;
    m_actingRole = NULL;
}

IfcRelAssignsToActor::~IfcRelAssignsToActor() {
}

bool IfcRelAssignsToActor::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssignsToActor(this);
}

const std::string &IfcRelAssignsToActor::type() const {
    return IfcRelAssignsToActor::s_type.getName();
}

const Step::ClassType &IfcRelAssignsToActor::getClassType() {
    return IfcRelAssignsToActor::s_type;
}

const Step::ClassType &IfcRelAssignsToActor::getType() const {
    return IfcRelAssignsToActor::s_type;
}

bool IfcRelAssignsToActor::isOfType(const Step::ClassType &t) const {
    return IfcRelAssignsToActor::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcActor *IfcRelAssignsToActor::getRelatingActor() {
    if (Step::BaseObject::inited()) {
        return m_relatingActor.get();
    }
    else {
        return NULL;
    }
}

const IfcActor *IfcRelAssignsToActor::getRelatingActor() const {
    IfcRelAssignsToActor * deConstObject = const_cast< IfcRelAssignsToActor * > (this);
    return deConstObject->getRelatingActor();
}

void IfcRelAssignsToActor::setRelatingActor(const Step::RefPtr< IfcActor > &value) {
    if (m_relatingActor.valid()) {
        m_relatingActor->m_isActingUpon.erase(this);
    }
    if (value.valid()) {
        value->m_isActingUpon.insert(this);
    }
    m_relatingActor = value;
}

void IfcRelAssignsToActor::unsetRelatingActor() {
    m_relatingActor = Step::getUnset(getRelatingActor());
}

bool IfcRelAssignsToActor::testRelatingActor() const {
    return !Step::isUnset(getRelatingActor());
}

IfcActorRole *IfcRelAssignsToActor::getActingRole() {
    if (Step::BaseObject::inited()) {
        return m_actingRole.get();
    }
    else {
        return NULL;
    }
}

const IfcActorRole *IfcRelAssignsToActor::getActingRole() const {
    IfcRelAssignsToActor * deConstObject = const_cast< IfcRelAssignsToActor * > (this);
    return deConstObject->getActingRole();
}

void IfcRelAssignsToActor::setActingRole(const Step::RefPtr< IfcActorRole > &value) {
    m_actingRole = value;
}

void IfcRelAssignsToActor::unsetActingRole() {
    m_actingRole = Step::getUnset(getActingRole());
}

bool IfcRelAssignsToActor::testActingRole() const {
    return !Step::isUnset(getActingRole());
}

bool IfcRelAssignsToActor::init() {
    bool status = IfcRelAssigns::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingActor = NULL;
    }
    else {
        m_relatingActor = static_cast< IfcActor * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actingRole = NULL;
    }
    else {
        m_actingRole = static_cast< IfcActorRole * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssignsToActor::copy(const IfcRelAssignsToActor &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingActor((IfcActor*)copyop(obj.m_relatingActor.get()));
    setActingRole((IfcActorRole*)copyop(obj.m_actingRole.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToActor::s_type("IfcRelAssignsToActor");
