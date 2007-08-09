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
#include <ifc2x3/IfcSurfaceStyleWithTextures.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSurfaceTexture.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSurfaceStyleWithTextures::IfcSurfaceStyleWithTextures(Step::SPFData *args) : Step::BaseObject(args) {
  m_textures.setUnset(true);
}


IfcSurfaceStyleWithTextures::~IfcSurfaceStyleWithTextures() {
}

bool IfcSurfaceStyleWithTextures::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceStyleWithTextures(this);
}

const char *IfcSurfaceStyleWithTextures::type() {
  return "IfcSurfaceStyleWithTextures";
}

Step::ClassType IfcSurfaceStyleWithTextures::getClassType() {
  return IfcSurfaceStyleWithTextures::s_type;
}

Step::ClassType IfcSurfaceStyleWithTextures::getType() const {
  return IfcSurfaceStyleWithTextures::s_type;
}

bool IfcSurfaceStyleWithTextures::isOfType(Step::ClassType t) {
  return IfcSurfaceStyleWithTextures::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcSurfaceTexture > > &IfcSurfaceStyleWithTextures::getTextures() {
  if (Step::BaseObject::inited()) {
    return m_textures;
  }
  else {
    m_textures.setUnset(true);
    return m_textures;
  }
}

void IfcSurfaceStyleWithTextures::setTextures(const Step::StepList< Step::RefPtr< IfcSurfaceTexture > > &value) {
  m_textures = value;
}

void IfcSurfaceStyleWithTextures::release() {
  m_textures.clear();
}

bool IfcSurfaceStyleWithTextures::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textures.setUnset(true);
  }
  else {
    m_textures.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcSurfaceTexture > attr2;
        attr2 = static_cast< IfcSurfaceTexture * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_textures.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleWithTextures::s_type = new Step::ClassType_class("IfcSurfaceStyleWithTextures");
IfcSurfaceStyleWithTextures_Factory::IfcSurfaceStyleWithTextures_Factory() {
}

IfcSurfaceStyleWithTextures_Factory::~IfcSurfaceStyleWithTextures_Factory() {
  clear(true);
}

void IfcSurfaceStyleWithTextures_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyleWithTextures_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyleWithTextures_Factory::end() {
  return m_idMap.end();
}

IfcSurfaceStyleWithTextures *IfcSurfaceStyleWithTextures_Factory::get(Step::StepId id) {
  IfcSurfaceStyleWithTextures *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSurfaceStyleWithTextures * > (it->second);
  }
  else {
    LOG_ERROR("IfcSurfaceStyleWithTextures_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSurfaceStyleWithTextures * > (create(id));
  }
}

Step::BaseObject *IfcSurfaceStyleWithTextures_Factory::create(Step::StepId id) {
  IfcSurfaceStyleWithTextures *ret = new IfcSurfaceStyleWithTextures(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyleWithTextures_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSurfaceStyleWithTextures *ret = new IfcSurfaceStyleWithTextures(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyleWithTextures_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSurfaceStyleWithTextures *ret = new IfcSurfaceStyleWithTextures(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSurfaceStyleWithTextures *IfcSurfaceStyleWithTextures_Factory::generate() {
  return static_cast< IfcSurfaceStyleWithTextures * > (create(m_model->getNewId()));
}

IfcSurfaceStyleWithTextures *IfcSurfaceStyleWithTextures_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSurfaceStyleWithTextures * > (it->second);
  }
  else {
    return NULL;
  }
}

