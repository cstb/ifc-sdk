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
#include <ifc2x3/IfcSectionedSpine.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcCompositeCurve.h>
#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSectionedSpine::IfcSectionedSpine(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_spineCurve = NULL;
  m_crossSections.setUnset(true);
  m_crossSectionPositions.setUnset(true);
}


IfcSectionedSpine::~IfcSectionedSpine() {
}

bool IfcSectionedSpine::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSectionedSpine(this);
}

const char *IfcSectionedSpine::type() {
  return "IfcSectionedSpine";
}

Step::ClassType IfcSectionedSpine::getClassType() {
  return IfcSectionedSpine::s_type;
}

Step::ClassType IfcSectionedSpine::getType() const {
  return IfcSectionedSpine::s_type;
}

bool IfcSectionedSpine::isOfType(Step::ClassType t) {
  return IfcSectionedSpine::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCompositeCurve *IfcSectionedSpine::getSpineCurve() {
  if (Step::BaseObject::inited()) {
    return m_spineCurve.get();
  }
  else {
    return NULL;
  }
}

void IfcSectionedSpine::setSpineCurve(const Step::RefPtr< IfcCompositeCurve > &value) {
  m_spineCurve = value;
}

Step::StepList< Step::RefPtr< IfcProfileDef > > &IfcSectionedSpine::getCrossSections() {
  if (Step::BaseObject::inited()) {
    return m_crossSections;
  }
  else {
    m_crossSections.setUnset(true);
    return m_crossSections;
  }
}

void IfcSectionedSpine::setCrossSections(const Step::StepList< Step::RefPtr< IfcProfileDef > > &value) {
  m_crossSections = value;
}

Step::StepList< Step::RefPtr< IfcAxis2Placement3D > > &IfcSectionedSpine::getCrossSectionPositions() {
  if (Step::BaseObject::inited()) {
    return m_crossSectionPositions;
  }
  else {
    m_crossSectionPositions.setUnset(true);
    return m_crossSectionPositions;
  }
}

void IfcSectionedSpine::setCrossSectionPositions(const Step::StepList< Step::RefPtr< IfcAxis2Placement3D > > &value) {
  m_crossSectionPositions = value;
}

void IfcSectionedSpine::release() {
  IfcGeometricRepresentationItem::release();
  m_spineCurve.release();
  m_crossSections.clear();
  m_crossSectionPositions.clear();
}

bool IfcSectionedSpine::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_spineCurve = NULL;
  }
  else {
    m_spineCurve = static_cast< IfcCompositeCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_crossSections.setUnset(true);
  }
  else {
    m_crossSections.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcProfileDef > attr2;
        attr2 = static_cast< IfcProfileDef * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_crossSections.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_crossSectionPositions.setUnset(true);
  }
  else {
    m_crossSectionPositions.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcAxis2Placement3D > attr2;
        attr2 = static_cast< IfcAxis2Placement3D * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_crossSectionPositions.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSectionedSpine::s_type = new Step::ClassType_class("IfcSectionedSpine");
IfcSectionedSpine_Factory::IfcSectionedSpine_Factory() {
}

IfcSectionedSpine_Factory::~IfcSectionedSpine_Factory() {
  clear(true);
}

void IfcSectionedSpine_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSectionedSpine_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSectionedSpine_Factory::end() {
  return m_idMap.end();
}

IfcSectionedSpine *IfcSectionedSpine_Factory::get(Step::StepId id) {
  IfcSectionedSpine *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSectionedSpine * > (it->second);
  }
  else {
    LOG_ERROR("IfcSectionedSpine_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSectionedSpine * > (create(id));
  }
}

Step::BaseObject *IfcSectionedSpine_Factory::create(Step::StepId id) {
  IfcSectionedSpine *ret = new IfcSectionedSpine(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSectionedSpine_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSectionedSpine *ret = new IfcSectionedSpine(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSectionedSpine_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSectionedSpine *ret = new IfcSectionedSpine(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSectionedSpine *IfcSectionedSpine_Factory::generate() {
  return static_cast< IfcSectionedSpine * > (create(m_model->getNewId()));
}

IfcSectionedSpine *IfcSectionedSpine_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSectionedSpine * > (it->second);
  }
  else {
    return NULL;
  }
}

