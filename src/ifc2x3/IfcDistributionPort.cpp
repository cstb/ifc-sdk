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

#include "ifc2x3/IfcDistributionPort.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPort.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDistributionPort::IfcDistributionPort(Step::Id id, Step::SPFData *args) : IfcPort(id, args) {
    m_flowDirection = IfcFlowDirectionEnum_UNSET;
}

IfcDistributionPort::~IfcDistributionPort() {
}

bool IfcDistributionPort::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDistributionPort(this);
}

const std::string &IfcDistributionPort::type() const {
    return IfcDistributionPort::s_type.getName();
}

const Step::ClassType &IfcDistributionPort::getClassType() {
    return IfcDistributionPort::s_type;
}

const Step::ClassType &IfcDistributionPort::getType() const {
    return IfcDistributionPort::s_type;
}

bool IfcDistributionPort::isOfType(const Step::ClassType &t) const {
    return IfcDistributionPort::s_type == t ? true : IfcPort::isOfType(t);
}

IfcFlowDirectionEnum IfcDistributionPort::getFlowDirection() {
    if (Step::BaseObject::inited()) {
        return m_flowDirection;
    }
    else {
        return IfcFlowDirectionEnum_UNSET;
    }
}

const IfcFlowDirectionEnum IfcDistributionPort::getFlowDirection() const {
    IfcDistributionPort * deConstObject = const_cast< IfcDistributionPort * > (this);
    return deConstObject->getFlowDirection();
}

void IfcDistributionPort::setFlowDirection(IfcFlowDirectionEnum value) {
    m_flowDirection = value;
}

bool IfcDistributionPort::init() {
    bool status = IfcPort::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flowDirection = IfcFlowDirectionEnum_UNSET;
    }
    else {
        if (arg == ".SOURCE.") {
            m_flowDirection = IfcFlowDirectionEnum_SOURCE;
        }
        else if (arg == ".SINK.") {
            m_flowDirection = IfcFlowDirectionEnum_SINK;
        }
        else if (arg == ".SOURCEANDSINK.") {
            m_flowDirection = IfcFlowDirectionEnum_SOURCEANDSINK;
        }
        else if (arg == ".NOTDEFINED.") {
            m_flowDirection = IfcFlowDirectionEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDistributionPort::copy(const IfcDistributionPort &obj, const CopyOp &copyop) {
    IfcPort::copy(obj, copyop);
    setFlowDirection(obj.m_flowDirection);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionPort::s_type("IfcDistributionPort");
