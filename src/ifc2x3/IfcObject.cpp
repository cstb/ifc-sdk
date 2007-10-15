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

#include "ifc2x3/IfcObject.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObjectDefinition.h"
#include "ifc2x3/IfcRelDefines.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcObject::IfcObject(Step::Id id, Step::SPFData *args) : IfcObjectDefinition(id, args) {
    m_objectType = Step::getUnset(m_objectType);
    m_isDefinedBy.setUnset(true);
}

IfcObject::~IfcObject() {
}

bool IfcObject::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcObject(this);
}

const std::string &IfcObject::type() {
    return IfcObject::s_type.getName();
}

Step::ClassType IfcObject::getClassType() {
    return IfcObject::s_type;
}

Step::ClassType IfcObject::getType() const {
    return IfcObject::s_type;
}

bool IfcObject::isOfType(Step::ClassType t) {
    return IfcObject::s_type == t ? true : IfcObjectDefinition::isOfType(t);
}

IfcLabel IfcObject::getObjectType() {
    if (Step::BaseObject::inited()) {
        return m_objectType;
    }
    else {
        return Step::getUnset(m_objectType);
    }
}

void IfcObject::setObjectType(const IfcLabel &value) {
    m_objectType = value;
}

Step::Set< Step::ObsPtr< IfcRelDefines > > &IfcObject::getIsDefinedBy() {
    if (Step::BaseObject::inited()) {
        return m_isDefinedBy;
    }
    else {
        m_isDefinedBy.setUnset(true);
        return m_isDefinedBy;
    }
}

void IfcObject::release() {
    IfcObjectDefinition::release();
}

bool IfcObject::init() {
    bool status = IfcObjectDefinition::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_objectType = Step::getUnset(m_objectType);
    }
    else {
        m_objectType = Step::spfToString(arg);
    }
    inverses = m_args->getInverses(IfcRelDefines::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_isDefinedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isDefinedBy.insert(static_cast< IfcRelDefines * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcObject::copy(const IfcObject &obj, const CopyOp &copyop) {
    IfcObjectDefinition::copy(obj, copyop);
    setObjectType(obj.m_objectType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcObject::s_type("IfcObject");
