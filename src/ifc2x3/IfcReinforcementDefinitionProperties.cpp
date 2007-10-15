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

#include "ifc2x3/IfcReinforcementDefinitionProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcSectionReinforcementProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcReinforcementDefinitionProperties::IfcReinforcementDefinitionProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_definitionType = Step::getUnset(m_definitionType);
    m_reinforcementSectionDefinitions.setUnset(true);
}

IfcReinforcementDefinitionProperties::~IfcReinforcementDefinitionProperties() {
}

bool IfcReinforcementDefinitionProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReinforcementDefinitionProperties(this);
}

const std::string &IfcReinforcementDefinitionProperties::type() {
    return IfcReinforcementDefinitionProperties::s_type.getName();
}

Step::ClassType IfcReinforcementDefinitionProperties::getClassType() {
    return IfcReinforcementDefinitionProperties::s_type;
}

Step::ClassType IfcReinforcementDefinitionProperties::getType() const {
    return IfcReinforcementDefinitionProperties::s_type;
}

bool IfcReinforcementDefinitionProperties::isOfType(Step::ClassType t) {
    return IfcReinforcementDefinitionProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcLabel IfcReinforcementDefinitionProperties::getDefinitionType() {
    if (Step::BaseObject::inited()) {
        return m_definitionType;
    }
    else {
        return Step::getUnset(m_definitionType);
    }
}

void IfcReinforcementDefinitionProperties::setDefinitionType(const IfcLabel &value) {
    m_definitionType = value;
}

Step::List< Step::RefPtr< IfcSectionReinforcementProperties > > &IfcReinforcementDefinitionProperties::getReinforcementSectionDefinitions() {
    if (Step::BaseObject::inited()) {
        return m_reinforcementSectionDefinitions;
    }
    else {
        m_reinforcementSectionDefinitions.setUnset(true);
        return m_reinforcementSectionDefinitions;
    }
}

void IfcReinforcementDefinitionProperties::setReinforcementSectionDefinitions(const Step::List< Step::RefPtr< IfcSectionReinforcementProperties > > &value) {
    m_reinforcementSectionDefinitions = value;
}

void IfcReinforcementDefinitionProperties::release() {
    IfcPropertySetDefinition::release();
    m_reinforcementSectionDefinitions.clear();
}

bool IfcReinforcementDefinitionProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_definitionType = Step::getUnset(m_definitionType);
    }
    else {
        m_definitionType = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_reinforcementSectionDefinitions.setUnset(true);
    }
    else {
        m_reinforcementSectionDefinitions.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSectionReinforcementProperties > attr2;
                attr2 = static_cast< IfcSectionReinforcementProperties * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_reinforcementSectionDefinitions.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcReinforcementDefinitionProperties::copy(const IfcReinforcementDefinitionProperties &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcSectionReinforcementProperties > >::const_iterator it_m_reinforcementSectionDefinitions;
    IfcPropertySetDefinition::copy(obj, copyop);
    setDefinitionType(obj.m_definitionType);
    for (it_m_reinforcementSectionDefinitions = obj.m_reinforcementSectionDefinitions.begin(); it_m_reinforcementSectionDefinitions != obj.m_reinforcementSectionDefinitions.end(); ++it_m_reinforcementSectionDefinitions) {
        Step::RefPtr< IfcSectionReinforcementProperties > copyTarget = copyop((*it_m_reinforcementSectionDefinitions).get());
        m_reinforcementSectionDefinitions.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReinforcementDefinitionProperties::s_type("IfcReinforcementDefinitionProperties");
