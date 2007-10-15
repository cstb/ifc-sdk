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

#include "ifc2x3/IfcPresentationLayerAssignment.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcLayeredItem.h"
#include "ifc2x3/IfcRepresentation.h"
#include "ifc2x3/IfcRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPresentationLayerAssignment::IfcPresentationLayerAssignment(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_assignedItems.setUnset(true);
    m_assignedItems.setOwner(this);
    m_identifier = Step::getUnset(m_identifier);
}

IfcPresentationLayerAssignment::~IfcPresentationLayerAssignment() {
}

bool IfcPresentationLayerAssignment::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPresentationLayerAssignment(this);
}

const std::string &IfcPresentationLayerAssignment::type() {
    return IfcPresentationLayerAssignment::s_type.getName();
}

Step::ClassType IfcPresentationLayerAssignment::getClassType() {
    return IfcPresentationLayerAssignment::s_type;
}

Step::ClassType IfcPresentationLayerAssignment::getType() const {
    return IfcPresentationLayerAssignment::s_type;
}

bool IfcPresentationLayerAssignment::isOfType(Step::ClassType t) {
    return IfcPresentationLayerAssignment::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcPresentationLayerAssignment::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcPresentationLayerAssignment::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcPresentationLayerAssignment::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcPresentationLayerAssignment::setDescription(const IfcText &value) {
    m_description = value;
}

Step::Set< Step::RefPtr< IfcLayeredItem > > &IfcPresentationLayerAssignment::getAssignedItems() {
    if (Step::BaseObject::inited()) {
        return m_assignedItems;
    }
    else {
        m_assignedItems.setUnset(true);
        return m_assignedItems;
    }
}

IfcIdentifier IfcPresentationLayerAssignment::getIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_identifier;
    }
    else {
        return Step::getUnset(m_identifier);
    }
}

void IfcPresentationLayerAssignment::setIdentifier(const IfcIdentifier &value) {
    m_identifier = value;
}

void IfcPresentationLayerAssignment::release() {
    m_assignedItems.clear();
}

bool IfcPresentationLayerAssignment::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_assignedItems.setUnset(true);
    }
    else {
        m_assignedItems.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcLayeredItem > attr2;
                attr2 = new IfcLayeredItem;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                m_assignedItems.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_identifier = Step::getUnset(m_identifier);
    }
    else {
        m_identifier = Step::spfToString(arg);
    }
    return true;
}

void IfcPresentationLayerAssignment::copy(const IfcPresentationLayerAssignment &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcLayeredItem > >::const_iterator it_m_assignedItems;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    for (it_m_assignedItems = obj.m_assignedItems.begin(); it_m_assignedItems != obj.m_assignedItems.end(); ++it_m_assignedItems) {
        Step::RefPtr< IfcLayeredItem > copyTarget = new IfcLayeredItem;
        copyTarget->copy(*((*it_m_assignedItems).get()), copyop);
        m_assignedItems.insert(copyTarget.get());
    }
    setIdentifier(obj.m_identifier);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPresentationLayerAssignment::s_type("IfcPresentationLayerAssignment");
IfcPresentationLayerAssignment::Inverted_AssignedItems_type::Inverted_AssignedItems_type() {
}

void IfcPresentationLayerAssignment::Inverted_AssignedItems_type::setOwner(IfcPresentationLayerAssignment *owner) {
    mOwner = owner;
}

void IfcPresentationLayerAssignment::Inverted_AssignedItems_type::insert(const Step::RefPtr< IfcLayeredItem > &value) {
    IfcLayeredItem *inverse = const_cast< IfcLayeredItem * > (value.get());
    Step::Set< Step::RefPtr< IfcLayeredItem > >::insert(value);
    if (inverse->getIfcRepresentation() != NULL) {
        IfcRepresentation *object = inverse->getIfcRepresentation();
        object->m_layerAssignments.insert(mOwner);
    }
    else if (inverse->getIfcRepresentationItem() != NULL) {
        IfcRepresentationItem *object = inverse->getIfcRepresentationItem();
        object->m_layerAssignments.insert(mOwner);
    }
}

