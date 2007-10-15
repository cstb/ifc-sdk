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

#include "ifc2x3/IfcDocumentSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDocumentInformation.h"
#include "ifc2x3/IfcDocumentReference.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDocumentSelect::IfcDocumentSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcDocumentSelect::IfcDocumentSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcDocumentSelect::~IfcDocumentSelect() {
    deleteUnion();
}

bool IfcDocumentSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDocumentSelect(this);
}

bool IfcDocumentSelect::init() {
    return false;
}

const std::string &IfcDocumentSelect::type() {
    return IfcDocumentSelect::s_type.getName();
}

Step::ClassType IfcDocumentSelect::getClassType() {
    return IfcDocumentSelect::s_type;
}

Step::ClassType IfcDocumentSelect::getType() const {
    return IfcDocumentSelect::s_type;
}

bool IfcDocumentSelect::isOfType(Step::ClassType t) {
    return IfcDocumentSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcDocumentSelect::copy(const IfcDocumentSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCDOCUMENTREFERENCE:
        setIfcDocumentReference(copyop(obj.m_IfcDocumentSelect_union.m_IfcDocumentReference));
        break;
    case IFCDOCUMENTINFORMATION:
        setIfcDocumentInformation(copyop(obj.m_IfcDocumentSelect_union.m_IfcDocumentInformation));
        break;
        }
}

char *IfcDocumentSelect::currentTypeName() {
    switch(m_type) {
    case IFCDOCUMENTREFERENCE:
        return "IfcDocumentReference";
        break;
    case IFCDOCUMENTINFORMATION:
        return "IfcDocumentInformation";
        break;
    default:
        return "UNSET";
    }
}

IfcDocumentSelect::IfcDocumentSelect_select IfcDocumentSelect::currentType() {
    return m_type;
}

void IfcDocumentSelect::deleteUnion() {
    switch(m_type) {
    case IFCDOCUMENTREFERENCE:
        m_IfcDocumentSelect_union.m_IfcDocumentReference->unref();
        break;
    case IFCDOCUMENTINFORMATION:
        m_IfcDocumentSelect_union.m_IfcDocumentInformation->unref();
        break;
        }
    m_type = UNSET;
}

IfcDocumentReference *IfcDocumentSelect::getIfcDocumentReference() {
    return m_IfcDocumentSelect_union.m_IfcDocumentReference;
}

void IfcDocumentSelect::setIfcDocumentReference(IfcDocumentReference *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDocumentSelect_union.m_IfcDocumentReference = value;
    if (value) {
        value->ref();
        m_type = IFCDOCUMENTREFERENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDOCUMENTREFERENCE;
}

IfcDocumentInformation *IfcDocumentSelect::getIfcDocumentInformation() {
    return m_IfcDocumentSelect_union.m_IfcDocumentInformation;
}

void IfcDocumentSelect::setIfcDocumentInformation(IfcDocumentInformation *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDocumentSelect_union.m_IfcDocumentInformation = value;
    if (value) {
        value->ref();
        m_type = IFCDOCUMENTINFORMATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDOCUMENTINFORMATION;
}

void IfcDocumentSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcDocumentReference::getClassType())) {
        setIfcDocumentReference(static_cast< IfcDocumentReference* > (v));
    }
    else if (v->isOfType(IfcDocumentInformation::getClassType())) {
        setIfcDocumentInformation(static_cast< IfcDocumentInformation* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcDocumentSelect::s_type("IfcDocumentSelect");
