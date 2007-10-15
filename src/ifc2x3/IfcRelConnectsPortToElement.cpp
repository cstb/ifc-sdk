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

#include "ifc2x3/IfcRelConnectsPortToElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcPort.h"
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

IfcRelConnectsPortToElement::IfcRelConnectsPortToElement(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingPort = NULL;
    m_relatedElement = NULL;
}

IfcRelConnectsPortToElement::~IfcRelConnectsPortToElement() {
}

bool IfcRelConnectsPortToElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelConnectsPortToElement(this);
}

const std::string &IfcRelConnectsPortToElement::type() {
    return IfcRelConnectsPortToElement::s_type.getName();
}

Step::ClassType IfcRelConnectsPortToElement::getClassType() {
    return IfcRelConnectsPortToElement::s_type;
}

Step::ClassType IfcRelConnectsPortToElement::getType() const {
    return IfcRelConnectsPortToElement::s_type;
}

bool IfcRelConnectsPortToElement::isOfType(Step::ClassType t) {
    return IfcRelConnectsPortToElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcPort *IfcRelConnectsPortToElement::getRelatingPort() {
    if (Step::BaseObject::inited()) {
        return m_relatingPort.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsPortToElement::setRelatingPort(const Step::RefPtr< IfcPort > &value) {
    m_relatingPort = value;
    m_relatingPort->m_containedIn = this;
}

IfcElement *IfcRelConnectsPortToElement::getRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsPortToElement::setRelatedElement(const Step::RefPtr< IfcElement > &value) {
    m_relatedElement = value;
    m_relatedElement->m_hasPorts.insert(this);
}

void IfcRelConnectsPortToElement::release() {
    IfcRelConnects::release();
    m_relatingPort.release();
    m_relatedElement.release();
}

bool IfcRelConnectsPortToElement::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingPort = NULL;
    }
    else {
        m_relatingPort = static_cast< IfcPort * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
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

void IfcRelConnectsPortToElement::copy(const IfcRelConnectsPortToElement &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingPort(copyop(obj.m_relatingPort.get()));
    setRelatedElement(copyop(obj.m_relatedElement.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsPortToElement::s_type("IfcRelConnectsPortToElement");
