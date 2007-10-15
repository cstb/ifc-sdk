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

#include "ifc2x3/IfcRelProjectsElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcFeatureElementAddition.h"
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

IfcRelProjectsElement::IfcRelProjectsElement(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingElement = NULL;
    m_relatedFeatureElement = NULL;
}

IfcRelProjectsElement::~IfcRelProjectsElement() {
}

bool IfcRelProjectsElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelProjectsElement(this);
}

const std::string &IfcRelProjectsElement::type() {
    return IfcRelProjectsElement::s_type.getName();
}

Step::ClassType IfcRelProjectsElement::getClassType() {
    return IfcRelProjectsElement::s_type;
}

Step::ClassType IfcRelProjectsElement::getType() const {
    return IfcRelProjectsElement::s_type;
}

bool IfcRelProjectsElement::isOfType(Step::ClassType t) {
    return IfcRelProjectsElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelProjectsElement::getRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelProjectsElement::setRelatingElement(const Step::RefPtr< IfcElement > &value) {
    m_relatingElement = value;
    m_relatingElement->m_hasProjections.insert(this);
}

IfcFeatureElementAddition *IfcRelProjectsElement::getRelatedFeatureElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedFeatureElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelProjectsElement::setRelatedFeatureElement(const Step::RefPtr< IfcFeatureElementAddition > &value) {
    m_relatedFeatureElement = value;
    m_relatedFeatureElement->m_projectsElements = this;
}

void IfcRelProjectsElement::release() {
    IfcRelConnects::release();
    m_relatingElement.release();
    m_relatedFeatureElement.release();
}

bool IfcRelProjectsElement::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
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
        m_relatedFeatureElement = NULL;
    }
    else {
        m_relatedFeatureElement = static_cast< IfcFeatureElementAddition * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelProjectsElement::copy(const IfcRelProjectsElement &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingElement(copyop(obj.m_relatingElement.get()));
    setRelatedFeatureElement(copyop(obj.m_relatedFeatureElement.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelProjectsElement::s_type("IfcRelProjectsElement");
