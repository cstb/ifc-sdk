/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include <MemoryLeak.h>
#include <ifc2x3/IfcBSplineCurve.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcBSplineCurve::IfcBSplineCurve(Step::SPFData *args) : IfcBoundedCurve(args) {
  m_degree = getUnset(m_degree);
  m_controlPointsList.setUnset(true);
  m_curveForm = IfcBSplineCurveForm_UNSET;
  m_closedCurve = getUnset(m_closedCurve);
  m_selfIntersect = getUnset(m_selfIntersect);
}


IfcBSplineCurve::~IfcBSplineCurve() {
}

bool IfcBSplineCurve::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBSplineCurve(this);
}

const char *IfcBSplineCurve::type() {
  return "IfcBSplineCurve";
}

Step::ClassType IfcBSplineCurve::getClassType() {
  return IfcBSplineCurve::s_type;
}

Step::ClassType IfcBSplineCurve::getType() const {
  return IfcBSplineCurve::s_type;
}

bool IfcBSplineCurve::isOfType(Step::ClassType t) {
  return IfcBSplineCurve::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

Integer IfcBSplineCurve::getDegree() {
  if (Step::BaseObject::inited()) {
    return m_degree;
  }
  else {
    return getUnset(m_degree);
  }
}

void IfcBSplineCurve::setDegree(Integer value) {
  m_degree = value;
}

Step::StepList< Step::RefPtr< IfcCartesianPoint > > &IfcBSplineCurve::getControlPointsList() {
  if (Step::BaseObject::inited()) {
    return m_controlPointsList;
  }
  else {
    m_controlPointsList.setUnset(true);
    return m_controlPointsList;
  }
}

void IfcBSplineCurve::setControlPointsList(const Step::StepList< Step::RefPtr< IfcCartesianPoint > > &value) {
  m_controlPointsList = value;
}

IfcBSplineCurveForm IfcBSplineCurve::getCurveForm() {
  if (Step::BaseObject::inited()) {
    return m_curveForm;
  }
  else {
    return IfcBSplineCurveForm_UNSET;
  }
}

void IfcBSplineCurve::setCurveForm(IfcBSplineCurveForm value) {
  m_curveForm = value;
}

Logical IfcBSplineCurve::getClosedCurve() {
  if (Step::BaseObject::inited()) {
    return m_closedCurve;
  }
  else {
    return getUnset(m_closedCurve);
  }
}

void IfcBSplineCurve::setClosedCurve(Logical value) {
  m_closedCurve = value;
}

Logical IfcBSplineCurve::getSelfIntersect() {
  if (Step::BaseObject::inited()) {
    return m_selfIntersect;
  }
  else {
    return getUnset(m_selfIntersect);
  }
}

void IfcBSplineCurve::setSelfIntersect(Logical value) {
  m_selfIntersect = value;
}

void IfcBSplineCurve::release() {
  IfcBoundedCurve::release();
  m_controlPointsList.clear();
}

bool IfcBSplineCurve::init() {
  bool status = IfcBoundedCurve::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_degree = getUnset(m_degree);
  }
  else {
    m_degree = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_controlPointsList.setUnset(true);
  }
  else {
    m_controlPointsList.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCartesianPoint > attr2;
        attr2 = static_cast< IfcCartesianPoint * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_controlPointsList.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_curveForm = IfcBSplineCurveForm_UNSET;
  }
  else {
    if (arg == ".POLYLINE_FORM.") {
      m_curveForm = IfcBSplineCurveForm_POLYLINE_FORM;
    }
    else if (arg == ".CIRCULAR_ARC.") {
      m_curveForm = IfcBSplineCurveForm_CIRCULAR_ARC;
    }
    else if (arg == ".ELLIPTIC_ARC.") {
      m_curveForm = IfcBSplineCurveForm_ELLIPTIC_ARC;
    }
    else if (arg == ".PARABOLIC_ARC.") {
      m_curveForm = IfcBSplineCurveForm_PARABOLIC_ARC;
    }
    else if (arg == ".HYPERBOLIC_ARC.") {
      m_curveForm = IfcBSplineCurveForm_HYPERBOLIC_ARC;
    }
    else if (arg == ".UNSPECIFIED.") {
      m_curveForm = IfcBSplineCurveForm_UNSPECIFIED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_closedCurve = getUnset(m_closedCurve);
  }
  else {
    m_closedCurve = Step::spfToLogical(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_selfIntersect = getUnset(m_selfIntersect);
  }
  else {
    m_selfIntersect = Step::spfToLogical(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBSplineCurve::s_type = new Step::ClassType_class("IfcBSplineCurve");
