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
#include <ifc2x3/IfcRelAssociatesMaterial.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMaterialSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssociatesMaterial::IfcRelAssociatesMaterial(Step::SPFData *args) : IfcRelAssociates(args) {
  m_relatingMaterial = NULL;
}


IfcRelAssociatesMaterial::~IfcRelAssociatesMaterial() {
}

bool IfcRelAssociatesMaterial::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssociatesMaterial(this);
}

const char *IfcRelAssociatesMaterial::type() {
  return "IfcRelAssociatesMaterial";
}

Step::ClassType IfcRelAssociatesMaterial::getClassType() {
  return IfcRelAssociatesMaterial::s_type;
}

Step::ClassType IfcRelAssociatesMaterial::getType() const {
  return IfcRelAssociatesMaterial::s_type;
}

bool IfcRelAssociatesMaterial::isOfType(Step::ClassType t) {
  return IfcRelAssociatesMaterial::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcMaterialSelect *IfcRelAssociatesMaterial::getRelatingMaterial() {
  if (Step::BaseObject::inited()) {
    return m_relatingMaterial.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssociatesMaterial::setRelatingMaterial(const Step::RefPtr< IfcMaterialSelect > &value) {
  m_relatingMaterial = value;
}

void IfcRelAssociatesMaterial::release() {
  IfcRelAssociates::release();
}

bool IfcRelAssociatesMaterial::init() {
  bool status = IfcRelAssociates::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingMaterial = NULL;
  }
  else {
    m_relatingMaterial = new IfcMaterialSelect;
    if (arg[0] == '#') {
      m_relatingMaterial->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesMaterial::s_type = new Step::ClassType_class("IfcRelAssociatesMaterial");
IfcRelAssociatesMaterial_Factory::IfcRelAssociatesMaterial_Factory() {
}

IfcRelAssociatesMaterial_Factory::~IfcRelAssociatesMaterial_Factory() {
  clear(true);
}

void IfcRelAssociatesMaterial_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesMaterial_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesMaterial_Factory::end() {
  return m_idMap.end();
}

IfcRelAssociatesMaterial *IfcRelAssociatesMaterial_Factory::get(Step::StepId id) {
  IfcRelAssociatesMaterial *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssociatesMaterial * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssociatesMaterial_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssociatesMaterial * > (create(id));
  }
}

Step::BaseObject *IfcRelAssociatesMaterial_Factory::create(Step::StepId id) {
  IfcRelAssociatesMaterial *ret = new IfcRelAssociatesMaterial(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesMaterial_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssociatesMaterial *ret = new IfcRelAssociatesMaterial(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesMaterial_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssociatesMaterial *ret = new IfcRelAssociatesMaterial(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssociatesMaterial *IfcRelAssociatesMaterial_Factory::generate() {
  return static_cast< IfcRelAssociatesMaterial * > (create(m_model->getNewId()));
}

IfcRelAssociatesMaterial *IfcRelAssociatesMaterial_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssociatesMaterial * > (it->second);
  }
  else {
    return NULL;
  }
}

