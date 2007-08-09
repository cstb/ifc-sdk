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
#include <ifc2x3/IfcRelCoversBldgElements.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCovering.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelCoversBldgElements::IfcRelCoversBldgElements(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingBuildingElement = NULL;
  m_relatedCoverings.setUnset(true);
}


IfcRelCoversBldgElements::~IfcRelCoversBldgElements() {
}

bool IfcRelCoversBldgElements::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelCoversBldgElements(this);
}

const char *IfcRelCoversBldgElements::type() {
  return "IfcRelCoversBldgElements";
}

Step::ClassType IfcRelCoversBldgElements::getClassType() {
  return IfcRelCoversBldgElements::s_type;
}

Step::ClassType IfcRelCoversBldgElements::getType() const {
  return IfcRelCoversBldgElements::s_type;
}

bool IfcRelCoversBldgElements::isOfType(Step::ClassType t) {
  return IfcRelCoversBldgElements::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelCoversBldgElements::getRelatingBuildingElement() {
  if (Step::BaseObject::inited()) {
    return m_relatingBuildingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelCoversBldgElements::setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value) {
  m_relatingBuildingElement = value;
}

Step::StepSet< Step::RefPtr< IfcCovering > > &IfcRelCoversBldgElements::getRelatedCoverings() {
  if (Step::BaseObject::inited()) {
    return m_relatedCoverings;
  }
  else {
    m_relatedCoverings.setUnset(true);
    return m_relatedCoverings;
  }
}

void IfcRelCoversBldgElements::setRelatedCoverings(const Step::StepSet< Step::RefPtr< IfcCovering > > &value) {
  m_relatedCoverings = value;
}

void IfcRelCoversBldgElements::release() {
  IfcRelConnects::release();
  m_relatingBuildingElement.release();
  m_relatedCoverings.clear();
}

bool IfcRelCoversBldgElements::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingBuildingElement = NULL;
  }
  else {
    m_relatingBuildingElement = static_cast< IfcElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedCoverings.setUnset(true);
  }
  else {
    m_relatedCoverings.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCovering > attr2;
        attr2 = static_cast< IfcCovering * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedCoverings.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelCoversBldgElements::s_type = new Step::ClassType_class("IfcRelCoversBldgElements");
IfcRelCoversBldgElements_Factory::IfcRelCoversBldgElements_Factory() {
}

IfcRelCoversBldgElements_Factory::~IfcRelCoversBldgElements_Factory() {
  clear(true);
}

void IfcRelCoversBldgElements_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelCoversBldgElements_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelCoversBldgElements_Factory::end() {
  return m_idMap.end();
}

IfcRelCoversBldgElements *IfcRelCoversBldgElements_Factory::get(Step::StepId id) {
  IfcRelCoversBldgElements *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelCoversBldgElements * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelCoversBldgElements_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelCoversBldgElements * > (create(id));
  }
}

Step::BaseObject *IfcRelCoversBldgElements_Factory::create(Step::StepId id) {
  IfcRelCoversBldgElements *ret = new IfcRelCoversBldgElements(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelCoversBldgElements_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelCoversBldgElements *ret = new IfcRelCoversBldgElements(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelCoversBldgElements_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelCoversBldgElements *ret = new IfcRelCoversBldgElements(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelCoversBldgElements *IfcRelCoversBldgElements_Factory::generate() {
  return static_cast< IfcRelCoversBldgElements * > (create(m_model->getNewId()));
}

IfcRelCoversBldgElements *IfcRelCoversBldgElements_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelCoversBldgElements * > (it->second);
  }
  else {
    return NULL;
  }
}

