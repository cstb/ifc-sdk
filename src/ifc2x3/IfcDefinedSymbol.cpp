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

#include "ifc2x3/IfcDefinedSymbol.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianTransformationOperator2D.h"
#include "ifc2x3/IfcDefinedSymbolSelect.h"
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

IfcDefinedSymbol::IfcDefinedSymbol(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_definition = NULL;
    m_target = NULL;
}

IfcDefinedSymbol::~IfcDefinedSymbol() {
}

bool IfcDefinedSymbol::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDefinedSymbol(this);
}

const std::string &IfcDefinedSymbol::type() {
    return IfcDefinedSymbol::s_type.getName();
}

Step::ClassType IfcDefinedSymbol::getClassType() {
    return IfcDefinedSymbol::s_type;
}

Step::ClassType IfcDefinedSymbol::getType() const {
    return IfcDefinedSymbol::s_type;
}

bool IfcDefinedSymbol::isOfType(Step::ClassType t) {
    return IfcDefinedSymbol::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcDefinedSymbolSelect *IfcDefinedSymbol::getDefinition() {
    if (Step::BaseObject::inited()) {
        return m_definition.get();
    }
    else {
        return NULL;
    }
}

void IfcDefinedSymbol::setDefinition(const Step::RefPtr< IfcDefinedSymbolSelect > &value) {
    m_definition = value;
}

IfcCartesianTransformationOperator2D *IfcDefinedSymbol::getTarget() {
    if (Step::BaseObject::inited()) {
        return m_target.get();
    }
    else {
        return NULL;
    }
}

void IfcDefinedSymbol::setTarget(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value) {
    m_target = value;
}

void IfcDefinedSymbol::release() {
    IfcGeometricRepresentationItem::release();
    m_target.release();
}

bool IfcDefinedSymbol::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_definition = NULL;
    }
    else {
        m_definition = new IfcDefinedSymbolSelect;
        if (arg[0] == '#') {
            m_definition->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_target = NULL;
    }
    else {
        m_target = static_cast< IfcCartesianTransformationOperator2D * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcDefinedSymbol::copy(const IfcDefinedSymbol &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    m_definition = new IfcDefinedSymbolSelect;
    m_definition->copy(*(obj.m_definition.get()), copyop);
    setTarget(copyop(obj.m_target.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDefinedSymbol::s_type("IfcDefinedSymbol");
