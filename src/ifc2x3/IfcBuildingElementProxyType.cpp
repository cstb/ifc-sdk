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

#include "ifc2x3/IfcBuildingElementProxyType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcBuildingElementProxyType::IfcBuildingElementProxyType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcBuildingElementProxyTypeEnum_UNSET;
}

IfcBuildingElementProxyType::~IfcBuildingElementProxyType() {
}

bool IfcBuildingElementProxyType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBuildingElementProxyType(this);
}

const std::string &IfcBuildingElementProxyType::type() const {
    return IfcBuildingElementProxyType::s_type.getName();
}

const Step::ClassType &IfcBuildingElementProxyType::getClassType() {
    return IfcBuildingElementProxyType::s_type;
}

const Step::ClassType &IfcBuildingElementProxyType::getType() const {
    return IfcBuildingElementProxyType::s_type;
}

bool IfcBuildingElementProxyType::isOfType(const Step::ClassType &t) const {
    return IfcBuildingElementProxyType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcBuildingElementProxyTypeEnum IfcBuildingElementProxyType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcBuildingElementProxyTypeEnum_UNSET;
    }
}

const IfcBuildingElementProxyTypeEnum IfcBuildingElementProxyType::getPredefinedType() const {
    IfcBuildingElementProxyType * deConstObject = const_cast< IfcBuildingElementProxyType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcBuildingElementProxyType::setPredefinedType(IfcBuildingElementProxyTypeEnum value) {
    m_predefinedType = value;
}

void IfcBuildingElementProxyType::unsetPredefinedType() {
    m_predefinedType = IfcBuildingElementProxyTypeEnum_UNSET;
}

bool IfcBuildingElementProxyType::testPredefinedType() const {
    return getPredefinedType() != IfcBuildingElementProxyTypeEnum_UNSET;
}

bool IfcBuildingElementProxyType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcBuildingElementProxyTypeEnum_UNSET;
    }
    else {
        if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcBuildingElementProxyTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcBuildingElementProxyTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcBuildingElementProxyType::copy(const IfcBuildingElementProxyType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingElementProxyType::s_type("IfcBuildingElementProxyType");
