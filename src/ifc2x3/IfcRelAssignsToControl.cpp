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

#include "ifc2x3/IfcRelAssignsToControl.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelAssignsToControl::IfcRelAssignsToControl(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingControl = NULL;
}

IfcRelAssignsToControl::~IfcRelAssignsToControl() {
}

bool IfcRelAssignsToControl::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssignsToControl(this);
}

const std::string &IfcRelAssignsToControl::type() const {
    return IfcRelAssignsToControl::s_type.getName();
}

const Step::ClassType &IfcRelAssignsToControl::getClassType() {
    return IfcRelAssignsToControl::s_type;
}

const Step::ClassType &IfcRelAssignsToControl::getType() const {
    return IfcRelAssignsToControl::s_type;
}

bool IfcRelAssignsToControl::isOfType(const Step::ClassType &t) const {
    return IfcRelAssignsToControl::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcControl *IfcRelAssignsToControl::getRelatingControl() {
    if (Step::BaseObject::inited()) {
        return m_relatingControl.get();
    }
    else {
        return NULL;
    }
}

const IfcControl *IfcRelAssignsToControl::getRelatingControl() const {
    IfcRelAssignsToControl * deConstObject = const_cast< IfcRelAssignsToControl * > (this);
    return deConstObject->getRelatingControl();
}

void IfcRelAssignsToControl::setRelatingControl(const Step::RefPtr< IfcControl > &value) {
    if (m_relatingControl.valid()) {
        m_relatingControl->m_controls.erase(this);
    }
    if (value.valid()) {
        value->m_controls.insert(this);
    }
    m_relatingControl = value;
}

void IfcRelAssignsToControl::unsetRelatingControl() {
    m_relatingControl = Step::getUnset(getRelatingControl());
}

bool IfcRelAssignsToControl::testRelatingControl() const {
    return !Step::isUnset(getRelatingControl());
}

bool IfcRelAssignsToControl::init() {
    bool status = IfcRelAssigns::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingControl = NULL;
    }
    else {
        m_relatingControl = static_cast< IfcControl * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssignsToControl::copy(const IfcRelAssignsToControl &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingControl((IfcControl*)copyop(obj.m_relatingControl.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToControl::s_type("IfcRelAssignsToControl");
