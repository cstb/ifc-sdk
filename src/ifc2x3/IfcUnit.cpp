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

#include "ifc2x3/IfcUnit.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDerivedUnit.h"
#include "ifc2x3/IfcMonetaryUnit.h"
#include "ifc2x3/IfcNamedUnit.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcUnit::IfcUnit() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcUnit::IfcUnit(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcUnit::~IfcUnit() {
    deleteUnion();
}

bool IfcUnit::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcUnit(this);
}

bool IfcUnit::init() {
    return false;
}

const std::string &IfcUnit::type() {
    return IfcUnit::s_type.getName();
}

Step::ClassType IfcUnit::getClassType() {
    return IfcUnit::s_type;
}

Step::ClassType IfcUnit::getType() const {
    return IfcUnit::s_type;
}

bool IfcUnit::isOfType(Step::ClassType t) {
    return IfcUnit::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcUnit::copy(const IfcUnit &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCDERIVEDUNIT:
        setIfcDerivedUnit(copyop(obj.m_IfcUnit_union.m_IfcDerivedUnit));
        break;
    case IFCNAMEDUNIT:
        setIfcNamedUnit(copyop(obj.m_IfcUnit_union.m_IfcNamedUnit));
        break;
    case IFCMONETARYUNIT:
        setIfcMonetaryUnit(copyop(obj.m_IfcUnit_union.m_IfcMonetaryUnit));
        break;
        }
}

char *IfcUnit::currentTypeName() {
    switch(m_type) {
    case IFCDERIVEDUNIT:
        return "IfcDerivedUnit";
        break;
    case IFCNAMEDUNIT:
        return "IfcNamedUnit";
        break;
    case IFCMONETARYUNIT:
        return "IfcMonetaryUnit";
        break;
    default:
        return "UNSET";
    }
}

IfcUnit::IfcUnit_select IfcUnit::currentType() {
    return m_type;
}

void IfcUnit::deleteUnion() {
    switch(m_type) {
    case IFCDERIVEDUNIT:
        m_IfcUnit_union.m_IfcDerivedUnit->unref();
        break;
    case IFCNAMEDUNIT:
        m_IfcUnit_union.m_IfcNamedUnit->unref();
        break;
    case IFCMONETARYUNIT:
        m_IfcUnit_union.m_IfcMonetaryUnit->unref();
        break;
        }
    m_type = UNSET;
}

IfcDerivedUnit *IfcUnit::getIfcDerivedUnit() {
    return m_IfcUnit_union.m_IfcDerivedUnit;
}

void IfcUnit::setIfcDerivedUnit(IfcDerivedUnit *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcUnit_union.m_IfcDerivedUnit = value;
    if (value) {
        value->ref();
        m_type = IFCDERIVEDUNIT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDERIVEDUNIT;
}

IfcNamedUnit *IfcUnit::getIfcNamedUnit() {
    return m_IfcUnit_union.m_IfcNamedUnit;
}

void IfcUnit::setIfcNamedUnit(IfcNamedUnit *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcUnit_union.m_IfcNamedUnit = value;
    if (value) {
        value->ref();
        m_type = IFCNAMEDUNIT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCNAMEDUNIT;
}

IfcMonetaryUnit *IfcUnit::getIfcMonetaryUnit() {
    return m_IfcUnit_union.m_IfcMonetaryUnit;
}

void IfcUnit::setIfcMonetaryUnit(IfcMonetaryUnit *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcUnit_union.m_IfcMonetaryUnit = value;
    if (value) {
        value->ref();
        m_type = IFCMONETARYUNIT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCMONETARYUNIT;
}

void IfcUnit::set(Step::BaseObject *v) {
    if (v->isOfType(IfcDerivedUnit::getClassType())) {
        setIfcDerivedUnit(static_cast< IfcDerivedUnit* > (v));
    }
    else if (v->isOfType(IfcNamedUnit::getClassType())) {
        setIfcNamedUnit(static_cast< IfcNamedUnit* > (v));
    }
    else if (v->isOfType(IfcMonetaryUnit::getClassType())) {
        setIfcMonetaryUnit(static_cast< IfcMonetaryUnit* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcUnit::s_type("IfcUnit");
