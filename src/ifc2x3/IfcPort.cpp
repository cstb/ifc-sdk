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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcPort.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcRelConnectsPortToElement.h"
#include "ifc2x3/IfcRelConnectsPorts.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcPort::IfcPort(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
}

IfcPort::~IfcPort() {
}

bool IfcPort::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPort(this);
}

const std::string &IfcPort::type() const {
    return IfcPort::s_type.getName();
}

const Step::ClassType &IfcPort::getClassType() {
    return IfcPort::s_type;
}

const Step::ClassType &IfcPort::getType() const {
    return IfcPort::s_type;
}

bool IfcPort::isOfType(const Step::ClassType &t) const {
    return IfcPort::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcRelConnectsPortToElement *IfcPort::getContainedIn() {
    if (Step::BaseObject::inited()) {
        return m_containedIn.get();
    }
    else {
        return NULL;
    }
}

const IfcRelConnectsPortToElement *IfcPort::getContainedIn() const {
    IfcPort * deConstObject = const_cast< IfcPort * > (this);
    return deConstObject->getContainedIn();
}

bool IfcPort::testContainedIn() const {
    return !Step::isUnset(getContainedIn());
}

Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedFrom() {
    if (Step::BaseObject::inited()) {
        return m_connectedFrom;
    }
    else {
        m_connectedFrom.setUnset(true);
        return m_connectedFrom;
    }
}

const Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedFrom() const {
    IfcPort * deConstObject = const_cast< IfcPort * > (this);
    return deConstObject->getConnectedFrom();
}

bool IfcPort::testConnectedFrom() const {
    return !Step::isUnset(getConnectedFrom());
}

Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedTo() {
    if (Step::BaseObject::inited()) {
        return m_connectedTo;
    }
    else {
        m_connectedTo.setUnset(true);
        return m_connectedTo;
    }
}

const Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedTo() const {
    IfcPort * deConstObject = const_cast< IfcPort * > (this);
    return deConstObject->getConnectedTo();
}

bool IfcPort::testConnectedTo() const {
    return !Step::isUnset(getConnectedTo());
}

bool IfcPort::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelConnectsPortToElement::getClassType(), 4);
    if (inverses) {
        m_containedIn = static_cast< IfcRelConnectsPortToElement * > (m_expressDataSet->get((*inverses)[0]));
    }
    inverses = m_args->getInverses(IfcRelConnectsPorts::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_connectedFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedFrom.insert(static_cast< IfcRelConnectsPorts * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsPorts::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_connectedTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedTo.insert(static_cast< IfcRelConnectsPorts * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPort::copy(const IfcPort &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPort::s_type("IfcPort");
