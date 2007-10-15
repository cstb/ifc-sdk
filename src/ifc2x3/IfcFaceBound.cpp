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

#include "ifc2x3/IfcFaceBound.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcLoop.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
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

IfcFaceBound::IfcFaceBound(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
    m_bound = NULL;
    m_orientation = Step::getUnset(m_orientation);
}

IfcFaceBound::~IfcFaceBound() {
}

bool IfcFaceBound::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFaceBound(this);
}

const std::string &IfcFaceBound::type() {
    return IfcFaceBound::s_type.getName();
}

Step::ClassType IfcFaceBound::getClassType() {
    return IfcFaceBound::s_type;
}

Step::ClassType IfcFaceBound::getType() const {
    return IfcFaceBound::s_type;
}

bool IfcFaceBound::isOfType(Step::ClassType t) {
    return IfcFaceBound::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

IfcLoop *IfcFaceBound::getBound() {
    if (Step::BaseObject::inited()) {
        return m_bound.get();
    }
    else {
        return NULL;
    }
}

void IfcFaceBound::setBound(const Step::RefPtr< IfcLoop > &value) {
    m_bound = value;
}

Step::Bool IfcFaceBound::getOrientation() {
    if (Step::BaseObject::inited()) {
        return m_orientation;
    }
    else {
        return Step::getUnset(m_orientation);
    }
}

void IfcFaceBound::setOrientation(Step::Bool value) {
    m_orientation = value;
}

void IfcFaceBound::release() {
    IfcTopologicalRepresentationItem::release();
    m_bound.release();
}

bool IfcFaceBound::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_bound = NULL;
    }
    else {
        m_bound = static_cast< IfcLoop * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientation = Step::getUnset(m_orientation);
    }
    else {
        m_orientation = Step::spfToBool(arg);
    }
    return true;
}

void IfcFaceBound::copy(const IfcFaceBound &obj, const CopyOp &copyop) {
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    setBound(copyop(obj.m_bound.get()));
    setOrientation(obj.m_orientation);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFaceBound::s_type("IfcFaceBound");
