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
#include <ifc2x3/IfcFeatureElementSubtraction.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcFeatureElement.h>
#include <ifc2x3/IfcRelVoidsElement.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcFeatureElementSubtraction::IfcFeatureElementSubtraction(Step::SPFData *args) : IfcFeatureElement(args) {
  m_voidsElements = NULL;
}


IfcFeatureElementSubtraction::~IfcFeatureElementSubtraction() {
}

bool IfcFeatureElementSubtraction::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFeatureElementSubtraction(this);
}

const char *IfcFeatureElementSubtraction::type() {
  return "IfcFeatureElementSubtraction";
}

Step::ClassType IfcFeatureElementSubtraction::getClassType() {
  return IfcFeatureElementSubtraction::s_type;
}

Step::ClassType IfcFeatureElementSubtraction::getType() const {
  return IfcFeatureElementSubtraction::s_type;
}

bool IfcFeatureElementSubtraction::isOfType(Step::ClassType t) {
  return IfcFeatureElementSubtraction::s_type == t ? true : IfcFeatureElement::isOfType(t);
}

IfcRelVoidsElement *IfcFeatureElementSubtraction::getVoidsElements() {
  if (Step::BaseObject::inited()) {
    return m_voidsElements.get();
  }
  else {
    return NULL;
  }
}

void IfcFeatureElementSubtraction::setVoidsElements(const Step::RefPtr< IfcRelVoidsElement > &value) {
  m_voidsElements = value;
}

void IfcFeatureElementSubtraction::release() {
  IfcFeatureElement::release();
}

bool IfcFeatureElementSubtraction::init() {
  bool status = IfcFeatureElement::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelVoidsElement::getClassType(), 5);
  if (inverses) {
    m_voidsElements = static_cast< IfcRelVoidsElement * > (m_model->getObjectById((*inverses)[0]));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFeatureElementSubtraction::s_type = new Step::ClassType_class("IfcFeatureElementSubtraction");
