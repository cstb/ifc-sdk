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
#include <ifc2x3/IfcTendonAnchor.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTendonAnchor::IfcTendonAnchor(Step::SPFData *args) : IfcReinforcingElement(args) {
}


IfcTendonAnchor::~IfcTendonAnchor() {
}

bool IfcTendonAnchor::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTendonAnchor(this);
}

const char *IfcTendonAnchor::type() {
  return "IfcTendonAnchor";
}

Step::ClassType IfcTendonAnchor::getClassType() {
  return IfcTendonAnchor::s_type;
}

Step::ClassType IfcTendonAnchor::getType() const {
  return IfcTendonAnchor::s_type;
}

bool IfcTendonAnchor::isOfType(Step::ClassType t) {
  return IfcTendonAnchor::s_type == t ? true : IfcReinforcingElement::isOfType(t);
}

void IfcTendonAnchor::release() {
  IfcReinforcingElement::release();
}

bool IfcTendonAnchor::init() {
  bool status = IfcReinforcingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTendonAnchor::s_type = new Step::ClassType_class("IfcTendonAnchor");
IfcTendonAnchor_Factory::IfcTendonAnchor_Factory() {
}

IfcTendonAnchor_Factory::~IfcTendonAnchor_Factory() {
  clear(true);
}

void IfcTendonAnchor_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTendonAnchor_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTendonAnchor_Factory::end() {
  return m_idMap.end();
}

IfcTendonAnchor *IfcTendonAnchor_Factory::get(Step::StepId id) {
  IfcTendonAnchor *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTendonAnchor * > (it->second);
  }
  else {
    LOG_ERROR("IfcTendonAnchor_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTendonAnchor * > (create(id));
  }
}

Step::BaseObject *IfcTendonAnchor_Factory::create(Step::StepId id) {
  IfcTendonAnchor *ret = new IfcTendonAnchor(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTendonAnchor_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTendonAnchor *ret = new IfcTendonAnchor(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTendonAnchor_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTendonAnchor *ret = new IfcTendonAnchor(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTendonAnchor *IfcTendonAnchor_Factory::generate() {
  return static_cast< IfcTendonAnchor * > (create(m_model->getNewId()));
}

IfcTendonAnchor *IfcTendonAnchor_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTendonAnchor * > (it->second);
  }
  else {
    return NULL;
  }
}

