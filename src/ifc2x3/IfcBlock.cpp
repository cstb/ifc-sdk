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
#include <ifc2x3/IfcBlock.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBlock::IfcBlock(Step::SPFData *args) : IfcCsgPrimitive3D(args) {
  m_xLength = getUnset(m_xLength);
  m_yLength = getUnset(m_yLength);
  m_zLength = getUnset(m_zLength);
}


IfcBlock::~IfcBlock() {
}

bool IfcBlock::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBlock(this);
}

const char *IfcBlock::type() {
  return "IfcBlock";
}

Step::ClassType IfcBlock::getClassType() {
  return IfcBlock::s_type;
}

Step::ClassType IfcBlock::getType() const {
  return IfcBlock::s_type;
}

bool IfcBlock::isOfType(Step::ClassType t) {
  return IfcBlock::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcBlock::getXLength() {
  if (Step::BaseObject::inited()) {
    return m_xLength;
  }
  else {
    return getUnset(m_xLength);
  }
}

void IfcBlock::setXLength(IfcPositiveLengthMeasure value) {
  m_xLength = value;
}

IfcPositiveLengthMeasure IfcBlock::getYLength() {
  if (Step::BaseObject::inited()) {
    return m_yLength;
  }
  else {
    return getUnset(m_yLength);
  }
}

void IfcBlock::setYLength(IfcPositiveLengthMeasure value) {
  m_yLength = value;
}

IfcPositiveLengthMeasure IfcBlock::getZLength() {
  if (Step::BaseObject::inited()) {
    return m_zLength;
  }
  else {
    return getUnset(m_zLength);
  }
}

void IfcBlock::setZLength(IfcPositiveLengthMeasure value) {
  m_zLength = value;
}

void IfcBlock::release() {
  IfcCsgPrimitive3D::release();
}

bool IfcBlock::init() {
  bool status = IfcCsgPrimitive3D::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_xLength = getUnset(m_xLength);
  }
  else {
    m_xLength = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_yLength = getUnset(m_yLength);
  }
  else {
    m_yLength = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_zLength = getUnset(m_zLength);
  }
  else {
    m_zLength = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBlock::s_type = new Step::ClassType_class("IfcBlock");
IfcBlock_Factory::IfcBlock_Factory() {
}

IfcBlock_Factory::~IfcBlock_Factory() {
  clear(true);
}

void IfcBlock_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBlock_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBlock_Factory::end() {
  return m_idMap.end();
}

IfcBlock *IfcBlock_Factory::get(Step::StepId id) {
  IfcBlock *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBlock * > (it->second);
  }
  else {
    LOG_ERROR("IfcBlock_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBlock * > (create(id));
  }
}

Step::BaseObject *IfcBlock_Factory::create(Step::StepId id) {
  IfcBlock *ret = new IfcBlock(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBlock_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBlock *ret = new IfcBlock(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBlock_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBlock *ret = new IfcBlock(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBlock *IfcBlock_Factory::generate() {
  return static_cast< IfcBlock * > (create(m_model->getNewId()));
}

IfcBlock *IfcBlock_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBlock * > (it->second);
  }
  else {
    return NULL;
  }
}

