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
#include <ifc2x3/IfcImageTexture.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcImageTexture::IfcImageTexture(Step::SPFData *args) : IfcSurfaceTexture(args) {
  m_urlReference = getUnset(m_urlReference);
}


IfcImageTexture::~IfcImageTexture() {
}

bool IfcImageTexture::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcImageTexture(this);
}

const char *IfcImageTexture::type() {
  return "IfcImageTexture";
}

Step::ClassType IfcImageTexture::getClassType() {
  return IfcImageTexture::s_type;
}

Step::ClassType IfcImageTexture::getType() const {
  return IfcImageTexture::s_type;
}

bool IfcImageTexture::isOfType(Step::ClassType t) {
  return IfcImageTexture::s_type == t ? true : IfcSurfaceTexture::isOfType(t);
}

IfcIdentifier IfcImageTexture::getUrlReference() {
  if (Step::BaseObject::inited()) {
    return m_urlReference;
  }
  else {
    return getUnset(m_urlReference);
  }
}

void IfcImageTexture::setUrlReference(const IfcIdentifier &value) {
  m_urlReference = value;
}

void IfcImageTexture::release() {
  IfcSurfaceTexture::release();
}

bool IfcImageTexture::init() {
  bool status = IfcSurfaceTexture::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_urlReference = getUnset(m_urlReference);
  }
  else {
    m_urlReference = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcImageTexture::s_type = new Step::ClassType_class("IfcImageTexture");
IfcImageTexture_Factory::IfcImageTexture_Factory() {
}

IfcImageTexture_Factory::~IfcImageTexture_Factory() {
  clear(true);
}

void IfcImageTexture_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcImageTexture_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcImageTexture_Factory::end() {
  return m_idMap.end();
}

IfcImageTexture *IfcImageTexture_Factory::get(Step::StepId id) {
  IfcImageTexture *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcImageTexture * > (it->second);
  }
  else {
    LOG_ERROR("IfcImageTexture_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcImageTexture * > (create(id));
  }
}

Step::BaseObject *IfcImageTexture_Factory::create(Step::StepId id) {
  IfcImageTexture *ret = new IfcImageTexture(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcImageTexture_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcImageTexture *ret = new IfcImageTexture(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcImageTexture_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcImageTexture *ret = new IfcImageTexture(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcImageTexture *IfcImageTexture_Factory::generate() {
  return static_cast< IfcImageTexture * > (create(m_model->getNewId()));
}

IfcImageTexture *IfcImageTexture_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcImageTexture * > (it->second);
  }
  else {
    return NULL;
  }
}

