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
 *     Copyright (C) 2009 CSTB                                             *
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

using namespace ifc2x3;

IfcCartesianPoint::IfcCartesianPoint(Step::Id id, Step::SPFData *args) : IfcPoint(id, args) {
}

IfcCartesianPoint::~IfcCartesianPoint() {
}

bool IfcCartesianPoint::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCartesianPoint(this);
}

const std::string &IfcCartesianPoint::type() const {
    return IfcCartesianPoint::s_type.getName();
}

const Step::ClassType &IfcCartesianPoint::getClassType() {
    return IfcCartesianPoint::s_type;
}

const Step::ClassType &IfcCartesianPoint::getType() const {
    return IfcCartesianPoint::s_type;
}

bool IfcCartesianPoint::isOfType(const Step::ClassType &t) const {
    return IfcCartesianPoint::s_type == t ? true : IfcPoint::isOfType(t);
}

List_IfcLengthMeasure_1_3 &IfcCartesianPoint::getCoordinates() {
    if (Step::BaseObject::inited()) {
        return m_coordinates;
    }
    else {
        m_coordinates.setUnset(true);
        return m_coordinates;
    }
}

const List_IfcLengthMeasure_1_3 &IfcCartesianPoint::getCoordinates() const {
    IfcCartesianPoint * deConstObject = const_cast< IfcCartesianPoint * > (this);
    return deConstObject->getCoordinates();
}

void IfcCartesianPoint::setCoordinates(const List_IfcLengthMeasure_1_3 &value) {
    m_coordinates = value;
}

void IfcCartesianPoint::unsetCoordinates() {
    m_coordinates.clear();
    m_coordinates.setUnset(true);
}

bool IfcCartesianPoint::testCoordinates() const {
    return !Step::isUnset(getCoordinates());
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
    Step::List< IfcLengthMeasure, 1, 3 >::const_iterator it_m_coordinates;
    IfcPoint::copy(obj, copyop);
    for (it_m_coordinates = obj.m_coordinates.begin(); it_m_coordinates != obj.m_coordinates.end(); ++it_m_coordinates) {
        IfcLengthMeasure copyTarget = (*it_m_coordinates);
        m_coordinates.push_back(copyTarget);
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianPoint::s_type("IfcCartesianPoint");
