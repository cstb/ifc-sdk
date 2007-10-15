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

#include "ifc2x3/IfcBooleanResult.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBooleanOperand.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
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

IfcBooleanResult::IfcBooleanResult(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_operator = IfcBooleanOperator_UNSET;
    m_firstOperand = NULL;
    m_secondOperand = NULL;
}

IfcBooleanResult::~IfcBooleanResult() {
}

bool IfcBooleanResult::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBooleanResult(this);
}

const std::string &IfcBooleanResult::type() {
    return IfcBooleanResult::s_type.getName();
}

Step::ClassType IfcBooleanResult::getClassType() {
    return IfcBooleanResult::s_type;
}

Step::ClassType IfcBooleanResult::getType() const {
    return IfcBooleanResult::s_type;
}

bool IfcBooleanResult::isOfType(Step::ClassType t) {
    return IfcBooleanResult::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcBooleanOperator IfcBooleanResult::getOperator() {
    if (Step::BaseObject::inited()) {
        return m_operator;
    }
    else {
        return IfcBooleanOperator_UNSET;
    }
}

void IfcBooleanResult::setOperator(IfcBooleanOperator value) {
    m_operator = value;
}

IfcBooleanOperand *IfcBooleanResult::getFirstOperand() {
    if (Step::BaseObject::inited()) {
        return m_firstOperand.get();
    }
    else {
        return NULL;
    }
}

void IfcBooleanResult::setFirstOperand(const Step::RefPtr< IfcBooleanOperand > &value) {
    m_firstOperand = value;
}

IfcBooleanOperand *IfcBooleanResult::getSecondOperand() {
    if (Step::BaseObject::inited()) {
        return m_secondOperand.get();
    }
    else {
        return NULL;
    }
}

void IfcBooleanResult::setSecondOperand(const Step::RefPtr< IfcBooleanOperand > &value) {
    m_secondOperand = value;
}

void IfcBooleanResult::release() {
    IfcGeometricRepresentationItem::release();
}

bool IfcBooleanResult::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operator = IfcBooleanOperator_UNSET;
    }
    else {
        if (arg == ".UNION.") {
            m_operator = IfcBooleanOperator_UNION;
        }
        else if (arg == ".INTERSECTION.") {
            m_operator = IfcBooleanOperator_INTERSECTION;
        }
        else if (arg == ".DIFFERENCE.") {
            m_operator = IfcBooleanOperator_DIFFERENCE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_firstOperand = NULL;
    }
    else {
        m_firstOperand = new IfcBooleanOperand;
        if (arg[0] == '#') {
            m_firstOperand->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_secondOperand = NULL;
    }
    else {
        m_secondOperand = new IfcBooleanOperand;
        if (arg[0] == '#') {
            m_secondOperand->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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

void IfcBooleanResult::copy(const IfcBooleanResult &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setOperator(obj.m_operator);
    m_firstOperand = new IfcBooleanOperand;
    m_firstOperand->copy(*(obj.m_firstOperand.get()), copyop);
    m_secondOperand = new IfcBooleanOperand;
    m_secondOperand->copy(*(obj.m_secondOperand.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBooleanResult::s_type("IfcBooleanResult");
