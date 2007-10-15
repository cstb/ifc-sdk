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

#include "ifc2x3/IfcRelFillsElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcOpeningElement.h"
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

IfcRelFillsElement::IfcRelFillsElement(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingOpeningElement = NULL;
    m_relatedBuildingElement = NULL;
}

IfcRelFillsElement::~IfcRelFillsElement() {
}

bool IfcRelFillsElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelFillsElement(this);
}

const std::string &IfcRelFillsElement::type() {
    return IfcRelFillsElement::s_type.getName();
}

Step::ClassType IfcRelFillsElement::getClassType() {
    return IfcRelFillsElement::s_type;
}

Step::ClassType IfcRelFillsElement::getType() const {
    return IfcRelFillsElement::s_type;
}

bool IfcRelFillsElement::isOfType(Step::ClassType t) {
    return IfcRelFillsElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcOpeningElement *IfcRelFillsElement::getRelatingOpeningElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingOpeningElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelFillsElement::setRelatingOpeningElement(const Step::RefPtr< IfcOpeningElement > &value) {
    m_relatingOpeningElement = value;
    m_relatingOpeningElement->m_hasFillings.insert(this);
}

IfcElement *IfcRelFillsElement::getRelatedBuildingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedBuildingElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelFillsElement::setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value) {
    m_relatedBuildingElement = value;
    m_relatedBuildingElement->m_fillsVoids.insert(this);
}

void IfcRelFillsElement::release() {
    IfcRelConnects::release();
    m_relatingOpeningElement.release();
    m_relatedBuildingElement.release();
}

bool IfcRelFillsElement::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingOpeningElement = NULL;
    }
    else {
        m_relatingOpeningElement = static_cast< IfcOpeningElement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedBuildingElement = NULL;
    }
    else {
        m_relatedBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelFillsElement::copy(const IfcRelFillsElement &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingOpeningElement(copyop(obj.m_relatingOpeningElement.get()));
    setRelatedBuildingElement(copyop(obj.m_relatedBuildingElement.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelFillsElement::s_type("IfcRelFillsElement");
