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
#include <ifc2x3/IfcAnnotationSurface.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcTextureCoordinate.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAnnotationSurface::IfcAnnotationSurface(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_item = NULL;
  m_textureCoordinates = NULL;
}


IfcAnnotationSurface::~IfcAnnotationSurface() {
}

bool IfcAnnotationSurface::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAnnotationSurface(this);
}

const char *IfcAnnotationSurface::type() {
  return "IfcAnnotationSurface";
}

Step::ClassType IfcAnnotationSurface::getClassType() {
  return IfcAnnotationSurface::s_type;
}

Step::ClassType IfcAnnotationSurface::getType() const {
  return IfcAnnotationSurface::s_type;
}

bool IfcAnnotationSurface::isOfType(Step::ClassType t) {
  return IfcAnnotationSurface::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcGeometricRepresentationItem *IfcAnnotationSurface::getItem() {
  if (Step::BaseObject::inited()) {
    return m_item.get();
  }
  else {
    return NULL;
  }
}

void IfcAnnotationSurface::setItem(const Step::RefPtr< IfcGeometricRepresentationItem > &value) {
  m_item = value;
}

IfcTextureCoordinate *IfcAnnotationSurface::getTextureCoordinates() {
  if (Step::BaseObject::inited()) {
    return m_textureCoordinates.get();
  }
  else {
    return NULL;
  }
}

void IfcAnnotationSurface::setTextureCoordinates(const Step::RefPtr< IfcTextureCoordinate > &value) {
  m_textureCoordinates = value;
}

void IfcAnnotationSurface::release() {
  IfcGeometricRepresentationItem::release();
  m_item.release();
  m_textureCoordinates.release();
}

bool IfcAnnotationSurface::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_item = NULL;
  }
  else {
    m_item = static_cast< IfcGeometricRepresentationItem * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_textureCoordinates = NULL;
  }
  else {
    m_textureCoordinates = static_cast< IfcTextureCoordinate * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationSurface::s_type = new Step::ClassType_class("IfcAnnotationSurface");
IfcAnnotationSurface_Factory::IfcAnnotationSurface_Factory() {
}

IfcAnnotationSurface_Factory::~IfcAnnotationSurface_Factory() {
  clear(true);
}

void IfcAnnotationSurface_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotationSurface_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotationSurface_Factory::end() {
  return m_idMap.end();
}

IfcAnnotationSurface *IfcAnnotationSurface_Factory::get(Step::StepId id) {
  IfcAnnotationSurface *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAnnotationSurface * > (it->second);
  }
  else {
    LOG_ERROR("IfcAnnotationSurface_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAnnotationSurface * > (create(id));
  }
}

Step::BaseObject *IfcAnnotationSurface_Factory::create(Step::StepId id) {
  IfcAnnotationSurface *ret = new IfcAnnotationSurface(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotationSurface_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAnnotationSurface *ret = new IfcAnnotationSurface(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotationSurface_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAnnotationSurface *ret = new IfcAnnotationSurface(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAnnotationSurface *IfcAnnotationSurface_Factory::generate() {
  return static_cast< IfcAnnotationSurface * > (create(m_model->getNewId()));
}

IfcAnnotationSurface *IfcAnnotationSurface_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAnnotationSurface * > (it->second);
  }
  else {
    return NULL;
  }
}

