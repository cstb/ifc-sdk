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

#include "ifc2x3/IfcSweptAreaSolid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcProfileDef.h"
#include "ifc2x3/IfcSolidModel.h"
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

IfcSweptAreaSolid::IfcSweptAreaSolid(Step::Id id, Step::SPFData *args) : IfcSolidModel(id, args) {
    m_sweptArea = NULL;
    m_position = NULL;
}

IfcSweptAreaSolid::~IfcSweptAreaSolid() {
}

bool IfcSweptAreaSolid::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSweptAreaSolid(this);
}

const std::string &IfcSweptAreaSolid::type() {
    return IfcSweptAreaSolid::s_type.getName();
}

Step::ClassType IfcSweptAreaSolid::getClassType() {
    return IfcSweptAreaSolid::s_type;
}

Step::ClassType IfcSweptAreaSolid::getType() const {
    return IfcSweptAreaSolid::s_type;
}

bool IfcSweptAreaSolid::isOfType(Step::ClassType t) {
    return IfcSweptAreaSolid::s_type == t ? true : IfcSolidModel::isOfType(t);
}

IfcProfileDef *IfcSweptAreaSolid::getSweptArea() {
    if (Step::BaseObject::inited()) {
        return m_sweptArea.get();
    }
    else {
        return NULL;
    }
}

void IfcSweptAreaSolid::setSweptArea(const Step::RefPtr< IfcProfileDef > &value) {
    m_sweptArea = value;
}

IfcAxis2Placement3D *IfcSweptAreaSolid::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

void IfcSweptAreaSolid::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
}

void IfcSweptAreaSolid::release() {
    IfcSolidModel::release();
    m_sweptArea.release();
    m_position.release();
}

bool IfcSweptAreaSolid::init() {
    bool status = IfcSolidModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sweptArea = NULL;
    }
    else {
        m_sweptArea = static_cast< IfcProfileDef * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcSweptAreaSolid::copy(const IfcSweptAreaSolid &obj, const CopyOp &copyop) {
    IfcSolidModel::copy(obj, copyop);
    setSweptArea(copyop(obj.m_sweptArea.get()));
    setPosition(copyop(obj.m_position.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSweptAreaSolid::s_type("IfcSweptAreaSolid");
