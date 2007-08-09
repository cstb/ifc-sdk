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
#include <ifc2x3/IfcShellBasedSurfaceModel.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcShell.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcShellBasedSurfaceModel::IfcShellBasedSurfaceModel(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_sbsmBoundary.setUnset(true);
}


IfcShellBasedSurfaceModel::~IfcShellBasedSurfaceModel() {
}

bool IfcShellBasedSurfaceModel::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcShellBasedSurfaceModel(this);
}

const char *IfcShellBasedSurfaceModel::type() {
  return "IfcShellBasedSurfaceModel";
}

Step::ClassType IfcShellBasedSurfaceModel::getClassType() {
  return IfcShellBasedSurfaceModel::s_type;
}

Step::ClassType IfcShellBasedSurfaceModel::getType() const {
  return IfcShellBasedSurfaceModel::s_type;
}

bool IfcShellBasedSurfaceModel::isOfType(Step::ClassType t) {
  return IfcShellBasedSurfaceModel::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcShell > > &IfcShellBasedSurfaceModel::getSbsmBoundary() {
  if (Step::BaseObject::inited()) {
    return m_sbsmBoundary;
  }
  else {
    m_sbsmBoundary.setUnset(true);
    return m_sbsmBoundary;
  }
}

void IfcShellBasedSurfaceModel::setSbsmBoundary(const Step::StepSet< Step::RefPtr< IfcShell > > &value) {
  m_sbsmBoundary = value;
}

void IfcShellBasedSurfaceModel::release() {
  IfcGeometricRepresentationItem::release();
  m_sbsmBoundary.clear();
}

bool IfcShellBasedSurfaceModel::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sbsmBoundary.setUnset(true);
  }
  else {
    m_sbsmBoundary.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcShell > attr2;
        attr2 = new IfcShell;
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
        m_sbsmBoundary.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcShellBasedSurfaceModel::s_type = new Step::ClassType_class("IfcShellBasedSurfaceModel");
IfcShellBasedSurfaceModel_Factory::IfcShellBasedSurfaceModel_Factory() {
}

IfcShellBasedSurfaceModel_Factory::~IfcShellBasedSurfaceModel_Factory() {
  clear(true);
}

void IfcShellBasedSurfaceModel_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcShellBasedSurfaceModel_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcShellBasedSurfaceModel_Factory::end() {
  return m_idMap.end();
}

IfcShellBasedSurfaceModel *IfcShellBasedSurfaceModel_Factory::get(Step::StepId id) {
  IfcShellBasedSurfaceModel *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcShellBasedSurfaceModel * > (it->second);
  }
  else {
    LOG_ERROR("IfcShellBasedSurfaceModel_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcShellBasedSurfaceModel * > (create(id));
  }
}

Step::BaseObject *IfcShellBasedSurfaceModel_Factory::create(Step::StepId id) {
  IfcShellBasedSurfaceModel *ret = new IfcShellBasedSurfaceModel(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcShellBasedSurfaceModel_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcShellBasedSurfaceModel *ret = new IfcShellBasedSurfaceModel(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcShellBasedSurfaceModel_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcShellBasedSurfaceModel *ret = new IfcShellBasedSurfaceModel(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcShellBasedSurfaceModel *IfcShellBasedSurfaceModel_Factory::generate() {
  return static_cast< IfcShellBasedSurfaceModel * > (create(m_model->getNewId()));
}

IfcShellBasedSurfaceModel *IfcShellBasedSurfaceModel_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcShellBasedSurfaceModel * > (it->second);
  }
  else {
    return NULL;
  }
}

