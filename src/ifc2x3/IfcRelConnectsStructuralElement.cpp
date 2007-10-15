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

#include "ifc2x3/IfcRelConnectsStructuralElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcStructuralMember.h"
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

IfcRelConnectsStructuralElement::IfcRelConnectsStructuralElement(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingElement = NULL;
    m_relatedStructuralMember = NULL;
}

IfcRelConnectsStructuralElement::~IfcRelConnectsStructuralElement() {
}

bool IfcRelConnectsStructuralElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelConnectsStructuralElement(this);
}

const std::string &IfcRelConnectsStructuralElement::type() {
    return IfcRelConnectsStructuralElement::s_type.getName();
}

Step::ClassType IfcRelConnectsStructuralElement::getClassType() {
    return IfcRelConnectsStructuralElement::s_type;
}

Step::ClassType IfcRelConnectsStructuralElement::getType() const {
    return IfcRelConnectsStructuralElement::s_type;
}

bool IfcRelConnectsStructuralElement::isOfType(Step::ClassType t) {
    return IfcRelConnectsStructuralElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelConnectsStructuralElement::getRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsStructuralElement::setRelatingElement(const Step::RefPtr< IfcElement > &value) {
    m_relatingElement = value;
    m_relatingElement->m_hasStructuralMember.insert(this);
}

IfcStructuralMember *IfcRelConnectsStructuralElement::getRelatedStructuralMember() {
    if (Step::BaseObject::inited()) {
        return m_relatedStructuralMember.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsStructuralElement::setRelatedStructuralMember(const Step::RefPtr< IfcStructuralMember > &value) {
    m_relatedStructuralMember = value;
    m_relatedStructuralMember->m_referencesElement.insert(this);
}

void IfcRelConnectsStructuralElement::release() {
    IfcRelConnects::release();
    m_relatingElement.release();
    m_relatedStructuralMember.release();
}

bool IfcRelConnectsStructuralElement::init() {
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
        m_relatedStructuralMember = NULL;
    }
    else {
        m_relatedStructuralMember = static_cast< IfcStructuralMember * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelConnectsStructuralElement::copy(const IfcRelConnectsStructuralElement &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingElement(copyop(obj.m_relatingElement.get()));
    setRelatedStructuralMember(copyop(obj.m_relatedStructuralMember.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsStructuralElement::s_type("IfcRelConnectsStructuralElement");
