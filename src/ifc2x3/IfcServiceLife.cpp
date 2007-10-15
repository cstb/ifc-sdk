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

#include "ifc2x3/IfcServiceLife.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcServiceLife::IfcServiceLife(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_serviceLifeType = IfcServiceLifeTypeEnum_UNSET;
    m_serviceLifeDuration = Step::getUnset(m_serviceLifeDuration);
}

IfcServiceLife::~IfcServiceLife() {
}

bool IfcServiceLife::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcServiceLife(this);
}

const std::string &IfcServiceLife::type() {
    return IfcServiceLife::s_type.getName();
}

Step::ClassType IfcServiceLife::getClassType() {
    return IfcServiceLife::s_type;
}

Step::ClassType IfcServiceLife::getType() const {
    return IfcServiceLife::s_type;
}

bool IfcServiceLife::isOfType(Step::ClassType t) {
    return IfcServiceLife::s_type == t ? true : IfcControl::isOfType(t);
}

IfcServiceLifeTypeEnum IfcServiceLife::getServiceLifeType() {
    if (Step::BaseObject::inited()) {
        return m_serviceLifeType;
    }
    else {
        return IfcServiceLifeTypeEnum_UNSET;
    }
}

void IfcServiceLife::setServiceLifeType(IfcServiceLifeTypeEnum value) {
    m_serviceLifeType = value;
}

IfcTimeMeasure IfcServiceLife::getServiceLifeDuration() {
    if (Step::BaseObject::inited()) {
        return m_serviceLifeDuration;
    }
    else {
        return Step::getUnset(m_serviceLifeDuration);
    }
}

void IfcServiceLife::setServiceLifeDuration(IfcTimeMeasure value) {
    m_serviceLifeDuration = value;
}

void IfcServiceLife::release() {
    IfcControl::release();
}

bool IfcServiceLife::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_serviceLifeType = IfcServiceLifeTypeEnum_UNSET;
    }
    else {
        if (arg == ".ACTUALSERVICELIFE.") {
            m_serviceLifeType = IfcServiceLifeTypeEnum_ACTUALSERVICELIFE;
        }
        else if (arg == ".EXPECTEDSERVICELIFE.") {
            m_serviceLifeType = IfcServiceLifeTypeEnum_EXPECTEDSERVICELIFE;
        }
        else if (arg == ".OPTIMISTICREFERENCESERVICELIFE.") {
            m_serviceLifeType = IfcServiceLifeTypeEnum_OPTIMISTICREFERENCESERVICELIFE;
        }
        else if (arg == ".PESSIMISTICREFERENCESERVICELIFE.") {
            m_serviceLifeType = IfcServiceLifeTypeEnum_PESSIMISTICREFERENCESERVICELIFE;
        }
        else if (arg == ".REFERENCESERVICELIFE.") {
            m_serviceLifeType = IfcServiceLifeTypeEnum_REFERENCESERVICELIFE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_serviceLifeDuration = Step::getUnset(m_serviceLifeDuration);
    }
    else {
        m_serviceLifeDuration = Step::spfToReal(arg);
    }
    return true;
}

void IfcServiceLife::copy(const IfcServiceLife &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    setServiceLifeType(obj.m_serviceLifeType);
    setServiceLifeDuration(obj.m_serviceLifeDuration);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcServiceLife::s_type("IfcServiceLife");
