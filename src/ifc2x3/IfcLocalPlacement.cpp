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

#include "ifc2x3/IfcLocalPlacement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement.h"
#include "ifc2x3/IfcObjectPlacement.h"
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

IfcLocalPlacement::IfcLocalPlacement(Step::Id id, Step::SPFData *args) : IfcObjectPlacement(id, args) {
    m_placementRelTo = NULL;
    m_relativePlacement = NULL;
}

IfcLocalPlacement::~IfcLocalPlacement() {
}

bool IfcLocalPlacement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLocalPlacement(this);
}

const std::string &IfcLocalPlacement::type() {
    return IfcLocalPlacement::s_type.getName();
}

Step::ClassType IfcLocalPlacement::getClassType() {
    return IfcLocalPlacement::s_type;
}

Step::ClassType IfcLocalPlacement::getType() const {
    return IfcLocalPlacement::s_type;
}

bool IfcLocalPlacement::isOfType(Step::ClassType t) {
    return IfcLocalPlacement::s_type == t ? true : IfcObjectPlacement::isOfType(t);
}

IfcObjectPlacement *IfcLocalPlacement::getPlacementRelTo() {
    if (Step::BaseObject::inited()) {
        return m_placementRelTo.get();
    }
    else {
        return NULL;
    }
}

void IfcLocalPlacement::setPlacementRelTo(const Step::RefPtr< IfcObjectPlacement > &value) {
    m_placementRelTo = value;
    m_placementRelTo->m_referencedByPlacements.insert(this);
}

IfcAxis2Placement *IfcLocalPlacement::getRelativePlacement() {
    if (Step::BaseObject::inited()) {
        return m_relativePlacement.get();
    }
    else {
        return NULL;
    }
}

void IfcLocalPlacement::setRelativePlacement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_relativePlacement = value;
}

void IfcLocalPlacement::release() {
    IfcObjectPlacement::release();
    m_placementRelTo.release();
}

bool IfcLocalPlacement::init() {
    bool status = IfcObjectPlacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placementRelTo = NULL;
    }
    else {
        m_placementRelTo = static_cast< IfcObjectPlacement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relativePlacement = NULL;
    }
    else {
        m_relativePlacement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_relativePlacement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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

void IfcLocalPlacement::copy(const IfcLocalPlacement &obj, const CopyOp &copyop) {
    IfcObjectPlacement::copy(obj, copyop);
    setPlacementRelTo(copyop(obj.m_placementRelTo.get()));
    m_relativePlacement = new IfcAxis2Placement;
    m_relativePlacement->copy(*(obj.m_relativePlacement.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLocalPlacement::s_type("IfcLocalPlacement");
