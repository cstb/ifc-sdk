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

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcControl::IfcControl(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
    m_controls.setUnset(true);
}

IfcControl::~IfcControl() {
}

bool IfcControl::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcControl(this);
}

const std::string &IfcControl::type() {
    return IfcControl::s_type.getName();
}

Step::ClassType IfcControl::getClassType() {
    return IfcControl::s_type;
}

Step::ClassType IfcControl::getType() const {
    return IfcControl::s_type;
}

bool IfcControl::isOfType(Step::ClassType t) {
    return IfcControl::s_type == t ? true : IfcObject::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcRelAssignsToControl > > &IfcControl::getControls() {
    if (Step::BaseObject::inited()) {
        return m_controls;
    }
    else {
        m_controls.setUnset(true);
        return m_controls;
    }
}

void IfcControl::release() {
    IfcObject::release();
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
