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

#include "ifc2x3/IfcLayeredItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentation.h"
#include "ifc2x3/IfcRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcLayeredItem::IfcLayeredItem() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcLayeredItem::IfcLayeredItem(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcLayeredItem::~IfcLayeredItem() {
    deleteUnion();
}

bool IfcLayeredItem::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLayeredItem(this);
}

bool IfcLayeredItem::init() {
    return false;
}

const std::string &IfcLayeredItem::type() {
    return IfcLayeredItem::s_type.getName();
}

Step::ClassType IfcLayeredItem::getClassType() {
    return IfcLayeredItem::s_type;
}

Step::ClassType IfcLayeredItem::getType() const {
    return IfcLayeredItem::s_type;
}

bool IfcLayeredItem::isOfType(Step::ClassType t) {
    return IfcLayeredItem::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcLayeredItem::copy(const IfcLayeredItem &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCREPRESENTATIONITEM:
        setIfcRepresentationItem(copyop(obj.m_IfcLayeredItem_union.m_IfcRepresentationItem));
        break;
    case IFCREPRESENTATION:
        setIfcRepresentation(copyop(obj.m_IfcLayeredItem_union.m_IfcRepresentation));
        break;
        }
}

char *IfcLayeredItem::currentTypeName() {
    switch(m_type) {
    case IFCREPRESENTATIONITEM:
        return "IfcRepresentationItem";
        break;
    case IFCREPRESENTATION:
        return "IfcRepresentation";
        break;
    default:
        return "UNSET";
    }
}

IfcLayeredItem::IfcLayeredItem_select IfcLayeredItem::currentType() {
    return m_type;
}

void IfcLayeredItem::deleteUnion() {
    switch(m_type) {
    case IFCREPRESENTATIONITEM:
        m_IfcLayeredItem_union.m_IfcRepresentationItem->unref();
        break;
    case IFCREPRESENTATION:
        m_IfcLayeredItem_union.m_IfcRepresentation->unref();
        break;
        }
    m_type = UNSET;
}

IfcRepresentationItem *IfcLayeredItem::getIfcRepresentationItem() {
    return m_IfcLayeredItem_union.m_IfcRepresentationItem;
}

void IfcLayeredItem::setIfcRepresentationItem(IfcRepresentationItem *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcLayeredItem_union.m_IfcRepresentationItem = value;
    if (value) {
        value->ref();
        m_type = IFCREPRESENTATIONITEM;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCREPRESENTATIONITEM;
}

IfcRepresentation *IfcLayeredItem::getIfcRepresentation() {
    return m_IfcLayeredItem_union.m_IfcRepresentation;
}

void IfcLayeredItem::setIfcRepresentation(IfcRepresentation *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcLayeredItem_union.m_IfcRepresentation = value;
    if (value) {
        value->ref();
        m_type = IFCREPRESENTATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCREPRESENTATION;
}

void IfcLayeredItem::set(Step::BaseObject *v) {
    if (v->isOfType(IfcRepresentationItem::getClassType())) {
        setIfcRepresentationItem(static_cast< IfcRepresentationItem* > (v));
    }
    else if (v->isOfType(IfcRepresentation::getClassType())) {
        setIfcRepresentation(static_cast< IfcRepresentation* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcLayeredItem::s_type("IfcLayeredItem");
