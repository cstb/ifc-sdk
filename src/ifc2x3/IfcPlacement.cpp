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

#include "ifc2x3/IfcPlacement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
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

IfcPlacement::IfcPlacement(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_location = NULL;
}

IfcPlacement::~IfcPlacement() {
}

bool IfcPlacement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPlacement(this);
}

const std::string &IfcPlacement::type() {
    return IfcPlacement::s_type.getName();
}

Step::ClassType IfcPlacement::getClassType() {
    return IfcPlacement::s_type;
}

Step::ClassType IfcPlacement::getType() const {
    return IfcPlacement::s_type;
}

bool IfcPlacement::isOfType(Step::ClassType t) {
    return IfcPlacement::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCartesianPoint *IfcPlacement::getLocation() {
    if (Step::BaseObject::inited()) {
        return m_location.get();
    }
    else {
        return NULL;
    }
}

void IfcPlacement::setLocation(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_location = value;
}

void IfcPlacement::release() {
    IfcGeometricRepresentationItem::release();
    m_location.release();
}

bool IfcPlacement::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_location = NULL;
    }
    else {
        m_location = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcPlacement::copy(const IfcPlacement &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setLocation(copyop(obj.m_location.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlacement::s_type("IfcPlacement");
