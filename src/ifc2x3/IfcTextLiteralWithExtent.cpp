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

#include "ifc2x3/IfcTextLiteralWithExtent.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPlanarExtent.h"
#include "ifc2x3/IfcTextLiteral.h"
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

IfcTextLiteralWithExtent::IfcTextLiteralWithExtent(Step::Id id, Step::SPFData *args) : IfcTextLiteral(id, args) {
    m_extent = NULL;
    m_boxAlignment = Step::getUnset(m_boxAlignment);
}

IfcTextLiteralWithExtent::~IfcTextLiteralWithExtent() {
}

bool IfcTextLiteralWithExtent::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTextLiteralWithExtent(this);
}

const std::string &IfcTextLiteralWithExtent::type() {
    return IfcTextLiteralWithExtent::s_type.getName();
}

Step::ClassType IfcTextLiteralWithExtent::getClassType() {
    return IfcTextLiteralWithExtent::s_type;
}

Step::ClassType IfcTextLiteralWithExtent::getType() const {
    return IfcTextLiteralWithExtent::s_type;
}

bool IfcTextLiteralWithExtent::isOfType(Step::ClassType t) {
    return IfcTextLiteralWithExtent::s_type == t ? true : IfcTextLiteral::isOfType(t);
}

IfcPlanarExtent *IfcTextLiteralWithExtent::getExtent() {
    if (Step::BaseObject::inited()) {
        return m_extent.get();
    }
    else {
        return NULL;
    }
}

void IfcTextLiteralWithExtent::setExtent(const Step::RefPtr< IfcPlanarExtent > &value) {
    m_extent = value;
}

IfcBoxAlignment IfcTextLiteralWithExtent::getBoxAlignment() {
    if (Step::BaseObject::inited()) {
        return m_boxAlignment;
    }
    else {
        return Step::getUnset(m_boxAlignment);
    }
}

void IfcTextLiteralWithExtent::setBoxAlignment(const IfcBoxAlignment &value) {
    m_boxAlignment = value;
}

void IfcTextLiteralWithExtent::release() {
    IfcTextLiteral::release();
    m_extent.release();
}

bool IfcTextLiteralWithExtent::init() {
    bool status = IfcTextLiteral::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_extent = NULL;
    }
    else {
        m_extent = static_cast< IfcPlanarExtent * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boxAlignment = Step::getUnset(m_boxAlignment);
    }
    else {
        m_boxAlignment = Step::spfToString(arg);
    }
    return true;
}

void IfcTextLiteralWithExtent::copy(const IfcTextLiteralWithExtent &obj, const CopyOp &copyop) {
    IfcTextLiteral::copy(obj, copyop);
    setExtent(copyop(obj.m_extent.get()));
    setBoxAlignment(obj.m_boxAlignment);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextLiteralWithExtent::s_type("IfcTextLiteralWithExtent");
