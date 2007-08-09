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
#include <ifc2x3/IfcConnectionCurveGeometry.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurveOrEdgeCurve.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConnectionCurveGeometry::IfcConnectionCurveGeometry(Step::SPFData *args) : IfcConnectionGeometry(args) {
  m_curveOnRelatingElement = NULL;
  m_curveOnRelatedElement = NULL;
}


IfcConnectionCurveGeometry::~IfcConnectionCurveGeometry() {
}

bool IfcConnectionCurveGeometry::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConnectionCurveGeometry(this);
}

const char *IfcConnectionCurveGeometry::type() {
  return "IfcConnectionCurveGeometry";
}

Step::ClassType IfcConnectionCurveGeometry::getClassType() {
  return IfcConnectionCurveGeometry::s_type;
}

Step::ClassType IfcConnectionCurveGeometry::getType() const {
  return IfcConnectionCurveGeometry::s_type;
}

bool IfcConnectionCurveGeometry::isOfType(Step::ClassType t) {
  return IfcConnectionCurveGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatingElement() {
  if (Step::BaseObject::inited()) {
    return m_curveOnRelatingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcConnectionCurveGeometry::setCurveOnRelatingElement(const Step::RefPtr< IfcCurveOrEdgeCurve > &value) {
  m_curveOnRelatingElement = value;
}

IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatedElement() {
  if (Step::BaseObject::inited()) {
    return m_curveOnRelatedElement.get();
  }
  else {
    return NULL;
  }
}

void IfcConnectionCurveGeometry::setCurveOnRelatedElement(const Step::RefPtr< IfcCurveOrEdgeCurve > &value) {
  m_curveOnRelatedElement = value;
}

void IfcConnectionCurveGeometry::release() {
  IfcConnectionGeometry::release();
}

bool IfcConnectionCurveGeometry::init() {
  bool status = IfcConnectionGeometry::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_curveOnRelatingElement = NULL;
  }
  else {
    m_curveOnRelatingElement = new IfcCurveOrEdgeCurve;
    if (arg[0] == '#') {
      m_curveOnRelatingElement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_curveOnRelatedElement = NULL;
  }
  else {
    m_curveOnRelatedElement = new IfcCurveOrEdgeCurve;
    if (arg[0] == '#') {
      m_curveOnRelatedElement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcConnectionCurveGeometry::s_type = new Step::ClassType_class("IfcConnectionCurveGeometry");
IfcConnectionCurveGeometry_Factory::IfcConnectionCurveGeometry_Factory() {
}

IfcConnectionCurveGeometry_Factory::~IfcConnectionCurveGeometry_Factory() {
  clear(true);
}

void IfcConnectionCurveGeometry_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectionCurveGeometry_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectionCurveGeometry_Factory::end() {
  return m_idMap.end();
}

IfcConnectionCurveGeometry *IfcConnectionCurveGeometry_Factory::get(Step::StepId id) {
  IfcConnectionCurveGeometry *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConnectionCurveGeometry * > (it->second);
  }
  else {
    LOG_ERROR("IfcConnectionCurveGeometry_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConnectionCurveGeometry * > (create(id));
  }
}

Step::BaseObject *IfcConnectionCurveGeometry_Factory::create(Step::StepId id) {
  IfcConnectionCurveGeometry *ret = new IfcConnectionCurveGeometry(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConnectionCurveGeometry_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConnectionCurveGeometry *ret = new IfcConnectionCurveGeometry(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConnectionCurveGeometry_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConnectionCurveGeometry *ret = new IfcConnectionCurveGeometry(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConnectionCurveGeometry *IfcConnectionCurveGeometry_Factory::generate() {
  return static_cast< IfcConnectionCurveGeometry * > (create(m_model->getNewId()));
}

IfcConnectionCurveGeometry *IfcConnectionCurveGeometry_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConnectionCurveGeometry * > (it->second);
  }
  else {
    return NULL;
  }
}

