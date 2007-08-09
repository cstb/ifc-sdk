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
#include <ifc2x3/IfcEdgeFeature.h>

#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcFeatureElementSubtraction.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcEdgeFeature::IfcEdgeFeature(Step::SPFData *args) : IfcFeatureElementSubtraction(args) {
  m_featureLength = getUnset(m_featureLength);
}


IfcEdgeFeature::~IfcEdgeFeature() {
}

bool IfcEdgeFeature::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcEdgeFeature(this);
}

const char *IfcEdgeFeature::type() {
  return "IfcEdgeFeature";
}

Step::ClassType IfcEdgeFeature::getClassType() {
  return IfcEdgeFeature::s_type;
}

Step::ClassType IfcEdgeFeature::getType() const {
  return IfcEdgeFeature::s_type;
}

bool IfcEdgeFeature::isOfType(Step::ClassType t) {
  return IfcEdgeFeature::s_type == t ? true : IfcFeatureElementSubtraction::isOfType(t);
}

IfcPositiveLengthMeasure IfcEdgeFeature::getFeatureLength() {
  if (Step::BaseObject::inited()) {
    return m_featureLength;
  }
  else {
    return getUnset(m_featureLength);
  }
}

void IfcEdgeFeature::setFeatureLength(IfcPositiveLengthMeasure value) {
  m_featureLength = value;
}

void IfcEdgeFeature::release() {
  IfcFeatureElementSubtraction::release();
}

bool IfcEdgeFeature::init() {
  bool status = IfcFeatureElementSubtraction::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_featureLength = getUnset(m_featureLength);
  }
  else {
    m_featureLength = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcEdgeFeature::s_type = new Step::ClassType_class("IfcEdgeFeature");
