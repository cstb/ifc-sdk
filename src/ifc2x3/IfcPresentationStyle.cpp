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

#include "ifc2x3/IfcPresentationStyle.h"

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

IfcPresentationStyle::IfcPresentationStyle(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcPresentationStyle::~IfcPresentationStyle() {
}

bool IfcPresentationStyle::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPresentationStyle(this);
}

const std::string &IfcPresentationStyle::type() {
    return IfcPresentationStyle::s_type.getName();
}

Step::ClassType IfcPresentationStyle::getClassType() {
    return IfcPresentationStyle::s_type;
}

Step::ClassType IfcPresentationStyle::getType() const {
    return IfcPresentationStyle::s_type;
}

bool IfcPresentationStyle::isOfType(Step::ClassType t) {
    return IfcPresentationStyle::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcPresentationStyle::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcPresentationStyle::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcPresentationStyle::release() {
}

bool IfcPresentationStyle::init() {
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

void IfcPresentationStyle::copy(const IfcPresentationStyle &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPresentationStyle::s_type("IfcPresentationStyle");
