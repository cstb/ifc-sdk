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
#include <ifc2x3/IfcRoof.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRoof::IfcRoof(Step::SPFData *args) : IfcBuildingElement(args) {
  m_shapeType = IfcRoofTypeEnum_UNSET;
}


IfcRoof::~IfcRoof() {
}

bool IfcRoof::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRoof(this);
}

const char *IfcRoof::type() {
  return "IfcRoof";
}

Step::ClassType IfcRoof::getClassType() {
  return IfcRoof::s_type;
}

Step::ClassType IfcRoof::getType() const {
  return IfcRoof::s_type;
}

bool IfcRoof::isOfType(Step::ClassType t) {
  return IfcRoof::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcRoofTypeEnum IfcRoof::getShapeType() {
  if (Step::BaseObject::inited()) {
    return m_shapeType;
  }
  else {
    return IfcRoofTypeEnum_UNSET;
  }
}

void IfcRoof::setShapeType(IfcRoofTypeEnum value) {
  m_shapeType = value;
}

void IfcRoof::release() {
  IfcBuildingElement::release();
}

bool IfcRoof::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shapeType = IfcRoofTypeEnum_UNSET;
  }
  else {
    if (arg == ".FLAT_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_FLAT_ROOF;
    }
    else if (arg == ".SHED_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_SHED_ROOF;
    }
    else if (arg == ".GABLE_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_GABLE_ROOF;
    }
    else if (arg == ".HIP_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_HIP_ROOF;
    }
    else if (arg == ".HIPPED_GABLE_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_HIPPED_GABLE_ROOF;
    }
    else if (arg == ".GAMBREL_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_GAMBREL_ROOF;
    }
    else if (arg == ".MANSARD_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_MANSARD_ROOF;
    }
    else if (arg == ".BARREL_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_BARREL_ROOF;
    }
    else if (arg == ".RAINBOW_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_RAINBOW_ROOF;
    }
    else if (arg == ".BUTTERFLY_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_BUTTERFLY_ROOF;
    }
    else if (arg == ".PAVILION_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_PAVILION_ROOF;
    }
    else if (arg == ".DOME_ROOF.") {
      m_shapeType = IfcRoofTypeEnum_DOME_ROOF;
    }
    else if (arg == ".FREEFORM.") {
      m_shapeType = IfcRoofTypeEnum_FREEFORM;
    }
    else if (arg == ".NOTDEFINED.") {
      m_shapeType = IfcRoofTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRoof::s_type = new Step::ClassType_class("IfcRoof");
IfcRoof_Factory::IfcRoof_Factory() {
}

IfcRoof_Factory::~IfcRoof_Factory() {
  clear(true);
}

void IfcRoof_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRoof_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRoof_Factory::end() {
  return m_idMap.end();
}

IfcRoof *IfcRoof_Factory::get(Step::StepId id) {
  IfcRoof *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRoof * > (it->second);
  }
  else {
    LOG_ERROR("IfcRoof_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRoof * > (create(id));
  }
}

Step::BaseObject *IfcRoof_Factory::create(Step::StepId id) {
  IfcRoof *ret = new IfcRoof(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRoof_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRoof *ret = new IfcRoof(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRoof_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRoof *ret = new IfcRoof(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRoof *IfcRoof_Factory::generate() {
  return static_cast< IfcRoof * > (create(m_model->getNewId()));
}

IfcRoof *IfcRoof_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRoof * > (it->second);
  }
  else {
    return NULL;
  }
}

