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
#include <ifc2x3/IfcExternallyDefinedTextFont.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcExternallyDefinedTextFont::IfcExternallyDefinedTextFont(Step::SPFData *args) : IfcExternalReference(args) {
}


IfcExternallyDefinedTextFont::~IfcExternallyDefinedTextFont() {
}

bool IfcExternallyDefinedTextFont::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcExternallyDefinedTextFont(this);
}

const char *IfcExternallyDefinedTextFont::type() {
  return "IfcExternallyDefinedTextFont";
}

Step::ClassType IfcExternallyDefinedTextFont::getClassType() {
  return IfcExternallyDefinedTextFont::s_type;
}

Step::ClassType IfcExternallyDefinedTextFont::getType() const {
  return IfcExternallyDefinedTextFont::s_type;
}

bool IfcExternallyDefinedTextFont::isOfType(Step::ClassType t) {
  return IfcExternallyDefinedTextFont::s_type == t ? true : IfcExternalReference::isOfType(t);
}

void IfcExternallyDefinedTextFont::release() {
  IfcExternalReference::release();
}

bool IfcExternallyDefinedTextFont::init() {
  bool status = IfcExternalReference::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcExternallyDefinedTextFont::s_type = new Step::ClassType_class("IfcExternallyDefinedTextFont");
IfcExternallyDefinedTextFont_Factory::IfcExternallyDefinedTextFont_Factory() {
}

IfcExternallyDefinedTextFont_Factory::~IfcExternallyDefinedTextFont_Factory() {
  clear(true);
}

void IfcExternallyDefinedTextFont_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcExternallyDefinedTextFont_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcExternallyDefinedTextFont_Factory::end() {
  return m_idMap.end();
}

IfcExternallyDefinedTextFont *IfcExternallyDefinedTextFont_Factory::get(Step::StepId id) {
  IfcExternallyDefinedTextFont *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcExternallyDefinedTextFont * > (it->second);
  }
  else {
    LOG_ERROR("IfcExternallyDefinedTextFont_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcExternallyDefinedTextFont * > (create(id));
  }
}

Step::BaseObject *IfcExternallyDefinedTextFont_Factory::create(Step::StepId id) {
  IfcExternallyDefinedTextFont *ret = new IfcExternallyDefinedTextFont(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcExternallyDefinedTextFont_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcExternallyDefinedTextFont *ret = new IfcExternallyDefinedTextFont(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcExternallyDefinedTextFont_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcExternallyDefinedTextFont *ret = new IfcExternallyDefinedTextFont(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcExternallyDefinedTextFont *IfcExternallyDefinedTextFont_Factory::generate() {
  return static_cast< IfcExternallyDefinedTextFont * > (create(m_model->getNewId()));
}

IfcExternallyDefinedTextFont *IfcExternallyDefinedTextFont_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcExternallyDefinedTextFont * > (it->second);
  }
  else {
    return NULL;
  }
}

