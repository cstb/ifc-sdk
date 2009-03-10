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
}

IfcSectionReinforcementProperties::~IfcSectionReinforcementProperties() {
}

bool IfcSectionReinforcementProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSectionReinforcementProperties(this);
}

const std::string &IfcSectionReinforcementProperties::type() const {
    return IfcSectionReinforcementProperties::s_type.getName();
}

const Step::ClassType &IfcSectionReinforcementProperties::getClassType() {
    return IfcSectionReinforcementProperties::s_type;
}

const Step::ClassType &IfcSectionReinforcementProperties::getType() const {
    return IfcSectionReinforcementProperties::s_type;
}

bool IfcSectionReinforcementProperties::isOfType(const Step::ClassType &t) const {
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

const IfcLengthMeasure IfcSectionReinforcementProperties::getLongitudinalStartPosition() const {
    IfcSectionReinforcementProperties * deConstObject = const_cast< IfcSectionReinforcementProperties * > (this);
    return deConstObject->getLongitudinalStartPosition();
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

const IfcLengthMeasure IfcSectionReinforcementProperties::getLongitudinalEndPosition() const {
    IfcSectionReinforcementProperties * deConstObject = const_cast< IfcSectionReinforcementProperties * > (this);
    return deConstObject->getLongitudinalEndPosition();
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

const IfcLengthMeasure IfcSectionReinforcementProperties::getTransversePosition() const {
    IfcSectionReinforcementProperties * deConstObject = const_cast< IfcSectionReinforcementProperties * > (this);
    return deConstObject->getTransversePosition();
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

const IfcReinforcingBarRoleEnum IfcSectionReinforcementProperties::getReinforcementRole() const {
    IfcSectionReinforcementProperties * deConstObject = const_cast< IfcSectionReinforcementProperties * > (this);
    return deConstObject->getReinforcementRole();
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

const IfcSectionProperties *IfcSectionReinforcementProperties::getSectionDefinition() const {
    IfcSectionReinforcementProperties * deConstObject = const_cast< IfcSectionReinforcementProperties * > (this);
    return deConstObject->getSectionDefinition();
}

void IfcSectionReinforcementProperties::setSectionDefinition(const Step::RefPtr< IfcSectionProperties > &value) {
    m_sectionDefinition = value;
}

Set_IfcReinforcementBarProperties_1_n &IfcSectionReinforcementProperties::getCrossSectionReinforcementDefinitions() {
    if (Step::BaseObject::inited()) {
        return m_crossSectionReinforcementDefinitions;
    }
    else {
        m_crossSectionReinforcementDefinitions.setUnset(true);
        return m_crossSectionReinforcementDefinitions;
    }
}

const Set_IfcReinforcementBarProperties_1_n &IfcSectionReinforcementProperties::getCrossSectionReinforcementDefinitions() const {
    IfcSectionReinforcementProperties * deConstObject = const_cast< IfcSectionReinforcementProperties * > (this);
    return deConstObject->getCrossSectionReinforcementDefinitions();
}

void IfcSectionReinforcementProperties::setCrossSectionReinforcementDefinitions(const Set_IfcReinforcementBarProperties_1_n &value) {
    m_crossSectionReinforcementDefinitions = value;
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
        m_sectionDefinition = static_cast< IfcSectionProperties * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
                attr2 = static_cast< IfcReinforcementBarProperties * > (m_expressDataSet->get(Step::getIdParam(str1)));
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
    Step::Set< Step::RefPtr< IfcReinforcementBarProperties >, 1 >::const_iterator it_m_crossSectionReinforcementDefinitions;
    Step::BaseEntity::copy(obj, copyop);
    setLongitudinalStartPosition(obj.m_longitudinalStartPosition);
    setLongitudinalEndPosition(obj.m_longitudinalEndPosition);
    setTransversePosition(obj.m_transversePosition);
    setReinforcementRole(obj.m_reinforcementRole);
    setSectionDefinition((IfcSectionProperties*)copyop(obj.m_sectionDefinition.get()));
    for (it_m_crossSectionReinforcementDefinitions = obj.m_crossSectionReinforcementDefinitions.begin(); it_m_crossSectionReinforcementDefinitions != obj.m_crossSectionReinforcementDefinitions.end(); ++it_m_crossSectionReinforcementDefinitions) {
        Step::RefPtr< IfcReinforcementBarProperties > copyTarget = (IfcReinforcementBarProperties *) (copyop((*it_m_crossSectionReinforcementDefinitions).get()));
        m_crossSectionReinforcementDefinitions.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSectionReinforcementProperties::s_type("IfcSectionReinforcementProperties");
