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
#include <ifc2x3/IfcCartesianTransformationOperator3D.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCartesianTransformationOperator3D::IfcCartesianTransformationOperator3D(Step::SPFData *args) : IfcCartesianTransformationOperator(args) {
  m_axis3 = NULL;
}


IfcCartesianTransformationOperator3D::~IfcCartesianTransformationOperator3D() {
}

bool IfcCartesianTransformationOperator3D::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCartesianTransformationOperator3D(this);
}

const char *IfcCartesianTransformationOperator3D::type() {
  return "IfcCartesianTransformationOperator3D";
}

Step::ClassType IfcCartesianTransformationOperator3D::getClassType() {
  return IfcCartesianTransformationOperator3D::s_type;
}

Step::ClassType IfcCartesianTransformationOperator3D::getType() const {
  return IfcCartesianTransformationOperator3D::s_type;
}

bool IfcCartesianTransformationOperator3D::isOfType(Step::ClassType t) {
  return IfcCartesianTransformationOperator3D::s_type == t ? true : IfcCartesianTransformationOperator::isOfType(t);
}

IfcDirection *IfcCartesianTransformationOperator3D::getAxis3() {
  if (Step::BaseObject::inited()) {
    return m_axis3.get();
  }
  else {
    return NULL;
  }
}

void IfcCartesianTransformationOperator3D::setAxis3(const Step::RefPtr< IfcDirection > &value) {
  m_axis3 = value;
}

void IfcCartesianTransformationOperator3D::release() {
  IfcCartesianTransformationOperator::release();
  m_axis3.release();
}

bool IfcCartesianTransformationOperator3D::init() {
  bool status = IfcCartesianTransformationOperator::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_axis3 = NULL;
  }
  else {
    m_axis3 = static_cast< IfcDirection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianTransformationOperator3D::s_type = new Step::ClassType_class("IfcCartesianTransformationOperator3D");
IfcCartesianTransformationOperator3D_Factory::IfcCartesianTransformationOperator3D_Factory() {
}

IfcCartesianTransformationOperator3D_Factory::~IfcCartesianTransformationOperator3D_Factory() {
  clear(true);
}

void IfcCartesianTransformationOperator3D_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCartesianTransformationOperator3D_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCartesianTransformationOperator3D_Factory::end() {
  return m_idMap.end();
}

IfcCartesianTransformationOperator3D *IfcCartesianTransformationOperator3D_Factory::get(Step::StepId id) {
  IfcCartesianTransformationOperator3D *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCartesianTransformationOperator3D * > (it->second);
  }
  else {
    LOG_ERROR("IfcCartesianTransformationOperator3D_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCartesianTransformationOperator3D * > (create(id));
  }
}

Step::BaseObject *IfcCartesianTransformationOperator3D_Factory::create(Step::StepId id) {
  IfcCartesianTransformationOperator3D *ret = new IfcCartesianTransformationOperator3D(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCartesianTransformationOperator3D_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCartesianTransformationOperator3D *ret = new IfcCartesianTransformationOperator3D(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCartesianTransformationOperator3D_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCartesianTransformationOperator3D *ret = new IfcCartesianTransformationOperator3D(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCartesianTransformationOperator3D *IfcCartesianTransformationOperator3D_Factory::generate() {
  return static_cast< IfcCartesianTransformationOperator3D * > (create(m_model->getNewId()));
}

IfcCartesianTransformationOperator3D *IfcCartesianTransformationOperator3D_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCartesianTransformationOperator3D * > (it->second);
  }
  else {
    return NULL;
  }
}

