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

#include "ifc2x3/IfcStructuralActivity.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcRelConnectsStructuralActivity.h"
#include "ifc2x3/IfcStructuralLoad.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralActivity::IfcStructuralActivity(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
    m_appliedLoad = NULL;
    m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
}

IfcStructuralActivity::~IfcStructuralActivity() {
}

bool IfcStructuralActivity::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralActivity(this);
}

const std::string &IfcStructuralActivity::type() {
    return IfcStructuralActivity::s_type.getName();
}

Step::ClassType IfcStructuralActivity::getClassType() {
    return IfcStructuralActivity::s_type;
}

Step::ClassType IfcStructuralActivity::getType() const {
    return IfcStructuralActivity::s_type;
}

bool IfcStructuralActivity::isOfType(Step::ClassType t) {
    return IfcStructuralActivity::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcStructuralLoad *IfcStructuralActivity::getAppliedLoad() {
    if (Step::BaseObject::inited()) {
        return m_appliedLoad.get();
    }
    else {
        return NULL;
    }
}

void IfcStructuralActivity::setAppliedLoad(const Step::RefPtr< IfcStructuralLoad > &value) {
    m_appliedLoad = value;
}

IfcGlobalOrLocalEnum IfcStructuralActivity::getGlobalOrLocal() {
    if (Step::BaseObject::inited()) {
        return m_globalOrLocal;
    }
    else {
        return IfcGlobalOrLocalEnum_UNSET;
    }
}

void IfcStructuralActivity::setGlobalOrLocal(IfcGlobalOrLocalEnum value) {
    m_globalOrLocal = value;
}

IfcRelConnectsStructuralActivity *IfcStructuralActivity::getAssignedToStructuralItem() {
    if (Step::BaseObject::inited()) {
        return m_assignedToStructuralItem.get();
    }
    else {
        return NULL;
    }
}

void IfcStructuralActivity::release() {
    IfcProduct::release();
    m_appliedLoad.release();
}

bool IfcStructuralActivity::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_appliedLoad = NULL;
    }
    else {
        m_appliedLoad = static_cast< IfcStructuralLoad * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
    }
    else {
        if (arg == ".GLOBAL_COORDS.") {
            m_globalOrLocal = IfcGlobalOrLocalEnum_GLOBAL_COORDS;
        }
        else if (arg == ".LOCAL_COORDS.") {
            m_globalOrLocal = IfcGlobalOrLocalEnum_LOCAL_COORDS;
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralActivity::getClassType(), 5);
    if (inverses) {
        m_assignedToStructuralItem = static_cast< IfcRelConnectsStructuralActivity * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcStructuralActivity::copy(const IfcStructuralActivity &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    setAppliedLoad(copyop(obj.m_appliedLoad.get()));
    setGlobalOrLocal(obj.m_globalOrLocal);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralActivity::s_type("IfcStructuralActivity");
