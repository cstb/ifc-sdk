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
#include <ifc2x3/IfcPixelTexture.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPixelTexture::IfcPixelTexture(Step::SPFData *args) : IfcSurfaceTexture(args) {
  m_width = getUnset(m_width);
  m_height = getUnset(m_height);
  m_colourComponents = getUnset(m_colourComponents);
  m_pixel.setUnset(true);
}


IfcPixelTexture::~IfcPixelTexture() {
}

bool IfcPixelTexture::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPixelTexture(this);
}

const char *IfcPixelTexture::type() {
  return "IfcPixelTexture";
}

Step::ClassType IfcPixelTexture::getClassType() {
  return IfcPixelTexture::s_type;
}

Step::ClassType IfcPixelTexture::getType() const {
  return IfcPixelTexture::s_type;
}

bool IfcPixelTexture::isOfType(Step::ClassType t) {
  return IfcPixelTexture::s_type == t ? true : IfcSurfaceTexture::isOfType(t);
}

IfcInteger IfcPixelTexture::getWidth() {
  if (Step::BaseObject::inited()) {
    return m_width;
  }
  else {
    return getUnset(m_width);
  }
}

void IfcPixelTexture::setWidth(IfcInteger value) {
  m_width = value;
}

IfcInteger IfcPixelTexture::getHeight() {
  if (Step::BaseObject::inited()) {
    return m_height;
  }
  else {
    return getUnset(m_height);
  }
}

void IfcPixelTexture::setHeight(IfcInteger value) {
  m_height = value;
}

IfcInteger IfcPixelTexture::getColourComponents() {
  if (Step::BaseObject::inited()) {
    return m_colourComponents;
  }
  else {
    return getUnset(m_colourComponents);
  }
}

void IfcPixelTexture::setColourComponents(IfcInteger value) {
  m_colourComponents = value;
}

void IfcPixelTexture::setPixel(const Step::StepList< Binary< 32 > > &value) {
   m_pixel = value;
}

Step::StepList< Binary< 32 > > &IfcPixelTexture::getPixel() {
  if (Step::BaseObject::inited()) {
    return m_pixel;
  }
  else {
    m_pixel.setUnset(true);
    return m_pixel;
  }
}

void IfcPixelTexture::release() {
  IfcSurfaceTexture::release();
  m_pixel.clear();
}

bool IfcPixelTexture::init() {
  bool status = IfcSurfaceTexture::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_width = getUnset(m_width);
  }
  else {
    m_width = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_height = getUnset(m_height);
  }
  else {
    m_height = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_colourComponents = getUnset(m_colourComponents);
  }
  else {
    m_colourComponents = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_pixel.setUnset(true);
  }
  else {
    m_pixel.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Binary< 32 > attr2;
        attr2 = Step::spfToBinary<32>(str1);
        m_pixel.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPixelTexture::s_type = new Step::ClassType_class("IfcPixelTexture");
IfcPixelTexture_Factory::IfcPixelTexture_Factory() {
}

IfcPixelTexture_Factory::~IfcPixelTexture_Factory() {
  clear(true);
}

void IfcPixelTexture_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPixelTexture_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPixelTexture_Factory::end() {
  return m_idMap.end();
}

IfcPixelTexture *IfcPixelTexture_Factory::get(Step::StepId id) {
  IfcPixelTexture *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPixelTexture * > (it->second);
  }
  else {
    LOG_ERROR("IfcPixelTexture_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPixelTexture * > (create(id));
  }
}

Step::BaseObject *IfcPixelTexture_Factory::create(Step::StepId id) {
  IfcPixelTexture *ret = new IfcPixelTexture(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPixelTexture_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPixelTexture *ret = new IfcPixelTexture(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPixelTexture_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPixelTexture *ret = new IfcPixelTexture(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPixelTexture *IfcPixelTexture_Factory::generate() {
  return static_cast< IfcPixelTexture * > (create(m_model->getNewId()));
}

IfcPixelTexture *IfcPixelTexture_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPixelTexture * > (it->second);
  }
  else {
    return NULL;
  }
}

