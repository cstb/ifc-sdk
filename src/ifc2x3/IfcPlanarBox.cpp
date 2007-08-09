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
#include <ifc2x3/IfcPlanarBox.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPlanarBox::IfcPlanarBox(Step::SPFData *args) : IfcPlanarExtent(args) {
  m_placement = NULL;
}


IfcPlanarBox::~IfcPlanarBox() {
}

bool IfcPlanarBox::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPlanarBox(this);
}

const char *IfcPlanarBox::type() {
  return "IfcPlanarBox";
}

Step::ClassType IfcPlanarBox::getClassType() {
  return IfcPlanarBox::s_type;
}

Step::ClassType IfcPlanarBox::getType() const {
  return IfcPlanarBox::s_type;
}

bool IfcPlanarBox::isOfType(Step::ClassType t) {
  return IfcPlanarBox::s_type == t ? true : IfcPlanarExtent::isOfType(t);
}

IfcAxis2Placement *IfcPlanarBox::getPlacement() {
  if (Step::BaseObject::inited()) {
    return m_placement.get();
  }
  else {
    return NULL;
  }
}

void IfcPlanarBox::setPlacement(const Step::RefPtr< IfcAxis2Placement > &value) {
  m_placement = value;
}

void IfcPlanarBox::release() {
  IfcPlanarExtent::release();
}

bool IfcPlanarBox::init() {
  bool status = IfcPlanarExtent::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_placement = NULL;
  }
  else {
    m_placement = new IfcAxis2Placement;
    if (arg[0] == '#') {
      m_placement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlanarBox::s_type = new Step::ClassType_class("IfcPlanarBox");
IfcPlanarBox_Factory::IfcPlanarBox_Factory() {
}

IfcPlanarBox_Factory::~IfcPlanarBox_Factory() {
  clear(true);
}

void IfcPlanarBox_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPlanarBox_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPlanarBox_Factory::end() {
  return m_idMap.end();
}

IfcPlanarBox *IfcPlanarBox_Factory::get(Step::StepId id) {
  IfcPlanarBox *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPlanarBox * > (it->second);
  }
  else {
    LOG_ERROR("IfcPlanarBox_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPlanarBox * > (create(id));
  }
}

Step::BaseObject *IfcPlanarBox_Factory::create(Step::StepId id) {
  IfcPlanarBox *ret = new IfcPlanarBox(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPlanarBox_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPlanarBox *ret = new IfcPlanarBox(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPlanarBox_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPlanarBox *ret = new IfcPlanarBox(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPlanarBox *IfcPlanarBox_Factory::generate() {
  return static_cast< IfcPlanarBox * > (create(m_model->getNewId()));
}

IfcPlanarBox *IfcPlanarBox_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPlanarBox * > (it->second);
  }
  else {
    return NULL;
  }
}

