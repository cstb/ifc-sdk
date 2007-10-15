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

#include "ifc2x3/IfcPolyLoop.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcLoop.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPolyLoop::IfcPolyLoop(Step::Id id, Step::SPFData *args) : IfcLoop(id, args) {
    m_polygon.setUnset(true);
}

IfcPolyLoop::~IfcPolyLoop() {
}

bool IfcPolyLoop::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPolyLoop(this);
}

const std::string &IfcPolyLoop::type() {
    return IfcPolyLoop::s_type.getName();
}

Step::ClassType IfcPolyLoop::getClassType() {
    return IfcPolyLoop::s_type;
}

Step::ClassType IfcPolyLoop::getType() const {
    return IfcPolyLoop::s_type;
}

bool IfcPolyLoop::isOfType(Step::ClassType t) {
    return IfcPolyLoop::s_type == t ? true : IfcLoop::isOfType(t);
}

Step::List< Step::RefPtr< IfcCartesianPoint > > &IfcPolyLoop::getPolygon() {
    if (Step::BaseObject::inited()) {
        return m_polygon;
    }
    else {
        m_polygon.setUnset(true);
        return m_polygon;
    }
}

void IfcPolyLoop::setPolygon(const Step::List< Step::RefPtr< IfcCartesianPoint > > &value) {
    m_polygon = value;
}

void IfcPolyLoop::release() {
    IfcLoop::release();
    m_polygon.clear();
}

bool IfcPolyLoop::init() {
    bool status = IfcLoop::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_polygon.setUnset(true);
    }
    else {
        m_polygon.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCartesianPoint > attr2;
                attr2 = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_polygon.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPolyLoop::copy(const IfcPolyLoop &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcCartesianPoint > >::const_iterator it_m_polygon;
    IfcLoop::copy(obj, copyop);
    for (it_m_polygon = obj.m_polygon.begin(); it_m_polygon != obj.m_polygon.end(); ++it_m_polygon) {
        Step::RefPtr< IfcCartesianPoint > copyTarget = copyop((*it_m_polygon).get());
        m_polygon.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPolyLoop::s_type("IfcPolyLoop");
