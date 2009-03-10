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

#include "ifc2x3/IfcRelAssociatesApproval.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcApproval.h"
#include "ifc2x3/IfcRelAssociates.h"
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

IfcRelAssociatesApproval::IfcRelAssociatesApproval(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingApproval = NULL;
}

IfcRelAssociatesApproval::~IfcRelAssociatesApproval() {
}

bool IfcRelAssociatesApproval::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesApproval(this);
}

const std::string &IfcRelAssociatesApproval::type() const {
    return IfcRelAssociatesApproval::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesApproval::getClassType() {
    return IfcRelAssociatesApproval::s_type;
}

const Step::ClassType &IfcRelAssociatesApproval::getType() const {
    return IfcRelAssociatesApproval::s_type;
}

bool IfcRelAssociatesApproval::isOfType(const Step::ClassType &t) const {
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

const IfcApproval *IfcRelAssociatesApproval::getRelatingApproval() const {
    IfcRelAssociatesApproval * deConstObject = const_cast< IfcRelAssociatesApproval * > (this);
    return deConstObject->getRelatingApproval();
}

void IfcRelAssociatesApproval::setRelatingApproval(const Step::RefPtr< IfcApproval > &value) {
    m_relatingApproval = value;
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
        m_relatingApproval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssociatesApproval::copy(const IfcRelAssociatesApproval &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    setRelatingApproval((IfcApproval*)copyop(obj.m_relatingApproval.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesApproval::s_type("IfcRelAssociatesApproval");
