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
#include <ifc2x3/IfcGeometricSet.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcGeometricSetSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcGeometricSet::IfcGeometricSet(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_elements.setUnset(true);
}


IfcGeometricSet::~IfcGeometricSet() {
}

bool IfcGeometricSet::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcGeometricSet(this);
}

const char *IfcGeometricSet::type() {
  return "IfcGeometricSet";
}

Step::ClassType IfcGeometricSet::getClassType() {
  return IfcGeometricSet::s_type;
}

Step::ClassType IfcGeometricSet::getType() const {
  return IfcGeometricSet::s_type;
}

bool IfcGeometricSet::isOfType(Step::ClassType t) {
  return IfcGeometricSet::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcGeometricSetSelect > > &IfcGeometricSet::getElements() {
  if (Step::BaseObject::inited()) {
    return m_elements;
  }
  else {
    m_elements.setUnset(true);
    return m_elements;
  }
}

void IfcGeometricSet::setElements(const Step::StepSet< Step::RefPtr< IfcGeometricSetSelect > > &value) {
  m_elements = value;
}

void IfcGeometricSet::release() {
  IfcGeometricRepresentationItem::release();
  m_elements.clear();
}

bool IfcGeometricSet::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_elements.setUnset(true);
  }
  else {
    m_elements.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcGeometricSetSelect > attr2;
        attr2 = new IfcGeometricSetSelect;
        if (str1[0] == '#') {
          attr2->set(m_model->getObjectById(atoi(str1.c_str() + 1)));
        }
        else if (str1[str1.length() - 1] == ')') {
          std::string type2;
          unsigned int i2;
          i2 = str1.find('(');
          if (i2 != std::string::npos) {
            type2 = str1.substr(0, i2);
            str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
          }
        }
        m_elements.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeometricSet::s_type = new Step::ClassType_class("IfcGeometricSet");
IfcGeometricSet_Factory::IfcGeometricSet_Factory() {
}

IfcGeometricSet_Factory::~IfcGeometricSet_Factory() {
  clear(true);
}

void IfcGeometricSet_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGeometricSet_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGeometricSet_Factory::end() {
  return m_idMap.end();
}

IfcGeometricSet *IfcGeometricSet_Factory::get(Step::StepId id) {
  IfcGeometricSet *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcGeometricSet * > (it->second);
  }
  else {
    LOG_ERROR("IfcGeometricSet_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcGeometricSet * > (create(id));
  }
}

Step::BaseObject *IfcGeometricSet_Factory::create(Step::StepId id) {
  IfcGeometricSet *ret = new IfcGeometricSet(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcGeometricSet_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcGeometricSet *ret = new IfcGeometricSet(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcGeometricSet_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcGeometricSet *ret = new IfcGeometricSet(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcGeometricSet *IfcGeometricSet_Factory::generate() {
  return static_cast< IfcGeometricSet * > (create(m_model->getNewId()));
}

IfcGeometricSet *IfcGeometricSet_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcGeometricSet * > (it->second);
  }
  else {
    return NULL;
  }
}

