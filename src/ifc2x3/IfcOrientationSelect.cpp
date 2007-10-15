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

#include "ifc2x3/IfcOrientationSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcOrientationSelect::IfcOrientationSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcOrientationSelect::IfcOrientationSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcOrientationSelect::~IfcOrientationSelect() {
    deleteUnion();
}

bool IfcOrientationSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOrientationSelect(this);
}

bool IfcOrientationSelect::init() {
    return false;
}

const std::string &IfcOrientationSelect::type() {
    return IfcOrientationSelect::s_type.getName();
}

Step::ClassType IfcOrientationSelect::getClassType() {
    return IfcOrientationSelect::s_type;
}

Step::ClassType IfcOrientationSelect::getType() const {
    return IfcOrientationSelect::s_type;
}

bool IfcOrientationSelect::isOfType(Step::ClassType t) {
    return IfcOrientationSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcOrientationSelect::copy(const IfcOrientationSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCPLANEANGLEMEASURE:
        setIfcPlaneAngleMeasure(obj.m_IfcOrientationSelect_union.m_IfcPlaneAngleMeasure);
        break;
    case IFCDIRECTION:
        setIfcDirection(copyop(obj.m_IfcOrientationSelect_union.m_IfcDirection));
        break;
        }
}

char *IfcOrientationSelect::currentTypeName() {
    switch(m_type) {
    case IFCPLANEANGLEMEASURE:
        return "IfcPlaneAngleMeasure";
        break;
    case IFCDIRECTION:
        return "IfcDirection";
        break;
    default:
        return "UNSET";
    }
}

IfcOrientationSelect::IfcOrientationSelect_select IfcOrientationSelect::currentType() {
    return m_type;
}

void IfcOrientationSelect::deleteUnion() {
    switch(m_type) {
    case IFCDIRECTION:
        m_IfcOrientationSelect_union.m_IfcDirection->unref();
        break;
        }
    m_type = UNSET;
}

IfcPlaneAngleMeasure IfcOrientationSelect::getIfcPlaneAngleMeasure() {
    return m_IfcOrientationSelect_union.m_IfcPlaneAngleMeasure;
}

void IfcOrientationSelect::setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value) {
    deleteUnion();
    m_IfcOrientationSelect_union.m_IfcPlaneAngleMeasure = value;
    m_type = IFCPLANEANGLEMEASURE;
}

IfcDirection *IfcOrientationSelect::getIfcDirection() {
    return m_IfcOrientationSelect_union.m_IfcDirection;
}

void IfcOrientationSelect::setIfcDirection(IfcDirection *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcOrientationSelect_union.m_IfcDirection = value;
    if (value) {
        value->ref();
        m_type = IFCDIRECTION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDIRECTION;
}

void IfcOrientationSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcDirection::getClassType())) {
        setIfcDirection(static_cast< IfcDirection* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcOrientationSelect::s_type("IfcOrientationSelect");
