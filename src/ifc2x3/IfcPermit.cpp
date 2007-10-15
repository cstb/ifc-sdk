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

#include "ifc2x3/IfcPermit.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPermit::IfcPermit(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_permitID = Step::getUnset(m_permitID);
}

IfcPermit::~IfcPermit() {
}

bool IfcPermit::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPermit(this);
}

const std::string &IfcPermit::type() {
    return IfcPermit::s_type.getName();
}

Step::ClassType IfcPermit::getClassType() {
    return IfcPermit::s_type;
}

Step::ClassType IfcPermit::getType() const {
    return IfcPermit::s_type;
}

bool IfcPermit::isOfType(Step::ClassType t) {
    return IfcPermit::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcPermit::getPermitID() {
    if (Step::BaseObject::inited()) {
        return m_permitID;
    }
    else {
        return Step::getUnset(m_permitID);
    }
}

void IfcPermit::setPermitID(const IfcIdentifier &value) {
    m_permitID = value;
}

void IfcPermit::release() {
    IfcControl::release();
}

bool IfcPermit::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_permitID = Step::getUnset(m_permitID);
    }
    else {
        m_permitID = Step::spfToString(arg);
    }
    return true;
}

void IfcPermit::copy(const IfcPermit &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    setPermitID(obj.m_permitID);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPermit::s_type("IfcPermit");
