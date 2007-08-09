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
#include <ifc2x3/IfcClassificationNotation.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcClassificationNotationFacet.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcClassificationNotation::IfcClassificationNotation(Step::SPFData *args) : Step::BaseObject(args) {
  m_notationFacets.setUnset(true);
}


IfcClassificationNotation::~IfcClassificationNotation() {
}

bool IfcClassificationNotation::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcClassificationNotation(this);
}

const char *IfcClassificationNotation::type() {
  return "IfcClassificationNotation";
}

Step::ClassType IfcClassificationNotation::getClassType() {
  return IfcClassificationNotation::s_type;
}

Step::ClassType IfcClassificationNotation::getType() const {
  return IfcClassificationNotation::s_type;
}

bool IfcClassificationNotation::isOfType(Step::ClassType t) {
  return IfcClassificationNotation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcClassificationNotationFacet > > &IfcClassificationNotation::getNotationFacets() {
  if (Step::BaseObject::inited()) {
    return m_notationFacets;
  }
  else {
    m_notationFacets.setUnset(true);
    return m_notationFacets;
  }
}

void IfcClassificationNotation::setNotationFacets(const Step::StepSet< Step::RefPtr< IfcClassificationNotationFacet > > &value) {
  m_notationFacets = value;
}

void IfcClassificationNotation::release() {
  m_notationFacets.clear();
}

bool IfcClassificationNotation::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_notationFacets.setUnset(true);
  }
  else {
    m_notationFacets.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcClassificationNotationFacet > attr2;
        attr2 = static_cast< IfcClassificationNotationFacet * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_notationFacets.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationNotation::s_type = new Step::ClassType_class("IfcClassificationNotation");
IfcClassificationNotation_Factory::IfcClassificationNotation_Factory() {
}

IfcClassificationNotation_Factory::~IfcClassificationNotation_Factory() {
  clear(true);
}

void IfcClassificationNotation_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassificationNotation_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassificationNotation_Factory::end() {
  return m_idMap.end();
}

IfcClassificationNotation *IfcClassificationNotation_Factory::get(Step::StepId id) {
  IfcClassificationNotation *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcClassificationNotation * > (it->second);
  }
  else {
    LOG_ERROR("IfcClassificationNotation_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcClassificationNotation * > (create(id));
  }
}

Step::BaseObject *IfcClassificationNotation_Factory::create(Step::StepId id) {
  IfcClassificationNotation *ret = new IfcClassificationNotation(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcClassificationNotation_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcClassificationNotation *ret = new IfcClassificationNotation(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcClassificationNotation_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcClassificationNotation *ret = new IfcClassificationNotation(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcClassificationNotation *IfcClassificationNotation_Factory::generate() {
  return static_cast< IfcClassificationNotation * > (create(m_model->getNewId()));
}

IfcClassificationNotation *IfcClassificationNotation_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcClassificationNotation * > (it->second);
  }
  else {
    return NULL;
  }
}

