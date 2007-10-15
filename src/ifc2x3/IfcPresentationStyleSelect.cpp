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

#include "ifc2x3/IfcPresentationStyleSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurveStyle.h"
#include "ifc2x3/IfcFillAreaStyle.h"
#include "ifc2x3/IfcSurfaceStyle.h"
#include "ifc2x3/IfcSymbolStyle.h"
#include "ifc2x3/IfcTextStyle.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPresentationStyleSelect::IfcPresentationStyleSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcPresentationStyleSelect::IfcPresentationStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcPresentationStyleSelect::~IfcPresentationStyleSelect() {
    deleteUnion();
}

bool IfcPresentationStyleSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPresentationStyleSelect(this);
}

bool IfcPresentationStyleSelect::init() {
    return false;
}

const std::string &IfcPresentationStyleSelect::type() {
    return IfcPresentationStyleSelect::s_type.getName();
}

Step::ClassType IfcPresentationStyleSelect::getClassType() {
    return IfcPresentationStyleSelect::s_type;
}

Step::ClassType IfcPresentationStyleSelect::getType() const {
    return IfcPresentationStyleSelect::s_type;
}

bool IfcPresentationStyleSelect::isOfType(Step::ClassType t) {
    return IfcPresentationStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcPresentationStyleSelect::copy(const IfcPresentationStyleSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCNULLSTYLE:
        setIfcNullStyle(obj.m_IfcPresentationStyleSelect_union.m_IfcNullStyle);
        break;
    case IFCCURVESTYLE:
        setIfcCurveStyle(copyop(obj.m_IfcPresentationStyleSelect_union.m_IfcCurveStyle));
        break;
    case IFCSYMBOLSTYLE:
        setIfcSymbolStyle(copyop(obj.m_IfcPresentationStyleSelect_union.m_IfcSymbolStyle));
        break;
    case IFCFILLAREASTYLE:
        setIfcFillAreaStyle(copyop(obj.m_IfcPresentationStyleSelect_union.m_IfcFillAreaStyle));
        break;
    case IFCTEXTSTYLE:
        setIfcTextStyle(copyop(obj.m_IfcPresentationStyleSelect_union.m_IfcTextStyle));
        break;
    case IFCSURFACESTYLE:
        setIfcSurfaceStyle(copyop(obj.m_IfcPresentationStyleSelect_union.m_IfcSurfaceStyle));
        break;
        }
}

char *IfcPresentationStyleSelect::currentTypeName() {
    switch(m_type) {
    case IFCNULLSTYLE:
        return "IfcNullStyle";
        break;
    case IFCCURVESTYLE:
        return "IfcCurveStyle";
        break;
    case IFCSYMBOLSTYLE:
        return "IfcSymbolStyle";
        break;
    case IFCFILLAREASTYLE:
        return "IfcFillAreaStyle";
        break;
    case IFCTEXTSTYLE:
        return "IfcTextStyle";
        break;
    case IFCSURFACESTYLE:
        return "IfcSurfaceStyle";
        break;
    default:
        return "UNSET";
    }
}

IfcPresentationStyleSelect::IfcPresentationStyleSelect_select IfcPresentationStyleSelect::currentType() {
    return m_type;
}

void IfcPresentationStyleSelect::deleteUnion() {
    switch(m_type) {
    case IFCCURVESTYLE:
        m_IfcPresentationStyleSelect_union.m_IfcCurveStyle->unref();
        break;
    case IFCSYMBOLSTYLE:
        m_IfcPresentationStyleSelect_union.m_IfcSymbolStyle->unref();
        break;
    case IFCFILLAREASTYLE:
        m_IfcPresentationStyleSelect_union.m_IfcFillAreaStyle->unref();
        break;
    case IFCTEXTSTYLE:
        m_IfcPresentationStyleSelect_union.m_IfcTextStyle->unref();
        break;
    case IFCSURFACESTYLE:
        m_IfcPresentationStyleSelect_union.m_IfcSurfaceStyle->unref();
        break;
        }
    m_type = UNSET;
}

IfcNullStyle IfcPresentationStyleSelect::getIfcNullStyle() {
    return m_IfcPresentationStyleSelect_union.m_IfcNullStyle;
}

void IfcPresentationStyleSelect::setIfcNullStyle(IfcNullStyle value) {
    deleteUnion();
    m_IfcPresentationStyleSelect_union.m_IfcNullStyle = value;
    m_type = IFCNULLSTYLE;
}

IfcCurveStyle *IfcPresentationStyleSelect::getIfcCurveStyle() {
    return m_IfcPresentationStyleSelect_union.m_IfcCurveStyle;
}

void IfcPresentationStyleSelect::setIfcCurveStyle(IfcCurveStyle *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcPresentationStyleSelect_union.m_IfcCurveStyle = value;
    if (value) {
        value->ref();
        m_type = IFCCURVESTYLE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCURVESTYLE;
}

IfcSymbolStyle *IfcPresentationStyleSelect::getIfcSymbolStyle() {
    return m_IfcPresentationStyleSelect_union.m_IfcSymbolStyle;
}

void IfcPresentationStyleSelect::setIfcSymbolStyle(IfcSymbolStyle *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcPresentationStyleSelect_union.m_IfcSymbolStyle = value;
    if (value) {
        value->ref();
        m_type = IFCSYMBOLSTYLE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCSYMBOLSTYLE;
}

IfcFillAreaStyle *IfcPresentationStyleSelect::getIfcFillAreaStyle() {
    return m_IfcPresentationStyleSelect_union.m_IfcFillAreaStyle;
}

void IfcPresentationStyleSelect::setIfcFillAreaStyle(IfcFillAreaStyle *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcPresentationStyleSelect_union.m_IfcFillAreaStyle = value;
    if (value) {
        value->ref();
        m_type = IFCFILLAREASTYLE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCFILLAREASTYLE;
}

IfcTextStyle *IfcPresentationStyleSelect::getIfcTextStyle() {
    return m_IfcPresentationStyleSelect_union.m_IfcTextStyle;
}

void IfcPresentationStyleSelect::setIfcTextStyle(IfcTextStyle *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcPresentationStyleSelect_union.m_IfcTextStyle = value;
    if (value) {
        value->ref();
        m_type = IFCTEXTSTYLE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCTEXTSTYLE;
}

IfcSurfaceStyle *IfcPresentationStyleSelect::getIfcSurfaceStyle() {
    return m_IfcPresentationStyleSelect_union.m_IfcSurfaceStyle;
}

void IfcPresentationStyleSelect::setIfcSurfaceStyle(IfcSurfaceStyle *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcPresentationStyleSelect_union.m_IfcSurfaceStyle = value;
    if (value) {
        value->ref();
        m_type = IFCSURFACESTYLE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCSURFACESTYLE;
}

void IfcPresentationStyleSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcCurveStyle::getClassType())) {
        setIfcCurveStyle(static_cast< IfcCurveStyle* > (v));
    }
    else if (v->isOfType(IfcSymbolStyle::getClassType())) {
        setIfcSymbolStyle(static_cast< IfcSymbolStyle* > (v));
    }
    else if (v->isOfType(IfcFillAreaStyle::getClassType())) {
        setIfcFillAreaStyle(static_cast< IfcFillAreaStyle* > (v));
    }
    else if (v->isOfType(IfcTextStyle::getClassType())) {
        setIfcTextStyle(static_cast< IfcTextStyle* > (v));
    }
    else if (v->isOfType(IfcSurfaceStyle::getClassType())) {
        setIfcSurfaceStyle(static_cast< IfcSurfaceStyle* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcPresentationStyleSelect::s_type("IfcPresentationStyleSelect");
