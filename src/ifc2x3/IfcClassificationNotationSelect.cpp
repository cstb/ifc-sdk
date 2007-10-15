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

#include "ifc2x3/IfcClassificationNotationSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClassificationNotation.h"
#include "ifc2x3/IfcClassificationReference.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

bool IfcClassificationNotationSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcClassificationNotationSelect(this);
}

bool IfcClassificationNotationSelect::init() {
    return false;
}

const std::string &IfcClassificationNotationSelect::type() {
    return IfcClassificationNotationSelect::s_type.getName();
}

Step::ClassType IfcClassificationNotationSelect::getClassType() {
    return IfcClassificationNotationSelect::s_type;
}

Step::ClassType IfcClassificationNotationSelect::getType() const {
    return IfcClassificationNotationSelect::s_type;
}

bool IfcClassificationNotationSelect::isOfType(Step::ClassType t) {
    return IfcClassificationNotationSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcClassificationNotationSelect::copy(const IfcClassificationNotationSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCLASSIFICATIONNOTATION:
        setIfcClassificationNotation(copyop(obj.m_IfcClassificationNotationSelect_union.m_IfcClassificationNotation));
        break;
    case IFCCLASSIFICATIONREFERENCE:
        setIfcClassificationReference(copyop(obj.m_IfcClassificationNotationSelect_union.m_IfcClassificationReference));
        break;
        }
}

char *IfcClassificationNotationSelect::currentTypeName() {
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

IfcClassificationNotationSelect::IfcClassificationNotationSelect_select IfcClassificationNotationSelect::currentType() {
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

IfcClassificationNotation *IfcClassificationNotationSelect::getIfcClassificationNotation() {
    return m_IfcClassificationNotationSelect_union.m_IfcClassificationNotation;
}

void IfcClassificationNotationSelect::setIfcClassificationNotation(IfcClassificationNotation *value) {
    deleteUnion();
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

IfcClassificationReference *IfcClassificationNotationSelect::getIfcClassificationReference() {
    return m_IfcClassificationNotationSelect_union.m_IfcClassificationReference;
}

void IfcClassificationNotationSelect::setIfcClassificationReference(IfcClassificationReference *value) {
    deleteUnion();
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
    if (v->isOfType(IfcClassificationNotation::getClassType())) {
        setIfcClassificationNotation(static_cast< IfcClassificationNotation* > (v));
    }
    else if (v->isOfType(IfcClassificationReference::getClassType())) {
        setIfcClassificationReference(static_cast< IfcClassificationReference* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationNotationSelect::s_type("IfcClassificationNotationSelect");
