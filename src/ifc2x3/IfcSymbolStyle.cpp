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

#include "ifc2x3/IfcSymbolStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPresentationStyle.h"
#include "ifc2x3/IfcSymbolStyleSelect.h"
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

IfcSymbolStyle::IfcSymbolStyle(Step::Id id, Step::SPFData *args) : IfcPresentationStyle(id, args) {
    m_styleOfSymbol = NULL;
}

IfcSymbolStyle::~IfcSymbolStyle() {
}

bool IfcSymbolStyle::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSymbolStyle(this);
}

const std::string &IfcSymbolStyle::type() {
    return IfcSymbolStyle::s_type.getName();
}

Step::ClassType IfcSymbolStyle::getClassType() {
    return IfcSymbolStyle::s_type;
}

Step::ClassType IfcSymbolStyle::getType() const {
    return IfcSymbolStyle::s_type;
}

bool IfcSymbolStyle::isOfType(Step::ClassType t) {
    return IfcSymbolStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcSymbolStyleSelect *IfcSymbolStyle::getStyleOfSymbol() {
    if (Step::BaseObject::inited()) {
        return m_styleOfSymbol.get();
    }
    else {
        return NULL;
    }
}

void IfcSymbolStyle::setStyleOfSymbol(const Step::RefPtr< IfcSymbolStyleSelect > &value) {
    m_styleOfSymbol = value;
}

void IfcSymbolStyle::release() {
    IfcPresentationStyle::release();
}

bool IfcSymbolStyle::init() {
    bool status = IfcPresentationStyle::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_styleOfSymbol = NULL;
    }
    else {
        m_styleOfSymbol = new IfcSymbolStyleSelect;
        if (arg[0] == '#') {
            m_styleOfSymbol->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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

void IfcSymbolStyle::copy(const IfcSymbolStyle &obj, const CopyOp &copyop) {
    IfcPresentationStyle::copy(obj, copyop);
    m_styleOfSymbol = new IfcSymbolStyleSelect;
    m_styleOfSymbol->copy(*(obj.m_styleOfSymbol.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSymbolStyle::s_type("IfcSymbolStyle");
