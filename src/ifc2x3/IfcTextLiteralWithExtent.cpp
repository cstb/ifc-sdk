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
 *     Copyright (C) 2009 CSTB                                             *
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
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcTextLiteralWithExtent::IfcTextLiteralWithExtent(Step::Id id, Step::SPFData *args) : IfcTextLiteral(id, args) {
    m_extent = NULL;
    m_boxAlignment = Step::getUnset(m_boxAlignment);
}

IfcTextLiteralWithExtent::~IfcTextLiteralWithExtent() {
}

bool IfcTextLiteralWithExtent::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextLiteralWithExtent(this);
}

const std::string &IfcTextLiteralWithExtent::type() const {
    return IfcTextLiteralWithExtent::s_type.getName();
}

const Step::ClassType &IfcTextLiteralWithExtent::getClassType() {
    return IfcTextLiteralWithExtent::s_type;
}

const Step::ClassType &IfcTextLiteralWithExtent::getType() const {
    return IfcTextLiteralWithExtent::s_type;
}

bool IfcTextLiteralWithExtent::isOfType(const Step::ClassType &t) const {
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

const IfcPlanarExtent *IfcTextLiteralWithExtent::getExtent() const {
    IfcTextLiteralWithExtent * deConstObject = const_cast< IfcTextLiteralWithExtent * > (this);
    return deConstObject->getExtent();
}

void IfcTextLiteralWithExtent::setExtent(const Step::RefPtr< IfcPlanarExtent > &value) {
    m_extent = value;
}

void IfcTextLiteralWithExtent::unsetExtent() {
    m_extent = Step::getUnset(getExtent());
}

bool IfcTextLiteralWithExtent::testExtent() const {
    return !Step::isUnset(getExtent());
}

IfcBoxAlignment IfcTextLiteralWithExtent::getBoxAlignment() {
    if (Step::BaseObject::inited()) {
        return m_boxAlignment;
    }
    else {
        return Step::getUnset(m_boxAlignment);
    }
}

const IfcBoxAlignment IfcTextLiteralWithExtent::getBoxAlignment() const {
    IfcTextLiteralWithExtent * deConstObject = const_cast< IfcTextLiteralWithExtent * > (this);
    return deConstObject->getBoxAlignment();
}

void IfcTextLiteralWithExtent::setBoxAlignment(const IfcBoxAlignment &value) {
    m_boxAlignment = value;
}

void IfcTextLiteralWithExtent::unsetBoxAlignment() {
    m_boxAlignment = Step::getUnset(getBoxAlignment());
}

bool IfcTextLiteralWithExtent::testBoxAlignment() const {
    return !Step::isUnset(getBoxAlignment());
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
        m_extent = static_cast< IfcPlanarExtent * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boxAlignment = Step::getUnset(m_boxAlignment);
    }
    else {
        m_boxAlignment = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcTextLiteralWithExtent::copy(const IfcTextLiteralWithExtent &obj, const CopyOp &copyop) {
    IfcTextLiteral::copy(obj, copyop);
    setExtent((IfcPlanarExtent*)copyop(obj.m_extent.get()));
    setBoxAlignment(obj.m_boxAlignment);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextLiteralWithExtent::s_type("IfcTextLiteralWithExtent");
