/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
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

bool IfcMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterialProperties(this);
}

const std::string &IfcMaterialProperties::type() const {
    return IfcMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcMaterialProperties::getClassType() {
    return IfcMaterialProperties::s_type;
}

const Step::ClassType &IfcMaterialProperties::getType() const {
    return IfcMaterialProperties::s_type;
}

bool IfcMaterialProperties::isOfType(const Step::ClassType &t) const {
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

const IfcMaterial *IfcMaterialProperties::getMaterial() const {
    IfcMaterialProperties * deConstObject = const_cast< IfcMaterialProperties * > (this);
    return deConstObject->getMaterial();
}

void IfcMaterialProperties::setMaterial(const Step::RefPtr< IfcMaterial > &value) {
    m_material = value;
}

bool IfcMaterialProperties::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_material = NULL;
    }
    else {
        m_material = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcMaterialProperties::copy(const IfcMaterialProperties &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setMaterial((IfcMaterial*)copyop(obj.m_material.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialProperties::s_type("IfcMaterialProperties");
