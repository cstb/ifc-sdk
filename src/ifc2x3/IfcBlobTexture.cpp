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
#include <ifc2x3/IfcBlobTexture.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBlobTexture::IfcBlobTexture(Step::SPFData *args) : IfcSurfaceTexture(args) {
  m_rasterFormat = getUnset(m_rasterFormat);
  m_rasterCode = getUnset(m_rasterCode);
}


IfcBlobTexture::~IfcBlobTexture() {
}

bool IfcBlobTexture::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBlobTexture(this);
}

const char *IfcBlobTexture::type() {
  return "IfcBlobTexture";
}

Step::ClassType IfcBlobTexture::getClassType() {
  return IfcBlobTexture::s_type;
}

Step::ClassType IfcBlobTexture::getType() const {
  return IfcBlobTexture::s_type;
}

bool IfcBlobTexture::isOfType(Step::ClassType t) {
  return IfcBlobTexture::s_type == t ? true : IfcSurfaceTexture::isOfType(t);
}

IfcIdentifier IfcBlobTexture::getRasterFormat() {
  if (Step::BaseObject::inited()) {
    return m_rasterFormat;
  }
  else {
    return getUnset(m_rasterFormat);
  }
}

void IfcBlobTexture::setRasterFormat(const IfcIdentifier &value) {
  m_rasterFormat = value;
}

Bool IfcBlobTexture::getRasterCode() {
  if (Step::BaseObject::inited()) {
    return m_rasterCode;
  }
  else {
    return getUnset(m_rasterCode);
  }
}

void IfcBlobTexture::setRasterCode(Bool value) {
  m_rasterCode = value;
}

void IfcBlobTexture::release() {
  IfcSurfaceTexture::release();
}

bool IfcBlobTexture::init() {
  bool status = IfcSurfaceTexture::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rasterFormat = getUnset(m_rasterFormat);
  }
  else {
    m_rasterFormat = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rasterCode = getUnset(m_rasterCode);
  }
  else {
    m_rasterCode = Step::spfToBool(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBlobTexture::s_type = new Step::ClassType_class("IfcBlobTexture");
IfcBlobTexture_Factory::IfcBlobTexture_Factory() {
}

IfcBlobTexture_Factory::~IfcBlobTexture_Factory() {
  clear(true);
}

void IfcBlobTexture_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBlobTexture_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBlobTexture_Factory::end() {
  return m_idMap.end();
}

IfcBlobTexture *IfcBlobTexture_Factory::get(Step::StepId id) {
  IfcBlobTexture *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBlobTexture * > (it->second);
  }
  else {
    LOG_ERROR("IfcBlobTexture_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBlobTexture * > (create(id));
  }
}

Step::BaseObject *IfcBlobTexture_Factory::create(Step::StepId id) {
  IfcBlobTexture *ret = new IfcBlobTexture(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBlobTexture_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBlobTexture *ret = new IfcBlobTexture(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBlobTexture_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBlobTexture *ret = new IfcBlobTexture(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBlobTexture *IfcBlobTexture_Factory::generate() {
  return static_cast< IfcBlobTexture * > (create(m_model->getNewId()));
}

IfcBlobTexture *IfcBlobTexture_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBlobTexture * > (it->second);
  }
  else {
    return NULL;
  }
}

