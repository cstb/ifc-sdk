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

#include "ifc2x3/IfcClassificationItemRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClassificationItem.h"
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

IfcClassificationItemRelationship::IfcClassificationItemRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relatingItem = NULL;
    m_relatedItems.setUnset(true);
    m_relatedItems.setOwner(this);
}

IfcClassificationItemRelationship::~IfcClassificationItemRelationship() {
}

bool IfcClassificationItemRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcClassificationItemRelationship(this);
}

const std::string &IfcClassificationItemRelationship::type() {
    return IfcClassificationItemRelationship::s_type.getName();
}

Step::ClassType IfcClassificationItemRelationship::getClassType() {
    return IfcClassificationItemRelationship::s_type;
}

Step::ClassType IfcClassificationItemRelationship::getType() const {
    return IfcClassificationItemRelationship::s_type;
}

bool IfcClassificationItemRelationship::isOfType(Step::ClassType t) {
    return IfcClassificationItemRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcClassificationItem *IfcClassificationItemRelationship::getRelatingItem() {
    if (Step::BaseObject::inited()) {
        return m_relatingItem.get();
    }
    else {
        return NULL;
    }
}

void IfcClassificationItemRelationship::setRelatingItem(const Step::RefPtr< IfcClassificationItem > &value) {
    m_relatingItem = value;
    m_relatingItem->m_isClassifyingItemIn.insert(this);
}

Step::Set< Step::RefPtr< IfcClassificationItem > > &IfcClassificationItemRelationship::getRelatedItems() {
    if (Step::BaseObject::inited()) {
        return m_relatedItems;
    }
    else {
        m_relatedItems.setUnset(true);
        return m_relatedItems;
    }
}

void IfcClassificationItemRelationship::release() {
    m_relatingItem.release();
    m_relatedItems.clear();
}

bool IfcClassificationItemRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingItem = NULL;
    }
    else {
        m_relatingItem = static_cast< IfcClassificationItem * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedItems.setUnset(true);
    }
    else {
        m_relatedItems.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcClassificationItem > attr2;
                attr2 = static_cast< IfcClassificationItem * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedItems.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcClassificationItemRelationship::copy(const IfcClassificationItemRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcClassificationItem > >::const_iterator it_m_relatedItems;
    Step::BaseEntity::copy(obj, copyop);
    setRelatingItem(copyop(obj.m_relatingItem.get()));
    for (it_m_relatedItems = obj.m_relatedItems.begin(); it_m_relatedItems != obj.m_relatedItems.end(); ++it_m_relatedItems) {
        Step::RefPtr< IfcClassificationItem > copyTarget = copyop((*it_m_relatedItems).get());
        m_relatedItems.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationItemRelationship::s_type("IfcClassificationItemRelationship");
IfcClassificationItemRelationship::Inverted_RelatedItems_type::Inverted_RelatedItems_type() {
}

void IfcClassificationItemRelationship::Inverted_RelatedItems_type::setOwner(IfcClassificationItemRelationship *owner) {
    mOwner = owner;
}

void IfcClassificationItemRelationship::Inverted_RelatedItems_type::insert(const Step::RefPtr< IfcClassificationItem > &value) {
    IfcClassificationItem *inverse = const_cast< IfcClassificationItem * > (value.get());
    Step::Set< Step::RefPtr< IfcClassificationItem > >::insert(value);
    inverse->m_isClassifiedItemIn.insert(mOwner);
}

