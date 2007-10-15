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

#include "ifc2x3/IfcTypeObject.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObjectDefinition.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcRelDefinesByType.h"
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
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTypeObject::IfcTypeObject(Step::Id id, Step::SPFData *args) : IfcObjectDefinition(id, args) {
    m_applicableOccurrence = Step::getUnset(m_applicableOccurrence);
    m_hasPropertySets.setUnset(true);
    m_hasPropertySets.setOwner(this);
    m_objectTypeOf.setUnset(true);
}

IfcTypeObject::~IfcTypeObject() {
}

bool IfcTypeObject::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTypeObject(this);
}

const std::string &IfcTypeObject::type() {
    return IfcTypeObject::s_type.getName();
}

Step::ClassType IfcTypeObject::getClassType() {
    return IfcTypeObject::s_type;
}

Step::ClassType IfcTypeObject::getType() const {
    return IfcTypeObject::s_type;
}

bool IfcTypeObject::isOfType(Step::ClassType t) {
    return IfcTypeObject::s_type == t ? true : IfcObjectDefinition::isOfType(t);
}

IfcLabel IfcTypeObject::getApplicableOccurrence() {
    if (Step::BaseObject::inited()) {
        return m_applicableOccurrence;
    }
    else {
        return Step::getUnset(m_applicableOccurrence);
    }
}

void IfcTypeObject::setApplicableOccurrence(const IfcLabel &value) {
    m_applicableOccurrence = value;
}

Step::Set< Step::RefPtr< IfcPropertySetDefinition > > &IfcTypeObject::getHasPropertySets() {
    if (Step::BaseObject::inited()) {
        return m_hasPropertySets;
    }
    else {
        m_hasPropertySets.setUnset(true);
        return m_hasPropertySets;
    }
}

Step::Set< Step::ObsPtr< IfcRelDefinesByType > > &IfcTypeObject::getObjectTypeOf() {
    if (Step::BaseObject::inited()) {
        return m_objectTypeOf;
    }
    else {
        m_objectTypeOf.setUnset(true);
        return m_objectTypeOf;
    }
}

void IfcTypeObject::release() {
    IfcObjectDefinition::release();
    m_hasPropertySets.clear();
}

bool IfcTypeObject::init() {
    bool status = IfcObjectDefinition::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicableOccurrence = Step::getUnset(m_applicableOccurrence);
    }
    else {
        m_applicableOccurrence = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hasPropertySets.setUnset(true);
    }
    else {
        m_hasPropertySets.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcPropertySetDefinition > attr2;
                attr2 = static_cast< IfcPropertySetDefinition * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_hasPropertySets.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    inverses = m_args->getInverses(IfcRelDefinesByType::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_objectTypeOf.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_objectTypeOf.insert(static_cast< IfcRelDefinesByType * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcTypeObject::copy(const IfcTypeObject &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPropertySetDefinition > >::const_iterator it_m_hasPropertySets;
    IfcObjectDefinition::copy(obj, copyop);
    setApplicableOccurrence(obj.m_applicableOccurrence);
    for (it_m_hasPropertySets = obj.m_hasPropertySets.begin(); it_m_hasPropertySets != obj.m_hasPropertySets.end(); ++it_m_hasPropertySets) {
        Step::RefPtr< IfcPropertySetDefinition > copyTarget = copyop((*it_m_hasPropertySets).get());
        m_hasPropertySets.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTypeObject::s_type("IfcTypeObject");
IfcTypeObject::Inverted_HasPropertySets_type::Inverted_HasPropertySets_type() {
}

void IfcTypeObject::Inverted_HasPropertySets_type::setOwner(IfcTypeObject *owner) {
    mOwner = owner;
}

void IfcTypeObject::Inverted_HasPropertySets_type::insert(const Step::RefPtr< IfcPropertySetDefinition > &value) {
    IfcPropertySetDefinition *inverse = const_cast< IfcPropertySetDefinition * > (value.get());
    Step::Set< Step::RefPtr< IfcPropertySetDefinition > >::insert(value);
    inverse->m_definesType.insert(mOwner);
}

