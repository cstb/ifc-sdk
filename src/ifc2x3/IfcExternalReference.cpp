/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcExternalReference.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcExternalReference::IfcExternalReference(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_location = Step::getUnset(m_location);
    m_itemReference = Step::getUnset(m_itemReference);
    m_name = Step::getUnset(m_name);
}

IfcExternalReference::~IfcExternalReference() {
}

bool IfcExternalReference::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcExternalReference(this);
}

const std::string &IfcExternalReference::type() const {
    return IfcExternalReference::s_type.getName();
}

const Step::ClassType &IfcExternalReference::getClassType() {
    return IfcExternalReference::s_type;
}

const Step::ClassType &IfcExternalReference::getType() const {
    return IfcExternalReference::s_type;
}

bool IfcExternalReference::isOfType(const Step::ClassType &t) const {
    return IfcExternalReference::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcExternalReference::getLocation() {
    if (Step::BaseObject::inited()) {
        return m_location;
    }
    else {
        return Step::getUnset(m_location);
    }
}

const IfcLabel IfcExternalReference::getLocation() const {
    IfcExternalReference * deConstObject = const_cast< IfcExternalReference * > (this);
    return deConstObject->getLocation();
}

void IfcExternalReference::setLocation(const IfcLabel &value) {
    m_location = value;
}

IfcIdentifier IfcExternalReference::getItemReference() {
    if (Step::BaseObject::inited()) {
        return m_itemReference;
    }
    else {
        return Step::getUnset(m_itemReference);
    }
}

const IfcIdentifier IfcExternalReference::getItemReference() const {
    IfcExternalReference * deConstObject = const_cast< IfcExternalReference * > (this);
    return deConstObject->getItemReference();
}

void IfcExternalReference::setItemReference(const IfcIdentifier &value) {
    m_itemReference = value;
}

IfcLabel IfcExternalReference::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcExternalReference::getName() const {
    IfcExternalReference * deConstObject = const_cast< IfcExternalReference * > (this);
    return deConstObject->getName();
}

void IfcExternalReference::setName(const IfcLabel &value) {
    m_name = value;
}

bool IfcExternalReference::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_location = Step::getUnset(m_location);
    }
    else {
        m_location = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_itemReference = Step::getUnset(m_itemReference);
    }
    else {
        m_itemReference = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcExternalReference::copy(const IfcExternalReference &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setLocation(obj.m_location);
    setItemReference(obj.m_itemReference);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcExternalReference::s_type("IfcExternalReference");
