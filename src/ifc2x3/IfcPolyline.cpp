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

#include "ifc2x3/IfcPolyline.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcCartesianPoint.h"
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

IfcPolyline::IfcPolyline(Step::Id id, Step::SPFData *args) : IfcBoundedCurve(id, args) {
    m_points.setUnset(true);
}

IfcPolyline::~IfcPolyline() {
}

bool IfcPolyline::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPolyline(this);
}

const std::string &IfcPolyline::type() {
    return IfcPolyline::s_type.getName();
}

Step::ClassType IfcPolyline::getClassType() {
    return IfcPolyline::s_type;
}

Step::ClassType IfcPolyline::getType() const {
    return IfcPolyline::s_type;
}

bool IfcPolyline::isOfType(Step::ClassType t) {
    return IfcPolyline::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

Step::List< Step::RefPtr< IfcCartesianPoint > > &IfcPolyline::getPoints() {
    if (Step::BaseObject::inited()) {
        return m_points;
    }
    else {
        m_points.setUnset(true);
        return m_points;
    }
}

void IfcPolyline::setPoints(const Step::List< Step::RefPtr< IfcCartesianPoint > > &value) {
    m_points = value;
}

void IfcPolyline::release() {
    IfcBoundedCurve::release();
    m_points.clear();
}

bool IfcPolyline::init() {
    bool status = IfcBoundedCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_points.setUnset(true);
    }
    else {
        m_points.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCartesianPoint > attr2;
                attr2 = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_points.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPolyline::copy(const IfcPolyline &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcCartesianPoint > >::const_iterator it_m_points;
    IfcBoundedCurve::copy(obj, copyop);
    for (it_m_points = obj.m_points.begin(); it_m_points != obj.m_points.end(); ++it_m_points) {
        Step::RefPtr< IfcCartesianPoint > copyTarget = copyop((*it_m_points).get());
        m_points.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPolyline::s_type("IfcPolyline");
