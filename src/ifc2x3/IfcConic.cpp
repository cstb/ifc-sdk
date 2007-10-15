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

#include "ifc2x3/IfcConic.h"

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

IfcConic::IfcConic(Step::Id id, Step::SPFData *args) : IfcCurve(id, args) {
    m_position = NULL;
}

IfcConic::~IfcConic() {
}

bool IfcConic::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcConic(this);
}

const std::string &IfcConic::type() {
    return IfcConic::s_type.getName();
}

Step::ClassType IfcConic::getClassType() {
    return IfcConic::s_type;
}

Step::ClassType IfcConic::getType() const {
    return IfcConic::s_type;
}

bool IfcConic::isOfType(Step::ClassType t) {
    return IfcConic::s_type == t ? true : IfcCurve::isOfType(t);
}

IfcAxis2Placement *IfcConic::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

void IfcConic::setPosition(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_position = value;
}

void IfcConic::release() {
    IfcCurve::release();
}

bool IfcConic::init() {
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
    return true;
}

void IfcConic::copy(const IfcConic &obj, const CopyOp &copyop) {
    IfcCurve::copy(obj, copyop);
    m_position = new IfcAxis2Placement;
    m_position->copy(*(obj.m_position.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConic::s_type("IfcConic");
