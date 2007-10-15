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

#include "ifc2x3/IfcDraughtingCalloutRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDraughtingCallout.h"
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

IfcDraughtingCalloutRelationship::IfcDraughtingCalloutRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_relatingDraughtingCallout = NULL;
    m_relatedDraughtingCallout = NULL;
}

IfcDraughtingCalloutRelationship::~IfcDraughtingCalloutRelationship() {
}

bool IfcDraughtingCalloutRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDraughtingCalloutRelationship(this);
}

const std::string &IfcDraughtingCalloutRelationship::type() {
    return IfcDraughtingCalloutRelationship::s_type.getName();
}

Step::ClassType IfcDraughtingCalloutRelationship::getClassType() {
    return IfcDraughtingCalloutRelationship::s_type;
}

Step::ClassType IfcDraughtingCalloutRelationship::getType() const {
    return IfcDraughtingCalloutRelationship::s_type;
}

bool IfcDraughtingCalloutRelationship::isOfType(Step::ClassType t) {
    return IfcDraughtingCalloutRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcDraughtingCalloutRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcDraughtingCalloutRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcDraughtingCalloutRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcDraughtingCalloutRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatingDraughtingCallout() {
    if (Step::BaseObject::inited()) {
        return m_relatingDraughtingCallout.get();
    }
    else {
        return NULL;
    }
}

void IfcDraughtingCalloutRelationship::setRelatingDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value) {
    m_relatingDraughtingCallout = value;
    m_relatingDraughtingCallout->m_isRelatedToCallout.insert(this);
}

IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatedDraughtingCallout() {
    if (Step::BaseObject::inited()) {
        return m_relatedDraughtingCallout.get();
    }
    else {
        return NULL;
    }
}

void IfcDraughtingCalloutRelationship::setRelatedDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value) {
    m_relatedDraughtingCallout = value;
    m_relatedDraughtingCallout->m_isRelatedFromCallout.insert(this);
}

void IfcDraughtingCalloutRelationship::release() {
    m_relatingDraughtingCallout.release();
    m_relatedDraughtingCallout.release();
}

bool IfcDraughtingCalloutRelationship::init() {
    std::string arg;
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
        m_relatingDraughtingCallout = NULL;
    }
    else {
        m_relatingDraughtingCallout = static_cast< IfcDraughtingCallout * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedDraughtingCallout = NULL;
    }
    else {
        m_relatedDraughtingCallout = static_cast< IfcDraughtingCallout * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcDraughtingCalloutRelationship::copy(const IfcDraughtingCalloutRelationship &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    setRelatingDraughtingCallout(copyop(obj.m_relatingDraughtingCallout.get()));
    setRelatedDraughtingCallout(copyop(obj.m_relatedDraughtingCallout.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingCalloutRelationship::s_type("IfcDraughtingCalloutRelationship");
