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
#include <ifc2x3/IfcMove.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMove::IfcMove(Step::SPFData *args) : IfcTask(args) {
  m_moveFrom = NULL;
  m_moveTo = NULL;
  m_punchList.setUnset(true);
}


IfcMove::~IfcMove() {
}

bool IfcMove::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMove(this);
}

const char *IfcMove::type() {
  return "IfcMove";
}

Step::ClassType IfcMove::getClassType() {
  return IfcMove::s_type;
}

Step::ClassType IfcMove::getType() const {
  return IfcMove::s_type;
}

bool IfcMove::isOfType(Step::ClassType t) {
  return IfcMove::s_type == t ? true : IfcTask::isOfType(t);
}

IfcSpatialStructureElement *IfcMove::getMoveFrom() {
  if (Step::BaseObject::inited()) {
    return m_moveFrom.get();
  }
  else {
    return NULL;
  }
}

void IfcMove::setMoveFrom(const Step::RefPtr< IfcSpatialStructureElement > &value) {
  m_moveFrom = value;
}

IfcSpatialStructureElement *IfcMove::getMoveTo() {
  if (Step::BaseObject::inited()) {
    return m_moveTo.get();
  }
  else {
    return NULL;
  }
}

void IfcMove::setMoveTo(const Step::RefPtr< IfcSpatialStructureElement > &value) {
  m_moveTo = value;
}

Step::StepList< IfcText > &IfcMove::getPunchList() {
  if (Step::BaseObject::inited()) {
    return m_punchList;
  }
  else {
    m_punchList.setUnset(true);
    return m_punchList;
  }
}

void IfcMove::setPunchList(const Step::StepList< IfcText > &value) {
  m_punchList = value;
}

void IfcMove::release() {
  IfcTask::release();
  m_moveFrom.release();
  m_moveTo.release();
  m_punchList.clear();
}

bool IfcMove::init() {
  bool status = IfcTask::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_moveFrom = NULL;
  }
  else {
    m_moveFrom = static_cast< IfcSpatialStructureElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_moveTo = NULL;
  }
  else {
    m_moveTo = static_cast< IfcSpatialStructureElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_punchList.setUnset(true);
  }
  else {
    m_punchList.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcText attr2;
        attr2 = Step::spfToString(str1);
        m_punchList.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMove::s_type = new Step::ClassType_class("IfcMove");
IfcMove_Factory::IfcMove_Factory() {
}

IfcMove_Factory::~IfcMove_Factory() {
  clear(true);
}

void IfcMove_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMove_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMove_Factory::end() {
  return m_idMap.end();
}

IfcMove *IfcMove_Factory::get(Step::StepId id) {
  IfcMove *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMove * > (it->second);
  }
  else {
    LOG_ERROR("IfcMove_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMove * > (create(id));
  }
}

Step::BaseObject *IfcMove_Factory::create(Step::StepId id) {
  IfcMove *ret = new IfcMove(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMove_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMove *ret = new IfcMove(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMove_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMove *ret = new IfcMove(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMove *IfcMove_Factory::generate() {
  return static_cast< IfcMove * > (create(m_model->getNewId()));
}

IfcMove *IfcMove_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMove * > (it->second);
  }
  else {
    return NULL;
  }
}

