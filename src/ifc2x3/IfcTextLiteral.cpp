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

#include "ifc2x3/IfcTextLiteral.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement.h"
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

IfcTextLiteral::IfcTextLiteral(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_literal = Step::getUnset(m_literal);
    m_placement = NULL;
    m_path = IfcTextPath_UNSET;
}

IfcTextLiteral::~IfcTextLiteral() {
}

bool IfcTextLiteral::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTextLiteral(this);
}

const std::string &IfcTextLiteral::type() {
    return IfcTextLiteral::s_type.getName();
}

Step::ClassType IfcTextLiteral::getClassType() {
    return IfcTextLiteral::s_type;
}

Step::ClassType IfcTextLiteral::getType() const {
    return IfcTextLiteral::s_type;
}

bool IfcTextLiteral::isOfType(Step::ClassType t) {
    return IfcTextLiteral::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcPresentableText IfcTextLiteral::getLiteral() {
    if (Step::BaseObject::inited()) {
        return m_literal;
    }
    else {
        return Step::getUnset(m_literal);
    }
}

void IfcTextLiteral::setLiteral(const IfcPresentableText &value) {
    m_literal = value;
}

IfcAxis2Placement *IfcTextLiteral::getPlacement() {
    if (Step::BaseObject::inited()) {
        return m_placement.get();
    }
    else {
        return NULL;
    }
}

void IfcTextLiteral::setPlacement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_placement = value;
}

IfcTextPath IfcTextLiteral::getPath() {
    if (Step::BaseObject::inited()) {
        return m_path;
    }
    else {
        return IfcTextPath_UNSET;
    }
}

void IfcTextLiteral::setPath(IfcTextPath value) {
    m_path = value;
}

void IfcTextLiteral::release() {
    IfcGeometricRepresentationItem::release();
}

bool IfcTextLiteral::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_literal = Step::getUnset(m_literal);
    }
    else {
        m_literal = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placement = NULL;
    }
    else {
        m_placement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_placement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_path = IfcTextPath_UNSET;
    }
    else {
        if (arg == ".LEFT.") {
            m_path = IfcTextPath_LEFT;
        }
        else if (arg == ".RIGHT.") {
            m_path = IfcTextPath_RIGHT;
        }
        else if (arg == ".UP.") {
            m_path = IfcTextPath_UP;
        }
        else if (arg == ".DOWN.") {
            m_path = IfcTextPath_DOWN;
        }
    }
    return true;
}

void IfcTextLiteral::copy(const IfcTextLiteral &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setLiteral(obj.m_literal);
    m_placement = new IfcAxis2Placement;
    m_placement->copy(*(obj.m_placement.get()), copyop);
    setPath(obj.m_path);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextLiteral::s_type("IfcTextLiteral");
