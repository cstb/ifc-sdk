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

#include "ifc2x3/IfcMaterial.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterialClassificationRelationship.h"
#include "ifc2x3/IfcMaterialDefinitionRepresentation.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMaterial::IfcMaterial(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcMaterial::~IfcMaterial() {
}

bool IfcMaterial::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterial(this);
}

const std::string &IfcMaterial::type() const {
    return IfcMaterial::s_type.getName();
}

const Step::ClassType &IfcMaterial::getClassType() {
    return IfcMaterial::s_type;
}

const Step::ClassType &IfcMaterial::getType() const {
    return IfcMaterial::s_type;
}

bool IfcMaterial::isOfType(const Step::ClassType &t) const {
    return IfcMaterial::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcMaterial::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcMaterial::getName() const {
    IfcMaterial * deConstObject = const_cast< IfcMaterial * > (this);
    return deConstObject->getName();
}

void IfcMaterial::setName(const IfcLabel &value) {
    m_name = value;
}

Inverse_Set_IfcMaterialDefinitionRepresentation_0_1 &IfcMaterial::getHasRepresentation() {
    if (Step::BaseObject::inited()) {
        return m_hasRepresentation;
    }
    else {
        m_hasRepresentation.setUnset(true);
        return m_hasRepresentation;
    }
}

const Inverse_Set_IfcMaterialDefinitionRepresentation_0_1 &IfcMaterial::getHasRepresentation() const {
    IfcMaterial * deConstObject = const_cast< IfcMaterial * > (this);
    return deConstObject->getHasRepresentation();
}

Inverse_Set_IfcMaterialClassificationRelationship_0_1 &IfcMaterial::getClassifiedAs() {
    if (Step::BaseObject::inited()) {
        return m_classifiedAs;
    }
    else {
        m_classifiedAs.setUnset(true);
        return m_classifiedAs;
    }
}

const Inverse_Set_IfcMaterialClassificationRelationship_0_1 &IfcMaterial::getClassifiedAs() const {
    IfcMaterial * deConstObject = const_cast< IfcMaterial * > (this);
    return deConstObject->getClassifiedAs();
}

bool IfcMaterial::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcMaterialDefinitionRepresentation::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_hasRepresentation.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasRepresentation.insert(static_cast< IfcMaterialDefinitionRepresentation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcMaterialClassificationRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_classifiedAs.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_classifiedAs.insert(static_cast< IfcMaterialClassificationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcMaterial::copy(const IfcMaterial &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterial::s_type("IfcMaterial");
