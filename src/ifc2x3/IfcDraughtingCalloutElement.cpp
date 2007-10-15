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

#include "ifc2x3/IfcDraughtingCalloutElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationCurveOccurrence.h"
#include "ifc2x3/IfcAnnotationSymbolOccurrence.h"
#include "ifc2x3/IfcAnnotationTextOccurrence.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDraughtingCalloutElement::IfcDraughtingCalloutElement() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcDraughtingCalloutElement::IfcDraughtingCalloutElement(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcDraughtingCalloutElement::~IfcDraughtingCalloutElement() {
    deleteUnion();
}

bool IfcDraughtingCalloutElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDraughtingCalloutElement(this);
}

bool IfcDraughtingCalloutElement::init() {
    return false;
}

const std::string &IfcDraughtingCalloutElement::type() {
    return IfcDraughtingCalloutElement::s_type.getName();
}

Step::ClassType IfcDraughtingCalloutElement::getClassType() {
    return IfcDraughtingCalloutElement::s_type;
}

Step::ClassType IfcDraughtingCalloutElement::getType() const {
    return IfcDraughtingCalloutElement::s_type;
}

bool IfcDraughtingCalloutElement::isOfType(Step::ClassType t) {
    return IfcDraughtingCalloutElement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcDraughtingCalloutElement::copy(const IfcDraughtingCalloutElement &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCANNOTATIONCURVEOCCURRENCE:
        setIfcAnnotationCurveOccurrence(copyop(obj.m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence));
        break;
    case IFCANNOTATIONTEXTOCCURRENCE:
        setIfcAnnotationTextOccurrence(copyop(obj.m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence));
        break;
    case IFCANNOTATIONSYMBOLOCCURRENCE:
        setIfcAnnotationSymbolOccurrence(copyop(obj.m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence));
        break;
        }
}

char *IfcDraughtingCalloutElement::currentTypeName() {
    switch(m_type) {
    case IFCANNOTATIONCURVEOCCURRENCE:
        return "IfcAnnotationCurveOccurrence";
        break;
    case IFCANNOTATIONTEXTOCCURRENCE:
        return "IfcAnnotationTextOccurrence";
        break;
    case IFCANNOTATIONSYMBOLOCCURRENCE:
        return "IfcAnnotationSymbolOccurrence";
        break;
    default:
        return "UNSET";
    }
}

IfcDraughtingCalloutElement::IfcDraughtingCalloutElement_select IfcDraughtingCalloutElement::currentType() {
    return m_type;
}

void IfcDraughtingCalloutElement::deleteUnion() {
    switch(m_type) {
    case IFCANNOTATIONCURVEOCCURRENCE:
        m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence->unref();
        break;
    case IFCANNOTATIONTEXTOCCURRENCE:
        m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence->unref();
        break;
    case IFCANNOTATIONSYMBOLOCCURRENCE:
        m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence->unref();
        break;
        }
    m_type = UNSET;
}

IfcAnnotationCurveOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationCurveOccurrence() {
    return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence;
}

void IfcDraughtingCalloutElement::setIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence = value;
    if (value) {
        value->ref();
        m_type = IFCANNOTATIONCURVEOCCURRENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCANNOTATIONCURVEOCCURRENCE;
}

IfcAnnotationTextOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationTextOccurrence() {
    return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence;
}

void IfcDraughtingCalloutElement::setIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence = value;
    if (value) {
        value->ref();
        m_type = IFCANNOTATIONTEXTOCCURRENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCANNOTATIONTEXTOCCURRENCE;
}

IfcAnnotationSymbolOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationSymbolOccurrence() {
    return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence;
}

void IfcDraughtingCalloutElement::setIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence = value;
    if (value) {
        value->ref();
        m_type = IFCANNOTATIONSYMBOLOCCURRENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCANNOTATIONSYMBOLOCCURRENCE;
}

void IfcDraughtingCalloutElement::set(Step::BaseObject *v) {
    if (v->isOfType(IfcAnnotationCurveOccurrence::getClassType())) {
        setIfcAnnotationCurveOccurrence(static_cast< IfcAnnotationCurveOccurrence* > (v));
    }
    else if (v->isOfType(IfcAnnotationTextOccurrence::getClassType())) {
        setIfcAnnotationTextOccurrence(static_cast< IfcAnnotationTextOccurrence* > (v));
    }
    else if (v->isOfType(IfcAnnotationSymbolOccurrence::getClassType())) {
        setIfcAnnotationSymbolOccurrence(static_cast< IfcAnnotationSymbolOccurrence* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingCalloutElement::s_type("IfcDraughtingCalloutElement");
