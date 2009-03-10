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

#include "ifc2x3/IfcRelAssignsToGroup.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGroup.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
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

bool IfcRelAssignsToGroup::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssignsToGroup(this);
}

const std::string &IfcRelAssignsToGroup::type() const {
    return IfcRelAssignsToGroup::s_type.getName();
}

const Step::ClassType &IfcRelAssignsToGroup::getClassType() {
    return IfcRelAssignsToGroup::s_type;
}

const Step::ClassType &IfcRelAssignsToGroup::getType() const {
    return IfcRelAssignsToGroup::s_type;
}

bool IfcRelAssignsToGroup::isOfType(const Step::ClassType &t) const {
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

const IfcGroup *IfcRelAssignsToGroup::getRelatingGroup() const {
    IfcRelAssignsToGroup * deConstObject = const_cast< IfcRelAssignsToGroup * > (this);
    return deConstObject->getRelatingGroup();
}

void IfcRelAssignsToGroup::setRelatingGroup(const Step::RefPtr< IfcGroup > &value) {
    if (m_relatingGroup.valid()) {
        m_relatingGroup->m_isGroupedBy = NULL;
    }
    if (value.valid()) {
        value->m_isGroupedBy = this;
    }
    m_relatingGroup = value;
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
        m_relatingGroup = static_cast< IfcGroup * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssignsToGroup::copy(const IfcRelAssignsToGroup &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingGroup((IfcGroup*)copyop(obj.m_relatingGroup.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToGroup::s_type("IfcRelAssignsToGroup");
