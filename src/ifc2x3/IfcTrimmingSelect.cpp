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

#include "ifc2x3/IfcTrimmingSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTrimmingSelect::IfcTrimmingSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcTrimmingSelect::IfcTrimmingSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcTrimmingSelect::~IfcTrimmingSelect() {
    deleteUnion();
}

bool IfcTrimmingSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTrimmingSelect(this);
}

bool IfcTrimmingSelect::init() {
    return false;
}

const std::string &IfcTrimmingSelect::type() {
    return IfcTrimmingSelect::s_type.getName();
}

Step::ClassType IfcTrimmingSelect::getClassType() {
    return IfcTrimmingSelect::s_type;
}

Step::ClassType IfcTrimmingSelect::getType() const {
    return IfcTrimmingSelect::s_type;
}

bool IfcTrimmingSelect::isOfType(Step::ClassType t) {
    return IfcTrimmingSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcTrimmingSelect::copy(const IfcTrimmingSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCARTESIANPOINT:
        setIfcCartesianPoint(copyop(obj.m_IfcTrimmingSelect_union.m_IfcCartesianPoint));
        break;
    case IFCPARAMETERVALUE:
        setIfcParameterValue(obj.m_IfcTrimmingSelect_union.m_IfcParameterValue);
        break;
        }
}

char *IfcTrimmingSelect::currentTypeName() {
    switch(m_type) {
    case IFCCARTESIANPOINT:
        return "IfcCartesianPoint";
        break;
    case IFCPARAMETERVALUE:
        return "IfcParameterValue";
        break;
    default:
        return "UNSET";
    }
}

IfcTrimmingSelect::IfcTrimmingSelect_select IfcTrimmingSelect::currentType() {
    return m_type;
}

void IfcTrimmingSelect::deleteUnion() {
    switch(m_type) {
    case IFCCARTESIANPOINT:
        m_IfcTrimmingSelect_union.m_IfcCartesianPoint->unref();
        break;
        }
    m_type = UNSET;
}

IfcCartesianPoint *IfcTrimmingSelect::getIfcCartesianPoint() {
    return m_IfcTrimmingSelect_union.m_IfcCartesianPoint;
}

void IfcTrimmingSelect::setIfcCartesianPoint(IfcCartesianPoint *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcTrimmingSelect_union.m_IfcCartesianPoint = value;
    if (value) {
        value->ref();
        m_type = IFCCARTESIANPOINT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCARTESIANPOINT;
}

IfcParameterValue IfcTrimmingSelect::getIfcParameterValue() {
    return m_IfcTrimmingSelect_union.m_IfcParameterValue;
}

void IfcTrimmingSelect::setIfcParameterValue(IfcParameterValue value) {
    deleteUnion();
    m_IfcTrimmingSelect_union.m_IfcParameterValue = value;
    m_type = IFCPARAMETERVALUE;
}

void IfcTrimmingSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcCartesianPoint::getClassType())) {
        setIfcCartesianPoint(static_cast< IfcCartesianPoint* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcTrimmingSelect::s_type("IfcTrimmingSelect");
