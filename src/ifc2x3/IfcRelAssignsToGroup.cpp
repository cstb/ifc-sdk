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

#include "ifc2x3/IfcRelAssignsToGroup.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGroup.h"
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

IfcRelAssignsToGroup::IfcRelAssignsToGroup(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingGroup = NULL;
}

IfcRelAssignsToGroup::~IfcRelAssignsToGroup() {
}

bool IfcRelAssignsToGroup::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssignsToGroup(this);
}

const std::string &IfcRelAssignsToGroup::type() {
    return IfcRelAssignsToGroup::s_type.getName();
}

Step::ClassType IfcRelAssignsToGroup::getClassType() {
    return IfcRelAssignsToGroup::s_type;
}

Step::ClassType IfcRelAssignsToGroup::getType() const {
    return IfcRelAssignsToGroup::s_type;
}

bool IfcRelAssignsToGroup::isOfType(Step::ClassType t) {
    return IfcRelAssignsToGroup::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcGroup *IfcRelAssignsToGroup::getRelatingGroup() {
    if (Step::BaseObject::inited()) {
        return m_relatingGroup.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssignsToGroup::setRelatingGroup(const Step::RefPtr< IfcGroup > &value) {
    m_relatingGroup = value;
    m_relatingGroup->m_isGroupedBy = this;
}

void IfcRelAssignsToGroup::release() {
    IfcRelAssigns::release();
    m_relatingGroup.release();
}

bool IfcRelAssignsToGroup::init() {
    bool status = IfcRelAssigns::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingGroup = NULL;
    }
    else {
        m_relatingGroup = static_cast< IfcGroup * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelAssignsToGroup::copy(const IfcRelAssignsToGroup &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingGroup(copyop(obj.m_relatingGroup.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToGroup::s_type("IfcRelAssignsToGroup");
