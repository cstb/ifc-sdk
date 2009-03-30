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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcRelDefinesByProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcRelDefines.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelDefinesByProperties::IfcRelDefinesByProperties(Step::Id id, Step::SPFData *args) : IfcRelDefines(id, args) {
    m_relatingPropertyDefinition = NULL;
}

IfcRelDefinesByProperties::~IfcRelDefinesByProperties() {
}

bool IfcRelDefinesByProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelDefinesByProperties(this);
}

const std::string &IfcRelDefinesByProperties::type() const {
    return IfcRelDefinesByProperties::s_type.getName();
}

const Step::ClassType &IfcRelDefinesByProperties::getClassType() {
    return IfcRelDefinesByProperties::s_type;
}

const Step::ClassType &IfcRelDefinesByProperties::getType() const {
    return IfcRelDefinesByProperties::s_type;
}

bool IfcRelDefinesByProperties::isOfType(const Step::ClassType &t) const {
    return IfcRelDefinesByProperties::s_type == t ? true : IfcRelDefines::isOfType(t);
}

IfcPropertySetDefinition *IfcRelDefinesByProperties::getRelatingPropertyDefinition() {
    if (Step::BaseObject::inited()) {
        return m_relatingPropertyDefinition.get();
    }
    else {
        return NULL;
    }
}

const IfcPropertySetDefinition *IfcRelDefinesByProperties::getRelatingPropertyDefinition() const {
    IfcRelDefinesByProperties * deConstObject = const_cast< IfcRelDefinesByProperties * > (this);
    return deConstObject->getRelatingPropertyDefinition();
}

void IfcRelDefinesByProperties::setRelatingPropertyDefinition(const Step::RefPtr< IfcPropertySetDefinition > &value) {
    if (m_relatingPropertyDefinition.valid()) {
        m_relatingPropertyDefinition->m_propertyDefinitionOf.erase(this);
    }
    if (value.valid()) {
        value->m_propertyDefinitionOf.insert(this);
    }
    m_relatingPropertyDefinition = value;
}

void IfcRelDefinesByProperties::unsetRelatingPropertyDefinition() {
    m_relatingPropertyDefinition = Step::getUnset(getRelatingPropertyDefinition());
}

bool IfcRelDefinesByProperties::testRelatingPropertyDefinition() const {
    return !Step::isUnset(getRelatingPropertyDefinition());
}

bool IfcRelDefinesByProperties::init() {
    bool status = IfcRelDefines::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingPropertyDefinition = NULL;
    }
    else {
        m_relatingPropertyDefinition = static_cast< IfcPropertySetDefinition * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelDefinesByProperties::copy(const IfcRelDefinesByProperties &obj, const CopyOp &copyop) {
    IfcRelDefines::copy(obj, copyop);
    setRelatingPropertyDefinition((IfcPropertySetDefinition*)copyop(obj.m_relatingPropertyDefinition.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelDefinesByProperties::s_type("IfcRelDefinesByProperties");
