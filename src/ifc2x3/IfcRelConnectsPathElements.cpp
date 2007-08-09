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
#include <ifc2x3/IfcRelConnectsPathElements.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelConnectsPathElements::IfcRelConnectsPathElements(Step::SPFData *args) : IfcRelConnectsElements(args) {
  m_relatingPriorities.setUnset(true);
  m_relatedPriorities.setUnset(true);
  m_relatedConnectionType = IfcConnectionTypeEnum_UNSET;
  m_relatingConnectionType = IfcConnectionTypeEnum_UNSET;
}


IfcRelConnectsPathElements::~IfcRelConnectsPathElements() {
}

bool IfcRelConnectsPathElements::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelConnectsPathElements(this);
}

const char *IfcRelConnectsPathElements::type() {
  return "IfcRelConnectsPathElements";
}

Step::ClassType IfcRelConnectsPathElements::getClassType() {
  return IfcRelConnectsPathElements::s_type;
}

Step::ClassType IfcRelConnectsPathElements::getType() const {
  return IfcRelConnectsPathElements::s_type;
}

bool IfcRelConnectsPathElements::isOfType(Step::ClassType t) {
  return IfcRelConnectsPathElements::s_type == t ? true : IfcRelConnectsElements::isOfType(t);
}

Step::StepList< Integer > &IfcRelConnectsPathElements::getRelatingPriorities() {
  if (Step::BaseObject::inited()) {
    return m_relatingPriorities;
  }
  else {
    m_relatingPriorities.setUnset(true);
    return m_relatingPriorities;
  }
}

void IfcRelConnectsPathElements::setRelatingPriorities(const Step::StepList< Integer > &value) {
  m_relatingPriorities = value;
}

Step::StepList< Integer > &IfcRelConnectsPathElements::getRelatedPriorities() {
  if (Step::BaseObject::inited()) {
    return m_relatedPriorities;
  }
  else {
    m_relatedPriorities.setUnset(true);
    return m_relatedPriorities;
  }
}

void IfcRelConnectsPathElements::setRelatedPriorities(const Step::StepList< Integer > &value) {
  m_relatedPriorities = value;
}

IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatedConnectionType() {
  if (Step::BaseObject::inited()) {
    return m_relatedConnectionType;
  }
  else {
    return IfcConnectionTypeEnum_UNSET;
  }
}

void IfcRelConnectsPathElements::setRelatedConnectionType(IfcConnectionTypeEnum value) {
  m_relatedConnectionType = value;
}

IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatingConnectionType() {
  if (Step::BaseObject::inited()) {
    return m_relatingConnectionType;
  }
  else {
    return IfcConnectionTypeEnum_UNSET;
  }
}

void IfcRelConnectsPathElements::setRelatingConnectionType(IfcConnectionTypeEnum value) {
  m_relatingConnectionType = value;
}

void IfcRelConnectsPathElements::release() {
  IfcRelConnectsElements::release();
  m_relatingPriorities.clear();
  m_relatedPriorities.clear();
}

bool IfcRelConnectsPathElements::init() {
  bool status = IfcRelConnectsElements::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingPriorities.setUnset(true);
  }
  else {
    m_relatingPriorities.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Integer attr2;
        attr2 = Step::spfToInteger(str1);
        m_relatingPriorities.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedPriorities.setUnset(true);
  }
  else {
    m_relatedPriorities.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Integer attr2;
        attr2 = Step::spfToInteger(str1);
        m_relatedPriorities.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedConnectionType = IfcConnectionTypeEnum_UNSET;
  }
  else {
    if (arg == ".ATPATH.") {
      m_relatedConnectionType = IfcConnectionTypeEnum_ATPATH;
    }
    else if (arg == ".ATSTART.") {
      m_relatedConnectionType = IfcConnectionTypeEnum_ATSTART;
    }
    else if (arg == ".ATEND.") {
      m_relatedConnectionType = IfcConnectionTypeEnum_ATEND;
    }
    else if (arg == ".NOTDEFINED.") {
      m_relatedConnectionType = IfcConnectionTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingConnectionType = IfcConnectionTypeEnum_UNSET;
  }
  else {
    if (arg == ".ATPATH.") {
      m_relatingConnectionType = IfcConnectionTypeEnum_ATPATH;
    }
    else if (arg == ".ATSTART.") {
      m_relatingConnectionType = IfcConnectionTypeEnum_ATSTART;
    }
    else if (arg == ".ATEND.") {
      m_relatingConnectionType = IfcConnectionTypeEnum_ATEND;
    }
    else if (arg == ".NOTDEFINED.") {
      m_relatingConnectionType = IfcConnectionTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsPathElements::s_type = new Step::ClassType_class("IfcRelConnectsPathElements");
IfcRelConnectsPathElements_Factory::IfcRelConnectsPathElements_Factory() {
}

IfcRelConnectsPathElements_Factory::~IfcRelConnectsPathElements_Factory() {
  clear(true);
}

void IfcRelConnectsPathElements_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsPathElements_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsPathElements_Factory::end() {
  return m_idMap.end();
}

IfcRelConnectsPathElements *IfcRelConnectsPathElements_Factory::get(Step::StepId id) {
  IfcRelConnectsPathElements *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelConnectsPathElements * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelConnectsPathElements_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelConnectsPathElements * > (create(id));
  }
}

Step::BaseObject *IfcRelConnectsPathElements_Factory::create(Step::StepId id) {
  IfcRelConnectsPathElements *ret = new IfcRelConnectsPathElements(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsPathElements_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelConnectsPathElements *ret = new IfcRelConnectsPathElements(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsPathElements_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelConnectsPathElements *ret = new IfcRelConnectsPathElements(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelConnectsPathElements *IfcRelConnectsPathElements_Factory::generate() {
  return static_cast< IfcRelConnectsPathElements * > (create(m_model->getNewId()));
}

IfcRelConnectsPathElements *IfcRelConnectsPathElements_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelConnectsPathElements * > (it->second);
  }
  else {
    return NULL;
  }
}

