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

#include "ifc2x3/IfcRepresentationItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPresentationLayerAssignment.h"
#include "ifc2x3/IfcStyledItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRepresentationItem::IfcRepresentationItem(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_layerAssignments.setUnset(true);
    m_styledByItem.setUnset(true);
}

IfcRepresentationItem::~IfcRepresentationItem() {
}

bool IfcRepresentationItem::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRepresentationItem(this);
}

const std::string &IfcRepresentationItem::type() {
    return IfcRepresentationItem::s_type.getName();
}

Step::ClassType IfcRepresentationItem::getClassType() {
    return IfcRepresentationItem::s_type;
}

Step::ClassType IfcRepresentationItem::getType() const {
    return IfcRepresentationItem::s_type;
}

bool IfcRepresentationItem::isOfType(Step::ClassType t) {
    return IfcRepresentationItem::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcPresentationLayerAssignment > > &IfcRepresentationItem::getLayerAssignments() {
    if (Step::BaseObject::inited()) {
        return m_layerAssignments;
    }
    else {
        m_layerAssignments.setUnset(true);
        return m_layerAssignments;
    }
}

Step::Set< Step::ObsPtr< IfcStyledItem > > &IfcRepresentationItem::getStyledByItem() {
    if (Step::BaseObject::inited()) {
        return m_styledByItem;
    }
    else {
        m_styledByItem.setUnset(true);
        return m_styledByItem;
    }
}

void IfcRepresentationItem::release() {
}

bool IfcRepresentationItem::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcPresentationLayerAssignment::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_layerAssignments.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_layerAssignments.insert(static_cast< IfcPresentationLayerAssignment * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcStyledItem::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_styledByItem.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_styledByItem.insert(static_cast< IfcStyledItem * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentationItem::copy(const IfcRepresentationItem &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRepresentationItem::s_type("IfcRepresentationItem");
