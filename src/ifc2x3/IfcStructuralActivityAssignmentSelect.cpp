#include "ifc2x3/IfcStructuralActivityAssignmentSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcStructuralItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

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

bool IfcStructuralActivityAssignmentSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralActivityAssignmentSelect(this);
}

bool IfcStructuralActivityAssignmentSelect::init() {
    return false;
}

const std::string &IfcStructuralActivityAssignmentSelect::type() const {
    return IfcStructuralActivityAssignmentSelect::s_type.getName();
}

const Step::ClassType &IfcStructuralActivityAssignmentSelect::getClassType() {
    return IfcStructuralActivityAssignmentSelect::s_type;
}

const Step::ClassType &IfcStructuralActivityAssignmentSelect::getType() const {
    return IfcStructuralActivityAssignmentSelect::s_type;
}

bool IfcStructuralActivityAssignmentSelect::isOfType(const Step::ClassType &t) const {
    return IfcStructuralActivityAssignmentSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcStructuralActivityAssignmentSelect::copy(const IfcStructuralActivityAssignmentSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCSTRUCTURALITEM:
        setIfcStructuralItem((IfcStructuralItem *) (copyop(obj.m_IfcStructuralActivityAssignmentSelect_union.m_IfcStructuralItem)));
        break;
    case IFCELEMENT:
        setIfcElement((IfcElement *) (copyop(obj.m_IfcStructuralActivityAssignmentSelect_union.m_IfcElement)));
        break;
        }
}

std::string IfcStructuralActivityAssignmentSelect::currentTypeName() const {
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

IfcStructuralActivityAssignmentSelect::IfcStructuralActivityAssignmentSelect_select IfcStructuralActivityAssignmentSelect::currentType() const {
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

IfcStructuralItem *IfcStructuralActivityAssignmentSelect::getIfcStructuralItem() const {
    if (m_type == IFCSTRUCTURALITEM) {
        return m_IfcStructuralActivityAssignmentSelect_union.m_IfcStructuralItem;
    }
    else {
        return NULL;
    }
}

void IfcStructuralActivityAssignmentSelect::setIfcStructuralItem(IfcStructuralItem *value) {
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

IfcElement *IfcStructuralActivityAssignmentSelect::getIfcElement() const {
    if (m_type == IFCELEMENT) {
        return m_IfcStructuralActivityAssignmentSelect_union.m_IfcElement;
    }
    else {
        return NULL;
    }
}

void IfcStructuralActivityAssignmentSelect::setIfcElement(IfcElement *value) {
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
    if (v && v->isOfType(IfcStructuralItem::getClassType())) {
        setIfcStructuralItem(static_cast< IfcStructuralItem* > (v));
    }
    else if (v && v->isOfType(IfcElement::getClassType())) {
        setIfcElement(static_cast< IfcElement* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralActivityAssignmentSelect::s_type("IfcStructuralActivityAssignmentSelect");
