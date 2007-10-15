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

#include "ifc2x3/IfcPropertySetDefinition.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertyDefinition.h"
#include "ifc2x3/IfcRelDefinesByProperties.h"
#include "ifc2x3/IfcTypeObject.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPropertySetDefinition::IfcPropertySetDefinition(Step::Id id, Step::SPFData *args) : IfcPropertyDefinition(id, args) {
    m_propertyDefinitionOf.setUnset(true);
    m_definesType.setUnset(true);
}

IfcPropertySetDefinition::~IfcPropertySetDefinition() {
}

bool IfcPropertySetDefinition::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPropertySetDefinition(this);
}

const std::string &IfcPropertySetDefinition::type() {
    return IfcPropertySetDefinition::s_type.getName();
}

Step::ClassType IfcPropertySetDefinition::getClassType() {
    return IfcPropertySetDefinition::s_type;
}

Step::ClassType IfcPropertySetDefinition::getType() const {
    return IfcPropertySetDefinition::s_type;
}

bool IfcPropertySetDefinition::isOfType(Step::ClassType t) {
    return IfcPropertySetDefinition::s_type == t ? true : IfcPropertyDefinition::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcRelDefinesByProperties > > &IfcPropertySetDefinition::getPropertyDefinitionOf() {
    if (Step::BaseObject::inited()) {
        return m_propertyDefinitionOf;
    }
    else {
        m_propertyDefinitionOf.setUnset(true);
        return m_propertyDefinitionOf;
    }
}

Step::Set< Step::ObsPtr< IfcTypeObject > > &IfcPropertySetDefinition::getDefinesType() {
    if (Step::BaseObject::inited()) {
        return m_definesType;
    }
    else {
        m_definesType.setUnset(true);
        return m_definesType;
    }
}

void IfcPropertySetDefinition::release() {
    IfcPropertyDefinition::release();
}

bool IfcPropertySetDefinition::init() {
    bool status = IfcPropertyDefinition::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelDefinesByProperties::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_propertyDefinitionOf.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_propertyDefinitionOf.insert(static_cast< IfcRelDefinesByProperties * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcTypeObject::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_definesType.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_definesType.insert(static_cast< IfcTypeObject * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPropertySetDefinition::copy(const IfcPropertySetDefinition &obj, const CopyOp &copyop) {
    IfcPropertyDefinition::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertySetDefinition::s_type("IfcPropertySetDefinition");
