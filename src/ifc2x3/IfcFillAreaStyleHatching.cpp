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
#include <ifc2x3/IfcFillAreaStyleHatching.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcCurveStyle.h>
#include <ifc2x3/IfcHatchLineDistanceSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFillAreaStyleHatching::IfcFillAreaStyleHatching(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_hatchLineAppearance = NULL;
  m_startOfNextHatchLine = NULL;
  m_pointOfReferenceHatchLine = NULL;
  m_patternStart = NULL;
  m_hatchLineAngle = getUnset(m_hatchLineAngle);
}


IfcFillAreaStyleHatching::~IfcFillAreaStyleHatching() {
}

bool IfcFillAreaStyleHatching::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFillAreaStyleHatching(this);
}

const char *IfcFillAreaStyleHatching::type() {
  return "IfcFillAreaStyleHatching";
}

Step::ClassType IfcFillAreaStyleHatching::getClassType() {
  return IfcFillAreaStyleHatching::s_type;
}

Step::ClassType IfcFillAreaStyleHatching::getType() const {
  return IfcFillAreaStyleHatching::s_type;
}

bool IfcFillAreaStyleHatching::isOfType(Step::ClassType t) {
  return IfcFillAreaStyleHatching::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCurveStyle *IfcFillAreaStyleHatching::getHatchLineAppearance() {
  if (Step::BaseObject::inited()) {
    return m_hatchLineAppearance.get();
  }
  else {
    return NULL;
  }
}

void IfcFillAreaStyleHatching::setHatchLineAppearance(const Step::RefPtr< IfcCurveStyle > &value) {
  m_hatchLineAppearance = value;
}

IfcHatchLineDistanceSelect *IfcFillAreaStyleHatching::getStartOfNextHatchLine() {
  if (Step::BaseObject::inited()) {
    return m_startOfNextHatchLine.get();
  }
  else {
    return NULL;
  }
}

void IfcFillAreaStyleHatching::setStartOfNextHatchLine(const Step::RefPtr< IfcHatchLineDistanceSelect > &value) {
  m_startOfNextHatchLine = value;
}

IfcCartesianPoint *IfcFillAreaStyleHatching::getPointOfReferenceHatchLine() {
  if (Step::BaseObject::inited()) {
    return m_pointOfReferenceHatchLine.get();
  }
  else {
    return NULL;
  }
}

void IfcFillAreaStyleHatching::setPointOfReferenceHatchLine(const Step::RefPtr< IfcCartesianPoint > &value) {
  m_pointOfReferenceHatchLine = value;
}

IfcCartesianPoint *IfcFillAreaStyleHatching::getPatternStart() {
  if (Step::BaseObject::inited()) {
    return m_patternStart.get();
  }
  else {
    return NULL;
  }
}

void IfcFillAreaStyleHatching::setPatternStart(const Step::RefPtr< IfcCartesianPoint > &value) {
  m_patternStart = value;
}

IfcPlaneAngleMeasure IfcFillAreaStyleHatching::getHatchLineAngle() {
  if (Step::BaseObject::inited()) {
    return m_hatchLineAngle;
  }
  else {
    return getUnset(m_hatchLineAngle);
  }
}

void IfcFillAreaStyleHatching::setHatchLineAngle(IfcPlaneAngleMeasure value) {
  m_hatchLineAngle = value;
}

void IfcFillAreaStyleHatching::release() {
  IfcGeometricRepresentationItem::release();
  m_hatchLineAppearance.release();
  m_pointOfReferenceHatchLine.release();
  m_patternStart.release();
}

bool IfcFillAreaStyleHatching::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_hatchLineAppearance = NULL;
  }
  else {
    m_hatchLineAppearance = static_cast< IfcCurveStyle * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_startOfNextHatchLine = NULL;
  }
  else {
    m_startOfNextHatchLine = new IfcHatchLineDistanceSelect;
    if (arg[0] == '#') {
      m_startOfNextHatchLine->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_startOfNextHatchLine->setIfcPositiveLengthMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_pointOfReferenceHatchLine = NULL;
  }
  else {
    m_pointOfReferenceHatchLine = static_cast< IfcCartesianPoint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_patternStart = NULL;
  }
  else {
    m_patternStart = static_cast< IfcCartesianPoint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_hatchLineAngle = getUnset(m_hatchLineAngle);
  }
  else {
    m_hatchLineAngle = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyleHatching::s_type = new Step::ClassType_class("IfcFillAreaStyleHatching");
IfcFillAreaStyleHatching_Factory::IfcFillAreaStyleHatching_Factory() {
}

IfcFillAreaStyleHatching_Factory::~IfcFillAreaStyleHatching_Factory() {
  clear(true);
}

void IfcFillAreaStyleHatching_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFillAreaStyleHatching_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFillAreaStyleHatching_Factory::end() {
  return m_idMap.end();
}

IfcFillAreaStyleHatching *IfcFillAreaStyleHatching_Factory::get(Step::StepId id) {
  IfcFillAreaStyleHatching *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFillAreaStyleHatching * > (it->second);
  }
  else {
    LOG_ERROR("IfcFillAreaStyleHatching_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFillAreaStyleHatching * > (create(id));
  }
}

Step::BaseObject *IfcFillAreaStyleHatching_Factory::create(Step::StepId id) {
  IfcFillAreaStyleHatching *ret = new IfcFillAreaStyleHatching(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFillAreaStyleHatching_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFillAreaStyleHatching *ret = new IfcFillAreaStyleHatching(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFillAreaStyleHatching_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFillAreaStyleHatching *ret = new IfcFillAreaStyleHatching(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFillAreaStyleHatching *IfcFillAreaStyleHatching_Factory::generate() {
  return static_cast< IfcFillAreaStyleHatching * > (create(m_model->getNewId()));
}

IfcFillAreaStyleHatching *IfcFillAreaStyleHatching_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFillAreaStyleHatching * > (it->second);
  }
  else {
    return NULL;
  }
}

