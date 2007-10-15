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

#include "ifc2x3/IfcEnergyProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcEnergyProperties::IfcEnergyProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_energySequence = IfcEnergySequenceEnum_UNSET;
    m_userDefinedEnergySequence = Step::getUnset(m_userDefinedEnergySequence);
}

IfcEnergyProperties::~IfcEnergyProperties() {
}

bool IfcEnergyProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEnergyProperties(this);
}

const std::string &IfcEnergyProperties::type() {
    return IfcEnergyProperties::s_type.getName();
}

Step::ClassType IfcEnergyProperties::getClassType() {
    return IfcEnergyProperties::s_type;
}

Step::ClassType IfcEnergyProperties::getType() const {
    return IfcEnergyProperties::s_type;
}

bool IfcEnergyProperties::isOfType(Step::ClassType t) {
    return IfcEnergyProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcEnergySequenceEnum IfcEnergyProperties::getEnergySequence() {
    if (Step::BaseObject::inited()) {
        return m_energySequence;
    }
    else {
        return IfcEnergySequenceEnum_UNSET;
    }
}

void IfcEnergyProperties::setEnergySequence(IfcEnergySequenceEnum value) {
    m_energySequence = value;
}

IfcLabel IfcEnergyProperties::getUserDefinedEnergySequence() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedEnergySequence;
    }
    else {
        return Step::getUnset(m_userDefinedEnergySequence);
    }
}

void IfcEnergyProperties::setUserDefinedEnergySequence(const IfcLabel &value) {
    m_userDefinedEnergySequence = value;
}

void IfcEnergyProperties::release() {
    IfcPropertySetDefinition::release();
}

bool IfcEnergyProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_energySequence = IfcEnergySequenceEnum_UNSET;
    }
    else {
        if (arg == ".PRIMARY.") {
            m_energySequence = IfcEnergySequenceEnum_PRIMARY;
        }
        else if (arg == ".SECONDARY.") {
            m_energySequence = IfcEnergySequenceEnum_SECONDARY;
        }
        else if (arg == ".TERTIARY.") {
            m_energySequence = IfcEnergySequenceEnum_TERTIARY;
        }
        else if (arg == ".AUXILIARY.") {
            m_energySequence = IfcEnergySequenceEnum_AUXILIARY;
        }
        else if (arg == ".USERDEFINED.") {
            m_energySequence = IfcEnergySequenceEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_energySequence = IfcEnergySequenceEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedEnergySequence = Step::getUnset(m_userDefinedEnergySequence);
    }
    else {
        m_userDefinedEnergySequence = Step::spfToString(arg);
    }
    return true;
}

void IfcEnergyProperties::copy(const IfcEnergyProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setEnergySequence(obj.m_energySequence);
    setUserDefinedEnergySequence(obj.m_userDefinedEnergySequence);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEnergyProperties::s_type("IfcEnergyProperties");
