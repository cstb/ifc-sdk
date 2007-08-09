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
#include <ifc2x3/IfcFaceBasedSurfaceModel.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcConnectedFaceSet.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFaceBasedSurfaceModel::IfcFaceBasedSurfaceModel(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_fbsmFaces.setUnset(true);
}


IfcFaceBasedSurfaceModel::~IfcFaceBasedSurfaceModel() {
}

bool IfcFaceBasedSurfaceModel::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFaceBasedSurfaceModel(this);
}

const char *IfcFaceBasedSurfaceModel::type() {
  return "IfcFaceBasedSurfaceModel";
}

Step::ClassType IfcFaceBasedSurfaceModel::getClassType() {
  return IfcFaceBasedSurfaceModel::s_type;
}

Step::ClassType IfcFaceBasedSurfaceModel::getType() const {
  return IfcFaceBasedSurfaceModel::s_type;
}

bool IfcFaceBasedSurfaceModel::isOfType(Step::ClassType t) {
  return IfcFaceBasedSurfaceModel::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcConnectedFaceSet > > &IfcFaceBasedSurfaceModel::getFbsmFaces() {
  if (Step::BaseObject::inited()) {
    return m_fbsmFaces;
  }
  else {
    m_fbsmFaces.setUnset(true);
    return m_fbsmFaces;
  }
}

void IfcFaceBasedSurfaceModel::setFbsmFaces(const Step::StepSet< Step::RefPtr< IfcConnectedFaceSet > > &value) {
  m_fbsmFaces = value;
}

void IfcFaceBasedSurfaceModel::release() {
  IfcGeometricRepresentationItem::release();
  m_fbsmFaces.clear();
}

bool IfcFaceBasedSurfaceModel::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fbsmFaces.setUnset(true);
  }
  else {
    m_fbsmFaces.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcConnectedFaceSet > attr2;
        attr2 = static_cast< IfcConnectedFaceSet * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_fbsmFaces.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFaceBasedSurfaceModel::s_type = new Step::ClassType_class("IfcFaceBasedSurfaceModel");
IfcFaceBasedSurfaceModel_Factory::IfcFaceBasedSurfaceModel_Factory() {
}

IfcFaceBasedSurfaceModel_Factory::~IfcFaceBasedSurfaceModel_Factory() {
  clear(true);
}

void IfcFaceBasedSurfaceModel_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFaceBasedSurfaceModel_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFaceBasedSurfaceModel_Factory::end() {
  return m_idMap.end();
}

IfcFaceBasedSurfaceModel *IfcFaceBasedSurfaceModel_Factory::get(Step::StepId id) {
  IfcFaceBasedSurfaceModel *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFaceBasedSurfaceModel * > (it->second);
  }
  else {
    LOG_ERROR("IfcFaceBasedSurfaceModel_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFaceBasedSurfaceModel * > (create(id));
  }
}

Step::BaseObject *IfcFaceBasedSurfaceModel_Factory::create(Step::StepId id) {
  IfcFaceBasedSurfaceModel *ret = new IfcFaceBasedSurfaceModel(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFaceBasedSurfaceModel_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFaceBasedSurfaceModel *ret = new IfcFaceBasedSurfaceModel(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFaceBasedSurfaceModel_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFaceBasedSurfaceModel *ret = new IfcFaceBasedSurfaceModel(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFaceBasedSurfaceModel *IfcFaceBasedSurfaceModel_Factory::generate() {
  return static_cast< IfcFaceBasedSurfaceModel * > (create(m_model->getNewId()));
}

IfcFaceBasedSurfaceModel *IfcFaceBasedSurfaceModel_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFaceBasedSurfaceModel * > (it->second);
  }
  else {
    return NULL;
  }
}

