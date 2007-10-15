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

#include "ifc2x3/IfcRelConnectsElements.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConnectionGeometry.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcRelConnects.h"
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

IfcRelConnectsElements::IfcRelConnectsElements(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_connectionGeometry = NULL;
    m_relatingElement = NULL;
    m_relatedElement = NULL;
}

IfcRelConnectsElements::~IfcRelConnectsElements() {
}

bool IfcRelConnectsElements::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelConnectsElements(this);
}

const std::string &IfcRelConnectsElements::type() {
    return IfcRelConnectsElements::s_type.getName();
}

Step::ClassType IfcRelConnectsElements::getClassType() {
    return IfcRelConnectsElements::s_type;
}

Step::ClassType IfcRelConnectsElements::getType() const {
    return IfcRelConnectsElements::s_type;
}

bool IfcRelConnectsElements::isOfType(Step::ClassType t) {
    return IfcRelConnectsElements::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcConnectionGeometry *IfcRelConnectsElements::getConnectionGeometry() {
    if (Step::BaseObject::inited()) {
        return m_connectionGeometry.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsElements::setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value) {
    m_connectionGeometry = value;
}

IfcElement *IfcRelConnectsElements::getRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsElements::setRelatingElement(const Step::RefPtr< IfcElement > &value) {
    m_relatingElement = value;
    m_relatingElement->m_connectedTo.insert(this);
}

IfcElement *IfcRelConnectsElements::getRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsElements::setRelatedElement(const Step::RefPtr< IfcElement > &value) {
    m_relatedElement = value;
    m_relatedElement->m_connectedFrom.insert(this);
}

void IfcRelConnectsElements::release() {
    IfcRelConnects::release();
    m_connectionGeometry.release();
    m_relatingElement.release();
    m_relatedElement.release();
}

bool IfcRelConnectsElements::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_connectionGeometry = NULL;
    }
    else {
        m_connectionGeometry = static_cast< IfcConnectionGeometry * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingElement = NULL;
    }
    else {
        m_relatingElement = static_cast< IfcElement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedElement = NULL;
    }
    else {
        m_relatedElement = static_cast< IfcElement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelConnectsElements::copy(const IfcRelConnectsElements &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setConnectionGeometry(copyop(obj.m_connectionGeometry.get()));
    setRelatingElement(copyop(obj.m_relatingElement.get()));
    setRelatedElement(copyop(obj.m_relatedElement.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsElements::s_type("IfcRelConnectsElements");
