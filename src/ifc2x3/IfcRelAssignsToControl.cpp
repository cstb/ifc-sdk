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

#include "ifc2x3/IfcRelAssignsToControl.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelAssignsToControl::IfcRelAssignsToControl(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingControl = NULL;
}

IfcRelAssignsToControl::~IfcRelAssignsToControl() {
}

bool IfcRelAssignsToControl::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssignsToControl(this);
}

const std::string &IfcRelAssignsToControl::type() {
    return IfcRelAssignsToControl::s_type.getName();
}

Step::ClassType IfcRelAssignsToControl::getClassType() {
    return IfcRelAssignsToControl::s_type;
}

Step::ClassType IfcRelAssignsToControl::getType() const {
    return IfcRelAssignsToControl::s_type;
}

bool IfcRelAssignsToControl::isOfType(Step::ClassType t) {
    return IfcRelAssignsToControl::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcControl *IfcRelAssignsToControl::getRelatingControl() {
    if (Step::BaseObject::inited()) {
        return m_relatingControl.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssignsToControl::setRelatingControl(const Step::RefPtr< IfcControl > &value) {
    m_relatingControl = value;
    m_relatingControl->m_controls.insert(this);
}

void IfcRelAssignsToControl::release() {
    IfcRelAssigns::release();
    m_relatingControl.release();
}

bool IfcRelAssignsToControl::init() {
    bool status = IfcRelAssigns::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingControl = NULL;
    }
    else {
        m_relatingControl = static_cast< IfcControl * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelAssignsToControl::copy(const IfcRelAssignsToControl &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingControl(copyop(obj.m_relatingControl.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToControl::s_type("IfcRelAssignsToControl");
