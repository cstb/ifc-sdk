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

#include "ifc2x3/IfcDistributionControlElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionElement.h"
#include "ifc2x3/IfcRelFlowControlElements.h"
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

IfcDistributionControlElement::IfcDistributionControlElement(Step::Id id, Step::SPFData *args) : IfcDistributionElement(id, args) {
    m_controlElementId = Step::getUnset(m_controlElementId);
    m_assignedToFlowElement.setUnset(true);
}

IfcDistributionControlElement::~IfcDistributionControlElement() {
}

bool IfcDistributionControlElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDistributionControlElement(this);
}

const std::string &IfcDistributionControlElement::type() {
    return IfcDistributionControlElement::s_type.getName();
}

Step::ClassType IfcDistributionControlElement::getClassType() {
    return IfcDistributionControlElement::s_type;
}

Step::ClassType IfcDistributionControlElement::getType() const {
    return IfcDistributionControlElement::s_type;
}

bool IfcDistributionControlElement::isOfType(Step::ClassType t) {
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

void IfcDistributionControlElement::setControlElementId(const IfcIdentifier &value) {
    m_controlElementId = value;
}

Step::Set< Step::ObsPtr< IfcRelFlowControlElements > > &IfcDistributionControlElement::getAssignedToFlowElement() {
    if (Step::BaseObject::inited()) {
        return m_assignedToFlowElement;
    }
    else {
        m_assignedToFlowElement.setUnset(true);
        return m_assignedToFlowElement;
    }
}

void IfcDistributionControlElement::release() {
    IfcDistributionElement::release();
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
        m_controlElementId = Step::spfToString(arg);
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
