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
 *     Copyright (C) 2008 CSTB                                             *
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
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
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

bool IfcSweptAreaSolid::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSweptAreaSolid(this);
}

const std::string &IfcSweptAreaSolid::type() const {
    return IfcSweptAreaSolid::s_type.getName();
}

const Step::ClassType &IfcSweptAreaSolid::getClassType() {
    return IfcSweptAreaSolid::s_type;
}

const Step::ClassType &IfcSweptAreaSolid::getType() const {
    return IfcSweptAreaSolid::s_type;
}

bool IfcSweptAreaSolid::isOfType(const Step::ClassType &t) const {
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

const IfcProfileDef *IfcSweptAreaSolid::getSweptArea() const {
    IfcSweptAreaSolid * deConstObject = const_cast< IfcSweptAreaSolid * > (this);
    return deConstObject->getSweptArea();
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

const IfcAxis2Placement3D *IfcSweptAreaSolid::getPosition() const {
    IfcSweptAreaSolid * deConstObject = const_cast< IfcSweptAreaSolid * > (this);
    return deConstObject->getPosition();
}

void IfcSweptAreaSolid::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
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
        m_sweptArea = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSweptAreaSolid::copy(const IfcSweptAreaSolid &obj, const CopyOp &copyop) {
    IfcSolidModel::copy(obj, copyop);
    setSweptArea((IfcProfileDef*)copyop(obj.m_sweptArea.get()));
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_position.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSweptAreaSolid::s_type("IfcSweptAreaSolid");
