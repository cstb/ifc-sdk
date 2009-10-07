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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcTextFontSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcExternallyDefinedTextFont.h"
#include "ifc2x3/IfcPreDefinedTextFont.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

using namespace ifc2x3;

IfcTextFontSelect::IfcTextFontSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcTextFontSelect::IfcTextFontSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcTextFontSelect::~IfcTextFontSelect() {
    deleteUnion();
}

bool IfcTextFontSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextFontSelect(this);
}

bool IfcTextFontSelect::init() {
    return false;
}

const std::string &IfcTextFontSelect::type() const {
    return IfcTextFontSelect::s_type.getName();
}

const Step::ClassType &IfcTextFontSelect::getClassType() {
    return IfcTextFontSelect::s_type;
}

const Step::ClassType &IfcTextFontSelect::getType() const {
    return IfcTextFontSelect::s_type;
}

bool IfcTextFontSelect::isOfType(const Step::ClassType &t) const {
    return IfcTextFontSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcTextFontSelect::copy(const IfcTextFontSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCPREDEFINEDTEXTFONT:
        setIfcPreDefinedTextFont((IfcPreDefinedTextFont *) (copyop(obj.m_IfcTextFontSelect_union.m_IfcPreDefinedTextFont)));
        break;
    case IFCEXTERNALLYDEFINEDTEXTFONT:
        setIfcExternallyDefinedTextFont((IfcExternallyDefinedTextFont *) (copyop(obj.m_IfcTextFontSelect_union.m_IfcExternallyDefinedTextFont)));
        break;
        }
}

std::string IfcTextFontSelect::currentTypeName() const {
    switch(m_type) {
    case IFCPREDEFINEDTEXTFONT:
        return "IfcPreDefinedTextFont";
        break;
    case IFCEXTERNALLYDEFINEDTEXTFONT:
        return "IfcExternallyDefinedTextFont";
        break;
    default:
        return "UNSET";
    }
}

IfcTextFontSelect::IfcTextFontSelect_select IfcTextFontSelect::currentType() const {
    return m_type;
}

void IfcTextFontSelect::deleteUnion() {
    switch(m_type) {
    case IFCPREDEFINEDTEXTFONT:
        m_IfcTextFontSelect_union.m_IfcPreDefinedTextFont->unref();
        break;
    case IFCEXTERNALLYDEFINEDTEXTFONT:
        m_IfcTextFontSelect_union.m_IfcExternallyDefinedTextFont->unref();
        break;
        }
    m_type = UNSET;
}

IfcPreDefinedTextFont *IfcTextFontSelect::getIfcPreDefinedTextFont() const {
    if (m_type == IFCPREDEFINEDTEXTFONT) {
        return m_IfcTextFontSelect_union.m_IfcPreDefinedTextFont;
    }
    else {
        return NULL;
    }
}

void IfcTextFontSelect::setIfcPreDefinedTextFont(IfcPreDefinedTextFont *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcTextFontSelect_union.m_IfcPreDefinedTextFont = value;
    if (value) {
        value->ref();
        m_type = IFCPREDEFINEDTEXTFONT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPREDEFINEDTEXTFONT;
}

IfcExternallyDefinedTextFont *IfcTextFontSelect::getIfcExternallyDefinedTextFont() const {
    if (m_type == IFCEXTERNALLYDEFINEDTEXTFONT) {
        return m_IfcTextFontSelect_union.m_IfcExternallyDefinedTextFont;
    }
    else {
        return NULL;
    }
}

void IfcTextFontSelect::setIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcTextFontSelect_union.m_IfcExternallyDefinedTextFont = value;
    if (value) {
        value->ref();
        m_type = IFCEXTERNALLYDEFINEDTEXTFONT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCEXTERNALLYDEFINEDTEXTFONT;
}

void IfcTextFontSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcPreDefinedTextFont::getClassType())) {
        setIfcPreDefinedTextFont(static_cast< IfcPreDefinedTextFont* > (v));
    }
    else if (v && v->isOfType(IfcExternallyDefinedTextFont::getClassType())) {
        setIfcExternallyDefinedTextFont(static_cast< IfcExternallyDefinedTextFont* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcTextFontSelect::s_type("IfcTextFontSelect");
