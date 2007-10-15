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

#include "ifc2x3/IfcRelVoidsElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcFeatureElementSubtraction.h"
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

IfcRelVoidsElement::IfcRelVoidsElement(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingBuildingElement = NULL;
    m_relatedOpeningElement = NULL;
}

IfcRelVoidsElement::~IfcRelVoidsElement() {
}

bool IfcRelVoidsElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelVoidsElement(this);
}

const std::string &IfcRelVoidsElement::type() {
    return IfcRelVoidsElement::s_type.getName();
}

Step::ClassType IfcRelVoidsElement::getClassType() {
    return IfcRelVoidsElement::s_type;
}

Step::ClassType IfcRelVoidsElement::getType() const {
    return IfcRelVoidsElement::s_type;
}

bool IfcRelVoidsElement::isOfType(Step::ClassType t) {
    return IfcRelVoidsElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelVoidsElement::getRelatingBuildingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingBuildingElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelVoidsElement::setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value) {
    m_relatingBuildingElement = value;
    m_relatingBuildingElement->m_hasOpenings.insert(this);
}

IfcFeatureElementSubtraction *IfcRelVoidsElement::getRelatedOpeningElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedOpeningElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelVoidsElement::setRelatedOpeningElement(const Step::RefPtr< IfcFeatureElementSubtraction > &value) {
    m_relatedOpeningElement = value;
    m_relatedOpeningElement->m_voidsElements = this;
}

void IfcRelVoidsElement::release() {
    IfcRelConnects::release();
    m_relatingBuildingElement.release();
    m_relatedOpeningElement.release();
}

bool IfcRelVoidsElement::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingBuildingElement = NULL;
    }
    else {
        m_relatingBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedOpeningElement = NULL;
    }
    else {
        m_relatedOpeningElement = static_cast< IfcFeatureElementSubtraction * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelVoidsElement::copy(const IfcRelVoidsElement &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingBuildingElement(copyop(obj.m_relatingBuildingElement.get()));
    setRelatedOpeningElement(copyop(obj.m_relatedOpeningElement.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelVoidsElement::s_type("IfcRelVoidsElement");
