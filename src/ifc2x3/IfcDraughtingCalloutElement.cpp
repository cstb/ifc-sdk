/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

bool IfcDraughtingCalloutElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDraughtingCalloutElement(this);
}

bool IfcDraughtingCalloutElement::init() {
    return false;
}

const std::string &IfcDraughtingCalloutElement::type() const {
    return IfcDraughtingCalloutElement::s_type.getName();
}

const Step::ClassType &IfcDraughtingCalloutElement::getClassType() {
    return IfcDraughtingCalloutElement::s_type;
}

const Step::ClassType &IfcDraughtingCalloutElement::getType() const {
    return IfcDraughtingCalloutElement::s_type;
}

bool IfcDraughtingCalloutElement::isOfType(const Step::ClassType &t) const {
    return IfcDraughtingCalloutElement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcDraughtingCalloutElement::copy(const IfcDraughtingCalloutElement &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCANNOTATIONCURVEOCCURRENCE:
        setIfcAnnotationCurveOccurrence((IfcAnnotationCurveOccurrence *) (copyop(obj.m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence)));
        break;
    case IFCANNOTATIONTEXTOCCURRENCE:
        setIfcAnnotationTextOccurrence((IfcAnnotationTextOccurrence *) (copyop(obj.m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence)));
        break;
    case IFCANNOTATIONSYMBOLOCCURRENCE:
        setIfcAnnotationSymbolOccurrence((IfcAnnotationSymbolOccurrence *) (copyop(obj.m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence)));
        break;
        }
}

std::string IfcDraughtingCalloutElement::currentTypeName() const {
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

IfcDraughtingCalloutElement::IfcDraughtingCalloutElement_select IfcDraughtingCalloutElement::currentType() const {
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

IfcAnnotationCurveOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationCurveOccurrence() const {
    if (m_type == IFCANNOTATIONCURVEOCCURRENCE) {
        return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence;
    }
    else {
        return NULL;
    }
}

void IfcDraughtingCalloutElement::setIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value) {
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

IfcAnnotationTextOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationTextOccurrence() const {
    if (m_type == IFCANNOTATIONTEXTOCCURRENCE) {
        return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence;
    }
    else {
        return NULL;
    }
}

void IfcDraughtingCalloutElement::setIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value) {
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

IfcAnnotationSymbolOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationSymbolOccurrence() const {
    if (m_type == IFCANNOTATIONSYMBOLOCCURRENCE) {
        return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence;
    }
    else {
        return NULL;
    }
}

void IfcDraughtingCalloutElement::setIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value) {
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
