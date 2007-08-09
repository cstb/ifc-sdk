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
#include <ifc2x3/IfcFlowStorageDeviceType.h>

#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDistributionFlowElementType.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcFlowStorageDeviceType::IfcFlowStorageDeviceType(Step::SPFData *args) : IfcDistributionFlowElementType(args) {
}


IfcFlowStorageDeviceType::~IfcFlowStorageDeviceType() {
}

bool IfcFlowStorageDeviceType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFlowStorageDeviceType(this);
}

const char *IfcFlowStorageDeviceType::type() {
  return "IfcFlowStorageDeviceType";
}

Step::ClassType IfcFlowStorageDeviceType::getClassType() {
  return IfcFlowStorageDeviceType::s_type;
}

Step::ClassType IfcFlowStorageDeviceType::getType() const {
  return IfcFlowStorageDeviceType::s_type;
}

bool IfcFlowStorageDeviceType::isOfType(Step::ClassType t) {
  return IfcFlowStorageDeviceType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

void IfcFlowStorageDeviceType::release() {
  IfcDistributionFlowElementType::release();
}

bool IfcFlowStorageDeviceType::init() {
  bool status = IfcDistributionFlowElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowStorageDeviceType::s_type = new Step::ClassType_class("IfcFlowStorageDeviceType");
