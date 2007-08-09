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
#include <ifc2x3/IfcProductDefinitionShape.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcProductDefinitionShape::IfcProductDefinitionShape(Step::SPFData *args) : IfcProductRepresentation(args) {
  m_shapeOfProduct.setUnset(true);
  m_hasShapeAspects.setUnset(true);
}


IfcProductDefinitionShape::~IfcProductDefinitionShape() {
}

bool IfcProductDefinitionShape::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProductDefinitionShape(this);
}

const char *IfcProductDefinitionShape::type() {
  return "IfcProductDefinitionShape";
}

Step::ClassType IfcProductDefinitionShape::getClassType() {
  return IfcProductDefinitionShape::s_type;
}

Step::ClassType IfcProductDefinitionShape::getType() const {
  return IfcProductDefinitionShape::s_type;
}

bool IfcProductDefinitionShape::isOfType(Step::ClassType t) {
  return IfcProductDefinitionShape::s_type == t ? true : IfcProductRepresentation::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcProduct > > &IfcProductDefinitionShape::getShapeOfProduct() {
  if (Step::BaseObject::inited()) {
    return m_shapeOfProduct;
  }
  else {
    m_shapeOfProduct.setUnset(true);
    return m_shapeOfProduct;
  }
}

void IfcProductDefinitionShape::setShapeOfProduct(const Step::StepSet< Step::RefPtr< IfcProduct > > &value) {
  m_shapeOfProduct = value;
}

Step::StepSet< Step::RefPtr< IfcShapeAspect > > &IfcProductDefinitionShape::getHasShapeAspects() {
  if (Step::BaseObject::inited()) {
    return m_hasShapeAspects;
  }
  else {
    m_hasShapeAspects.setUnset(true);
    return m_hasShapeAspects;
  }
}

void IfcProductDefinitionShape::setHasShapeAspects(const Step::StepSet< Step::RefPtr< IfcShapeAspect > > &value) {
  m_hasShapeAspects = value;
}

void IfcProductDefinitionShape::release() {
  IfcProductRepresentation::release();
}

bool IfcProductDefinitionShape::init() {
  bool status = IfcProductRepresentation::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcProduct::getClassType(), 6);
  if (inverses) {
    unsigned int i;
    m_shapeOfProduct.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_shapeOfProduct.insert(static_cast< IfcProduct * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcShapeAspect::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_hasShapeAspects.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasShapeAspects.insert(static_cast< IfcShapeAspect * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProductDefinitionShape::s_type = new Step::ClassType_class("IfcProductDefinitionShape");
IfcProductDefinitionShape_Factory::IfcProductDefinitionShape_Factory() {
}

IfcProductDefinitionShape_Factory::~IfcProductDefinitionShape_Factory() {
  clear(true);
}

void IfcProductDefinitionShape_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProductDefinitionShape_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProductDefinitionShape_Factory::end() {
  return m_idMap.end();
}

IfcProductDefinitionShape *IfcProductDefinitionShape_Factory::get(Step::StepId id) {
  IfcProductDefinitionShape *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcProductDefinitionShape * > (it->second);
  }
  else {
    LOG_ERROR("IfcProductDefinitionShape_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcProductDefinitionShape * > (create(id));
  }
}

Step::BaseObject *IfcProductDefinitionShape_Factory::create(Step::StepId id) {
  IfcProductDefinitionShape *ret = new IfcProductDefinitionShape(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcProductDefinitionShape_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcProductDefinitionShape *ret = new IfcProductDefinitionShape(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcProductDefinitionShape_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcProductDefinitionShape *ret = new IfcProductDefinitionShape(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcProductDefinitionShape *IfcProductDefinitionShape_Factory::generate() {
  return static_cast< IfcProductDefinitionShape * > (create(m_model->getNewId()));
}

IfcProductDefinitionShape *IfcProductDefinitionShape_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcProductDefinitionShape * > (it->second);
  }
  else {
    return NULL;
  }
}

