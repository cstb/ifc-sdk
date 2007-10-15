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

#include "ifc2x3/IfcDerivedProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianTransformationOperator2D.h"
#include "ifc2x3/IfcProfileDef.h"
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

IfcDerivedProfileDef::IfcDerivedProfileDef(Step::Id id, Step::SPFData *args) : IfcProfileDef(id, args) {
    m_parentProfile = NULL;
    m_operator = NULL;
    m_label = Step::getUnset(m_label);
}

IfcDerivedProfileDef::~IfcDerivedProfileDef() {
}

bool IfcDerivedProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDerivedProfileDef(this);
}

const std::string &IfcDerivedProfileDef::type() {
    return IfcDerivedProfileDef::s_type.getName();
}

Step::ClassType IfcDerivedProfileDef::getClassType() {
    return IfcDerivedProfileDef::s_type;
}

Step::ClassType IfcDerivedProfileDef::getType() const {
    return IfcDerivedProfileDef::s_type;
}

bool IfcDerivedProfileDef::isOfType(Step::ClassType t) {
    return IfcDerivedProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcProfileDef *IfcDerivedProfileDef::getParentProfile() {
    if (Step::BaseObject::inited()) {
        return m_parentProfile.get();
    }
    else {
        return NULL;
    }
}

void IfcDerivedProfileDef::setParentProfile(const Step::RefPtr< IfcProfileDef > &value) {
    m_parentProfile = value;
}

IfcCartesianTransformationOperator2D *IfcDerivedProfileDef::getOperator() {
    if (Step::BaseObject::inited()) {
        return m_operator.get();
    }
    else {
        return NULL;
    }
}

void IfcDerivedProfileDef::setOperator(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value) {
    m_operator = value;
}

IfcLabel IfcDerivedProfileDef::getLabel() {
    if (Step::BaseObject::inited()) {
        return m_label;
    }
    else {
        return Step::getUnset(m_label);
    }
}

void IfcDerivedProfileDef::setLabel(const IfcLabel &value) {
    m_label = value;
}

void IfcDerivedProfileDef::release() {
    IfcProfileDef::release();
    m_parentProfile.release();
    m_operator.release();
}

bool IfcDerivedProfileDef::init() {
    bool status = IfcProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parentProfile = NULL;
    }
    else {
        m_parentProfile = static_cast< IfcProfileDef * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operator = NULL;
    }
    else {
        m_operator = static_cast< IfcCartesianTransformationOperator2D * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_label = Step::getUnset(m_label);
    }
    else {
        m_label = Step::spfToString(arg);
    }
    return true;
}

void IfcDerivedProfileDef::copy(const IfcDerivedProfileDef &obj, const CopyOp &copyop) {
    IfcProfileDef::copy(obj, copyop);
    setParentProfile(copyop(obj.m_parentProfile.get()));
    setOperator(copyop(obj.m_operator.get()));
    setLabel(obj.m_label);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDerivedProfileDef::s_type("IfcDerivedProfileDef");
