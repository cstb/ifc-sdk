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

#include "ifc2x3/IfcDistributionControlElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionElement.h"
#include "ifc2x3/IfcRelFlowControlElements.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDistributionControlElement::IfcDistributionControlElement(Step::Id id, Step::SPFData *args) : IfcDistributionElement(id, args) {
    m_controlElementId = Step::getUnset(m_controlElementId);
}

IfcDistributionControlElement::~IfcDistributionControlElement() {
}

bool IfcDistributionControlElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDistributionControlElement(this);
}

const std::string &IfcDistributionControlElement::type() const {
    return IfcDistributionControlElement::s_type.getName();
}

const Step::ClassType &IfcDistributionControlElement::getClassType() {
    return IfcDistributionControlElement::s_type;
}

const Step::ClassType &IfcDistributionControlElement::getType() const {
    return IfcDistributionControlElement::s_type;
}

bool IfcDistributionControlElement::isOfType(const Step::ClassType &t) const {
    return IfcDistributionControlElement::s_type == t ? true : IfcDistributionElement::isOfType(t);
}

IfcIdentifier IfcDistributionControlElement::getControlElementId() {
    if (Step::BaseObject::inited()) {
        return m_controlElementId;
    }
    else {
        return Step::getUnset(m_controlElementId);
    }
}

const IfcIdentifier IfcDistributionControlElement::getControlElementId() const {
    IfcDistributionControlElement * deConstObject = const_cast< IfcDistributionControlElement * > (this);
    return deConstObject->getControlElementId();
}

void IfcDistributionControlElement::setControlElementId(const IfcIdentifier &value) {
    m_controlElementId = value;
}

Inverse_Set_IfcRelFlowControlElements_0_1 &IfcDistributionControlElement::getAssignedToFlowElement() {
    if (Step::BaseObject::inited()) {
        return m_assignedToFlowElement;
    }
    else {
        m_assignedToFlowElement.setUnset(true);
        return m_assignedToFlowElement;
    }
}

const Inverse_Set_IfcRelFlowControlElements_0_1 &IfcDistributionControlElement::getAssignedToFlowElement() const {
    IfcDistributionControlElement * deConstObject = const_cast< IfcDistributionControlElement * > (this);
    return deConstObject->getAssignedToFlowElement();
}

bool IfcDistributionControlElement::init() {
    bool status = IfcDistributionElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_controlElementId = Step::getUnset(m_controlElementId);
    }
    else {
        m_controlElementId = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcRelFlowControlElements::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_assignedToFlowElement.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_assignedToFlowElement.insert(static_cast< IfcRelFlowControlElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDistributionControlElement::copy(const IfcDistributionControlElement &obj, const CopyOp &copyop) {
    IfcDistributionElement::copy(obj, copyop);
    setControlElementId(obj.m_controlElementId);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionControlElement::s_type("IfcDistributionControlElement");
