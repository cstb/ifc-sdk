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

#include "ifc2x3/IfcStructuralMember.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelConnectsStructuralElement.h"
#include "ifc2x3/IfcRelConnectsStructuralMember.h"
#include "ifc2x3/IfcStructuralItem.h"
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

IfcStructuralMember::IfcStructuralMember(Step::Id id, Step::SPFData *args) : IfcStructuralItem(id, args) {
}

IfcStructuralMember::~IfcStructuralMember() {
}

bool IfcStructuralMember::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralMember(this);
}

const std::string &IfcStructuralMember::type() const {
    return IfcStructuralMember::s_type.getName();
}

const Step::ClassType &IfcStructuralMember::getClassType() {
    return IfcStructuralMember::s_type;
}

const Step::ClassType &IfcStructuralMember::getType() const {
    return IfcStructuralMember::s_type;
}

bool IfcStructuralMember::isOfType(const Step::ClassType &t) const {
    return IfcStructuralMember::s_type == t ? true : IfcStructuralItem::isOfType(t);
}

Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcStructuralMember::getReferencesElement() {
    if (Step::BaseObject::inited()) {
        return m_referencesElement;
    }
    else {
        m_referencesElement.setUnset(true);
        return m_referencesElement;
    }
}

const Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcStructuralMember::getReferencesElement() const {
    IfcStructuralMember * deConstObject = const_cast< IfcStructuralMember * > (this);
    return deConstObject->getReferencesElement();
}

Inverse_Set_IfcRelConnectsStructuralMember_0_n &IfcStructuralMember::getConnectedBy() {
    if (Step::BaseObject::inited()) {
        return m_connectedBy;
    }
    else {
        m_connectedBy.setUnset(true);
        return m_connectedBy;
    }
}

const Inverse_Set_IfcRelConnectsStructuralMember_0_n &IfcStructuralMember::getConnectedBy() const {
    IfcStructuralMember * deConstObject = const_cast< IfcStructuralMember * > (this);
    return deConstObject->getConnectedBy();
}

bool IfcStructuralMember::init() {
    bool status = IfcStructuralItem::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralElement::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_referencesElement.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referencesElement.insert(static_cast< IfcRelConnectsStructuralElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralMember::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_connectedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedBy.insert(static_cast< IfcRelConnectsStructuralMember * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralMember::copy(const IfcStructuralMember &obj, const CopyOp &copyop) {
    IfcStructuralItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralMember::s_type("IfcStructuralMember");
