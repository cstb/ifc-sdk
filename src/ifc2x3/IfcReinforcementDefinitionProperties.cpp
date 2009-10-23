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
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcReinforcementDefinitionProperties::IfcReinforcementDefinitionProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_definitionType = Step::getUnset(m_definitionType);
}

IfcReinforcementDefinitionProperties::~IfcReinforcementDefinitionProperties() {
}

bool IfcReinforcementDefinitionProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcReinforcementDefinitionProperties(this);
}

const std::string &IfcReinforcementDefinitionProperties::type() const {
    return IfcReinforcementDefinitionProperties::s_type.getName();
}

const Step::ClassType &IfcReinforcementDefinitionProperties::getClassType() {
    return IfcReinforcementDefinitionProperties::s_type;
}

const Step::ClassType &IfcReinforcementDefinitionProperties::getType() const {
    return IfcReinforcementDefinitionProperties::s_type;
}

bool IfcReinforcementDefinitionProperties::isOfType(const Step::ClassType &t) const {
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

const IfcLabel IfcReinforcementDefinitionProperties::getDefinitionType() const {
    IfcReinforcementDefinitionProperties * deConstObject = const_cast< IfcReinforcementDefinitionProperties * > (this);
    return deConstObject->getDefinitionType();
}

void IfcReinforcementDefinitionProperties::setDefinitionType(const IfcLabel &value) {
    m_definitionType = value;
}

void IfcReinforcementDefinitionProperties::unsetDefinitionType() {
    m_definitionType = Step::getUnset(getDefinitionType());
}

bool IfcReinforcementDefinitionProperties::testDefinitionType() const {
    return !Step::isUnset(getDefinitionType());
}

List_IfcSectionReinforcementProperties_1_n &IfcReinforcementDefinitionProperties::getReinforcementSectionDefinitions() {
    if (Step::BaseObject::inited()) {
        return m_reinforcementSectionDefinitions;
    }
    else {
        m_reinforcementSectionDefinitions.setUnset(true);
        return m_reinforcementSectionDefinitions;
    }
}

const List_IfcSectionReinforcementProperties_1_n &IfcReinforcementDefinitionProperties::getReinforcementSectionDefinitions() const {
    IfcReinforcementDefinitionProperties * deConstObject = const_cast< IfcReinforcementDefinitionProperties * > (this);
    return deConstObject->getReinforcementSectionDefinitions();
}

void IfcReinforcementDefinitionProperties::setReinforcementSectionDefinitions(const List_IfcSectionReinforcementProperties_1_n &value) {
    m_reinforcementSectionDefinitions = value;
}

void IfcReinforcementDefinitionProperties::unsetReinforcementSectionDefinitions() {
    m_reinforcementSectionDefinitions.clear();
    m_reinforcementSectionDefinitions.setUnset(true);
}

bool IfcReinforcementDefinitionProperties::testReinforcementSectionDefinitions() const {
    return !Step::isUnset(getReinforcementSectionDefinitions());
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
        m_definitionType = Step::String::fromSPF(arg);
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
                attr2 = static_cast< IfcSectionReinforcementProperties * > (m_expressDataSet->get(Step::getIdParam(str1)));
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
    Step::List< Step::RefPtr< IfcSectionReinforcementProperties >, 1 >::const_iterator it_m_reinforcementSectionDefinitions;
    IfcPropertySetDefinition::copy(obj, copyop);
    setDefinitionType(obj.m_definitionType);
    for (it_m_reinforcementSectionDefinitions = obj.m_reinforcementSectionDefinitions.begin(); it_m_reinforcementSectionDefinitions != obj.m_reinforcementSectionDefinitions.end(); ++it_m_reinforcementSectionDefinitions) {
        Step::RefPtr< IfcSectionReinforcementProperties > copyTarget = (IfcSectionReinforcementProperties *) (copyop((*it_m_reinforcementSectionDefinitions).get()));
        m_reinforcementSectionDefinitions.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReinforcementDefinitionProperties::s_type("IfcReinforcementDefinitionProperties");
