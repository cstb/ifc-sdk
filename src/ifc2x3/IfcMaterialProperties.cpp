/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcMaterialProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterial.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMaterialProperties::IfcMaterialProperties(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_material = NULL;
}

IfcMaterialProperties::~IfcMaterialProperties() {
}

bool IfcMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMaterialProperties(this);
}

const std::string &IfcMaterialProperties::type() {
    return IfcMaterialProperties::s_type.getName();
}

Step::ClassType IfcMaterialProperties::getClassType() {
    return IfcMaterialProperties::s_type;
}

Step::ClassType IfcMaterialProperties::getType() const {
    return IfcMaterialProperties::s_type;
}

bool IfcMaterialProperties::isOfType(Step::ClassType t) {
    return IfcMaterialProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMaterial *IfcMaterialProperties::getMaterial() {
    if (Step::BaseObject::inited()) {
        return m_material.get();
    }
    else {
        return NULL;
    }
}

void IfcMaterialProperties::setMaterial(const Step::RefPtr< IfcMaterial > &value) {
    m_material = value;
}

void IfcMaterialProperties::release() {
    m_material.release();
}

bool IfcMaterialProperties::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_material = NULL;
    }
    else {
        m_material = static_cast< IfcMaterial * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcMaterialProperties::copy(const IfcMaterialProperties &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setMaterial(copyop(obj.m_material.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialProperties::s_type("IfcMaterialProperties");
