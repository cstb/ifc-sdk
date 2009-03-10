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

#include "ifc2x3/IfcProxy.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcProxy::IfcProxy(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
    m_proxyType = IfcObjectTypeEnum_UNSET;
    m_tag = Step::getUnset(m_tag);
}

IfcProxy::~IfcProxy() {
}

bool IfcProxy::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProxy(this);
}

const std::string &IfcProxy::type() const {
    return IfcProxy::s_type.getName();
}

const Step::ClassType &IfcProxy::getClassType() {
    return IfcProxy::s_type;
}

const Step::ClassType &IfcProxy::getType() const {
    return IfcProxy::s_type;
}

bool IfcProxy::isOfType(const Step::ClassType &t) const {
    return IfcProxy::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcObjectTypeEnum IfcProxy::getProxyType() {
    if (Step::BaseObject::inited()) {
        return m_proxyType;
    }
    else {
        return IfcObjectTypeEnum_UNSET;
    }
}

const IfcObjectTypeEnum IfcProxy::getProxyType() const {
    IfcProxy * deConstObject = const_cast< IfcProxy * > (this);
    return deConstObject->getProxyType();
}

void IfcProxy::setProxyType(IfcObjectTypeEnum value) {
    m_proxyType = value;
}

IfcLabel IfcProxy::getTag() {
    if (Step::BaseObject::inited()) {
        return m_tag;
    }
    else {
        return Step::getUnset(m_tag);
    }
}

const IfcLabel IfcProxy::getTag() const {
    IfcProxy * deConstObject = const_cast< IfcProxy * > (this);
    return deConstObject->getTag();
}

void IfcProxy::setTag(const IfcLabel &value) {
    m_tag = value;
}

bool IfcProxy::init() {
    bool status = IfcProduct::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_proxyType = IfcObjectTypeEnum_UNSET;
    }
    else {
        if (arg == ".PRODUCT.") {
            m_proxyType = IfcObjectTypeEnum_PRODUCT;
        }
        else if (arg == ".PROCESS.") {
            m_proxyType = IfcObjectTypeEnum_PROCESS;
        }
        else if (arg == ".CONTROL.") {
            m_proxyType = IfcObjectTypeEnum_CONTROL;
        }
        else if (arg == ".RESOURCE.") {
            m_proxyType = IfcObjectTypeEnum_RESOURCE;
        }
        else if (arg == ".ACTOR.") {
            m_proxyType = IfcObjectTypeEnum_ACTOR;
        }
        else if (arg == ".GROUP.") {
            m_proxyType = IfcObjectTypeEnum_GROUP;
        }
        else if (arg == ".PROJECT.") {
            m_proxyType = IfcObjectTypeEnum_PROJECT;
        }
        else if (arg == ".NOTDEFINED.") {
            m_proxyType = IfcObjectTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tag = Step::getUnset(m_tag);
    }
    else {
        m_tag = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcProxy::copy(const IfcProxy &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    setProxyType(obj.m_proxyType);
    setTag(obj.m_tag);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProxy::s_type("IfcProxy");
