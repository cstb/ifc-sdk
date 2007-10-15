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

#include "ifc2x3/IfcRelDefinesByProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcRelDefines.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelDefinesByProperties::IfcRelDefinesByProperties(Step::Id id, Step::SPFData *args) : IfcRelDefines(id, args) {
    m_relatingPropertyDefinition = NULL;
}

IfcRelDefinesByProperties::~IfcRelDefinesByProperties() {
}

bool IfcRelDefinesByProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelDefinesByProperties(this);
}

const std::string &IfcRelDefinesByProperties::type() {
    return IfcRelDefinesByProperties::s_type.getName();
}

Step::ClassType IfcRelDefinesByProperties::getClassType() {
    return IfcRelDefinesByProperties::s_type;
}

Step::ClassType IfcRelDefinesByProperties::getType() const {
    return IfcRelDefinesByProperties::s_type;
}

bool IfcRelDefinesByProperties::isOfType(Step::ClassType t) {
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

void IfcRelDefinesByProperties::setRelatingPropertyDefinition(const Step::RefPtr< IfcPropertySetDefinition > &value) {
    m_relatingPropertyDefinition = value;
    m_relatingPropertyDefinition->m_propertyDefinitionOf.insert(this);
}

void IfcRelDefinesByProperties::release() {
    IfcRelDefines::release();
    m_relatingPropertyDefinition.release();
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
        m_relatingPropertyDefinition = static_cast< IfcPropertySetDefinition * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelDefinesByProperties::copy(const IfcRelDefinesByProperties &obj, const CopyOp &copyop) {
    IfcRelDefines::copy(obj, copyop);
    setRelatingPropertyDefinition(copyop(obj.m_relatingPropertyDefinition.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelDefinesByProperties::s_type("IfcRelDefinesByProperties");
