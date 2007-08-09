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
#include <ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAnnotationSymbolOccurrence.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFillAreaStyleTileSymbolWithStyle::IfcFillAreaStyleTileSymbolWithStyle(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_symbol = NULL;
}


IfcFillAreaStyleTileSymbolWithStyle::~IfcFillAreaStyleTileSymbolWithStyle() {
}

bool IfcFillAreaStyleTileSymbolWithStyle::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFillAreaStyleTileSymbolWithStyle(this);
}

const char *IfcFillAreaStyleTileSymbolWithStyle::type() {
  return "IfcFillAreaStyleTileSymbolWithStyle";
}

Step::ClassType IfcFillAreaStyleTileSymbolWithStyle::getClassType() {
  return IfcFillAreaStyleTileSymbolWithStyle::s_type;
}

Step::ClassType IfcFillAreaStyleTileSymbolWithStyle::getType() const {
  return IfcFillAreaStyleTileSymbolWithStyle::s_type;
}

bool IfcFillAreaStyleTileSymbolWithStyle::isOfType(Step::ClassType t) {
  return IfcFillAreaStyleTileSymbolWithStyle::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcAnnotationSymbolOccurrence *IfcFillAreaStyleTileSymbolWithStyle::getSymbol() {
  if (Step::BaseObject::inited()) {
    return m_symbol.get();
  }
  else {
    return NULL;
  }
}

void IfcFillAreaStyleTileSymbolWithStyle::setSymbol(const Step::RefPtr< IfcAnnotationSymbolOccurrence > &value) {
  m_symbol = value;
}

void IfcFillAreaStyleTileSymbolWithStyle::release() {
  IfcGeometricRepresentationItem::release();
  m_symbol.release();
}

bool IfcFillAreaStyleTileSymbolWithStyle::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_symbol = NULL;
  }
  else {
    m_symbol = static_cast< IfcAnnotationSymbolOccurrence * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyleTileSymbolWithStyle::s_type = new Step::ClassType_class("IfcFillAreaStyleTileSymbolWithStyle");
IfcFillAreaStyleTileSymbolWithStyle_Factory::IfcFillAreaStyleTileSymbolWithStyle_Factory() {
}

IfcFillAreaStyleTileSymbolWithStyle_Factory::~IfcFillAreaStyleTileSymbolWithStyle_Factory() {
  clear(true);
}

void IfcFillAreaStyleTileSymbolWithStyle_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFillAreaStyleTileSymbolWithStyle_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFillAreaStyleTileSymbolWithStyle_Factory::end() {
  return m_idMap.end();
}

IfcFillAreaStyleTileSymbolWithStyle *IfcFillAreaStyleTileSymbolWithStyle_Factory::get(Step::StepId id) {
  IfcFillAreaStyleTileSymbolWithStyle *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (it->second);
  }
  else {
    LOG_ERROR("IfcFillAreaStyleTileSymbolWithStyle_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (create(id));
  }
}

Step::BaseObject *IfcFillAreaStyleTileSymbolWithStyle_Factory::create(Step::StepId id) {
  IfcFillAreaStyleTileSymbolWithStyle *ret = new IfcFillAreaStyleTileSymbolWithStyle(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFillAreaStyleTileSymbolWithStyle_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFillAreaStyleTileSymbolWithStyle *ret = new IfcFillAreaStyleTileSymbolWithStyle(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFillAreaStyleTileSymbolWithStyle_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFillAreaStyleTileSymbolWithStyle *ret = new IfcFillAreaStyleTileSymbolWithStyle(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFillAreaStyleTileSymbolWithStyle *IfcFillAreaStyleTileSymbolWithStyle_Factory::generate() {
  return static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (create(m_model->getNewId()));
}

IfcFillAreaStyleTileSymbolWithStyle *IfcFillAreaStyleTileSymbolWithStyle_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (it->second);
  }
  else {
    return NULL;
  }
}

