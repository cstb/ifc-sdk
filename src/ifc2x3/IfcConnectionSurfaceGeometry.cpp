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
#include <ifc2x3/IfcConnectionSurfaceGeometry.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSurfaceOrFaceSurface.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConnectionSurfaceGeometry::IfcConnectionSurfaceGeometry(Step::SPFData *args) : IfcConnectionGeometry(args) {
  m_surfaceOnRelatingElement = NULL;
  m_surfaceOnRelatedElement = NULL;
}


IfcConnectionSurfaceGeometry::~IfcConnectionSurfaceGeometry() {
}

bool IfcConnectionSurfaceGeometry::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConnectionSurfaceGeometry(this);
}

const char *IfcConnectionSurfaceGeometry::type() {
  return "IfcConnectionSurfaceGeometry";
}

Step::ClassType IfcConnectionSurfaceGeometry::getClassType() {
  return IfcConnectionSurfaceGeometry::s_type;
}

Step::ClassType IfcConnectionSurfaceGeometry::getType() const {
  return IfcConnectionSurfaceGeometry::s_type;
}

bool IfcConnectionSurfaceGeometry::isOfType(Step::ClassType t) {
  return IfcConnectionSurfaceGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcSurfaceOrFaceSurface *IfcConnectionSurfaceGeometry::getSurfaceOnRelatingElement() {
  if (Step::BaseObject::inited()) {
    return m_surfaceOnRelatingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcConnectionSurfaceGeometry::setSurfaceOnRelatingElement(const Step::RefPtr< IfcSurfaceOrFaceSurface > &value) {
  m_surfaceOnRelatingElement = value;
}

IfcSurfaceOrFaceSurface *IfcConnectionSurfaceGeometry::getSurfaceOnRelatedElement() {
  if (Step::BaseObject::inited()) {
    return m_surfaceOnRelatedElement.get();
  }
  else {
    return NULL;
  }
}

void IfcConnectionSurfaceGeometry::setSurfaceOnRelatedElement(const Step::RefPtr< IfcSurfaceOrFaceSurface > &value) {
  m_surfaceOnRelatedElement = value;
}

void IfcConnectionSurfaceGeometry::release() {
  IfcConnectionGeometry::release();
}

bool IfcConnectionSurfaceGeometry::init() {
  bool status = IfcConnectionGeometry::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_surfaceOnRelatingElement = NULL;
  }
  else {
    m_surfaceOnRelatingElement = new IfcSurfaceOrFaceSurface;
    if (arg[0] == '#') {
      m_surfaceOnRelatingElement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_surfaceOnRelatedElement = NULL;
  }
  else {
    m_surfaceOnRelatedElement = new IfcSurfaceOrFaceSurface;
    if (arg[0] == '#') {
      m_surfaceOnRelatedElement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcConnectionSurfaceGeometry::s_type = new Step::ClassType_class("IfcConnectionSurfaceGeometry");
IfcConnectionSurfaceGeometry_Factory::IfcConnectionSurfaceGeometry_Factory() {
}

IfcConnectionSurfaceGeometry_Factory::~IfcConnectionSurfaceGeometry_Factory() {
  clear(true);
}

void IfcConnectionSurfaceGeometry_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectionSurfaceGeometry_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConnectionSurfaceGeometry_Factory::end() {
  return m_idMap.end();
}

IfcConnectionSurfaceGeometry *IfcConnectionSurfaceGeometry_Factory::get(Step::StepId id) {
  IfcConnectionSurfaceGeometry *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConnectionSurfaceGeometry * > (it->second);
  }
  else {
    LOG_ERROR("IfcConnectionSurfaceGeometry_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConnectionSurfaceGeometry * > (create(id));
  }
}

Step::BaseObject *IfcConnectionSurfaceGeometry_Factory::create(Step::StepId id) {
  IfcConnectionSurfaceGeometry *ret = new IfcConnectionSurfaceGeometry(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConnectionSurfaceGeometry_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConnectionSurfaceGeometry *ret = new IfcConnectionSurfaceGeometry(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConnectionSurfaceGeometry_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConnectionSurfaceGeometry *ret = new IfcConnectionSurfaceGeometry(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConnectionSurfaceGeometry *IfcConnectionSurfaceGeometry_Factory::generate() {
  return static_cast< IfcConnectionSurfaceGeometry * > (create(m_model->getNewId()));
}

IfcConnectionSurfaceGeometry *IfcConnectionSurfaceGeometry_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConnectionSurfaceGeometry * > (it->second);
  }
  else {
    return NULL;
  }
}

