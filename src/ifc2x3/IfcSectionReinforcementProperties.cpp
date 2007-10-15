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

#include "ifc2x3/IfcSectionReinforcementProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcReinforcementBarProperties.h"
#include "ifc2x3/IfcSectionProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSectionReinforcementProperties::IfcSectionReinforcementProperties(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_longitudinalStartPosition = Step::getUnset(m_longitudinalStartPosition);
    m_longitudinalEndPosition = Step::getUnset(m_longitudinalEndPosition);
    m_transversePosition = Step::getUnset(m_transversePosition);
    m_reinforcementRole = IfcReinforcingBarRoleEnum_UNSET;
    m_sectionDefinition = NULL;
    m_crossSectionReinforcementDefinitions.setUnset(true);
}

IfcSectionReinforcementProperties::~IfcSectionReinforcementProperties() {
}

bool IfcSectionReinforcementProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSectionReinforcementProperties(this);
}

const std::string &IfcSectionReinforcementProperties::type() {
    return IfcSectionReinforcementProperties::s_type.getName();
}

Step::ClassType IfcSectionReinforcementProperties::getClassType() {
    return IfcSectionReinforcementProperties::s_type;
}

Step::ClassType IfcSectionReinforcementProperties::getType() const {
    return IfcSectionReinforcementProperties::s_type;
}

bool IfcSectionReinforcementProperties::isOfType(Step::ClassType t) {
    return IfcSectionReinforcementProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLengthMeasure IfcSectionReinforcementProperties::getLongitudinalStartPosition() {
    if (Step::BaseObject::inited()) {
        return m_longitudinalStartPosition;
    }
    else {
        return Step::getUnset(m_longitudinalStartPosition);
    }
}

void IfcSectionReinforcementProperties::setLongitudinalStartPosition(IfcLengthMeasure value) {
    m_longitudinalStartPosition = value;
}

IfcLengthMeasure IfcSectionReinforcementProperties::getLongitudinalEndPosition() {
    if (Step::BaseObject::inited()) {
        return m_longitudinalEndPosition;
    }
    else {
        return Step::getUnset(m_longitudinalEndPosition);
    }
}

void IfcSectionReinforcementProperties::setLongitudinalEndPosition(IfcLengthMeasure value) {
    m_longitudinalEndPosition = value;
}

IfcLengthMeasure IfcSectionReinforcementProperties::getTransversePosition() {
    if (Step::BaseObject::inited()) {
        return m_transversePosition;
    }
    else {
        return Step::getUnset(m_transversePosition);
    }
}

void IfcSectionReinforcementProperties::setTransversePosition(IfcLengthMeasure value) {
    m_transversePosition = value;
}

IfcReinforcingBarRoleEnum IfcSectionReinforcementProperties::getReinforcementRole() {
    if (Step::BaseObject::inited()) {
        return m_reinforcementRole;
    }
    else {
        return IfcReinforcingBarRoleEnum_UNSET;
    }
}

void IfcSectionReinforcementProperties::setReinforcementRole(IfcReinforcingBarRoleEnum value) {
    m_reinforcementRole = value;
}

IfcSectionProperties *IfcSectionReinforcementProperties::getSectionDefinition() {
    if (Step::BaseObject::inited()) {
        return m_sectionDefinition.get();
    }
    else {
        return NULL;
    }
}

void IfcSectionReinforcementProperties::setSectionDefinition(const Step::RefPtr< IfcSectionProperties > &value) {
    m_sectionDefinition = value;
}

Step::Set< Step::RefPtr< IfcReinforcementBarProperties > > &IfcSectionReinforcementProperties::getCrossSectionReinforcementDefinitions() {
    if (Step::BaseObject::inited()) {
        return m_crossSectionReinforcementDefinitions;
    }
    else {
        m_crossSectionReinforcementDefinitions.setUnset(true);
        return m_crossSectionReinforcementDefinitions;
    }
}

void IfcSectionReinforcementProperties::setCrossSectionReinforcementDefinitions(const Step::Set< Step::RefPtr< IfcReinforcementBarProperties > > &value) {
    m_crossSectionReinforcementDefinitions = value;
}

void IfcSectionReinforcementProperties::release() {
    m_sectionDefinition.release();
    m_crossSectionReinforcementDefinitions.clear();
}

bool IfcSectionReinforcementProperties::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_longitudinalStartPosition = Step::getUnset(m_longitudinalStartPosition);
    }
    else {
        m_longitudinalStartPosition = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_longitudinalEndPosition = Step::getUnset(m_longitudinalEndPosition);
    }
    else {
        m_longitudinalEndPosition = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transversePosition = Step::getUnset(m_transversePosition);
    }
    else {
        m_transversePosition = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_reinforcementRole = IfcReinforcingBarRoleEnum_UNSET;
    }
    else {
        if (arg == ".MAIN.") {
            m_reinforcementRole = IfcReinforcingBarRoleEnum_MAIN;
        }
        else if (arg == ".SHEAR.") {
            m_reinforcementRole = IfcReinforcingBarRoleEnum_SHEAR;
        }
        else if (arg == ".LIGATURE.") {
            m_reinforcementRole = IfcReinforcingBarRoleEnum_LIGATURE;
        }
        else if (arg == ".STUD.") {
            m_reinforcementRole = IfcReinforcingBarRoleEnum_STUD;
        }
        else if (arg == ".PUNCHING.") {
            m_reinforcementRole = IfcReinforcingBarRoleEnum_PUNCHING;
        }
        else if (arg == ".EDGE.") {
            m_reinforcementRole = IfcReinforcingBarRoleEnum_EDGE;
        }
        else if (arg == ".RING.") {
            m_reinforcementRole = IfcReinforcingBarRoleEnum_RING;
        }
        else if (arg == ".USERDEFINED.") {
            m_reinforcementRole = IfcReinforcingBarRoleEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_reinforcementRole = IfcReinforcingBarRoleEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sectionDefinition = NULL;
    }
    else {
        m_sectionDefinition = static_cast< IfcSectionProperties * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_crossSectionReinforcementDefinitions.setUnset(true);
    }
    else {
        m_crossSectionReinforcementDefinitions.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcReinforcementBarProperties > attr2;
                attr2 = static_cast< IfcReinforcementBarProperties * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_crossSectionReinforcementDefinitions.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcSectionReinforcementProperties::copy(const IfcSectionReinforcementProperties &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcReinforcementBarProperties > >::const_iterator it_m_crossSectionReinforcementDefinitions;
    Step::BaseEntity::copy(obj, copyop);
    setLongitudinalStartPosition(obj.m_longitudinalStartPosition);
    setLongitudinalEndPosition(obj.m_longitudinalEndPosition);
    setTransversePosition(obj.m_transversePosition);
    setReinforcementRole(obj.m_reinforcementRole);
    setSectionDefinition(copyop(obj.m_sectionDefinition.get()));
    for (it_m_crossSectionReinforcementDefinitions = obj.m_crossSectionReinforcementDefinitions.begin(); it_m_crossSectionReinforcementDefinitions != obj.m_crossSectionReinforcementDefinitions.end(); ++it_m_crossSectionReinforcementDefinitions) {
        Step::RefPtr< IfcReinforcementBarProperties > copyTarget = copyop((*it_m_crossSectionReinforcementDefinitions).get());
        m_crossSectionReinforcementDefinitions.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSectionReinforcementProperties::s_type("IfcSectionReinforcementProperties");
