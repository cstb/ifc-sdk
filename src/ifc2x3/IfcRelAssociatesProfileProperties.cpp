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
#include <ifc2x3/IfcRelAssociatesProfileProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcOrientationSelect.h>
#include <ifc2x3/IfcProfileProperties.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssociatesProfileProperties::IfcRelAssociatesProfileProperties(Step::SPFData *args) : IfcRelAssociates(args) {
  m_relatingProfileProperties = NULL;
  m_profileSectionLocation = NULL;
  m_profileOrientation = NULL;
}


IfcRelAssociatesProfileProperties::~IfcRelAssociatesProfileProperties() {
}

bool IfcRelAssociatesProfileProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssociatesProfileProperties(this);
}

const char *IfcRelAssociatesProfileProperties::type() {
  return "IfcRelAssociatesProfileProperties";
}

Step::ClassType IfcRelAssociatesProfileProperties::getClassType() {
  return IfcRelAssociatesProfileProperties::s_type;
}

Step::ClassType IfcRelAssociatesProfileProperties::getType() const {
  return IfcRelAssociatesProfileProperties::s_type;
}

bool IfcRelAssociatesProfileProperties::isOfType(Step::ClassType t) {
  return IfcRelAssociatesProfileProperties::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcProfileProperties *IfcRelAssociatesProfileProperties::getRelatingProfileProperties() {
  if (Step::BaseObject::inited()) {
    return m_relatingProfileProperties.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssociatesProfileProperties::setRelatingProfileProperties(const Step::RefPtr< IfcProfileProperties > &value) {
  m_relatingProfileProperties = value;
}

IfcShapeAspect *IfcRelAssociatesProfileProperties::getProfileSectionLocation() {
  if (Step::BaseObject::inited()) {
    return m_profileSectionLocation.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssociatesProfileProperties::setProfileSectionLocation(const Step::RefPtr< IfcShapeAspect > &value) {
  m_profileSectionLocation = value;
}

IfcOrientationSelect *IfcRelAssociatesProfileProperties::getProfileOrientation() {
  if (Step::BaseObject::inited()) {
    return m_profileOrientation.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssociatesProfileProperties::setProfileOrientation(const Step::RefPtr< IfcOrientationSelect > &value) {
  m_profileOrientation = value;
}

void IfcRelAssociatesProfileProperties::release() {
  IfcRelAssociates::release();
  m_relatingProfileProperties.release();
  m_profileSectionLocation.release();
}

bool IfcRelAssociatesProfileProperties::init() {
  bool status = IfcRelAssociates::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingProfileProperties = NULL;
  }
  else {
    m_relatingProfileProperties = static_cast< IfcProfileProperties * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_profileSectionLocation = NULL;
  }
  else {
    m_profileSectionLocation = static_cast< IfcShapeAspect * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_profileOrientation = NULL;
  }
  else {
    m_profileOrientation = new IfcOrientationSelect;
    if (arg[0] == '#') {
      m_profileOrientation->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_profileOrientation->setIfcPlaneAngleMeasure(tmp_attr1);
        }
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesProfileProperties::s_type = new Step::ClassType_class("IfcRelAssociatesProfileProperties");
IfcRelAssociatesProfileProperties_Factory::IfcRelAssociatesProfileProperties_Factory() {
}

IfcRelAssociatesProfileProperties_Factory::~IfcRelAssociatesProfileProperties_Factory() {
  clear(true);
}

void IfcRelAssociatesProfileProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesProfileProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesProfileProperties_Factory::end() {
  return m_idMap.end();
}

IfcRelAssociatesProfileProperties *IfcRelAssociatesProfileProperties_Factory::get(Step::StepId id) {
  IfcRelAssociatesProfileProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssociatesProfileProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssociatesProfileProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssociatesProfileProperties * > (create(id));
  }
}

Step::BaseObject *IfcRelAssociatesProfileProperties_Factory::create(Step::StepId id) {
  IfcRelAssociatesProfileProperties *ret = new IfcRelAssociatesProfileProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesProfileProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssociatesProfileProperties *ret = new IfcRelAssociatesProfileProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesProfileProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssociatesProfileProperties *ret = new IfcRelAssociatesProfileProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssociatesProfileProperties *IfcRelAssociatesProfileProperties_Factory::generate() {
  return static_cast< IfcRelAssociatesProfileProperties * > (create(m_model->getNewId()));
}

IfcRelAssociatesProfileProperties *IfcRelAssociatesProfileProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssociatesProfileProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

