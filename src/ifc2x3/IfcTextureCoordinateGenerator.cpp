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
#include <ifc2x3/IfcTextureCoordinateGenerator.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSimpleValue.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTextureCoordinateGenerator::IfcTextureCoordinateGenerator(Step::SPFData *args) : IfcTextureCoordinate(args) {
  m_mode = getUnset(m_mode);
  m_parameter.setUnset(true);
}


IfcTextureCoordinateGenerator::~IfcTextureCoordinateGenerator() {
}

bool IfcTextureCoordinateGenerator::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextureCoordinateGenerator(this);
}

const char *IfcTextureCoordinateGenerator::type() {
  return "IfcTextureCoordinateGenerator";
}

Step::ClassType IfcTextureCoordinateGenerator::getClassType() {
  return IfcTextureCoordinateGenerator::s_type;
}

Step::ClassType IfcTextureCoordinateGenerator::getType() const {
  return IfcTextureCoordinateGenerator::s_type;
}

bool IfcTextureCoordinateGenerator::isOfType(Step::ClassType t) {
  return IfcTextureCoordinateGenerator::s_type == t ? true : IfcTextureCoordinate::isOfType(t);
}

IfcLabel IfcTextureCoordinateGenerator::getMode() {
  if (Step::BaseObject::inited()) {
    return m_mode;
  }
  else {
    return getUnset(m_mode);
  }
}

void IfcTextureCoordinateGenerator::setMode(const IfcLabel &value) {
  m_mode = value;
}

Step::StepList< Step::RefPtr< IfcSimpleValue > > &IfcTextureCoordinateGenerator::getParameter() {
  if (Step::BaseObject::inited()) {
    return m_parameter;
  }
  else {
    m_parameter.setUnset(true);
    return m_parameter;
  }
}

void IfcTextureCoordinateGenerator::setParameter(const Step::StepList< Step::RefPtr< IfcSimpleValue > > &value) {
  m_parameter = value;
}

void IfcTextureCoordinateGenerator::release() {
  IfcTextureCoordinate::release();
  m_parameter.clear();
}

bool IfcTextureCoordinateGenerator::init() {
  bool status = IfcTextureCoordinate::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_mode = getUnset(m_mode);
  }
  else {
    m_mode = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_parameter.setUnset(true);
  }
  else {
    m_parameter.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcSimpleValue > attr2;
        attr2 = new IfcSimpleValue;
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
            if (type2 == "IFCINTEGER") {
              Integer tmp_attr2;
              tmp_attr2 = Step::spfToInteger(str1);
              attr2->setIfcInteger(tmp_attr2);
            }
            if (type2 == "IFCREAL") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcReal(tmp_attr2);
            }
            if (type2 == "IFCBOOLEAN") {
              Bool tmp_attr2;
              tmp_attr2 = Step::spfToBool(str1);
              attr2->setIfcBoolean(tmp_attr2);
            }
            if (type2 == "IFCIDENTIFIER") {
              std::string tmp_attr2;
              tmp_attr2 = Step::spfToString(str1);
              attr2->setIfcIdentifier(tmp_attr2);
            }
            if (type2 == "IFCTEXT") {
              std::string tmp_attr2;
              tmp_attr2 = Step::spfToString(str1);
              attr2->setIfcText(tmp_attr2);
            }
            if (type2 == "IFCLABEL") {
              std::string tmp_attr2;
              tmp_attr2 = Step::spfToString(str1);
              attr2->setIfcLabel(tmp_attr2);
            }
            if (type2 == "IFCLOGICAL") {
              Logical tmp_attr2;
              tmp_attr2 = Step::spfToLogical(str1);
              attr2->setIfcLogical(tmp_attr2);
            }
          }
        }
        m_parameter.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextureCoordinateGenerator::s_type = new Step::ClassType_class("IfcTextureCoordinateGenerator");
IfcTextureCoordinateGenerator_Factory::IfcTextureCoordinateGenerator_Factory() {
}

IfcTextureCoordinateGenerator_Factory::~IfcTextureCoordinateGenerator_Factory() {
  clear(true);
}

void IfcTextureCoordinateGenerator_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextureCoordinateGenerator_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextureCoordinateGenerator_Factory::end() {
  return m_idMap.end();
}

IfcTextureCoordinateGenerator *IfcTextureCoordinateGenerator_Factory::get(Step::StepId id) {
  IfcTextureCoordinateGenerator *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTextureCoordinateGenerator * > (it->second);
  }
  else {
    LOG_ERROR("IfcTextureCoordinateGenerator_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTextureCoordinateGenerator * > (create(id));
  }
}

Step::BaseObject *IfcTextureCoordinateGenerator_Factory::create(Step::StepId id) {
  IfcTextureCoordinateGenerator *ret = new IfcTextureCoordinateGenerator(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTextureCoordinateGenerator_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTextureCoordinateGenerator *ret = new IfcTextureCoordinateGenerator(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTextureCoordinateGenerator_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTextureCoordinateGenerator *ret = new IfcTextureCoordinateGenerator(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTextureCoordinateGenerator *IfcTextureCoordinateGenerator_Factory::generate() {
  return static_cast< IfcTextureCoordinateGenerator * > (create(m_model->getNewId()));
}

IfcTextureCoordinateGenerator *IfcTextureCoordinateGenerator_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTextureCoordinateGenerator * > (it->second);
  }
  else {
    return NULL;
  }
}

