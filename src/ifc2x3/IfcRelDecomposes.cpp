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

#include "ifc2x3/IfcRelDecomposes.h"

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

IfcRelDecomposes::IfcRelDecomposes(Step::Id id, Step::SPFData *args) : IfcRelationship(id, args) {
    m_relatingObject = NULL;
    m_relatedObjects.setUnset(true);
    m_relatedObjects.setOwner(this);
}

IfcRelDecomposes::~IfcRelDecomposes() {
}

bool IfcRelDecomposes::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelDecomposes(this);
}

const std::string &IfcRelDecomposes::type() {
    return IfcRelDecomposes::s_type.getName();
}

Step::ClassType IfcRelDecomposes::getClassType() {
    return IfcRelDecomposes::s_type;
}

Step::ClassType IfcRelDecomposes::getType() const {
    return IfcRelDecomposes::s_type;
}

bool IfcRelDecomposes::isOfType(Step::ClassType t) {
    return IfcRelDecomposes::s_type == t ? true : IfcRelationship::isOfType(t);
}

IfcObjectDefinition *IfcRelDecomposes::getRelatingObject() {
    if (Step::BaseObject::inited()) {
        return m_relatingObject.get();
    }
    else {
        return NULL;
    }
}

void IfcRelDecomposes::setRelatingObject(const Step::RefPtr< IfcObjectDefinition > &value) {
    m_relatingObject = value;
    m_relatingObject->m_isDecomposedBy.insert(this);
}

Step::Set< Step::RefPtr< IfcObjectDefinition > > &IfcRelDecomposes::getRelatedObjects() {
    if (Step::BaseObject::inited()) {
        return m_relatedObjects;
    }
    else {
        m_relatedObjects.setUnset(true);
        return m_relatedObjects;
    }
}

void IfcRelDecomposes::release() {
    IfcRelationship::release();
    m_relatingObject.release();
    m_relatedObjects.clear();
}

bool IfcRelDecomposes::init() {
    bool status = IfcRelationship::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingObject = NULL;
    }
    else {
        m_relatingObject = static_cast< IfcObjectDefinition * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
    return true;
}

void IfcRelDecomposes::copy(const IfcRelDecomposes &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcObjectDefinition > >::const_iterator it_m_relatedObjects;
    IfcRelationship::copy(obj, copyop);
    setRelatingObject(copyop(obj.m_relatingObject.get()));
    for (it_m_relatedObjects = obj.m_relatedObjects.begin(); it_m_relatedObjects != obj.m_relatedObjects.end(); ++it_m_relatedObjects) {
        Step::RefPtr< IfcObjectDefinition > copyTarget = copyop((*it_m_relatedObjects).get());
        m_relatedObjects.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelDecomposes::s_type("IfcRelDecomposes");
IfcRelDecomposes::Inverted_RelatedObjects_type::Inverted_RelatedObjects_type() {
}

void IfcRelDecomposes::Inverted_RelatedObjects_type::setOwner(IfcRelDecomposes *owner) {
    mOwner = owner;
}

void IfcRelDecomposes::Inverted_RelatedObjects_type::insert(const Step::RefPtr< IfcObjectDefinition > &value) {
    IfcObjectDefinition *inverse = const_cast< IfcObjectDefinition * > (value.get());
    Step::Set< Step::RefPtr< IfcObjectDefinition > >::insert(value);
    inverse->m_decomposes.insert(mOwner);
}

