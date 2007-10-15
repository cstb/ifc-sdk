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

#include "ifc2x3/IfcMaterialDefinitionRepresentation.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterial.h"
#include "ifc2x3/IfcProductRepresentation.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMaterialDefinitionRepresentation::IfcMaterialDefinitionRepresentation(Step::Id id, Step::SPFData *args) : IfcProductRepresentation(id, args) {
    m_representedMaterial = NULL;
}

IfcMaterialDefinitionRepresentation::~IfcMaterialDefinitionRepresentation() {
}

bool IfcMaterialDefinitionRepresentation::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMaterialDefinitionRepresentation(this);
}

const std::string &IfcMaterialDefinitionRepresentation::type() {
    return IfcMaterialDefinitionRepresentation::s_type.getName();
}

Step::ClassType IfcMaterialDefinitionRepresentation::getClassType() {
    return IfcMaterialDefinitionRepresentation::s_type;
}

Step::ClassType IfcMaterialDefinitionRepresentation::getType() const {
    return IfcMaterialDefinitionRepresentation::s_type;
}

bool IfcMaterialDefinitionRepresentation::isOfType(Step::ClassType t) {
    return IfcMaterialDefinitionRepresentation::s_type == t ? true : IfcProductRepresentation::isOfType(t);
}

IfcMaterial *IfcMaterialDefinitionRepresentation::getRepresentedMaterial() {
    if (Step::BaseObject::inited()) {
        return m_representedMaterial.get();
    }
    else {
        return NULL;
    }
}

void IfcMaterialDefinitionRepresentation::setRepresentedMaterial(const Step::RefPtr< IfcMaterial > &value) {
    m_representedMaterial = value;
    m_representedMaterial->m_hasRepresentation.insert(this);
}

void IfcMaterialDefinitionRepresentation::release() {
    IfcProductRepresentation::release();
    m_representedMaterial.release();
}

bool IfcMaterialDefinitionRepresentation::init() {
    bool status = IfcProductRepresentation::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representedMaterial = NULL;
    }
    else {
        m_representedMaterial = static_cast< IfcMaterial * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcMaterialDefinitionRepresentation::copy(const IfcMaterialDefinitionRepresentation &obj, const CopyOp &copyop) {
    IfcProductRepresentation::copy(obj, copyop);
    setRepresentedMaterial(copyop(obj.m_representedMaterial.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialDefinitionRepresentation::s_type("IfcMaterialDefinitionRepresentation");
