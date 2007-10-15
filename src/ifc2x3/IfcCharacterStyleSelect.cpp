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

#include "ifc2x3/IfcCharacterStyleSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTextStyleForDefinedFont.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCharacterStyleSelect::IfcCharacterStyleSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcCharacterStyleSelect::IfcCharacterStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcCharacterStyleSelect::~IfcCharacterStyleSelect() {
    deleteUnion();
}

bool IfcCharacterStyleSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCharacterStyleSelect(this);
}

bool IfcCharacterStyleSelect::init() {
    return false;
}

const std::string &IfcCharacterStyleSelect::type() {
    return IfcCharacterStyleSelect::s_type.getName();
}

Step::ClassType IfcCharacterStyleSelect::getClassType() {
    return IfcCharacterStyleSelect::s_type;
}

Step::ClassType IfcCharacterStyleSelect::getType() const {
    return IfcCharacterStyleSelect::s_type;
}

bool IfcCharacterStyleSelect::isOfType(Step::ClassType t) {
    return IfcCharacterStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcCharacterStyleSelect::copy(const IfcCharacterStyleSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCTEXTSTYLEFORDEFINEDFONT:
        setIfcTextStyleForDefinedFont(copyop(obj.m_IfcCharacterStyleSelect_union.m_IfcTextStyleForDefinedFont));
        break;
        }
}

char *IfcCharacterStyleSelect::currentTypeName() {
    switch(m_type) {
    case IFCTEXTSTYLEFORDEFINEDFONT:
        return "IfcTextStyleForDefinedFont";
        break;
    default:
        return "UNSET";
    }
}

IfcCharacterStyleSelect::IfcCharacterStyleSelect_select IfcCharacterStyleSelect::currentType() {
    return m_type;
}

void IfcCharacterStyleSelect::deleteUnion() {
    switch(m_type) {
    case IFCTEXTSTYLEFORDEFINEDFONT:
        m_IfcCharacterStyleSelect_union.m_IfcTextStyleForDefinedFont->unref();
        break;
        }
    m_type = UNSET;
}

IfcTextStyleForDefinedFont *IfcCharacterStyleSelect::getIfcTextStyleForDefinedFont() {
    return m_IfcCharacterStyleSelect_union.m_IfcTextStyleForDefinedFont;
}

void IfcCharacterStyleSelect::setIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcCharacterStyleSelect_union.m_IfcTextStyleForDefinedFont = value;
    if (value) {
        value->ref();
        m_type = IFCTEXTSTYLEFORDEFINEDFONT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCTEXTSTYLEFORDEFINEDFONT;
}

void IfcCharacterStyleSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcTextStyleForDefinedFont::getClassType())) {
        setIfcTextStyleForDefinedFont(static_cast< IfcTextStyleForDefinedFont* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcCharacterStyleSelect::s_type("IfcCharacterStyleSelect");
