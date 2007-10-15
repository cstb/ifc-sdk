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

#include "ifc2x3/IfcCartesianTransformationOperator3D.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianTransformationOperator.h"
#include "ifc2x3/IfcDirection.h"
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

IfcCartesianTransformationOperator3D::IfcCartesianTransformationOperator3D(Step::Id id, Step::SPFData *args) : IfcCartesianTransformationOperator(id, args) {
    m_axis3 = NULL;
}

IfcCartesianTransformationOperator3D::~IfcCartesianTransformationOperator3D() {
}

bool IfcCartesianTransformationOperator3D::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCartesianTransformationOperator3D(this);
}

const std::string &IfcCartesianTransformationOperator3D::type() {
    return IfcCartesianTransformationOperator3D::s_type.getName();
}

Step::ClassType IfcCartesianTransformationOperator3D::getClassType() {
    return IfcCartesianTransformationOperator3D::s_type;
}

Step::ClassType IfcCartesianTransformationOperator3D::getType() const {
    return IfcCartesianTransformationOperator3D::s_type;
}

bool IfcCartesianTransformationOperator3D::isOfType(Step::ClassType t) {
    return IfcCartesianTransformationOperator3D::s_type == t ? true : IfcCartesianTransformationOperator::isOfType(t);
}

IfcDirection *IfcCartesianTransformationOperator3D::getAxis3() {
    if (Step::BaseObject::inited()) {
        return m_axis3.get();
    }
    else {
        return NULL;
    }
}

void IfcCartesianTransformationOperator3D::setAxis3(const Step::RefPtr< IfcDirection > &value) {
    m_axis3 = value;
}

void IfcCartesianTransformationOperator3D::release() {
    IfcCartesianTransformationOperator::release();
    m_axis3.release();
}

bool IfcCartesianTransformationOperator3D::init() {
    bool status = IfcCartesianTransformationOperator::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis3 = NULL;
    }
    else {
        m_axis3 = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcCartesianTransformationOperator3D::copy(const IfcCartesianTransformationOperator3D &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator::copy(obj, copyop);
    setAxis3(copyop(obj.m_axis3.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianTransformationOperator3D::s_type("IfcCartesianTransformationOperator3D");
