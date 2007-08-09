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
#include <ifc2x3/IfcStructuralAnalysisModel.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcStructuralLoadGroup.h>
#include <ifc2x3/IfcStructuralResultGroup.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralAnalysisModel::IfcStructuralAnalysisModel(Step::SPFData *args) : IfcSystem(args) {
  m_predefinedType = IfcAnalysisModelTypeEnum_UNSET;
  m_orientationOf2DPlane = NULL;
  m_loadedBy.setUnset(true);
  m_hasResults.setUnset(true);
}


IfcStructuralAnalysisModel::~IfcStructuralAnalysisModel() {
}

bool IfcStructuralAnalysisModel::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralAnalysisModel(this);
}

const char *IfcStructuralAnalysisModel::type() {
  return "IfcStructuralAnalysisModel";
}

Step::ClassType IfcStructuralAnalysisModel::getClassType() {
  return IfcStructuralAnalysisModel::s_type;
}

Step::ClassType IfcStructuralAnalysisModel::getType() const {
  return IfcStructuralAnalysisModel::s_type;
}

bool IfcStructuralAnalysisModel::isOfType(Step::ClassType t) {
  return IfcStructuralAnalysisModel::s_type == t ? true : IfcSystem::isOfType(t);
}

IfcAnalysisModelTypeEnum IfcStructuralAnalysisModel::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcAnalysisModelTypeEnum_UNSET;
  }
}

void IfcStructuralAnalysisModel::setPredefinedType(IfcAnalysisModelTypeEnum value) {
  m_predefinedType = value;
}

IfcAxis2Placement3D *IfcStructuralAnalysisModel::getOrientationOf2DPlane() {
  if (Step::BaseObject::inited()) {
    return m_orientationOf2DPlane.get();
  }
  else {
    return NULL;
  }
}

void IfcStructuralAnalysisModel::setOrientationOf2DPlane(const Step::RefPtr< IfcAxis2Placement3D > &value) {
  m_orientationOf2DPlane = value;
}

Step::StepSet< Step::RefPtr< IfcStructuralLoadGroup > > &IfcStructuralAnalysisModel::getLoadedBy() {
  if (Step::BaseObject::inited()) {
    return m_loadedBy;
  }
  else {
    m_loadedBy.setUnset(true);
    return m_loadedBy;
  }
}

void IfcStructuralAnalysisModel::setLoadedBy(const Step::StepSet< Step::RefPtr< IfcStructuralLoadGroup > > &value) {
  m_loadedBy = value;
}

Step::StepSet< Step::RefPtr< IfcStructuralResultGroup > > &IfcStructuralAnalysisModel::getHasResults() {
  if (Step::BaseObject::inited()) {
    return m_hasResults;
  }
  else {
    m_hasResults.setUnset(true);
    return m_hasResults;
  }
}

void IfcStructuralAnalysisModel::setHasResults(const Step::StepSet< Step::RefPtr< IfcStructuralResultGroup > > &value) {
  m_hasResults = value;
}

void IfcStructuralAnalysisModel::release() {
  IfcSystem::release();
  m_orientationOf2DPlane.release();
  m_loadedBy.clear();
  m_hasResults.clear();
}

bool IfcStructuralAnalysisModel::init() {
  bool status = IfcSystem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcAnalysisModelTypeEnum_UNSET;
  }
  else {
    if (arg == ".IN_PLANE_LOADING_2D.") {
      m_predefinedType = IfcAnalysisModelTypeEnum_IN_PLANE_LOADING_2D;
    }
    else if (arg == ".OUT_PLANE_LOADING_2D.") {
      m_predefinedType = IfcAnalysisModelTypeEnum_OUT_PLANE_LOADING_2D;
    }
    else if (arg == ".LOADING_3D.") {
      m_predefinedType = IfcAnalysisModelTypeEnum_LOADING_3D;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcAnalysisModelTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcAnalysisModelTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_orientationOf2DPlane = NULL;
  }
  else {
    m_orientationOf2DPlane = static_cast< IfcAxis2Placement3D * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_loadedBy.setUnset(true);
  }
  else {
    m_loadedBy.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcStructuralLoadGroup > attr2;
        attr2 = static_cast< IfcStructuralLoadGroup * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_loadedBy.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_hasResults.setUnset(true);
  }
  else {
    m_hasResults.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcStructuralResultGroup > attr2;
        attr2 = static_cast< IfcStructuralResultGroup * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_hasResults.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralAnalysisModel::s_type = new Step::ClassType_class("IfcStructuralAnalysisModel");
IfcStructuralAnalysisModel_Factory::IfcStructuralAnalysisModel_Factory() {
}

IfcStructuralAnalysisModel_Factory::~IfcStructuralAnalysisModel_Factory() {
  clear(true);
}

void IfcStructuralAnalysisModel_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralAnalysisModel_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralAnalysisModel_Factory::end() {
  return m_idMap.end();
}

IfcStructuralAnalysisModel *IfcStructuralAnalysisModel_Factory::get(Step::StepId id) {
  IfcStructuralAnalysisModel *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralAnalysisModel * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralAnalysisModel_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralAnalysisModel * > (create(id));
  }
}

Step::BaseObject *IfcStructuralAnalysisModel_Factory::create(Step::StepId id) {
  IfcStructuralAnalysisModel *ret = new IfcStructuralAnalysisModel(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralAnalysisModel_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralAnalysisModel *ret = new IfcStructuralAnalysisModel(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralAnalysisModel_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralAnalysisModel *ret = new IfcStructuralAnalysisModel(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralAnalysisModel *IfcStructuralAnalysisModel_Factory::generate() {
  return static_cast< IfcStructuralAnalysisModel * > (create(m_model->getNewId()));
}

IfcStructuralAnalysisModel *IfcStructuralAnalysisModel_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralAnalysisModel * > (it->second);
  }
  else {
    return NULL;
  }
}

