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
#include <ifc2x3/IfcFillAreaStyleTiles.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcFillAreaStyleTileShapeSelect.h>
#include <ifc2x3/IfcOneDirectionRepeatFactor.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFillAreaStyleTiles::IfcFillAreaStyleTiles(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_tilingPattern = NULL;
  m_tiles.setUnset(true);
  m_tilingScale = getUnset(m_tilingScale);
}


IfcFillAreaStyleTiles::~IfcFillAreaStyleTiles() {
}

bool IfcFillAreaStyleTiles::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFillAreaStyleTiles(this);
}

const char *IfcFillAreaStyleTiles::type() {
  return "IfcFillAreaStyleTiles";
}

Step::ClassType IfcFillAreaStyleTiles::getClassType() {
  return IfcFillAreaStyleTiles::s_type;
}

Step::ClassType IfcFillAreaStyleTiles::getType() const {
  return IfcFillAreaStyleTiles::s_type;
}

bool IfcFillAreaStyleTiles::isOfType(Step::ClassType t) {
  return IfcFillAreaStyleTiles::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcOneDirectionRepeatFactor *IfcFillAreaStyleTiles::getTilingPattern() {
  if (Step::BaseObject::inited()) {
    return m_tilingPattern.get();
  }
  else {
    return NULL;
  }
}

void IfcFillAreaStyleTiles::setTilingPattern(const Step::RefPtr< IfcOneDirectionRepeatFactor > &value) {
  m_tilingPattern = value;
}

Step::StepSet< Step::RefPtr< IfcFillAreaStyleTileShapeSelect > > &IfcFillAreaStyleTiles::getTiles() {
  if (Step::BaseObject::inited()) {
    return m_tiles;
  }
  else {
    m_tiles.setUnset(true);
    return m_tiles;
  }
}

void IfcFillAreaStyleTiles::setTiles(const Step::StepSet< Step::RefPtr< IfcFillAreaStyleTileShapeSelect > > &value) {
  m_tiles = value;
}

IfcPositiveRatioMeasure IfcFillAreaStyleTiles::getTilingScale() {
  if (Step::BaseObject::inited()) {
    return m_tilingScale;
  }
  else {
    return getUnset(m_tilingScale);
  }
}

void IfcFillAreaStyleTiles::setTilingScale(IfcPositiveRatioMeasure value) {
  m_tilingScale = value;
}

void IfcFillAreaStyleTiles::release() {
  IfcGeometricRepresentationItem::release();
  m_tilingPattern.release();
  m_tiles.clear();
}

bool IfcFillAreaStyleTiles::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_tilingPattern = NULL;
  }
  else {
    m_tilingPattern = static_cast< IfcOneDirectionRepeatFactor * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_tiles.setUnset(true);
  }
  else {
    m_tiles.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcFillAreaStyleTileShapeSelect > attr2;
        attr2 = new IfcFillAreaStyleTileShapeSelect;
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
        m_tiles.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_tilingScale = getUnset(m_tilingScale);
  }
  else {
    m_tilingScale = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyleTiles::s_type = new Step::ClassType_class("IfcFillAreaStyleTiles");
IfcFillAreaStyleTiles_Factory::IfcFillAreaStyleTiles_Factory() {
}

IfcFillAreaStyleTiles_Factory::~IfcFillAreaStyleTiles_Factory() {
  clear(true);
}

void IfcFillAreaStyleTiles_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFillAreaStyleTiles_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFillAreaStyleTiles_Factory::end() {
  return m_idMap.end();
}

IfcFillAreaStyleTiles *IfcFillAreaStyleTiles_Factory::get(Step::StepId id) {
  IfcFillAreaStyleTiles *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFillAreaStyleTiles * > (it->second);
  }
  else {
    LOG_ERROR("IfcFillAreaStyleTiles_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFillAreaStyleTiles * > (create(id));
  }
}

Step::BaseObject *IfcFillAreaStyleTiles_Factory::create(Step::StepId id) {
  IfcFillAreaStyleTiles *ret = new IfcFillAreaStyleTiles(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFillAreaStyleTiles_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFillAreaStyleTiles *ret = new IfcFillAreaStyleTiles(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFillAreaStyleTiles_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFillAreaStyleTiles *ret = new IfcFillAreaStyleTiles(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFillAreaStyleTiles *IfcFillAreaStyleTiles_Factory::generate() {
  return static_cast< IfcFillAreaStyleTiles * > (create(m_model->getNewId()));
}

IfcFillAreaStyleTiles *IfcFillAreaStyleTiles_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFillAreaStyleTiles * > (it->second);
  }
  else {
    return NULL;
  }
}

