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
#include <ifc2x3/IfcTextureVertex.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTextureVertex::IfcTextureVertex(Step::SPFData *args) : Step::BaseObject(args) {
  m_coordinates.setUnset(true);
}


IfcTextureVertex::~IfcTextureVertex() {
}

bool IfcTextureVertex::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextureVertex(this);
}

const char *IfcTextureVertex::type() {
  return "IfcTextureVertex";
}

Step::ClassType IfcTextureVertex::getClassType() {
  return IfcTextureVertex::s_type;
}

Step::ClassType IfcTextureVertex::getType() const {
  return IfcTextureVertex::s_type;
}

bool IfcTextureVertex::isOfType(Step::ClassType t) {
  return IfcTextureVertex::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepList< IfcParameterValue > &IfcTextureVertex::getCoordinates() {
  if (Step::BaseObject::inited()) {
    return m_coordinates;
  }
  else {
    m_coordinates.setUnset(true);
    return m_coordinates;
  }
}

void IfcTextureVertex::setCoordinates(const Step::StepList< IfcParameterValue > &value) {
  m_coordinates = value;
}

void IfcTextureVertex::release() {
  m_coordinates.clear();
}

bool IfcTextureVertex::init() {
  std::string arg;
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
        IfcParameterValue attr2;
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

IFC2X3_DLL_DEF Step::ClassType IfcTextureVertex::s_type = new Step::ClassType_class("IfcTextureVertex");
IfcTextureVertex_Factory::IfcTextureVertex_Factory() {
}

IfcTextureVertex_Factory::~IfcTextureVertex_Factory() {
  clear(true);
}

void IfcTextureVertex_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextureVertex_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextureVertex_Factory::end() {
  return m_idMap.end();
}

IfcTextureVertex *IfcTextureVertex_Factory::get(Step::StepId id) {
  IfcTextureVertex *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTextureVertex * > (it->second);
  }
  else {
    LOG_ERROR("IfcTextureVertex_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTextureVertex * > (create(id));
  }
}

Step::BaseObject *IfcTextureVertex_Factory::create(Step::StepId id) {
  IfcTextureVertex *ret = new IfcTextureVertex(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTextureVertex_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTextureVertex *ret = new IfcTextureVertex(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTextureVertex_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTextureVertex *ret = new IfcTextureVertex(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTextureVertex *IfcTextureVertex_Factory::generate() {
  return static_cast< IfcTextureVertex * > (create(m_model->getNewId()));
}

IfcTextureVertex *IfcTextureVertex_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTextureVertex * > (it->second);
  }
  else {
    return NULL;
  }
}

