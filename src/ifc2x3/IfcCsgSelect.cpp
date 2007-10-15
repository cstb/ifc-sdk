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

#include "ifc2x3/IfcCsgSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBooleanResult.h"
#include "ifc2x3/IfcCsgPrimitive3D.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCsgSelect::IfcCsgSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcCsgSelect::IfcCsgSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcCsgSelect::~IfcCsgSelect() {
    deleteUnion();
}

bool IfcCsgSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCsgSelect(this);
}

bool IfcCsgSelect::init() {
    return false;
}

const std::string &IfcCsgSelect::type() {
    return IfcCsgSelect::s_type.getName();
}

Step::ClassType IfcCsgSelect::getClassType() {
    return IfcCsgSelect::s_type;
}

Step::ClassType IfcCsgSelect::getType() const {
    return IfcCsgSelect::s_type;
}

bool IfcCsgSelect::isOfType(Step::ClassType t) {
    return IfcCsgSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcCsgSelect::copy(const IfcCsgSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCBOOLEANRESULT:
        setIfcBooleanResult(copyop(obj.m_IfcCsgSelect_union.m_IfcBooleanResult));
        break;
    case IFCCSGPRIMITIVE3D:
        setIfcCsgPrimitive3D(copyop(obj.m_IfcCsgSelect_union.m_IfcCsgPrimitive3D));
        break;
        }
}

char *IfcCsgSelect::currentTypeName() {
    switch(m_type) {
    case IFCBOOLEANRESULT:
        return "IfcBooleanResult";
        break;
    case IFCCSGPRIMITIVE3D:
        return "IfcCsgPrimitive3D";
        break;
    default:
        return "UNSET";
    }
}

IfcCsgSelect::IfcCsgSelect_select IfcCsgSelect::currentType() {
    return m_type;
}

void IfcCsgSelect::deleteUnion() {
    switch(m_type) {
    case IFCBOOLEANRESULT:
        m_IfcCsgSelect_union.m_IfcBooleanResult->unref();
        break;
    case IFCCSGPRIMITIVE3D:
        m_IfcCsgSelect_union.m_IfcCsgPrimitive3D->unref();
        break;
        }
    m_type = UNSET;
}

IfcBooleanResult *IfcCsgSelect::getIfcBooleanResult() {
    return m_IfcCsgSelect_union.m_IfcBooleanResult;
}

void IfcCsgSelect::setIfcBooleanResult(IfcBooleanResult *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcCsgSelect_union.m_IfcBooleanResult = value;
    if (value) {
        value->ref();
        m_type = IFCBOOLEANRESULT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCBOOLEANRESULT;
}

IfcCsgPrimitive3D *IfcCsgSelect::getIfcCsgPrimitive3D() {
    return m_IfcCsgSelect_union.m_IfcCsgPrimitive3D;
}

void IfcCsgSelect::setIfcCsgPrimitive3D(IfcCsgPrimitive3D *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcCsgSelect_union.m_IfcCsgPrimitive3D = value;
    if (value) {
        value->ref();
        m_type = IFCCSGPRIMITIVE3D;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCSGPRIMITIVE3D;
}

void IfcCsgSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcBooleanResult::getClassType())) {
        setIfcBooleanResult(static_cast< IfcBooleanResult* > (v));
    }
    else if (v->isOfType(IfcCsgPrimitive3D::getClassType())) {
        setIfcCsgPrimitive3D(static_cast< IfcCsgPrimitive3D* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcCsgSelect::s_type("IfcCsgSelect");
