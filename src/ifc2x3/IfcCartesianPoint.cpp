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

#include "ifc2x3/IfcCartesianPoint.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPoint.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCartesianPoint::IfcCartesianPoint(Step::Id id, Step::SPFData *args) : IfcPoint(id, args) {
    m_coordinates.setUnset(true);
}

IfcCartesianPoint::~IfcCartesianPoint() {
}

bool IfcCartesianPoint::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCartesianPoint(this);
}

const std::string &IfcCartesianPoint::type() {
    return IfcCartesianPoint::s_type.getName();
}

Step::ClassType IfcCartesianPoint::getClassType() {
    return IfcCartesianPoint::s_type;
}

Step::ClassType IfcCartesianPoint::getType() const {
    return IfcCartesianPoint::s_type;
}

bool IfcCartesianPoint::isOfType(Step::ClassType t) {
    return IfcCartesianPoint::s_type == t ? true : IfcPoint::isOfType(t);
}

Step::List< IfcLengthMeasure > &IfcCartesianPoint::getCoordinates() {
    if (Step::BaseObject::inited()) {
        return m_coordinates;
    }
    else {
        m_coordinates.setUnset(true);
        return m_coordinates;
    }
}

void IfcCartesianPoint::setCoordinates(const Step::List< IfcLengthMeasure > &value) {
    m_coordinates = value;
}

void IfcCartesianPoint::release() {
    IfcPoint::release();
    m_coordinates.clear();
}

bool IfcCartesianPoint::init() {
    bool status = IfcPoint::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_coordinates.setUnset(true);
    }
    else {
        m_coordinates.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLengthMeasure attr2;
                attr2 = Step::spfToReal(str1);
                m_coordinates.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcCartesianPoint::copy(const IfcCartesianPoint &obj, const CopyOp &copyop) {
    Step::List< IfcLengthMeasure >::const_iterator it_m_coordinates;
    IfcPoint::copy(obj, copyop);
    for (it_m_coordinates = obj.m_coordinates.begin(); it_m_coordinates != obj.m_coordinates.end(); ++it_m_coordinates) {
        IfcLengthMeasure copyTarget = (*it_m_coordinates);
        m_coordinates.push_back(copyTarget);
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianPoint::s_type("IfcCartesianPoint");
