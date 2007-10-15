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

#include "ifc2x3/IfcRepresentationContext.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentation.h"
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

IfcRepresentationContext::IfcRepresentationContext(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_contextIdentifier = Step::getUnset(m_contextIdentifier);
    m_contextType = Step::getUnset(m_contextType);
    m_representationsInContext.setUnset(true);
}

IfcRepresentationContext::~IfcRepresentationContext() {
}

bool IfcRepresentationContext::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRepresentationContext(this);
}

const std::string &IfcRepresentationContext::type() {
    return IfcRepresentationContext::s_type.getName();
}

Step::ClassType IfcRepresentationContext::getClassType() {
    return IfcRepresentationContext::s_type;
}

Step::ClassType IfcRepresentationContext::getType() const {
    return IfcRepresentationContext::s_type;
}

bool IfcRepresentationContext::isOfType(Step::ClassType t) {
    return IfcRepresentationContext::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcRepresentationContext::getContextIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_contextIdentifier;
    }
    else {
        return Step::getUnset(m_contextIdentifier);
    }
}

void IfcRepresentationContext::setContextIdentifier(const IfcLabel &value) {
    m_contextIdentifier = value;
}

IfcLabel IfcRepresentationContext::getContextType() {
    if (Step::BaseObject::inited()) {
        return m_contextType;
    }
    else {
        return Step::getUnset(m_contextType);
    }
}

void IfcRepresentationContext::setContextType(const IfcLabel &value) {
    m_contextType = value;
}

Step::Set< Step::ObsPtr< IfcRepresentation > > &IfcRepresentationContext::getRepresentationsInContext() {
    if (Step::BaseObject::inited()) {
        return m_representationsInContext;
    }
    else {
        m_representationsInContext.setUnset(true);
        return m_representationsInContext;
    }
}

void IfcRepresentationContext::release() {
}

bool IfcRepresentationContext::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_contextIdentifier = Step::getUnset(m_contextIdentifier);
    }
    else {
        m_contextIdentifier = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_contextType = Step::getUnset(m_contextType);
    }
    else {
        m_contextType = Step::spfToString(arg);
    }
    inverses = m_args->getInverses(IfcRepresentation::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_representationsInContext.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_representationsInContext.insert(static_cast< IfcRepresentation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentationContext::copy(const IfcRepresentationContext &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setContextIdentifier(obj.m_contextIdentifier);
    setContextType(obj.m_contextType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRepresentationContext::s_type("IfcRepresentationContext");
