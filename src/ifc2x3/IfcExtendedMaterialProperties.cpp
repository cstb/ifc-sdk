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

#include "ifc2x3/IfcExtendedMaterialProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterialProperties.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcExtendedMaterialProperties::IfcExtendedMaterialProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_description = Step::getUnset(m_description);
    m_name = Step::getUnset(m_name);
}

IfcExtendedMaterialProperties::~IfcExtendedMaterialProperties() {
}

bool IfcExtendedMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcExtendedMaterialProperties(this);
}

const std::string &IfcExtendedMaterialProperties::type() const {
    return IfcExtendedMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcExtendedMaterialProperties::getClassType() {
    return IfcExtendedMaterialProperties::s_type;
}

const Step::ClassType &IfcExtendedMaterialProperties::getType() const {
    return IfcExtendedMaterialProperties::s_type;
}

bool IfcExtendedMaterialProperties::isOfType(const Step::ClassType &t) const {
    return IfcExtendedMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

Set_IfcProperty_1_n &IfcExtendedMaterialProperties::getExtendedProperties() {
    if (Step::BaseObject::inited()) {
        return m_extendedProperties;
    }
    else {
        m_extendedProperties.setUnset(true);
        return m_extendedProperties;
    }
}

const Set_IfcProperty_1_n &IfcExtendedMaterialProperties::getExtendedProperties() const {
    IfcExtendedMaterialProperties * deConstObject = const_cast< IfcExtendedMaterialProperties * > (this);
    return deConstObject->getExtendedProperties();
}

void IfcExtendedMaterialProperties::setExtendedProperties(const Set_IfcProperty_1_n &value) {
    m_extendedProperties = value;
}

IfcText IfcExtendedMaterialProperties::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcExtendedMaterialProperties::getDescription() const {
    IfcExtendedMaterialProperties * deConstObject = const_cast< IfcExtendedMaterialProperties * > (this);
    return deConstObject->getDescription();
}

void IfcExtendedMaterialProperties::setDescription(const IfcText &value) {
    m_description = value;
}

IfcLabel IfcExtendedMaterialProperties::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcExtendedMaterialProperties::getName() const {
    IfcExtendedMaterialProperties * deConstObject = const_cast< IfcExtendedMaterialProperties * > (this);
    return deConstObject->getName();
}

void IfcExtendedMaterialProperties::setName(const IfcLabel &value) {
    m_name = value;
}

bool IfcExtendedMaterialProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_extendedProperties.setUnset(true);
    }
    else {
        m_extendedProperties.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProperty > attr2;
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_extendedProperties.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcExtendedMaterialProperties::copy(const IfcExtendedMaterialProperties &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty >, 1 >::const_iterator it_m_extendedProperties;
    IfcMaterialProperties::copy(obj, copyop);
    for (it_m_extendedProperties = obj.m_extendedProperties.begin(); it_m_extendedProperties != obj.m_extendedProperties.end(); ++it_m_extendedProperties) {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_extendedProperties).get()));
        m_extendedProperties.insert(copyTarget.get());
    }
    setDescription(obj.m_description);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcExtendedMaterialProperties::s_type("IfcExtendedMaterialProperties");
