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

#include "ifc2x3/IfcSymbolStyleSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcColourSpecification.h"
#include "ifc2x3/IfcPreDefinedColour.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSymbolStyleSelect::IfcSymbolStyleSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcSymbolStyleSelect::IfcSymbolStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcSymbolStyleSelect::~IfcSymbolStyleSelect() {
    deleteUnion();
}

bool IfcSymbolStyleSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSymbolStyleSelect(this);
}

bool IfcSymbolStyleSelect::init() {
    return false;
}

const std::string &IfcSymbolStyleSelect::type() {
    return IfcSymbolStyleSelect::s_type.getName();
}

Step::ClassType IfcSymbolStyleSelect::getClassType() {
    return IfcSymbolStyleSelect::s_type;
}

Step::ClassType IfcSymbolStyleSelect::getType() const {
    return IfcSymbolStyleSelect::s_type;
}

bool IfcSymbolStyleSelect::isOfType(Step::ClassType t) {
    return IfcSymbolStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcSymbolStyleSelect::copy(const IfcSymbolStyleSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCOLOURSPECIFICATION:
        setIfcColourSpecification(copyop(obj.m_IfcSymbolStyleSelect_union.m_IfcColourSpecification));
        break;
    case IFCPREDEFINEDCOLOUR:
        setIfcPreDefinedColour(copyop(obj.m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour));
        break;
        }
}

char *IfcSymbolStyleSelect::currentTypeName() {
    switch(m_type) {
    case IFCCOLOURSPECIFICATION:
        return "IfcColourSpecification";
        break;
    case IFCPREDEFINEDCOLOUR:
        return "IfcPreDefinedColour";
        break;
    default:
        return "UNSET";
    }
}

IfcSymbolStyleSelect::IfcSymbolStyleSelect_select IfcSymbolStyleSelect::currentType() {
    return m_type;
}

void IfcSymbolStyleSelect::deleteUnion() {
    switch(m_type) {
    case IFCCOLOURSPECIFICATION:
        m_IfcSymbolStyleSelect_union.m_IfcColourSpecification->unref();
        break;
    case IFCPREDEFINEDCOLOUR:
        m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour->unref();
        break;
        }
    m_type = UNSET;
}

IfcColourSpecification *IfcSymbolStyleSelect::getIfcColourSpecification() {
    return m_IfcSymbolStyleSelect_union.m_IfcColourSpecification;
}

void IfcSymbolStyleSelect::setIfcColourSpecification(IfcColourSpecification *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcSymbolStyleSelect_union.m_IfcColourSpecification = value;
    if (value) {
        value->ref();
        m_type = IFCCOLOURSPECIFICATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCOLOURSPECIFICATION;
}

IfcPreDefinedColour *IfcSymbolStyleSelect::getIfcPreDefinedColour() {
    return m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour;
}

void IfcSymbolStyleSelect::setIfcPreDefinedColour(IfcPreDefinedColour *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour = value;
    if (value) {
        value->ref();
        m_type = IFCPREDEFINEDCOLOUR;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPREDEFINEDCOLOUR;
}

void IfcSymbolStyleSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcColourSpecification::getClassType())) {
        setIfcColourSpecification(static_cast< IfcColourSpecification* > (v));
    }
    else if (v->isOfType(IfcPreDefinedColour::getClassType())) {
        setIfcPreDefinedColour(static_cast< IfcPreDefinedColour* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcSymbolStyleSelect::s_type("IfcSymbolStyleSelect");
