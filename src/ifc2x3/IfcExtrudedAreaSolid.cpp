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

#include "ifc2x3/IfcExtrudedAreaSolid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcSweptAreaSolid.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcExtrudedAreaSolid::IfcExtrudedAreaSolid(Step::Id id, Step::SPFData *args) : IfcSweptAreaSolid(id, args) {
    m_extrudedDirection = NULL;
    m_depth = Step::getUnset(m_depth);
}

IfcExtrudedAreaSolid::~IfcExtrudedAreaSolid() {
}

bool IfcExtrudedAreaSolid::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcExtrudedAreaSolid(this);
}

const std::string &IfcExtrudedAreaSolid::type() const {
    return IfcExtrudedAreaSolid::s_type.getName();
}

const Step::ClassType &IfcExtrudedAreaSolid::getClassType() {
    return IfcExtrudedAreaSolid::s_type;
}

const Step::ClassType &IfcExtrudedAreaSolid::getType() const {
    return IfcExtrudedAreaSolid::s_type;
}

bool IfcExtrudedAreaSolid::isOfType(const Step::ClassType &t) const {
    return IfcExtrudedAreaSolid::s_type == t ? true : IfcSweptAreaSolid::isOfType(t);
}

IfcDirection *IfcExtrudedAreaSolid::getExtrudedDirection() {
    if (Step::BaseObject::inited()) {
        return m_extrudedDirection.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcExtrudedAreaSolid::getExtrudedDirection() const {
    IfcExtrudedAreaSolid * deConstObject = const_cast< IfcExtrudedAreaSolid * > (this);
    return deConstObject->getExtrudedDirection();
}

void IfcExtrudedAreaSolid::setExtrudedDirection(const Step::RefPtr< IfcDirection > &value) {
    m_extrudedDirection = value;
}

void IfcExtrudedAreaSolid::unsetExtrudedDirection() {
    m_extrudedDirection = Step::getUnset(getExtrudedDirection());
}

bool IfcExtrudedAreaSolid::testExtrudedDirection() const {
    return !Step::isUnset(getExtrudedDirection());
}

IfcPositiveLengthMeasure IfcExtrudedAreaSolid::getDepth() {
    if (Step::BaseObject::inited()) {
        return m_depth;
    }
    else {
        return Step::getUnset(m_depth);
    }
}

const IfcPositiveLengthMeasure IfcExtrudedAreaSolid::getDepth() const {
    IfcExtrudedAreaSolid * deConstObject = const_cast< IfcExtrudedAreaSolid * > (this);
    return deConstObject->getDepth();
}

void IfcExtrudedAreaSolid::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

void IfcExtrudedAreaSolid::unsetDepth() {
    m_depth = Step::getUnset(getDepth());
}

bool IfcExtrudedAreaSolid::testDepth() const {
    return !Step::isUnset(getDepth());
}

bool IfcExtrudedAreaSolid::init() {
    bool status = IfcSweptAreaSolid::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_extrudedDirection = NULL;
    }
    else {
        m_extrudedDirection = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_depth = Step::getUnset(m_depth);
    }
    else {
        m_depth = Step::spfToReal(arg);
    }
    return true;
}

void IfcExtrudedAreaSolid::copy(const IfcExtrudedAreaSolid &obj, const CopyOp &copyop) {
    IfcSweptAreaSolid::copy(obj, copyop);
    setExtrudedDirection((IfcDirection*)copyop(obj.m_extrudedDirection.get()));
    setDepth(obj.m_depth);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcExtrudedAreaSolid::s_type("IfcExtrudedAreaSolid");
