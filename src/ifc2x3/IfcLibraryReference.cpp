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
#include <ifc2x3/IfcLibraryReference.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcLibraryInformation.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLibraryReference::IfcLibraryReference(Step::SPFData *args) : IfcExternalReference(args) {
  m_referenceIntoLibrary.setUnset(true);
}


IfcLibraryReference::~IfcLibraryReference() {
}

bool IfcLibraryReference::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLibraryReference(this);
}

const char *IfcLibraryReference::type() {
  return "IfcLibraryReference";
}

Step::ClassType IfcLibraryReference::getClassType() {
  return IfcLibraryReference::s_type;
}

Step::ClassType IfcLibraryReference::getType() const {
  return IfcLibraryReference::s_type;
}

bool IfcLibraryReference::isOfType(Step::ClassType t) {
  return IfcLibraryReference::s_type == t ? true : IfcExternalReference::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcLibraryInformation > > &IfcLibraryReference::getReferenceIntoLibrary() {
  if (Step::BaseObject::inited()) {
    return m_referenceIntoLibrary;
  }
  else {
    m_referenceIntoLibrary.setUnset(true);
    return m_referenceIntoLibrary;
  }
}

void IfcLibraryReference::setReferenceIntoLibrary(const Step::StepSet< Step::RefPtr< IfcLibraryInformation > > &value) {
  m_referenceIntoLibrary = value;
}

void IfcLibraryReference::release() {
  IfcExternalReference::release();
}

bool IfcLibraryReference::init() {
  bool status = IfcExternalReference::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcLibraryInformation::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_referenceIntoLibrary.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_referenceIntoLibrary.insert(static_cast< IfcLibraryInformation * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLibraryReference::s_type = new Step::ClassType_class("IfcLibraryReference");
IfcLibraryReference_Factory::IfcLibraryReference_Factory() {
}

IfcLibraryReference_Factory::~IfcLibraryReference_Factory() {
  clear(true);
}

void IfcLibraryReference_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLibraryReference_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLibraryReference_Factory::end() {
  return m_idMap.end();
}

IfcLibraryReference *IfcLibraryReference_Factory::get(Step::StepId id) {
  IfcLibraryReference *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLibraryReference * > (it->second);
  }
  else {
    LOG_ERROR("IfcLibraryReference_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLibraryReference * > (create(id));
  }
}

Step::BaseObject *IfcLibraryReference_Factory::create(Step::StepId id) {
  IfcLibraryReference *ret = new IfcLibraryReference(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLibraryReference_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLibraryReference *ret = new IfcLibraryReference(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLibraryReference_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLibraryReference *ret = new IfcLibraryReference(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLibraryReference *IfcLibraryReference_Factory::generate() {
  return static_cast< IfcLibraryReference * > (create(m_model->getNewId()));
}

IfcLibraryReference *IfcLibraryReference_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLibraryReference * > (it->second);
  }
  else {
    return NULL;
  }
}

