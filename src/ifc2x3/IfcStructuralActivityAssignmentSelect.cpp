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

#include "ifc2x3/IfcStructuralActivityAssignmentSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcStructuralItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralActivityAssignmentSelect::IfcStructuralActivityAssignmentSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcStructuralActivityAssignmentSelect::IfcStructuralActivityAssignmentSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcStructuralActivityAssignmentSelect::~IfcStructuralActivityAssignmentSelect() {
    deleteUnion();
}

bool IfcStructuralActivityAssignmentSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralActivityAssignmentSelect(this);
}

bool IfcStructuralActivityAssignmentSelect::init() {
    return false;
}

const std::string &IfcStructuralActivityAssignmentSelect::type() {
    return IfcStructuralActivityAssignmentSelect::s_type.getName();
}

Step::ClassType IfcStructuralActivityAssignmentSelect::getClassType() {
    return IfcStructuralActivityAssignmentSelect::s_type;
}

Step::ClassType IfcStructuralActivityAssignmentSelect::getType() const {
    return IfcStructuralActivityAssignmentSelect::s_type;
}

bool IfcStructuralActivityAssignmentSelect::isOfType(Step::ClassType t) {
    return IfcStructuralActivityAssignmentSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcStructuralActivityAssignmentSelect::copy(const IfcStructuralActivityAssignmentSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCSTRUCTURALITEM:
        setIfcStructuralItem(copyop(obj.m_IfcStructuralActivityAssignmentSelect_union.m_IfcStructuralItem));
        break;
    case IFCELEMENT:
        setIfcElement(copyop(obj.m_IfcStructuralActivityAssignmentSelect_union.m_IfcElement));
        break;
        }
}

char *IfcStructuralActivityAssignmentSelect::currentTypeName() {
    switch(m_type) {
    case IFCSTRUCTURALITEM:
        return "IfcStructuralItem";
        break;
    case IFCELEMENT:
        return "IfcElement";
        break;
    default:
        return "UNSET";
    }
}

IfcStructuralActivityAssignmentSelect::IfcStructuralActivityAssignmentSelect_select IfcStructuralActivityAssignmentSelect::currentType() {
    return m_type;
}

void IfcStructuralActivityAssignmentSelect::deleteUnion() {
    switch(m_type) {
    case IFCSTRUCTURALITEM:
        m_IfcStructuralActivityAssignmentSelect_union.m_IfcStructuralItem->unref();
        break;
    case IFCELEMENT:
        m_IfcStructuralActivityAssignmentSelect_union.m_IfcElement->unref();
        break;
        }
    m_type = UNSET;
}

IfcStructuralItem *IfcStructuralActivityAssignmentSelect::getIfcStructuralItem() {
    return m_IfcStructuralActivityAssignmentSelect_union.m_IfcStructuralItem;
}

void IfcStructuralActivityAssignmentSelect::setIfcStructuralItem(IfcStructuralItem *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcStructuralActivityAssignmentSelect_union.m_IfcStructuralItem = value;
    if (value) {
        value->ref();
        m_type = IFCSTRUCTURALITEM;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCSTRUCTURALITEM;
}

IfcElement *IfcStructuralActivityAssignmentSelect::getIfcElement() {
    return m_IfcStructuralActivityAssignmentSelect_union.m_IfcElement;
}

void IfcStructuralActivityAssignmentSelect::setIfcElement(IfcElement *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcStructuralActivityAssignmentSelect_union.m_IfcElement = value;
    if (value) {
        value->ref();
        m_type = IFCELEMENT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCELEMENT;
}

void IfcStructuralActivityAssignmentSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcStructuralItem::getClassType())) {
        setIfcStructuralItem(static_cast< IfcStructuralItem* > (v));
    }
    else if (v->isOfType(IfcElement::getClassType())) {
        setIfcElement(static_cast< IfcElement* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralActivityAssignmentSelect::s_type("IfcStructuralActivityAssignmentSelect");
