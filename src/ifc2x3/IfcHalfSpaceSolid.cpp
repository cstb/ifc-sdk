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
#include <ifc2x3/IfcHalfSpaceSolid.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcHalfSpaceSolid::IfcHalfSpaceSolid(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_baseSurface = NULL;
  m_agreementFlag = getUnset(m_agreementFlag);
}


IfcHalfSpaceSolid::~IfcHalfSpaceSolid() {
}

bool IfcHalfSpaceSolid::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcHalfSpaceSolid(this);
}

const char *IfcHalfSpaceSolid::type() {
  return "IfcHalfSpaceSolid";
}

Step::ClassType IfcHalfSpaceSolid::getClassType() {
  return IfcHalfSpaceSolid::s_type;
}

Step::ClassType IfcHalfSpaceSolid::getType() const {
  return IfcHalfSpaceSolid::s_type;
}

bool IfcHalfSpaceSolid::isOfType(Step::ClassType t) {
  return IfcHalfSpaceSolid::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcSurface *IfcHalfSpaceSolid::getBaseSurface() {
  if (Step::BaseObject::inited()) {
    return m_baseSurface.get();
  }
  else {
    return NULL;
  }
}

void IfcHalfSpaceSolid::setBaseSurface(const Step::RefPtr< IfcSurface > &value) {
  m_baseSurface = value;
}

Bool IfcHalfSpaceSolid::getAgreementFlag() {
  if (Step::BaseObject::inited()) {
    return m_agreementFlag;
  }
  else {
    return getUnset(m_agreementFlag);
  }
}

void IfcHalfSpaceSolid::setAgreementFlag(Bool value) {
  m_agreementFlag = value;
}

void IfcHalfSpaceSolid::release() {
  IfcGeometricRepresentationItem::release();
  m_baseSurface.release();
}

bool IfcHalfSpaceSolid::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_baseSurface = NULL;
  }
  else {
    m_baseSurface = static_cast< IfcSurface * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_agreementFlag = getUnset(m_agreementFlag);
  }
  else {
    m_agreementFlag = Step::spfToBool(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcHalfSpaceSolid::s_type = new Step::ClassType_class("IfcHalfSpaceSolid");
IfcHalfSpaceSolid_Factory::IfcHalfSpaceSolid_Factory() {
}

IfcHalfSpaceSolid_Factory::~IfcHalfSpaceSolid_Factory() {
  clear(true);
}

void IfcHalfSpaceSolid_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcHalfSpaceSolid_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcHalfSpaceSolid_Factory::end() {
  return m_idMap.end();
}

IfcHalfSpaceSolid *IfcHalfSpaceSolid_Factory::get(Step::StepId id) {
  IfcHalfSpaceSolid *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcHalfSpaceSolid * > (it->second);
  }
  else {
    LOG_ERROR("IfcHalfSpaceSolid_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcHalfSpaceSolid * > (create(id));
  }
}

Step::BaseObject *IfcHalfSpaceSolid_Factory::create(Step::StepId id) {
  IfcHalfSpaceSolid *ret = new IfcHalfSpaceSolid(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcHalfSpaceSolid_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcHalfSpaceSolid *ret = new IfcHalfSpaceSolid(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcHalfSpaceSolid_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcHalfSpaceSolid *ret = new IfcHalfSpaceSolid(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcHalfSpaceSolid *IfcHalfSpaceSolid_Factory::generate() {
  return static_cast< IfcHalfSpaceSolid * > (create(m_model->getNewId()));
}

IfcHalfSpaceSolid *IfcHalfSpaceSolid_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcHalfSpaceSolid * > (it->second);
  }
  else {
    return NULL;
  }
}

