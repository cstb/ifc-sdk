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

#include "ifc2x3/IfcPropertyDependencyRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPropertyDependencyRelationship::IfcPropertyDependencyRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_dependingProperty = NULL;
    m_dependantProperty = NULL;
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_expression = Step::getUnset(m_expression);
}

IfcPropertyDependencyRelationship::~IfcPropertyDependencyRelationship() {
}

bool IfcPropertyDependencyRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPropertyDependencyRelationship(this);
}

const std::string &IfcPropertyDependencyRelationship::type() {
    return IfcPropertyDependencyRelationship::s_type.getName();
}

Step::ClassType IfcPropertyDependencyRelationship::getClassType() {
    return IfcPropertyDependencyRelationship::s_type;
}

Step::ClassType IfcPropertyDependencyRelationship::getType() const {
    return IfcPropertyDependencyRelationship::s_type;
}

bool IfcPropertyDependencyRelationship::isOfType(Step::ClassType t) {
    return IfcPropertyDependencyRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcProperty *IfcPropertyDependencyRelationship::getDependingProperty() {
    if (Step::BaseObject::inited()) {
        return m_dependingProperty.get();
    }
    else {
        return NULL;
    }
}

void IfcPropertyDependencyRelationship::setDependingProperty(const Step::RefPtr< IfcProperty > &value) {
    m_dependingProperty = value;
    m_dependingProperty->m_propertyForDependance.insert(this);
}

IfcProperty *IfcPropertyDependencyRelationship::getDependantProperty() {
    if (Step::BaseObject::inited()) {
        return m_dependantProperty.get();
    }
    else {
        return NULL;
    }
}

void IfcPropertyDependencyRelationship::setDependantProperty(const Step::RefPtr< IfcProperty > &value) {
    m_dependantProperty = value;
    m_dependantProperty->m_propertyDependsOn.insert(this);
}

IfcLabel IfcPropertyDependencyRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcPropertyDependencyRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcPropertyDependencyRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcPropertyDependencyRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

IfcText IfcPropertyDependencyRelationship::getExpression() {
    if (Step::BaseObject::inited()) {
        return m_expression;
    }
    else {
        return Step::getUnset(m_expression);
    }
}

void IfcPropertyDependencyRelationship::setExpression(const IfcText &value) {
    m_expression = value;
}

void IfcPropertyDependencyRelationship::release() {
    m_dependingProperty.release();
    m_dependantProperty.release();
}

bool IfcPropertyDependencyRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dependingProperty = NULL;
    }
    else {
        m_dependingProperty = static_cast< IfcProperty * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dependantProperty = NULL;
    }
    else {
        m_dependantProperty = static_cast< IfcProperty * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_expression = Step::getUnset(m_expression);
    }
    else {
        m_expression = Step::spfToString(arg);
    }
    return true;
}

void IfcPropertyDependencyRelationship::copy(const IfcPropertyDependencyRelationship &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setDependingProperty(copyop(obj.m_dependingProperty.get()));
    setDependantProperty(copyop(obj.m_dependantProperty.get()));
    setName(obj.m_name);
    setDescription(obj.m_description);
    setExpression(obj.m_expression);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertyDependencyRelationship::s_type("IfcPropertyDependencyRelationship");
