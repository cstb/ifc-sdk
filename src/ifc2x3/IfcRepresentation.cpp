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

#include "ifc2x3/IfcRepresentation.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPresentationLayerAssignment.h"
#include "ifc2x3/IfcProductRepresentation.h"
#include "ifc2x3/IfcRepresentationContext.h"
#include "ifc2x3/IfcRepresentationItem.h"
#include "ifc2x3/IfcRepresentationMap.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRepresentation::IfcRepresentation(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_contextOfItems = NULL;
    m_representationIdentifier = Step::getUnset(m_representationIdentifier);
    m_representationType = Step::getUnset(m_representationType);
    m_items.setUnset(true);
    m_representationMap.setUnset(true);
    m_layerAssignments.setUnset(true);
    m_ofProductRepresentation.setUnset(true);
}

IfcRepresentation::~IfcRepresentation() {
}

bool IfcRepresentation::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRepresentation(this);
}

const std::string &IfcRepresentation::type() {
    return IfcRepresentation::s_type.getName();
}

Step::ClassType IfcRepresentation::getClassType() {
    return IfcRepresentation::s_type;
}

Step::ClassType IfcRepresentation::getType() const {
    return IfcRepresentation::s_type;
}

bool IfcRepresentation::isOfType(Step::ClassType t) {
    return IfcRepresentation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcRepresentationContext *IfcRepresentation::getContextOfItems() {
    if (Step::BaseObject::inited()) {
        return m_contextOfItems.get();
    }
    else {
        return NULL;
    }
}

void IfcRepresentation::setContextOfItems(const Step::RefPtr< IfcRepresentationContext > &value) {
    m_contextOfItems = value;
    m_contextOfItems->m_representationsInContext.insert(this);
}

IfcLabel IfcRepresentation::getRepresentationIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_representationIdentifier;
    }
    else {
        return Step::getUnset(m_representationIdentifier);
    }
}

void IfcRepresentation::setRepresentationIdentifier(const IfcLabel &value) {
    m_representationIdentifier = value;
}

IfcLabel IfcRepresentation::getRepresentationType() {
    if (Step::BaseObject::inited()) {
        return m_representationType;
    }
    else {
        return Step::getUnset(m_representationType);
    }
}

void IfcRepresentation::setRepresentationType(const IfcLabel &value) {
    m_representationType = value;
}

Step::Set< Step::RefPtr< IfcRepresentationItem > > &IfcRepresentation::getItems() {
    if (Step::BaseObject::inited()) {
        return m_items;
    }
    else {
        m_items.setUnset(true);
        return m_items;
    }
}

void IfcRepresentation::setItems(const Step::Set< Step::RefPtr< IfcRepresentationItem > > &value) {
    m_items = value;
}

Step::Set< Step::ObsPtr< IfcRepresentationMap > > &IfcRepresentation::getRepresentationMap() {
    if (Step::BaseObject::inited()) {
        return m_representationMap;
    }
    else {
        m_representationMap.setUnset(true);
        return m_representationMap;
    }
}

Step::Set< Step::ObsPtr< IfcPresentationLayerAssignment > > &IfcRepresentation::getLayerAssignments() {
    if (Step::BaseObject::inited()) {
        return m_layerAssignments;
    }
    else {
        m_layerAssignments.setUnset(true);
        return m_layerAssignments;
    }
}

Step::Set< Step::ObsPtr< IfcProductRepresentation > > &IfcRepresentation::getOfProductRepresentation() {
    if (Step::BaseObject::inited()) {
        return m_ofProductRepresentation;
    }
    else {
        m_ofProductRepresentation.setUnset(true);
        return m_ofProductRepresentation;
    }
}

void IfcRepresentation::release() {
    m_contextOfItems.release();
    m_items.clear();
}

bool IfcRepresentation::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_contextOfItems = NULL;
    }
    else {
        m_contextOfItems = static_cast< IfcRepresentationContext * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representationIdentifier = Step::getUnset(m_representationIdentifier);
    }
    else {
        m_representationIdentifier = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representationType = Step::getUnset(m_representationType);
    }
    else {
        m_representationType = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_items.setUnset(true);
    }
    else {
        m_items.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRepresentationItem > attr2;
                attr2 = static_cast< IfcRepresentationItem * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_items.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    inverses = m_args->getInverses(IfcRepresentationMap::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_representationMap.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_representationMap.insert(static_cast< IfcRepresentationMap * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPresentationLayerAssignment::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_layerAssignments.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_layerAssignments.insert(static_cast< IfcPresentationLayerAssignment * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcProductRepresentation::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_ofProductRepresentation.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_ofProductRepresentation.insert(static_cast< IfcProductRepresentation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentation::copy(const IfcRepresentation &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcRepresentationItem > >::const_iterator it_m_items;
    Step::BaseEntity::copy(obj, copyop);
    setContextOfItems(copyop(obj.m_contextOfItems.get()));
    setRepresentationIdentifier(obj.m_representationIdentifier);
    setRepresentationType(obj.m_representationType);
    for (it_m_items = obj.m_items.begin(); it_m_items != obj.m_items.end(); ++it_m_items) {
        Step::RefPtr< IfcRepresentationItem > copyTarget = copyop((*it_m_items).get());
        m_items.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRepresentation::s_type("IfcRepresentation");
