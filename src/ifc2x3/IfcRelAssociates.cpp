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

#include "ifc2x3/IfcRelAssociates.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObjectDefinition.h"
#include "ifc2x3/IfcPropertyDefinition.h"
#include "ifc2x3/IfcRelationship.h"
#include "ifc2x3/IfcRoot.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelAssociates::IfcRelAssociates(Step::Id id, Step::SPFData *args) : IfcRelationship(id, args) {
    m_relatedObjects.setUnset(true);
    m_relatedObjects.setOwner(this);
}

IfcRelAssociates::~IfcRelAssociates() {
}

bool IfcRelAssociates::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssociates(this);
}

const std::string &IfcRelAssociates::type() {
    return IfcRelAssociates::s_type.getName();
}

Step::ClassType IfcRelAssociates::getClassType() {
    return IfcRelAssociates::s_type;
}

Step::ClassType IfcRelAssociates::getType() const {
    return IfcRelAssociates::s_type;
}

bool IfcRelAssociates::isOfType(Step::ClassType t) {
    return IfcRelAssociates::s_type == t ? true : IfcRelationship::isOfType(t);
}

Step::Set< Step::RefPtr< IfcRoot > > &IfcRelAssociates::getRelatedObjects() {
    if (Step::BaseObject::inited()) {
        return m_relatedObjects;
    }
    else {
        m_relatedObjects.setUnset(true);
        return m_relatedObjects;
    }
}

void IfcRelAssociates::release() {
    IfcRelationship::release();
    m_relatedObjects.clear();
}

bool IfcRelAssociates::init() {
    bool status = IfcRelationship::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedObjects.setUnset(true);
    }
    else {
        m_relatedObjects.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRoot > attr2;
                attr2 = static_cast< IfcRoot * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedObjects.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRelAssociates::copy(const IfcRelAssociates &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcRoot > >::const_iterator it_m_relatedObjects;
    IfcRelationship::copy(obj, copyop);
    for (it_m_relatedObjects = obj.m_relatedObjects.begin(); it_m_relatedObjects != obj.m_relatedObjects.end(); ++it_m_relatedObjects) {
        Step::RefPtr< IfcRoot > copyTarget = copyop((*it_m_relatedObjects).get());
        m_relatedObjects.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociates::s_type("IfcRelAssociates");
IfcRelAssociates::Inverted_RelatedObjects_type::Inverted_RelatedObjects_type() {
}

void IfcRelAssociates::Inverted_RelatedObjects_type::setOwner(IfcRelAssociates *owner) {
    mOwner = owner;
}

void IfcRelAssociates::Inverted_RelatedObjects_type::insert(const Step::RefPtr< IfcRoot > &value) {
    IfcRoot *inverse = const_cast< IfcRoot * > (value.get());
    Step::Set< Step::RefPtr< IfcRoot > >::insert(value);
    if (dynamic_cast< IfcObjectDefinition * > (inverse) != NULL) {
        ((IfcObjectDefinition *) (inverse))->m_hasAssociations.insert(mOwner);
    }
    else if (dynamic_cast< IfcPropertyDefinition * > (inverse) != NULL) {
        ((IfcPropertyDefinition *) (inverse))->m_hasAssociations.insert(mOwner);
    }
}

