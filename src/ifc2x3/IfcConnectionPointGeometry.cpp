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
#include <ifc2x3/IfcConnectionPointGeometry.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPointOrVertexPoint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConnectionPointGeometry::IfcConnectionPointGeometry(Step::SPFData *args) : IfcConnectionGeometry(args) {
  m_pointOnRelatingElement = NULL;
  m_pointOnRelatedElement = NULL;
}


IfcConnectionPointGeometry::~IfcConnectionPointGeometry() {
}

bool IfcConnectionPointGeometry::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConnectionPointGeometry(this);
}

const char *IfcConnectionPointGeometry::type() {
  return "IfcConnectionPointGeometry";
}

Step::ClassType IfcConnectionPointGeometry::getClassType() {
  return IfcConnectionPointGeometry::s_type;
}

Step::ClassType IfcConnectionPointGeometry::getType() const {
  return IfcConnectionPointGeometry::s_type;
}

bool IfcConnectionPointGeometry::isOfType(Step::ClassType t) {
  return IfcConnectionPointGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcPointOrVertexPoint *IfcConnectionPointGeometry::getPointOnRelatingElement() {
  if (Step::BaseObject::inited()) {
    return m_pointOnRelatingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcConnectionPointGeometry::setPointOnRelatingElement(const Step::RefPtr< IfcPointOrVertexPoint > &value) {
  m_pointOnRelatingElement = value;
}

IfcPointOrVertexPoint *IfcConnectionPointGeometry::getPointOnRelatedElement() {
  if (Step::BaseObject::inited()) {
    return m_pointOnRelatedElement.get();
  }
  else {
    return NULL;
  }
}

void IfcConnectionPointGeometry::setPointOnRelatedElement(const Step::RefPtr< IfcPointOrVertexPoint > &value) {
  m_pointOnRelatedElement = value;
}

void IfcConnectionPointGeometry::release() {
  IfcConnectionGeometry::release();
}

bool IfcConnectionPointGeometry::init() {
  bool status = IfcConnectionGeometry::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_pointOnRelatingElement = NULL;
  }
  else {
    m_pointOnRelatingElement = new IfcPointOrVertexPoint;
    if (arg[0] == '#') {
      m_pointOnRelatingElement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_pointOnRelatedElement = NULL;
  }
  else {
    m_pointOnRelatedElement = new IfcPointOrVertexPoint;
    if (arg[0] == '#') {
      m_pointOnRelatedElement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcConnectionPointGeometry::s_type = new Step::ClassType_class("IfcConnectionPointGeometry");
IfcConnectionPointGeometry_Factory::IfcConnectionPointGeometry_Factory() {
}

IfcConnectionPointGeometry_Factory::~IfcConnectionPointGeometry_Factory() {
  clear(true);
}

void IfcConnectionPointGeometry_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectionPointGeometry_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectionPointGeometry_Factory::end() {
  return m_idMap.end();
}

IfcConnectionPointGeometry *IfcConnectionPointGeometry_Factory::get(Step::StepId id) {
  IfcConnectionPointGeometry *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConnectionPointGeometry * > (it->second);
  }
  else {
    LOG_ERROR("IfcConnectionPointGeometry_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConnectionPointGeometry * > (create(id));
  }
}

Step::BaseObject *IfcConnectionPointGeometry_Factory::create(Step::StepId id) {
  IfcConnectionPointGeometry *ret = new IfcConnectionPointGeometry(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConnectionPointGeometry_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConnectionPointGeometry *ret = new IfcConnectionPointGeometry(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConnectionPointGeometry_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConnectionPointGeometry *ret = new IfcConnectionPointGeometry(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConnectionPointGeometry *IfcConnectionPointGeometry_Factory::generate() {
  return static_cast< IfcConnectionPointGeometry * > (create(m_model->getNewId()));
}

IfcConnectionPointGeometry *IfcConnectionPointGeometry_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConnectionPointGeometry * > (it->second);
  }
  else {
    return NULL;
  }
}

