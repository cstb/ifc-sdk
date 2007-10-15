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

#include "ifc2x3/IfcRelAssigns.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObjectDefinition.h"
#include "ifc2x3/IfcRelationship.h"
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

IfcRelAssigns::IfcRelAssigns(Step::Id id, Step::SPFData *args) : IfcRelationship(id, args) {
    m_relatedObjects.setUnset(true);
    m_relatedObjects.setOwner(this);
    m_relatedObjectsType = IfcObjectTypeEnum_UNSET;
}

IfcRelAssigns::~IfcRelAssigns() {
}

bool IfcRelAssigns::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssigns(this);
}

const std::string &IfcRelAssigns::type() {
    return IfcRelAssigns::s_type.getName();
}

Step::ClassType IfcRelAssigns::getClassType() {
    return IfcRelAssigns::s_type;
}

Step::ClassType IfcRelAssigns::getType() const {
    return IfcRelAssigns::s_type;
}

bool IfcRelAssigns::isOfType(Step::ClassType t) {
    return IfcRelAssigns::s_type == t ? true : IfcRelationship::isOfType(t);
}

Step::Set< Step::RefPtr< IfcObjectDefinition > > &IfcRelAssigns::getRelatedObjects() {
    if (Step::BaseObject::inited()) {
        return m_relatedObjects;
    }
    else {
        m_relatedObjects.setUnset(true);
        return m_relatedObjects;
    }
}

IfcObjectTypeEnum IfcRelAssigns::getRelatedObjectsType() {
    if (Step::BaseObject::inited()) {
        return m_relatedObjectsType;
    }
    else {
        return IfcObjectTypeEnum_UNSET;
    }
}

void IfcRelAssigns::setRelatedObjectsType(IfcObjectTypeEnum value) {
    m_relatedObjectsType = value;
}

void IfcRelAssigns::release() {
    IfcRelationship::release();
    m_relatedObjects.clear();
}

bool IfcRelAssigns::init() {
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
                Step::RefPtr< IfcObjectDefinition > attr2;
                attr2 = static_cast< IfcObjectDefinition * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedObjects.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedObjectsType = IfcObjectTypeEnum_UNSET;
    }
    else {
        if (arg == ".PRODUCT.") {
            m_relatedObjectsType = IfcObjectTypeEnum_PRODUCT;
        }
        else if (arg == ".PROCESS.") {
            m_relatedObjectsType = IfcObjectTypeEnum_PROCESS;
        }
        else if (arg == ".CONTROL.") {
            m_relatedObjectsType = IfcObjectTypeEnum_CONTROL;
        }
        else if (arg == ".RESOURCE.") {
            m_relatedObjectsType = IfcObjectTypeEnum_RESOURCE;
        }
        else if (arg == ".ACTOR.") {
            m_relatedObjectsType = IfcObjectTypeEnum_ACTOR;
        }
        else if (arg == ".GROUP.") {
            m_relatedObjectsType = IfcObjectTypeEnum_GROUP;
        }
        else if (arg == ".PROJECT.") {
            m_relatedObjectsType = IfcObjectTypeEnum_PROJECT;
        }
        else if (arg == ".NOTDEFINED.") {
            m_relatedObjectsType = IfcObjectTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRelAssigns::copy(const IfcRelAssigns &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcObjectDefinition > >::const_iterator it_m_relatedObjects;
    IfcRelationship::copy(obj, copyop);
    for (it_m_relatedObjects = obj.m_relatedObjects.begin(); it_m_relatedObjects != obj.m_relatedObjects.end(); ++it_m_relatedObjects) {
        Step::RefPtr< IfcObjectDefinition > copyTarget = copyop((*it_m_relatedObjects).get());
        m_relatedObjects.insert(copyTarget.get());
    }
    setRelatedObjectsType(obj.m_relatedObjectsType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssigns::s_type("IfcRelAssigns");
IfcRelAssigns::Inverted_RelatedObjects_type::Inverted_RelatedObjects_type() {
}

void IfcRelAssigns::Inverted_RelatedObjects_type::setOwner(IfcRelAssigns *owner) {
    mOwner = owner;
}

void IfcRelAssigns::Inverted_RelatedObjects_type::insert(const Step::RefPtr< IfcObjectDefinition > &value) {
    IfcObjectDefinition *inverse = const_cast< IfcObjectDefinition * > (value.get());
    Step::Set< Step::RefPtr< IfcObjectDefinition > >::insert(value);
    inverse->m_hasAssignments.insert(mOwner);
}

