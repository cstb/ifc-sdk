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

#include "ifc2x3/IfcClothoid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcClothoid::IfcClothoid(Step::Id id, Step::SPFData *args) : IfcCurve(id, args) {
    m_position = NULL;
    m_clothoidConstant = Step::getUnset(m_clothoidConstant);
}

IfcClothoid::~IfcClothoid() {
}

bool IfcClothoid::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcClothoid(this);
}

const std::string &IfcClothoid::type() {
    return IfcClothoid::s_type.getName();
}

Step::ClassType IfcClothoid::getClassType() {
    return IfcClothoid::s_type;
}

Step::ClassType IfcClothoid::getType() const {
    return IfcClothoid::s_type;
}

bool IfcClothoid::isOfType(Step::ClassType t) {
    return IfcClothoid::s_type == t ? true : IfcCurve::isOfType(t);
}

IfcAxis2Placement *IfcClothoid::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

void IfcClothoid::setPosition(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_position = value;
}

IfcLengthMeasure IfcClothoid::getClothoidConstant() {
    if (Step::BaseObject::inited()) {
        return m_clothoidConstant;
    }
    else {
        return Step::getUnset(m_clothoidConstant);
    }
}

void IfcClothoid::setClothoidConstant(IfcLengthMeasure value) {
    m_clothoidConstant = value;
}

void IfcClothoid::release() {
    IfcCurve::release();
}

bool IfcClothoid::init() {
    bool status = IfcCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_position->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_clothoidConstant = Step::getUnset(m_clothoidConstant);
    }
    else {
        m_clothoidConstant = Step::spfToReal(arg);
    }
    return true;
}

void IfcClothoid::copy(const IfcClothoid &obj, const CopyOp &copyop) {
    IfcCurve::copy(obj, copyop);
    m_position = new IfcAxis2Placement;
    m_position->copy(*(obj.m_position.get()), copyop);
    setClothoidConstant(obj.m_clothoidConstant);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcClothoid::s_type("IfcClothoid");
