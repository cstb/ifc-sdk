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

#include "ifc2x3/IfcSurfaceOfRevolution.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis1Placement.h"
#include "ifc2x3/IfcSweptSurface.h"
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

IfcSurfaceOfRevolution::IfcSurfaceOfRevolution(Step::Id id, Step::SPFData *args) : IfcSweptSurface(id, args) {
    m_axisPosition = NULL;
}

IfcSurfaceOfRevolution::~IfcSurfaceOfRevolution() {
}

bool IfcSurfaceOfRevolution::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceOfRevolution(this);
}

const std::string &IfcSurfaceOfRevolution::type() const {
    return IfcSurfaceOfRevolution::s_type.getName();
}

const Step::ClassType &IfcSurfaceOfRevolution::getClassType() {
    return IfcSurfaceOfRevolution::s_type;
}

const Step::ClassType &IfcSurfaceOfRevolution::getType() const {
    return IfcSurfaceOfRevolution::s_type;
}

bool IfcSurfaceOfRevolution::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceOfRevolution::s_type == t ? true : IfcSweptSurface::isOfType(t);
}

IfcAxis1Placement *IfcSurfaceOfRevolution::getAxisPosition() {
    if (Step::BaseObject::inited()) {
        return m_axisPosition.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis1Placement *IfcSurfaceOfRevolution::getAxisPosition() const {
    IfcSurfaceOfRevolution * deConstObject = const_cast< IfcSurfaceOfRevolution * > (this);
    return deConstObject->getAxisPosition();
}

void IfcSurfaceOfRevolution::setAxisPosition(const Step::RefPtr< IfcAxis1Placement > &value) {
    m_axisPosition = value;
}

bool IfcSurfaceOfRevolution::init() {
    bool status = IfcSweptSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axisPosition = NULL;
    }
    else {
        m_axisPosition = static_cast< IfcAxis1Placement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSurfaceOfRevolution::copy(const IfcSurfaceOfRevolution &obj, const CopyOp &copyop) {
    IfcSweptSurface::copy(obj, copyop);
    setAxisPosition((IfcAxis1Placement*)copyop(obj.m_axisPosition.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceOfRevolution::s_type("IfcSurfaceOfRevolution");
