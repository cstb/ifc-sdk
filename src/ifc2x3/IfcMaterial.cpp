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

#include "ifc2x3/IfcMaterial.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterialClassificationRelationship.h"
#include "ifc2x3/IfcMaterialDefinitionRepresentation.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMaterial::IfcMaterial(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_hasRepresentation.setUnset(true);
    m_classifiedAs.setUnset(true);
}

IfcMaterial::~IfcMaterial() {
}

bool IfcMaterial::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMaterial(this);
}

const std::string &IfcMaterial::type() {
    return IfcMaterial::s_type.getName();
}

Step::ClassType IfcMaterial::getClassType() {
    return IfcMaterial::s_type;
}

Step::ClassType IfcMaterial::getType() const {
    return IfcMaterial::s_type;
}

bool IfcMaterial::isOfType(Step::ClassType t) {
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

void IfcMaterial::setName(const IfcLabel &value) {
    m_name = value;
}

Step::Set< Step::ObsPtr< IfcMaterialDefinitionRepresentation > > &IfcMaterial::getHasRepresentation() {
    if (Step::BaseObject::inited()) {
        return m_hasRepresentation;
    }
    else {
        m_hasRepresentation.setUnset(true);
        return m_hasRepresentation;
    }
}

Step::Set< Step::ObsPtr< IfcMaterialClassificationRelationship > > &IfcMaterial::getClassifiedAs() {
    if (Step::BaseObject::inited()) {
        return m_classifiedAs;
    }
    else {
        m_classifiedAs.setUnset(true);
        return m_classifiedAs;
    }
}

void IfcMaterial::release() {
}

bool IfcMaterial::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
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
