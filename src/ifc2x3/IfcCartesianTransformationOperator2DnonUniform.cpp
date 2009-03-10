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
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianTransformationOperator2D.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCartesianTransformationOperator2DnonUniform::IfcCartesianTransformationOperator2DnonUniform(Step::Id id, Step::SPFData *args) : IfcCartesianTransformationOperator2D(id, args) {
    m_scale2 = Step::getUnset(m_scale2);
}

IfcCartesianTransformationOperator2DnonUniform::~IfcCartesianTransformationOperator2DnonUniform() {
}

bool IfcCartesianTransformationOperator2DnonUniform::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCartesianTransformationOperator2DnonUniform(this);
}

const std::string &IfcCartesianTransformationOperator2DnonUniform::type() const {
    return IfcCartesianTransformationOperator2DnonUniform::s_type.getName();
}

const Step::ClassType &IfcCartesianTransformationOperator2DnonUniform::getClassType() {
    return IfcCartesianTransformationOperator2DnonUniform::s_type;
}

const Step::ClassType &IfcCartesianTransformationOperator2DnonUniform::getType() const {
    return IfcCartesianTransformationOperator2DnonUniform::s_type;
}

bool IfcCartesianTransformationOperator2DnonUniform::isOfType(const Step::ClassType &t) const {
    return IfcCartesianTransformationOperator2DnonUniform::s_type == t ? true : IfcCartesianTransformationOperator2D::isOfType(t);
}

Step::Real IfcCartesianTransformationOperator2DnonUniform::getScale2() {
    if (Step::BaseObject::inited()) {
        return m_scale2;
    }
    else {
        return Step::getUnset(m_scale2);
    }
}

const Step::Real IfcCartesianTransformationOperator2DnonUniform::getScale2() const {
    IfcCartesianTransformationOperator2DnonUniform * deConstObject = const_cast< IfcCartesianTransformationOperator2DnonUniform * > (this);
    return deConstObject->getScale2();
}

void IfcCartesianTransformationOperator2DnonUniform::setScale2(Step::Real value) {
    m_scale2 = value;
}

bool IfcCartesianTransformationOperator2DnonUniform::init() {
    bool status = IfcCartesianTransformationOperator2D::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scale2 = Step::getUnset(m_scale2);
    }
    else {
        m_scale2 = Step::spfToReal(arg);
    }
    return true;
}

void IfcCartesianTransformationOperator2DnonUniform::copy(const IfcCartesianTransformationOperator2DnonUniform &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator2D::copy(obj, copyop);
    setScale2(obj.m_scale2);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianTransformationOperator2DnonUniform::s_type("IfcCartesianTransformationOperator2DnonUniform");
