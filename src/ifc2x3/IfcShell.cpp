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

#include "ifc2x3/IfcShell.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClosedShell.h"
#include "ifc2x3/IfcOpenShell.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcShell::IfcShell() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcShell::IfcShell(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcShell::~IfcShell() {
    deleteUnion();
}

bool IfcShell::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcShell(this);
}

bool IfcShell::init() {
    return false;
}

const std::string &IfcShell::type() const {
    return IfcShell::s_type.getName();
}

const Step::ClassType &IfcShell::getClassType() {
    return IfcShell::s_type;
}

const Step::ClassType &IfcShell::getType() const {
    return IfcShell::s_type;
}

bool IfcShell::isOfType(const Step::ClassType &t) const {
    return IfcShell::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcShell::copy(const IfcShell &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCLOSEDSHELL:
        setIfcClosedShell((IfcClosedShell *) (copyop(obj.m_IfcShell_union.m_IfcClosedShell)));
        break;
    case IFCOPENSHELL:
        setIfcOpenShell((IfcOpenShell *) (copyop(obj.m_IfcShell_union.m_IfcOpenShell)));
        break;
        }
}

std::string IfcShell::currentTypeName() const {
    switch(m_type) {
    case IFCCLOSEDSHELL:
        return "IfcClosedShell";
        break;
    case IFCOPENSHELL:
        return "IfcOpenShell";
        break;
    default:
        return "UNSET";
    }
}

IfcShell::IfcShell_select IfcShell::currentType() const {
    return m_type;
}

void IfcShell::deleteUnion() {
    switch(m_type) {
    case IFCCLOSEDSHELL:
        m_IfcShell_union.m_IfcClosedShell->unref();
        break;
    case IFCOPENSHELL:
        m_IfcShell_union.m_IfcOpenShell->unref();
        break;
        }
    m_type = UNSET;
}

IfcClosedShell *IfcShell::getIfcClosedShell() const {
    if (m_type == IFCCLOSEDSHELL) {
        return m_IfcShell_union.m_IfcClosedShell;
    }
    else {
        return NULL;
    }
}

void IfcShell::setIfcClosedShell(IfcClosedShell *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcShell_union.m_IfcClosedShell = value;
    if (value) {
        value->ref();
        m_type = IFCCLOSEDSHELL;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCLOSEDSHELL;
}

IfcOpenShell *IfcShell::getIfcOpenShell() const {
    if (m_type == IFCOPENSHELL) {
        return m_IfcShell_union.m_IfcOpenShell;
    }
    else {
        return NULL;
    }
}

void IfcShell::setIfcOpenShell(IfcOpenShell *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcShell_union.m_IfcOpenShell = value;
    if (value) {
        value->ref();
        m_type = IFCOPENSHELL;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCOPENSHELL;
}

void IfcShell::set(Step::BaseObject *v) {
    if (v->isOfType(IfcClosedShell::getClassType())) {
        setIfcClosedShell(static_cast< IfcClosedShell* > (v));
    }
    else if (v->isOfType(IfcOpenShell::getClassType())) {
        setIfcOpenShell(static_cast< IfcOpenShell* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcShell::s_type("IfcShell");
