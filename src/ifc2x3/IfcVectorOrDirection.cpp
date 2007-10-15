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

#include "ifc2x3/IfcVectorOrDirection.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcVector.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcVectorOrDirection::IfcVectorOrDirection() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcVectorOrDirection::IfcVectorOrDirection(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcVectorOrDirection::~IfcVectorOrDirection() {
    deleteUnion();
}

bool IfcVectorOrDirection::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcVectorOrDirection(this);
}

bool IfcVectorOrDirection::init() {
    return false;
}

const std::string &IfcVectorOrDirection::type() {
    return IfcVectorOrDirection::s_type.getName();
}

Step::ClassType IfcVectorOrDirection::getClassType() {
    return IfcVectorOrDirection::s_type;
}

Step::ClassType IfcVectorOrDirection::getType() const {
    return IfcVectorOrDirection::s_type;
}

bool IfcVectorOrDirection::isOfType(Step::ClassType t) {
    return IfcVectorOrDirection::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcVectorOrDirection::copy(const IfcVectorOrDirection &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCDIRECTION:
        setIfcDirection(copyop(obj.m_IfcVectorOrDirection_union.m_IfcDirection));
        break;
    case IFCVECTOR:
        setIfcVector(copyop(obj.m_IfcVectorOrDirection_union.m_IfcVector));
        break;
        }
}

char *IfcVectorOrDirection::currentTypeName() {
    switch(m_type) {
    case IFCDIRECTION:
        return "IfcDirection";
        break;
    case IFCVECTOR:
        return "IfcVector";
        break;
    default:
        return "UNSET";
    }
}

IfcVectorOrDirection::IfcVectorOrDirection_select IfcVectorOrDirection::currentType() {
    return m_type;
}

void IfcVectorOrDirection::deleteUnion() {
    switch(m_type) {
    case IFCDIRECTION:
        m_IfcVectorOrDirection_union.m_IfcDirection->unref();
        break;
    case IFCVECTOR:
        m_IfcVectorOrDirection_union.m_IfcVector->unref();
        break;
        }
    m_type = UNSET;
}

IfcDirection *IfcVectorOrDirection::getIfcDirection() {
    return m_IfcVectorOrDirection_union.m_IfcDirection;
}

void IfcVectorOrDirection::setIfcDirection(IfcDirection *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcVectorOrDirection_union.m_IfcDirection = value;
    if (value) {
        value->ref();
        m_type = IFCDIRECTION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDIRECTION;
}

IfcVector *IfcVectorOrDirection::getIfcVector() {
    return m_IfcVectorOrDirection_union.m_IfcVector;
}

void IfcVectorOrDirection::setIfcVector(IfcVector *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcVectorOrDirection_union.m_IfcVector = value;
    if (value) {
        value->ref();
        m_type = IFCVECTOR;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCVECTOR;
}

void IfcVectorOrDirection::set(Step::BaseObject *v) {
    if (v->isOfType(IfcDirection::getClassType())) {
        setIfcDirection(static_cast< IfcDirection* > (v));
    }
    else if (v->isOfType(IfcVector::getClassType())) {
        setIfcVector(static_cast< IfcVector* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcVectorOrDirection::s_type("IfcVectorOrDirection");
