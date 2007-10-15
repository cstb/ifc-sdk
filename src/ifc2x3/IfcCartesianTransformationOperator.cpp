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

#include "ifc2x3/IfcCartesianTransformationOperator.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCartesianTransformationOperator::IfcCartesianTransformationOperator(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_axis1 = NULL;
    m_axis2 = NULL;
    m_localOrigin = NULL;
    m_scale = Step::getUnset(m_scale);
}

IfcCartesianTransformationOperator::~IfcCartesianTransformationOperator() {
}

bool IfcCartesianTransformationOperator::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCartesianTransformationOperator(this);
}

const std::string &IfcCartesianTransformationOperator::type() {
    return IfcCartesianTransformationOperator::s_type.getName();
}

Step::ClassType IfcCartesianTransformationOperator::getClassType() {
    return IfcCartesianTransformationOperator::s_type;
}

Step::ClassType IfcCartesianTransformationOperator::getType() const {
    return IfcCartesianTransformationOperator::s_type;
}

bool IfcCartesianTransformationOperator::isOfType(Step::ClassType t) {
    return IfcCartesianTransformationOperator::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcDirection *IfcCartesianTransformationOperator::getAxis1() {
    if (Step::BaseObject::inited()) {
        return m_axis1.get();
    }
    else {
        return NULL;
    }
}

void IfcCartesianTransformationOperator::setAxis1(const Step::RefPtr< IfcDirection > &value) {
    m_axis1 = value;
}

IfcDirection *IfcCartesianTransformationOperator::getAxis2() {
    if (Step::BaseObject::inited()) {
        return m_axis2.get();
    }
    else {
        return NULL;
    }
}

void IfcCartesianTransformationOperator::setAxis2(const Step::RefPtr< IfcDirection > &value) {
    m_axis2 = value;
}

IfcCartesianPoint *IfcCartesianTransformationOperator::getLocalOrigin() {
    if (Step::BaseObject::inited()) {
        return m_localOrigin.get();
    }
    else {
        return NULL;
    }
}

void IfcCartesianTransformationOperator::setLocalOrigin(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_localOrigin = value;
}

Step::Real IfcCartesianTransformationOperator::getScale() {
    if (Step::BaseObject::inited()) {
        return m_scale;
    }
    else {
        return Step::getUnset(m_scale);
    }
}

void IfcCartesianTransformationOperator::setScale(Step::Real value) {
    m_scale = value;
}

void IfcCartesianTransformationOperator::release() {
    IfcGeometricRepresentationItem::release();
    m_axis1.release();
    m_axis2.release();
    m_localOrigin.release();
}

bool IfcCartesianTransformationOperator::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis1 = NULL;
    }
    else {
        m_axis1 = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis2 = NULL;
    }
    else {
        m_axis2 = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_localOrigin = NULL;
    }
    else {
        m_localOrigin = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scale = Step::getUnset(m_scale);
    }
    else {
        m_scale = Step::spfToReal(arg);
    }
    return true;
}

void IfcCartesianTransformationOperator::copy(const IfcCartesianTransformationOperator &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setAxis1(copyop(obj.m_axis1.get()));
    setAxis2(copyop(obj.m_axis2.get()));
    setLocalOrigin(copyop(obj.m_localOrigin.get()));
    setScale(obj.m_scale);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianTransformationOperator::s_type("IfcCartesianTransformationOperator");
