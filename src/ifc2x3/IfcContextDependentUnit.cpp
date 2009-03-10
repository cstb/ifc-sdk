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

#include "ifc2x3/IfcContextDependentUnit.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcNamedUnit.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcContextDependentUnit::IfcContextDependentUnit(Step::Id id, Step::SPFData *args) : IfcNamedUnit(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcContextDependentUnit::~IfcContextDependentUnit() {
}

bool IfcContextDependentUnit::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcContextDependentUnit(this);
}

const std::string &IfcContextDependentUnit::type() const {
    return IfcContextDependentUnit::s_type.getName();
}

const Step::ClassType &IfcContextDependentUnit::getClassType() {
    return IfcContextDependentUnit::s_type;
}

const Step::ClassType &IfcContextDependentUnit::getType() const {
    return IfcContextDependentUnit::s_type;
}

bool IfcContextDependentUnit::isOfType(const Step::ClassType &t) const {
    return IfcContextDependentUnit::s_type == t ? true : IfcNamedUnit::isOfType(t);
}

IfcLabel IfcContextDependentUnit::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcContextDependentUnit::getName() const {
    IfcContextDependentUnit * deConstObject = const_cast< IfcContextDependentUnit * > (this);
    return deConstObject->getName();
}

void IfcContextDependentUnit::setName(const IfcLabel &value) {
    m_name = value;
}

bool IfcContextDependentUnit::init() {
    bool status = IfcNamedUnit::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcContextDependentUnit::copy(const IfcContextDependentUnit &obj, const CopyOp &copyop) {
    IfcNamedUnit::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcContextDependentUnit::s_type("IfcContextDependentUnit");
