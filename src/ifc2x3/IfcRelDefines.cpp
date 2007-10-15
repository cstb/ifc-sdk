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

#include "ifc2x3/IfcRelDefines.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObject.h"
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

IfcRelDefines::IfcRelDefines(Step::Id id, Step::SPFData *args) : IfcRelationship(id, args) {
    m_relatedObjects.setUnset(true);
    m_relatedObjects.setOwner(this);
}

IfcRelDefines::~IfcRelDefines() {
}

bool IfcRelDefines::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelDefines(this);
}

const std::string &IfcRelDefines::type() {
    return IfcRelDefines::s_type.getName();
}

Step::ClassType IfcRelDefines::getClassType() {
    return IfcRelDefines::s_type;
}

Step::ClassType IfcRelDefines::getType() const {
    return IfcRelDefines::s_type;
}

bool IfcRelDefines::isOfType(Step::ClassType t) {
    return IfcRelDefines::s_type == t ? true : IfcRelationship::isOfType(t);
}

Step::Set< Step::RefPtr< IfcObject > > &IfcRelDefines::getRelatedObjects() {
    if (Step::BaseObject::inited()) {
        return m_relatedObjects;
    }
    else {
        m_relatedObjects.setUnset(true);
        return m_relatedObjects;
    }
}

void IfcRelDefines::release() {
    IfcRelationship::release();
    m_relatedObjects.clear();
}

bool IfcRelDefines::init() {
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
                Step::RefPtr< IfcObject > attr2;
                attr2 = static_cast< IfcObject * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedObjects.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRelDefines::copy(const IfcRelDefines &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcObject > >::const_iterator it_m_relatedObjects;
    IfcRelationship::copy(obj, copyop);
    for (it_m_relatedObjects = obj.m_relatedObjects.begin(); it_m_relatedObjects != obj.m_relatedObjects.end(); ++it_m_relatedObjects) {
        Step::RefPtr< IfcObject > copyTarget = copyop((*it_m_relatedObjects).get());
        m_relatedObjects.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelDefines::s_type("IfcRelDefines");
IfcRelDefines::Inverted_RelatedObjects_type::Inverted_RelatedObjects_type() {
}

void IfcRelDefines::Inverted_RelatedObjects_type::setOwner(IfcRelDefines *owner) {
    mOwner = owner;
}

void IfcRelDefines::Inverted_RelatedObjects_type::insert(const Step::RefPtr< IfcObject > &value) {
    IfcObject *inverse = const_cast< IfcObject * > (value.get());
    Step::Set< Step::RefPtr< IfcObject > >::insert(value);
    inverse->m_isDefinedBy.insert(mOwner);
}

