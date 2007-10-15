/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
#include "ifc2x3/IfcAlignmentElement.h"
#include "ifc2x3/IfcRelConnectsPortToElement.h"
#include "ifc2x3/IfcRelConnectsPorts.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPort::IfcPort(Step::Id id, Step::SPFData *args) : IfcAlignmentElement(id, args) {
    m_connectedFrom.setUnset(true);
    m_connectedTo.setUnset(true);
}

IfcPort::~IfcPort() {
}

bool IfcPort::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPort(this);
}

const std::string &IfcPort::type() {
    return IfcPort::s_type.getName();
}

Step::ClassType IfcPort::getClassType() {
    return IfcPort::s_type;
}

Step::ClassType IfcPort::getType() const {
    return IfcPort::s_type;
}

bool IfcPort::isOfType(Step::ClassType t) {
    return IfcPort::s_type == t ? true : IfcAlignmentElement::isOfType(t);
}

IfcRelConnectsPortToElement *IfcPort::getContainedIn() {
    if (Step::BaseObject::inited()) {
        return m_containedIn.get();
    }
    else {
        return NULL;
    }
}

Step::Set< Step::ObsPtr< IfcRelConnectsPorts > > &IfcPort::getConnectedFrom() {
    if (Step::BaseObject::inited()) {
        return m_connectedFrom;
    }
    else {
        m_connectedFrom.setUnset(true);
        return m_connectedFrom;
    }
}

Step::Set< Step::ObsPtr< IfcRelConnectsPorts > > &IfcPort::getConnectedTo() {
    if (Step::BaseObject::inited()) {
        return m_connectedTo;
    }
    else {
        m_connectedTo.setUnset(true);
        return m_connectedTo;
    }
}

void IfcPort::release() {
    IfcAlignmentElement::release();
}

bool IfcPort::init() {
    bool status = IfcAlignmentElement::init();
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
    IfcAlignmentElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPort::s_type("IfcPort");
