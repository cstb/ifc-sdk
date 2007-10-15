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

#include "ifc2x3/IfcRelAssociatesApproval.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcApproval.h"
#include "ifc2x3/IfcRelAssociates.h"
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

IfcRelAssociatesApproval::IfcRelAssociatesApproval(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingApproval = NULL;
}

IfcRelAssociatesApproval::~IfcRelAssociatesApproval() {
}

bool IfcRelAssociatesApproval::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssociatesApproval(this);
}

const std::string &IfcRelAssociatesApproval::type() {
    return IfcRelAssociatesApproval::s_type.getName();
}

Step::ClassType IfcRelAssociatesApproval::getClassType() {
    return IfcRelAssociatesApproval::s_type;
}

Step::ClassType IfcRelAssociatesApproval::getType() const {
    return IfcRelAssociatesApproval::s_type;
}

bool IfcRelAssociatesApproval::isOfType(Step::ClassType t) {
    return IfcRelAssociatesApproval::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcApproval *IfcRelAssociatesApproval::getRelatingApproval() {
    if (Step::BaseObject::inited()) {
        return m_relatingApproval.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssociatesApproval::setRelatingApproval(const Step::RefPtr< IfcApproval > &value) {
    m_relatingApproval = value;
}

void IfcRelAssociatesApproval::release() {
    IfcRelAssociates::release();
    m_relatingApproval.release();
}

bool IfcRelAssociatesApproval::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingApproval = NULL;
    }
    else {
        m_relatingApproval = static_cast< IfcApproval * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelAssociatesApproval::copy(const IfcRelAssociatesApproval &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    setRelatingApproval(copyop(obj.m_relatingApproval.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesApproval::s_type("IfcRelAssociatesApproval");
