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

#include "ifc2x3/IfcRelConnectsStructuralActivity.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcStructuralActivity.h"
#include "ifc2x3/IfcStructuralActivityAssignmentSelect.h"
#include "ifc2x3/IfcStructuralItem.h"
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

IfcRelConnectsStructuralActivity::IfcRelConnectsStructuralActivity(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingElement = NULL;
    m_relatedStructuralActivity = NULL;
}

IfcRelConnectsStructuralActivity::~IfcRelConnectsStructuralActivity() {
}

bool IfcRelConnectsStructuralActivity::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelConnectsStructuralActivity(this);
}

const std::string &IfcRelConnectsStructuralActivity::type() {
    return IfcRelConnectsStructuralActivity::s_type.getName();
}

Step::ClassType IfcRelConnectsStructuralActivity::getClassType() {
    return IfcRelConnectsStructuralActivity::s_type;
}

Step::ClassType IfcRelConnectsStructuralActivity::getType() const {
    return IfcRelConnectsStructuralActivity::s_type;
}

bool IfcRelConnectsStructuralActivity::isOfType(Step::ClassType t) {
    return IfcRelConnectsStructuralActivity::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcStructuralActivityAssignmentSelect *IfcRelConnectsStructuralActivity::getRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsStructuralActivity::setRelatingElement(const Step::RefPtr< IfcStructuralActivityAssignmentSelect > &value) {
    m_relatingElement = value;
    if (m_relatingElement->getIfcStructuralItem() != NULL) {
        IfcStructuralItem * object = m_relatingElement->getIfcStructuralItem();
        object->m_assignedStructuralActivity.insert(this);
    }
}

IfcStructuralActivity *IfcRelConnectsStructuralActivity::getRelatedStructuralActivity() {
    if (Step::BaseObject::inited()) {
        return m_relatedStructuralActivity.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsStructuralActivity::setRelatedStructuralActivity(const Step::RefPtr< IfcStructuralActivity > &value) {
    m_relatedStructuralActivity = value;
    m_relatedStructuralActivity->m_assignedToStructuralItem = this;
}

void IfcRelConnectsStructuralActivity::release() {
    IfcRelConnects::release();
    m_relatedStructuralActivity.release();
}

bool IfcRelConnectsStructuralActivity::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingElement = NULL;
    }
    else {
        m_relatingElement = new IfcStructuralActivityAssignmentSelect;
        if (arg[0] == '#') {
            m_relatingElement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedStructuralActivity = NULL;
    }
    else {
        m_relatedStructuralActivity = static_cast< IfcStructuralActivity * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelConnectsStructuralActivity::copy(const IfcRelConnectsStructuralActivity &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    m_relatingElement = new IfcStructuralActivityAssignmentSelect;
    m_relatingElement->copy(*(obj.m_relatingElement.get()), copyop);
    setRelatedStructuralActivity(copyop(obj.m_relatedStructuralActivity.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsStructuralActivity::s_type("IfcRelConnectsStructuralActivity");
