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
#include <ifc2x3/IfcShapeAspect.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProductDefinitionShape.h>
#include <ifc2x3/IfcShapeModel.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcShapeAspect::IfcShapeAspect(Step::SPFData *args) : Step::BaseObject(args) {
  m_shapeRepresentations.setUnset(true);
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_productDefinitional = getUnset(m_productDefinitional);
  m_partOfProductDefinitionShape = NULL;
}


IfcShapeAspect::~IfcShapeAspect() {
}

bool IfcShapeAspect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcShapeAspect(this);
}

const char *IfcShapeAspect::type() {
  return "IfcShapeAspect";
}

Step::ClassType IfcShapeAspect::getClassType() {
  return IfcShapeAspect::s_type;
}

Step::ClassType IfcShapeAspect::getType() const {
  return IfcShapeAspect::s_type;
}

bool IfcShapeAspect::isOfType(Step::ClassType t) {
  return IfcShapeAspect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcShapeModel > > &IfcShapeAspect::getShapeRepresentations() {
  if (Step::BaseObject::inited()) {
    return m_shapeRepresentations;
  }
  else {
    m_shapeRepresentations.setUnset(true);
    return m_shapeRepresentations;
  }
}

void IfcShapeAspect::setShapeRepresentations(const Step::StepList< Step::RefPtr< IfcShapeModel > > &value) {
  m_shapeRepresentations = value;
}

IfcLabel IfcShapeAspect::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcShapeAspect::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcShapeAspect::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcShapeAspect::setDescription(const IfcText &value) {
  m_description = value;
}

Logical IfcShapeAspect::getProductDefinitional() {
  if (Step::BaseObject::inited()) {
    return m_productDefinitional;
  }
  else {
    return getUnset(m_productDefinitional);
  }
}

void IfcShapeAspect::setProductDefinitional(Logical value) {
  m_productDefinitional = value;
}

IfcProductDefinitionShape *IfcShapeAspect::getPartOfProductDefinitionShape() {
  if (Step::BaseObject::inited()) {
    return m_partOfProductDefinitionShape.get();
  }
  else {
    return NULL;
  }
}

void IfcShapeAspect::setPartOfProductDefinitionShape(const Step::RefPtr< IfcProductDefinitionShape > &value) {
  m_partOfProductDefinitionShape = value;
}

void IfcShapeAspect::release() {
  m_shapeRepresentations.clear();
  m_partOfProductDefinitionShape.release();
}

bool IfcShapeAspect::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shapeRepresentations.setUnset(true);
  }
  else {
    m_shapeRepresentations.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcShapeModel > attr2;
        attr2 = static_cast< IfcShapeModel * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_shapeRepresentations.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_productDefinitional = getUnset(m_productDefinitional);
  }
  else {
    m_productDefinitional = Step::spfToLogical(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_partOfProductDefinitionShape = NULL;
  }
  else {
    m_partOfProductDefinitionShape = static_cast< IfcProductDefinitionShape * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcShapeAspect::s_type = new Step::ClassType_class("IfcShapeAspect");
IfcShapeAspect_Factory::IfcShapeAspect_Factory() {
}

IfcShapeAspect_Factory::~IfcShapeAspect_Factory() {
  clear(true);
}

void IfcShapeAspect_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcShapeAspect_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcShapeAspect_Factory::end() {
  return m_idMap.end();
}

IfcShapeAspect *IfcShapeAspect_Factory::get(Step::StepId id) {
  IfcShapeAspect *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcShapeAspect * > (it->second);
  }
  else {
    LOG_ERROR("IfcShapeAspect_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcShapeAspect * > (create(id));
  }
}

Step::BaseObject *IfcShapeAspect_Factory::create(Step::StepId id) {
  IfcShapeAspect *ret = new IfcShapeAspect(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcShapeAspect_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcShapeAspect *ret = new IfcShapeAspect(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcShapeAspect_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcShapeAspect *ret = new IfcShapeAspect(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcShapeAspect *IfcShapeAspect_Factory::generate() {
  return static_cast< IfcShapeAspect * > (create(m_model->getNewId()));
}

IfcShapeAspect *IfcShapeAspect_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcShapeAspect * > (it->second);
  }
  else {
    return NULL;
  }
}

