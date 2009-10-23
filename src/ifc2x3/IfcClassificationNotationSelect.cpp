#include "ifc2x3/IfcClassificationNotationSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClassificationNotation.h"
#include "ifc2x3/IfcClassificationReference.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

using namespace ifc2x3;

IfcClassificationNotationSelect::IfcClassificationNotationSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcClassificationNotationSelect::IfcClassificationNotationSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcClassificationNotationSelect::~IfcClassificationNotationSelect() {
    deleteUnion();
}

bool IfcClassificationNotationSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcClassificationNotationSelect(this);
}

bool IfcClassificationNotationSelect::init() {
    return false;
}

const std::string &IfcClassificationNotationSelect::type() const {
    return IfcClassificationNotationSelect::s_type.getName();
}

const Step::ClassType &IfcClassificationNotationSelect::getClassType() {
    return IfcClassificationNotationSelect::s_type;
}

const Step::ClassType &IfcClassificationNotationSelect::getType() const {
    return IfcClassificationNotationSelect::s_type;
}

bool IfcClassificationNotationSelect::isOfType(const Step::ClassType &t) const {
    return IfcClassificationNotationSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcClassificationNotationSelect::copy(const IfcClassificationNotationSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCLASSIFICATIONNOTATION:
        setIfcClassificationNotation((IfcClassificationNotation *) (copyop(obj.m_IfcClassificationNotationSelect_union.m_IfcClassificationNotation)));
        break;
    case IFCCLASSIFICATIONREFERENCE:
        setIfcClassificationReference((IfcClassificationReference *) (copyop(obj.m_IfcClassificationNotationSelect_union.m_IfcClassificationReference)));
        break;
        }
}

std::string IfcClassificationNotationSelect::currentTypeName() const {
    switch(m_type) {
    case IFCCLASSIFICATIONNOTATION:
        return "IfcClassificationNotation";
        break;
    case IFCCLASSIFICATIONREFERENCE:
        return "IfcClassificationReference";
        break;
    default:
        return "UNSET";
    }
}

IfcClassificationNotationSelect::IfcClassificationNotationSelect_select IfcClassificationNotationSelect::currentType() const {
    return m_type;
}

void IfcClassificationNotationSelect::deleteUnion() {
    switch(m_type) {
    case IFCCLASSIFICATIONNOTATION:
        m_IfcClassificationNotationSelect_union.m_IfcClassificationNotation->unref();
        break;
    case IFCCLASSIFICATIONREFERENCE:
        m_IfcClassificationNotationSelect_union.m_IfcClassificationReference->unref();
        break;
        }
    m_type = UNSET;
}

IfcClassificationNotation *IfcClassificationNotationSelect::getIfcClassificationNotation() const {
    if (m_type == IFCCLASSIFICATIONNOTATION) {
        return m_IfcClassificationNotationSelect_union.m_IfcClassificationNotation;
    }
    else {
        return NULL;
    }
}

void IfcClassificationNotationSelect::setIfcClassificationNotation(IfcClassificationNotation *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcClassificationNotationSelect_union.m_IfcClassificationNotation = value;
    if (value) {
        value->ref();
        m_type = IFCCLASSIFICATIONNOTATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCLASSIFICATIONNOTATION;
}

IfcClassificationReference *IfcClassificationNotationSelect::getIfcClassificationReference() const {
    if (m_type == IFCCLASSIFICATIONREFERENCE) {
        return m_IfcClassificationNotationSelect_union.m_IfcClassificationReference;
    }
    else {
        return NULL;
    }
}

void IfcClassificationNotationSelect::setIfcClassificationReference(IfcClassificationReference *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcClassificationNotationSelect_union.m_IfcClassificationReference = value;
    if (value) {
        value->ref();
        m_type = IFCCLASSIFICATIONREFERENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCLASSIFICATIONREFERENCE;
}

void IfcClassificationNotationSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcClassificationNotation::getClassType())) {
        setIfcClassificationNotation(static_cast< IfcClassificationNotation* > (v));
    }
    else if (v && v->isOfType(IfcClassificationReference::getClassType())) {
        setIfcClassificationReference(static_cast< IfcClassificationReference* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationNotationSelect::s_type("IfcClassificationNotationSelect");
