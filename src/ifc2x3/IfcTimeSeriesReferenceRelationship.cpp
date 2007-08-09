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
#include <ifc2x3/IfcTimeSeriesReferenceRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDocumentSelect.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTimeSeriesReferenceRelationship::IfcTimeSeriesReferenceRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_referencedTimeSeries = NULL;
  m_timeSeriesReferences.setUnset(true);
}


IfcTimeSeriesReferenceRelationship::~IfcTimeSeriesReferenceRelationship() {
}

bool IfcTimeSeriesReferenceRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTimeSeriesReferenceRelationship(this);
}

const char *IfcTimeSeriesReferenceRelationship::type() {
  return "IfcTimeSeriesReferenceRelationship";
}

Step::ClassType IfcTimeSeriesReferenceRelationship::getClassType() {
  return IfcTimeSeriesReferenceRelationship::s_type;
}

Step::ClassType IfcTimeSeriesReferenceRelationship::getType() const {
  return IfcTimeSeriesReferenceRelationship::s_type;
}

bool IfcTimeSeriesReferenceRelationship::isOfType(Step::ClassType t) {
  return IfcTimeSeriesReferenceRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcTimeSeries *IfcTimeSeriesReferenceRelationship::getReferencedTimeSeries() {
  if (Step::BaseObject::inited()) {
    return m_referencedTimeSeries.get();
  }
  else {
    return NULL;
  }
}

void IfcTimeSeriesReferenceRelationship::setReferencedTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
  m_referencedTimeSeries = value;
}

Step::StepSet< Step::RefPtr< IfcDocumentSelect > > &IfcTimeSeriesReferenceRelationship::getTimeSeriesReferences() {
  if (Step::BaseObject::inited()) {
    return m_timeSeriesReferences;
  }
  else {
    m_timeSeriesReferences.setUnset(true);
    return m_timeSeriesReferences;
  }
}

void IfcTimeSeriesReferenceRelationship::setTimeSeriesReferences(const Step::StepSet< Step::RefPtr< IfcDocumentSelect > > &value) {
  m_timeSeriesReferences = value;
}

void IfcTimeSeriesReferenceRelationship::release() {
  m_referencedTimeSeries.release();
  m_timeSeriesReferences.clear();
}

bool IfcTimeSeriesReferenceRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_referencedTimeSeries = NULL;
  }
  else {
    m_referencedTimeSeries = static_cast< IfcTimeSeries * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_timeSeriesReferences.setUnset(true);
  }
  else {
    m_timeSeriesReferences.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcDocumentSelect > attr2;
        attr2 = new IfcDocumentSelect;
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
        m_timeSeriesReferences.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTimeSeriesReferenceRelationship::s_type = new Step::ClassType_class("IfcTimeSeriesReferenceRelationship");
IfcTimeSeriesReferenceRelationship_Factory::IfcTimeSeriesReferenceRelationship_Factory() {
}

IfcTimeSeriesReferenceRelationship_Factory::~IfcTimeSeriesReferenceRelationship_Factory() {
  clear(true);
}

void IfcTimeSeriesReferenceRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTimeSeriesReferenceRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTimeSeriesReferenceRelationship_Factory::end() {
  return m_idMap.end();
}

IfcTimeSeriesReferenceRelationship *IfcTimeSeriesReferenceRelationship_Factory::get(Step::StepId id) {
  IfcTimeSeriesReferenceRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTimeSeriesReferenceRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcTimeSeriesReferenceRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTimeSeriesReferenceRelationship * > (create(id));
  }
}

Step::BaseObject *IfcTimeSeriesReferenceRelationship_Factory::create(Step::StepId id) {
  IfcTimeSeriesReferenceRelationship *ret = new IfcTimeSeriesReferenceRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTimeSeriesReferenceRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTimeSeriesReferenceRelationship *ret = new IfcTimeSeriesReferenceRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTimeSeriesReferenceRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTimeSeriesReferenceRelationship *ret = new IfcTimeSeriesReferenceRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTimeSeriesReferenceRelationship *IfcTimeSeriesReferenceRelationship_Factory::generate() {
  return static_cast< IfcTimeSeriesReferenceRelationship * > (create(m_model->getNewId()));
}

IfcTimeSeriesReferenceRelationship *IfcTimeSeriesReferenceRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTimeSeriesReferenceRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

