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
#include <ifc2x3/IfcOpeningElement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelFillsElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOpeningElement::IfcOpeningElement(Step::SPFData *args) : IfcFeatureElementSubtraction(args) {
  m_hasFillings.setUnset(true);
}


IfcOpeningElement::~IfcOpeningElement() {
}

bool IfcOpeningElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOpeningElement(this);
}

const char *IfcOpeningElement::type() {
  return "IfcOpeningElement";
}

Step::ClassType IfcOpeningElement::getClassType() {
  return IfcOpeningElement::s_type;
}

Step::ClassType IfcOpeningElement::getType() const {
  return IfcOpeningElement::s_type;
}

bool IfcOpeningElement::isOfType(Step::ClassType t) {
  return IfcOpeningElement::s_type == t ? true : IfcFeatureElementSubtraction::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelFillsElement > > &IfcOpeningElement::getHasFillings() {
  if (Step::BaseObject::inited()) {
    return m_hasFillings;
  }
  else {
    m_hasFillings.setUnset(true);
    return m_hasFillings;
  }
}

void IfcOpeningElement::setHasFillings(const Step::StepSet< Step::RefPtr< IfcRelFillsElement > > &value) {
  m_hasFillings = value;
}

void IfcOpeningElement::release() {
  IfcFeatureElementSubtraction::release();
}

bool IfcOpeningElement::init() {
  bool status = IfcFeatureElementSubtraction::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelFillsElement::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_hasFillings.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasFillings.insert(static_cast< IfcRelFillsElement * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcOpeningElement::s_type = new Step::ClassType_class("IfcOpeningElement");
IfcOpeningElement_Factory::IfcOpeningElement_Factory() {
}

IfcOpeningElement_Factory::~IfcOpeningElement_Factory() {
  clear(true);
}

void IfcOpeningElement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOpeningElement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOpeningElement_Factory::end() {
  return m_idMap.end();
}

IfcOpeningElement *IfcOpeningElement_Factory::get(Step::StepId id) {
  IfcOpeningElement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOpeningElement * > (it->second);
  }
  else {
    LOG_ERROR("IfcOpeningElement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOpeningElement * > (create(id));
  }
}

Step::BaseObject *IfcOpeningElement_Factory::create(Step::StepId id) {
  IfcOpeningElement *ret = new IfcOpeningElement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOpeningElement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOpeningElement *ret = new IfcOpeningElement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOpeningElement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOpeningElement *ret = new IfcOpeningElement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOpeningElement *IfcOpeningElement_Factory::generate() {
  return static_cast< IfcOpeningElement * > (create(m_model->getNewId()));
}

IfcOpeningElement *IfcOpeningElement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOpeningElement * > (it->second);
  }
  else {
    return NULL;
  }
}

