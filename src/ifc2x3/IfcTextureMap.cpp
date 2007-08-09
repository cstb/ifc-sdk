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
#include <ifc2x3/IfcTextureMap.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcVertexBasedTextureMap.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTextureMap::IfcTextureMap(Step::SPFData *args) : IfcTextureCoordinate(args) {
  m_textureMaps.setUnset(true);
}


IfcTextureMap::~IfcTextureMap() {
}

bool IfcTextureMap::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextureMap(this);
}

const char *IfcTextureMap::type() {
  return "IfcTextureMap";
}

Step::ClassType IfcTextureMap::getClassType() {
  return IfcTextureMap::s_type;
}

Step::ClassType IfcTextureMap::getType() const {
  return IfcTextureMap::s_type;
}

bool IfcTextureMap::isOfType(Step::ClassType t) {
  return IfcTextureMap::s_type == t ? true : IfcTextureCoordinate::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcVertexBasedTextureMap > > &IfcTextureMap::getTextureMaps() {
  if (Step::BaseObject::inited()) {
    return m_textureMaps;
  }
  else {
    m_textureMaps.setUnset(true);
    return m_textureMaps;
  }
}

void IfcTextureMap::setTextureMaps(const Step::StepSet< Step::RefPtr< IfcVertexBasedTextureMap > > &value) {
  m_textureMaps = value;
}

void IfcTextureMap::release() {
  IfcTextureCoordinate::release();
  m_textureMaps.clear();
}

bool IfcTextureMap::init() {
  bool status = IfcTextureCoordinate::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textureMaps.setUnset(true);
  }
  else {
    m_textureMaps.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcVertexBasedTextureMap > attr2;
        attr2 = static_cast< IfcVertexBasedTextureMap * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_textureMaps.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextureMap::s_type = new Step::ClassType_class("IfcTextureMap");
IfcTextureMap_Factory::IfcTextureMap_Factory() {
}

IfcTextureMap_Factory::~IfcTextureMap_Factory() {
  clear(true);
}

void IfcTextureMap_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextureMap_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextureMap_Factory::end() {
  return m_idMap.end();
}

IfcTextureMap *IfcTextureMap_Factory::get(Step::StepId id) {
  IfcTextureMap *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTextureMap * > (it->second);
  }
  else {
    LOG_ERROR("IfcTextureMap_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTextureMap * > (create(id));
  }
}

Step::BaseObject *IfcTextureMap_Factory::create(Step::StepId id) {
  IfcTextureMap *ret = new IfcTextureMap(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTextureMap_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTextureMap *ret = new IfcTextureMap(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTextureMap_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTextureMap *ret = new IfcTextureMap(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTextureMap *IfcTextureMap_Factory::generate() {
  return static_cast< IfcTextureMap * > (create(m_model->getNewId()));
}

IfcTextureMap *IfcTextureMap_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTextureMap * > (it->second);
  }
  else {
    return NULL;
  }
}

