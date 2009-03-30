/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
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

bool IfcVectorOrDirection::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcVectorOrDirection(this);
}

bool IfcVectorOrDirection::init() {
    return false;
}

const std::string &IfcVectorOrDirection::type() const {
    return IfcVectorOrDirection::s_type.getName();
}

const Step::ClassType &IfcVectorOrDirection::getClassType() {
    return IfcVectorOrDirection::s_type;
}

const Step::ClassType &IfcVectorOrDirection::getType() const {
    return IfcVectorOrDirection::s_type;
}

bool IfcVectorOrDirection::isOfType(const Step::ClassType &t) const {
    return IfcVectorOrDirection::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcVectorOrDirection::copy(const IfcVectorOrDirection &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCDIRECTION:
        setIfcDirection((IfcDirection *) (copyop(obj.m_IfcVectorOrDirection_union.m_IfcDirection)));
        break;
    case IFCVECTOR:
        setIfcVector((IfcVector *) (copyop(obj.m_IfcVectorOrDirection_union.m_IfcVector)));
        break;
        }
}

std::string IfcVectorOrDirection::currentTypeName() const {
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

IfcVectorOrDirection::IfcVectorOrDirection_select IfcVectorOrDirection::currentType() const {
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

IfcDirection *IfcVectorOrDirection::getIfcDirection() const {
    if (m_type == IFCDIRECTION) {
        return m_IfcVectorOrDirection_union.m_IfcDirection;
    }
    else {
        return NULL;
    }
}

void IfcVectorOrDirection::setIfcDirection(IfcDirection *value) {
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

IfcVector *IfcVectorOrDirection::getIfcVector() const {
    if (m_type == IFCVECTOR) {
        return m_IfcVectorOrDirection_union.m_IfcVector;
    }
    else {
        return NULL;
    }
}

void IfcVectorOrDirection::setIfcVector(IfcVector *value) {
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
