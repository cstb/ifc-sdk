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

#include "ifc2x3/IfcColourSpecification.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcColourSpecification::IfcColourSpecification(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcColourSpecification::~IfcColourSpecification() {
}

bool IfcColourSpecification::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcColourSpecification(this);
}

const std::string &IfcColourSpecification::type() {
    return IfcColourSpecification::s_type.getName();
}

Step::ClassType IfcColourSpecification::getClassType() {
    return IfcColourSpecification::s_type;
}

Step::ClassType IfcColourSpecification::getType() const {
    return IfcColourSpecification::s_type;
}

bool IfcColourSpecification::isOfType(Step::ClassType t) {
    return IfcColourSpecification::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcColourSpecification::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcColourSpecification::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcColourSpecification::release() {
}

bool IfcColourSpecification::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    return true;
}

void IfcColourSpecification::copy(const IfcColourSpecification &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcColourSpecification::s_type("IfcColourSpecification");
