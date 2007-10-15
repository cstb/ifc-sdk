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

#include "ifc2x3/IfcStructuralItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcRelConnectsStructuralActivity.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralItem::IfcStructuralItem(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
    m_assignedStructuralActivity.setUnset(true);
}

IfcStructuralItem::~IfcStructuralItem() {
}

bool IfcStructuralItem::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralItem(this);
}

const std::string &IfcStructuralItem::type() {
    return IfcStructuralItem::s_type.getName();
}

Step::ClassType IfcStructuralItem::getClassType() {
    return IfcStructuralItem::s_type;
}

Step::ClassType IfcStructuralItem::getType() const {
    return IfcStructuralItem::s_type;
}

bool IfcStructuralItem::isOfType(Step::ClassType t) {
    return IfcStructuralItem::s_type == t ? true : IfcProduct::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcRelConnectsStructuralActivity > > &IfcStructuralItem::getAssignedStructuralActivity() {
    if (Step::BaseObject::inited()) {
        return m_assignedStructuralActivity;
    }
    else {
        m_assignedStructuralActivity.setUnset(true);
        return m_assignedStructuralActivity;
    }
}

void IfcStructuralItem::release() {
    IfcProduct::release();
}

bool IfcStructuralItem::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralActivity::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_assignedStructuralActivity.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_assignedStructuralActivity.insert(static_cast< IfcRelConnectsStructuralActivity * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralItem::copy(const IfcStructuralItem &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralItem::s_type("IfcStructuralItem");
