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
#include <ifc2x3/IfcNamedUnit.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDimensionalExponents.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcNamedUnit::IfcNamedUnit(Step::SPFData *args) : Step::BaseObject(args) {
  m_dimensions = NULL;
  m_unitType = IfcUnitEnum_UNSET;
}


IfcNamedUnit::~IfcNamedUnit() {
}

bool IfcNamedUnit::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcNamedUnit(this);
}

const char *IfcNamedUnit::type() {
  return "IfcNamedUnit";
}

Step::ClassType IfcNamedUnit::getClassType() {
  return IfcNamedUnit::s_type;
}

Step::ClassType IfcNamedUnit::getType() const {
  return IfcNamedUnit::s_type;
}

bool IfcNamedUnit::isOfType(Step::ClassType t) {
  return IfcNamedUnit::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcDimensionalExponents *IfcNamedUnit::getDimensions() {
  if (Step::BaseObject::inited()) {
    return m_dimensions.get();
  }
  else {
    return NULL;
  }
}

void IfcNamedUnit::setDimensions(const Step::RefPtr< IfcDimensionalExponents > &value) {
  m_dimensions = value;
}

IfcUnitEnum IfcNamedUnit::getUnitType() {
  if (Step::BaseObject::inited()) {
    return m_unitType;
  }
  else {
    return IfcUnitEnum_UNSET;
  }
}

void IfcNamedUnit::setUnitType(IfcUnitEnum value) {
  m_unitType = value;
}

void IfcNamedUnit::release() {
  m_dimensions.release();
}

bool IfcNamedUnit::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dimensions = NULL;
  }
  else {
    m_dimensions = static_cast< IfcDimensionalExponents * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_unitType = IfcUnitEnum_UNSET;
  }
  else {
    if (arg == ".ABSORBEDDOSEUNIT.") {
      m_unitType = IfcUnitEnum_ABSORBEDDOSEUNIT;
    }
    else if (arg == ".AMOUNTOFSUBSTANCEUNIT.") {
      m_unitType = IfcUnitEnum_AMOUNTOFSUBSTANCEUNIT;
    }
    else if (arg == ".AREAUNIT.") {
      m_unitType = IfcUnitEnum_AREAUNIT;
    }
    else if (arg == ".DOSEEQUIVALENTUNIT.") {
      m_unitType = IfcUnitEnum_DOSEEQUIVALENTUNIT;
    }
    else if (arg == ".ELECTRICCAPACITANCEUNIT.") {
      m_unitType = IfcUnitEnum_ELECTRICCAPACITANCEUNIT;
    }
    else if (arg == ".ELECTRICCHARGEUNIT.") {
      m_unitType = IfcUnitEnum_ELECTRICCHARGEUNIT;
    }
    else if (arg == ".ELECTRICCONDUCTANCEUNIT.") {
      m_unitType = IfcUnitEnum_ELECTRICCONDUCTANCEUNIT;
    }
    else if (arg == ".ELECTRICCURRENTUNIT.") {
      m_unitType = IfcUnitEnum_ELECTRICCURRENTUNIT;
    }
    else if (arg == ".ELECTRICRESISTANCEUNIT.") {
      m_unitType = IfcUnitEnum_ELECTRICRESISTANCEUNIT;
    }
    else if (arg == ".ELECTRICVOLTAGEUNIT.") {
      m_unitType = IfcUnitEnum_ELECTRICVOLTAGEUNIT;
    }
    else if (arg == ".ENERGYUNIT.") {
      m_unitType = IfcUnitEnum_ENERGYUNIT;
    }
    else if (arg == ".FORCEUNIT.") {
      m_unitType = IfcUnitEnum_FORCEUNIT;
    }
    else if (arg == ".FREQUENCYUNIT.") {
      m_unitType = IfcUnitEnum_FREQUENCYUNIT;
    }
    else if (arg == ".ILLUMINANCEUNIT.") {
      m_unitType = IfcUnitEnum_ILLUMINANCEUNIT;
    }
    else if (arg == ".INDUCTANCEUNIT.") {
      m_unitType = IfcUnitEnum_INDUCTANCEUNIT;
    }
    else if (arg == ".LENGTHUNIT.") {
      m_unitType = IfcUnitEnum_LENGTHUNIT;
    }
    else if (arg == ".LUMINOUSFLUXUNIT.") {
      m_unitType = IfcUnitEnum_LUMINOUSFLUXUNIT;
    }
    else if (arg == ".LUMINOUSINTENSITYUNIT.") {
      m_unitType = IfcUnitEnum_LUMINOUSINTENSITYUNIT;
    }
    else if (arg == ".MAGNETICFLUXDENSITYUNIT.") {
      m_unitType = IfcUnitEnum_MAGNETICFLUXDENSITYUNIT;
    }
    else if (arg == ".MAGNETICFLUXUNIT.") {
      m_unitType = IfcUnitEnum_MAGNETICFLUXUNIT;
    }
    else if (arg == ".MASSUNIT.") {
      m_unitType = IfcUnitEnum_MASSUNIT;
    }
    else if (arg == ".PLANEANGLEUNIT.") {
      m_unitType = IfcUnitEnum_PLANEANGLEUNIT;
    }
    else if (arg == ".POWERUNIT.") {
      m_unitType = IfcUnitEnum_POWERUNIT;
    }
    else if (arg == ".PRESSUREUNIT.") {
      m_unitType = IfcUnitEnum_PRESSUREUNIT;
    }
    else if (arg == ".RADIOACTIVITYUNIT.") {
      m_unitType = IfcUnitEnum_RADIOACTIVITYUNIT;
    }
    else if (arg == ".SOLIDANGLEUNIT.") {
      m_unitType = IfcUnitEnum_SOLIDANGLEUNIT;
    }
    else if (arg == ".THERMODYNAMICTEMPERATUREUNIT.") {
      m_unitType = IfcUnitEnum_THERMODYNAMICTEMPERATUREUNIT;
    }
    else if (arg == ".TIMEUNIT.") {
      m_unitType = IfcUnitEnum_TIMEUNIT;
    }
    else if (arg == ".VOLUMEUNIT.") {
      m_unitType = IfcUnitEnum_VOLUMEUNIT;
    }
    else if (arg == ".USERDEFINED.") {
      m_unitType = IfcUnitEnum_USERDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcNamedUnit::s_type = new Step::ClassType_class("IfcNamedUnit");
