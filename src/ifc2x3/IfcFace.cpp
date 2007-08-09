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
#include <ifc2x3/IfcFace.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcFaceBound.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFace::IfcFace(Step::SPFData *args) : IfcTopologicalRepresentationItem(args) {
  m_bounds.setUnset(true);
}


IfcFace::~IfcFace() {
}

bool IfcFace::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFace(this);
}

const char *IfcFace::type() {
  return "IfcFace";
}

Step::ClassType IfcFace::getClassType() {
  return IfcFace::s_type;
}

Step::ClassType IfcFace::getType() const {
  return IfcFace::s_type;
}

bool IfcFace::isOfType(Step::ClassType t) {
  return IfcFace::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcFaceBound > > &IfcFace::getBounds() {
  if (Step::BaseObject::inited()) {
    return m_bounds;
  }
  else {
    m_bounds.setUnset(true);
    return m_bounds;
  }
}

void IfcFace::setBounds(const Step::StepSet< Step::RefPtr< IfcFaceBound > > &value) {
  m_bounds = value;
}

void IfcFace::release() {
  IfcTopologicalRepresentationItem::release();
  m_bounds.clear();
}

bool IfcFace::init() {
  bool status = IfcTopologicalRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_bounds.setUnset(true);
  }
  else {
    m_bounds.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcFaceBound > attr2;
        attr2 = static_cast< IfcFaceBound * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_bounds.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFace::s_type = new Step::ClassType_class("IfcFace");
IfcFace_Factory::IfcFace_Factory() {
}

IfcFace_Factory::~IfcFace_Factory() {
  clear(true);
}

void IfcFace_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFace_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFace_Factory::end() {
  return m_idMap.end();
}

IfcFace *IfcFace_Factory::get(Step::StepId id) {
  IfcFace *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFace * > (it->second);
  }
  else {
    LOG_ERROR("IfcFace_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFace * > (create(id));
  }
}

Step::BaseObject *IfcFace_Factory::create(Step::StepId id) {
  IfcFace *ret = new IfcFace(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFace_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFace *ret = new IfcFace(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFace_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFace *ret = new IfcFace(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFace *IfcFace_Factory::generate() {
  return static_cast< IfcFace * > (create(m_model->getNewId()));
}

IfcFace *IfcFace_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFace * > (it->second);
  }
  else {
    return NULL;
  }
}

