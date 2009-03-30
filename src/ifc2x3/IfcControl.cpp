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

#include "ifc2x3/IfcControl.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObject.h"
#include "ifc2x3/IfcRelAssignsToControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcControl::IfcControl(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
}

IfcControl::~IfcControl() {
}

bool IfcControl::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcControl(this);
}

const std::string &IfcControl::type() const {
    return IfcControl::s_type.getName();
}

const Step::ClassType &IfcControl::getClassType() {
    return IfcControl::s_type;
}

const Step::ClassType &IfcControl::getType() const {
    return IfcControl::s_type;
}

bool IfcControl::isOfType(const Step::ClassType &t) const {
    return IfcControl::s_type == t ? true : IfcObject::isOfType(t);
}

Inverse_Set_IfcRelAssignsToControl_0_n &IfcControl::getControls() {
    if (Step::BaseObject::inited()) {
        return m_controls;
    }
    else {
        m_controls.setUnset(true);
        return m_controls;
    }
}

const Inverse_Set_IfcRelAssignsToControl_0_n &IfcControl::getControls() const {
    IfcControl * deConstObject = const_cast< IfcControl * > (this);
    return deConstObject->getControls();
}

bool IfcControl::testControls() const {
    return !Step::isUnset(getControls());
}

bool IfcControl::init() {
    bool status = IfcObject::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelAssignsToControl::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_controls.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_controls.insert(static_cast< IfcRelAssignsToControl * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcControl::copy(const IfcControl &obj, const CopyOp &copyop) {
    IfcObject::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcControl::s_type("IfcControl");
