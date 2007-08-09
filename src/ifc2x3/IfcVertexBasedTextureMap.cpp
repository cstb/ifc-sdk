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
#include <ifc2x3/IfcVertexBasedTextureMap.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcTextureVertex.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcVertexBasedTextureMap::IfcVertexBasedTextureMap(Step::SPFData *args) : Step::BaseObject(args) {
  m_textureVertices.setUnset(true);
  m_texturePoints.setUnset(true);
}


IfcVertexBasedTextureMap::~IfcVertexBasedTextureMap() {
}

bool IfcVertexBasedTextureMap::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcVertexBasedTextureMap(this);
}

const char *IfcVertexBasedTextureMap::type() {
  return "IfcVertexBasedTextureMap";
}

Step::ClassType IfcVertexBasedTextureMap::getClassType() {
  return IfcVertexBasedTextureMap::s_type;
}

Step::ClassType IfcVertexBasedTextureMap::getType() const {
  return IfcVertexBasedTextureMap::s_type;
}

bool IfcVertexBasedTextureMap::isOfType(Step::ClassType t) {
  return IfcVertexBasedTextureMap::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcTextureVertex > > &IfcVertexBasedTextureMap::getTextureVertices() {
  if (Step::BaseObject::inited()) {
    return m_textureVertices;
  }
  else {
    m_textureVertices.setUnset(true);
    return m_textureVertices;
  }
}

void IfcVertexBasedTextureMap::setTextureVertices(const Step::StepList< Step::RefPtr< IfcTextureVertex > > &value) {
  m_textureVertices = value;
}

Step::StepList< Step::RefPtr< IfcCartesianPoint > > &IfcVertexBasedTextureMap::getTexturePoints() {
  if (Step::BaseObject::inited()) {
    return m_texturePoints;
  }
  else {
    m_texturePoints.setUnset(true);
    return m_texturePoints;
  }
}

void IfcVertexBasedTextureMap::setTexturePoints(const Step::StepList< Step::RefPtr< IfcCartesianPoint > > &value) {
  m_texturePoints = value;
}

void IfcVertexBasedTextureMap::release() {
  m_textureVertices.clear();
  m_texturePoints.clear();
}

bool IfcVertexBasedTextureMap::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textureVertices.setUnset(true);
  }
  else {
    m_textureVertices.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcTextureVertex > attr2;
        attr2 = static_cast< IfcTextureVertex * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_textureVertices.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_texturePoints.setUnset(true);
  }
  else {
    m_texturePoints.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCartesianPoint > attr2;
        attr2 = static_cast< IfcCartesianPoint * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_texturePoints.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcVertexBasedTextureMap::s_type = new Step::ClassType_class("IfcVertexBasedTextureMap");
IfcVertexBasedTextureMap_Factory::IfcVertexBasedTextureMap_Factory() {
}

IfcVertexBasedTextureMap_Factory::~IfcVertexBasedTextureMap_Factory() {
  clear(true);
}

void IfcVertexBasedTextureMap_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVertexBasedTextureMap_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVertexBasedTextureMap_Factory::end() {
  return m_idMap.end();
}

IfcVertexBasedTextureMap *IfcVertexBasedTextureMap_Factory::get(Step::StepId id) {
  IfcVertexBasedTextureMap *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcVertexBasedTextureMap * > (it->second);
  }
  else {
    LOG_ERROR("IfcVertexBasedTextureMap_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcVertexBasedTextureMap * > (create(id));
  }
}

Step::BaseObject *IfcVertexBasedTextureMap_Factory::create(Step::StepId id) {
  IfcVertexBasedTextureMap *ret = new IfcVertexBasedTextureMap(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcVertexBasedTextureMap_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcVertexBasedTextureMap *ret = new IfcVertexBasedTextureMap(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcVertexBasedTextureMap_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcVertexBasedTextureMap *ret = new IfcVertexBasedTextureMap(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcVertexBasedTextureMap *IfcVertexBasedTextureMap_Factory::generate() {
  return static_cast< IfcVertexBasedTextureMap * > (create(m_model->getNewId()));
}

IfcVertexBasedTextureMap *IfcVertexBasedTextureMap_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcVertexBasedTextureMap * > (it->second);
  }
  else {
    return NULL;
  }
}

