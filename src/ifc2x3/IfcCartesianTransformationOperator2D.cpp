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

#include "ifc2x3/IfcCartesianTransformationOperator2D.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianTransformationOperator.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCartesianTransformationOperator2D::IfcCartesianTransformationOperator2D(Step::Id id, Step::SPFData *args) : IfcCartesianTransformationOperator(id, args) {
}

IfcCartesianTransformationOperator2D::~IfcCartesianTransformationOperator2D() {
}

bool IfcCartesianTransformationOperator2D::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCartesianTransformationOperator2D(this);
}

const std::string &IfcCartesianTransformationOperator2D::type() {
    return IfcCartesianTransformationOperator2D::s_type.getName();
}

Step::ClassType IfcCartesianTransformationOperator2D::getClassType() {
    return IfcCartesianTransformationOperator2D::s_type;
}

Step::ClassType IfcCartesianTransformationOperator2D::getType() const {
    return IfcCartesianTransformationOperator2D::s_type;
}

bool IfcCartesianTransformationOperator2D::isOfType(Step::ClassType t) {
    return IfcCartesianTransformationOperator2D::s_type == t ? true : IfcCartesianTransformationOperator::isOfType(t);
}

void IfcCartesianTransformationOperator2D::release() {
    IfcCartesianTransformationOperator::release();
}

bool IfcCartesianTransformationOperator2D::init() {
    bool status = IfcCartesianTransformationOperator::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCartesianTransformationOperator2D::copy(const IfcCartesianTransformationOperator2D &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianTransformationOperator2D::s_type("IfcCartesianTransformationOperator2D");
