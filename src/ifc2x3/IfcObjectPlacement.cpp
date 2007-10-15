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

#include "ifc2x3/IfcObjectPlacement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcLocalPlacement.h"
#include "ifc2x3/IfcProduct.h"
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

IfcObjectPlacement::IfcObjectPlacement(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_placesObject.setUnset(true);
    m_referencedByPlacements.setUnset(true);
}

IfcObjectPlacement::~IfcObjectPlacement() {
}

bool IfcObjectPlacement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcObjectPlacement(this);
}

const std::string &IfcObjectPlacement::type() {
    return IfcObjectPlacement::s_type.getName();
}

Step::ClassType IfcObjectPlacement::getClassType() {
    return IfcObjectPlacement::s_type;
}

Step::ClassType IfcObjectPlacement::getType() const {
    return IfcObjectPlacement::s_type;
}

bool IfcObjectPlacement::isOfType(Step::ClassType t) {
    return IfcObjectPlacement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcProduct > > &IfcObjectPlacement::getPlacesObject() {
    if (Step::BaseObject::inited()) {
        return m_placesObject;
    }
    else {
        m_placesObject.setUnset(true);
        return m_placesObject;
    }
}

Step::Set< Step::ObsPtr< IfcLocalPlacement > > &IfcObjectPlacement::getReferencedByPlacements() {
    if (Step::BaseObject::inited()) {
        return m_referencedByPlacements;
    }
    else {
        m_referencedByPlacements.setUnset(true);
        return m_referencedByPlacements;
    }
}

void IfcObjectPlacement::release() {
}

bool IfcObjectPlacement::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcProduct::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_placesObject.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_placesObject.insert(static_cast< IfcProduct * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcLocalPlacement::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_referencedByPlacements.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referencedByPlacements.insert(static_cast< IfcLocalPlacement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcObjectPlacement::copy(const IfcObjectPlacement &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcObjectPlacement::s_type("IfcObjectPlacement");
