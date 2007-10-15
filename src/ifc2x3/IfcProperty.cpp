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

#include "ifc2x3/IfcProperty.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcComplexProperty.h"
#include "ifc2x3/IfcPropertyDependencyRelationship.h"
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

IfcProperty::IfcProperty(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_propertyForDependance.setUnset(true);
    m_propertyDependsOn.setUnset(true);
    m_partOfComplex.setUnset(true);
}

IfcProperty::~IfcProperty() {
}

bool IfcProperty::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcProperty(this);
}

const std::string &IfcProperty::type() {
    return IfcProperty::s_type.getName();
}

Step::ClassType IfcProperty::getClassType() {
    return IfcProperty::s_type;
}

Step::ClassType IfcProperty::getType() const {
    return IfcProperty::s_type;
}

bool IfcProperty::isOfType(Step::ClassType t) {
    return IfcProperty::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcProperty::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcProperty::setName(const IfcIdentifier &value) {
    m_name = value;
}

IfcText IfcProperty::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcProperty::setDescription(const IfcText &value) {
    m_description = value;
}

Step::Set< Step::ObsPtr< IfcPropertyDependencyRelationship > > &IfcProperty::getPropertyForDependance() {
    if (Step::BaseObject::inited()) {
        return m_propertyForDependance;
    }
    else {
        m_propertyForDependance.setUnset(true);
        return m_propertyForDependance;
    }
}

Step::Set< Step::ObsPtr< IfcPropertyDependencyRelationship > > &IfcProperty::getPropertyDependsOn() {
    if (Step::BaseObject::inited()) {
        return m_propertyDependsOn;
    }
    else {
        m_propertyDependsOn.setUnset(true);
        return m_propertyDependsOn;
    }
}

Step::Set< Step::ObsPtr< IfcComplexProperty > > &IfcProperty::getPartOfComplex() {
    if (Step::BaseObject::inited()) {
        return m_partOfComplex;
    }
    else {
        m_partOfComplex.setUnset(true);
        return m_partOfComplex;
    }
}

void IfcProperty::release() {
}

bool IfcProperty::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    inverses = m_args->getInverses(IfcPropertyDependencyRelationship::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_propertyForDependance.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_propertyForDependance.insert(static_cast< IfcPropertyDependencyRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPropertyDependencyRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_propertyDependsOn.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_propertyDependsOn.insert(static_cast< IfcPropertyDependencyRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcComplexProperty::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_partOfComplex.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_partOfComplex.insert(static_cast< IfcComplexProperty * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcProperty::copy(const IfcProperty &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProperty::s_type("IfcProperty");
