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
    m_referencesElement.setUnset(true);
    m_connectedBy.setUnset(true);
}

IfcStructuralMember::~IfcStructuralMember() {
}

bool IfcStructuralMember::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralMember(this);
}

const std::string &IfcStructuralMember::type() {
    return IfcStructuralMember::s_type.getName();
}

Step::ClassType IfcStructuralMember::getClassType() {
    return IfcStructuralMember::s_type;
}

Step::ClassType IfcStructuralMember::getType() const {
    return IfcStructuralMember::s_type;
}

bool IfcStructuralMember::isOfType(Step::ClassType t) {
    return IfcStructuralMember::s_type == t ? true : IfcStructuralItem::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcRelConnectsStructuralElement > > &IfcStructuralMember::getReferencesElement() {
    if (Step::BaseObject::inited()) {
        return m_referencesElement;
    }
    else {
        m_referencesElement.setUnset(true);
        return m_referencesElement;
    }
}

Step::Set< Step::ObsPtr< IfcRelConnectsStructuralMember > > &IfcStructuralMember::getConnectedBy() {
    if (Step::BaseObject::inited()) {
        return m_connectedBy;
    }
    else {
        m_connectedBy.setUnset(true);
        return m_connectedBy;
    }
}

void IfcStructuralMember::release() {
    IfcStructuralItem::release();
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
