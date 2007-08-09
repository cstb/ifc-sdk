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
#include <ifc2x3/IfcRepresentationMap.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcMappedItem.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRepresentationMap::IfcRepresentationMap(Step::SPFData *args) : Step::BaseObject(args) {
  m_mappingOrigin = NULL;
  m_mappedRepresentation = NULL;
  m_mapUsage.setUnset(true);
}


IfcRepresentationMap::~IfcRepresentationMap() {
}

bool IfcRepresentationMap::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRepresentationMap(this);
}

const char *IfcRepresentationMap::type() {
  return "IfcRepresentationMap";
}

Step::ClassType IfcRepresentationMap::getClassType() {
  return IfcRepresentationMap::s_type;
}

Step::ClassType IfcRepresentationMap::getType() const {
  return IfcRepresentationMap::s_type;
}

bool IfcRepresentationMap::isOfType(Step::ClassType t) {
  return IfcRepresentationMap::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcAxis2Placement *IfcRepresentationMap::getMappingOrigin() {
  if (Step::BaseObject::inited()) {
    return m_mappingOrigin.get();
  }
  else {
    return NULL;
  }
}

void IfcRepresentationMap::setMappingOrigin(const Step::RefPtr< IfcAxis2Placement > &value) {
  m_mappingOrigin = value;
}

IfcRepresentation *IfcRepresentationMap::getMappedRepresentation() {
  if (Step::BaseObject::inited()) {
    return m_mappedRepresentation.get();
  }
  else {
    return NULL;
  }
}

void IfcRepresentationMap::setMappedRepresentation(const Step::RefPtr< IfcRepresentation > &value) {
  m_mappedRepresentation = value;
}

Step::StepSet< Step::RefPtr< IfcMappedItem > > &IfcRepresentationMap::getMapUsage() {
  if (Step::BaseObject::inited()) {
    return m_mapUsage;
  }
  else {
    m_mapUsage.setUnset(true);
    return m_mapUsage;
  }
}

void IfcRepresentationMap::setMapUsage(const Step::StepSet< Step::RefPtr< IfcMappedItem > > &value) {
  m_mapUsage = value;
}

void IfcRepresentationMap::release() {
  m_mappedRepresentation.release();
}

bool IfcRepresentationMap::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_mappingOrigin = NULL;
  }
  else {
    m_mappingOrigin = new IfcAxis2Placement;
    if (arg[0] == '#') {
      m_mappingOrigin->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_mappedRepresentation = NULL;
  }
  else {
    m_mappedRepresentation = static_cast< IfcRepresentation * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  inverses = m_args->getInverses(IfcMappedItem::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_mapUsage.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_mapUsage.insert(static_cast< IfcMappedItem * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRepresentationMap::s_type = new Step::ClassType_class("IfcRepresentationMap");
IfcRepresentationMap_Factory::IfcRepresentationMap_Factory() {
}

IfcRepresentationMap_Factory::~IfcRepresentationMap_Factory() {
  clear(true);
}

void IfcRepresentationMap_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRepresentationMap_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRepresentationMap_Factory::end() {
  return m_idMap.end();
}

IfcRepresentationMap *IfcRepresentationMap_Factory::get(Step::StepId id) {
  IfcRepresentationMap *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRepresentationMap * > (it->second);
  }
  else {
    LOG_ERROR("IfcRepresentationMap_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRepresentationMap * > (create(id));
  }
}

Step::BaseObject *IfcRepresentationMap_Factory::create(Step::StepId id) {
  IfcRepresentationMap *ret = new IfcRepresentationMap(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRepresentationMap_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRepresentationMap *ret = new IfcRepresentationMap(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRepresentationMap_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRepresentationMap *ret = new IfcRepresentationMap(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRepresentationMap *IfcRepresentationMap_Factory::generate() {
  return static_cast< IfcRepresentationMap * > (create(m_model->getNewId()));
}

IfcRepresentationMap *IfcRepresentationMap_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRepresentationMap * > (it->second);
  }
  else {
    return NULL;
  }
}

