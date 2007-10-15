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

#include "ifc2x3/IfcPointOrVertexPoint.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPoint.h"
#include "ifc2x3/IfcVertexPoint.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPointOrVertexPoint::IfcPointOrVertexPoint() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcPointOrVertexPoint::IfcPointOrVertexPoint(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcPointOrVertexPoint::~IfcPointOrVertexPoint() {
    deleteUnion();
}

bool IfcPointOrVertexPoint::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPointOrVertexPoint(this);
}

bool IfcPointOrVertexPoint::init() {
    return false;
}

const std::string &IfcPointOrVertexPoint::type() {
    return IfcPointOrVertexPoint::s_type.getName();
}

Step::ClassType IfcPointOrVertexPoint::getClassType() {
    return IfcPointOrVertexPoint::s_type;
}

Step::ClassType IfcPointOrVertexPoint::getType() const {
    return IfcPointOrVertexPoint::s_type;
}

bool IfcPointOrVertexPoint::isOfType(Step::ClassType t) {
    return IfcPointOrVertexPoint::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcPointOrVertexPoint::copy(const IfcPointOrVertexPoint &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCPOINT:
        setIfcPoint(copyop(obj.m_IfcPointOrVertexPoint_union.m_IfcPoint));
        break;
    case IFCVERTEXPOINT:
        setIfcVertexPoint(copyop(obj.m_IfcPointOrVertexPoint_union.m_IfcVertexPoint));
        break;
        }
}

char *IfcPointOrVertexPoint::currentTypeName() {
    switch(m_type) {
    case IFCPOINT:
        return "IfcPoint";
        break;
    case IFCVERTEXPOINT:
        return "IfcVertexPoint";
        break;
    default:
        return "UNSET";
    }
}

IfcPointOrVertexPoint::IfcPointOrVertexPoint_select IfcPointOrVertexPoint::currentType() {
    return m_type;
}

void IfcPointOrVertexPoint::deleteUnion() {
    switch(m_type) {
    case IFCPOINT:
        m_IfcPointOrVertexPoint_union.m_IfcPoint->unref();
        break;
    case IFCVERTEXPOINT:
        m_IfcPointOrVertexPoint_union.m_IfcVertexPoint->unref();
        break;
        }
    m_type = UNSET;
}

IfcPoint *IfcPointOrVertexPoint::getIfcPoint() {
    return m_IfcPointOrVertexPoint_union.m_IfcPoint;
}

void IfcPointOrVertexPoint::setIfcPoint(IfcPoint *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcPointOrVertexPoint_union.m_IfcPoint = value;
    if (value) {
        value->ref();
        m_type = IFCPOINT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPOINT;
}

IfcVertexPoint *IfcPointOrVertexPoint::getIfcVertexPoint() {
    return m_IfcPointOrVertexPoint_union.m_IfcVertexPoint;
}

void IfcPointOrVertexPoint::setIfcVertexPoint(IfcVertexPoint *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcPointOrVertexPoint_union.m_IfcVertexPoint = value;
    if (value) {
        value->ref();
        m_type = IFCVERTEXPOINT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCVERTEXPOINT;
}

void IfcPointOrVertexPoint::set(Step::BaseObject *v) {
    if (v->isOfType(IfcPoint::getClassType())) {
        setIfcPoint(static_cast< IfcPoint* > (v));
    }
    else if (v->isOfType(IfcVertexPoint::getClassType())) {
        setIfcVertexPoint(static_cast< IfcVertexPoint* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcPointOrVertexPoint::s_type("IfcPointOrVertexPoint");
