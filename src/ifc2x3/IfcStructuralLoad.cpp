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

#include "ifc2x3/IfcStructuralLoad.h"

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

IfcStructuralLoad::IfcStructuralLoad(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcStructuralLoad::~IfcStructuralLoad() {
}

bool IfcStructuralLoad::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLoad(this);
}

const std::string &IfcStructuralLoad::type() {
    return IfcStructuralLoad::s_type.getName();
}

Step::ClassType IfcStructuralLoad::getClassType() {
    return IfcStructuralLoad::s_type;
}

Step::ClassType IfcStructuralLoad::getType() const {
    return IfcStructuralLoad::s_type;
}

bool IfcStructuralLoad::isOfType(Step::ClassType t) {
    return IfcStructuralLoad::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcStructuralLoad::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcStructuralLoad::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcStructuralLoad::release() {
}

bool IfcStructuralLoad::init() {
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

void IfcStructuralLoad::copy(const IfcStructuralLoad &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoad::s_type("IfcStructuralLoad");
