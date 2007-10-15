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

#include "ifc2x3/IfcMaterialLayer.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterial.h"
#include "ifc2x3/IfcMaterialLayerSet.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMaterialLayer::IfcMaterialLayer(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_material = NULL;
    m_layerThickness = Step::getUnset(m_layerThickness);
    m_isVentilated = Step::getUnset(m_isVentilated);
}

IfcMaterialLayer::~IfcMaterialLayer() {
}

bool IfcMaterialLayer::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMaterialLayer(this);
}

const std::string &IfcMaterialLayer::type() {
    return IfcMaterialLayer::s_type.getName();
}

Step::ClassType IfcMaterialLayer::getClassType() {
    return IfcMaterialLayer::s_type;
}

Step::ClassType IfcMaterialLayer::getType() const {
    return IfcMaterialLayer::s_type;
}

bool IfcMaterialLayer::isOfType(Step::ClassType t) {
    return IfcMaterialLayer::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMaterial *IfcMaterialLayer::getMaterial() {
    if (Step::BaseObject::inited()) {
        return m_material.get();
    }
    else {
        return NULL;
    }
}

void IfcMaterialLayer::setMaterial(const Step::RefPtr< IfcMaterial > &value) {
    m_material = value;
}

IfcPositiveLengthMeasure IfcMaterialLayer::getLayerThickness() {
    if (Step::BaseObject::inited()) {
        return m_layerThickness;
    }
    else {
        return Step::getUnset(m_layerThickness);
    }
}

void IfcMaterialLayer::setLayerThickness(IfcPositiveLengthMeasure value) {
    m_layerThickness = value;
}

IfcLogical IfcMaterialLayer::getIsVentilated() {
    if (Step::BaseObject::inited()) {
        return m_isVentilated;
    }
    else {
        return Step::getUnset(m_isVentilated);
    }
}

void IfcMaterialLayer::setIsVentilated(IfcLogical value) {
    m_isVentilated = value;
}

IfcMaterialLayerSet *IfcMaterialLayer::getToMaterialLayerSet() {
    if (Step::BaseObject::inited()) {
        return m_toMaterialLayerSet.get();
    }
    else {
        return NULL;
    }
}

void IfcMaterialLayer::release() {
    m_material.release();
}

bool IfcMaterialLayer::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_material = NULL;
    }
    else {
        m_material = static_cast< IfcMaterial * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerThickness = Step::getUnset(m_layerThickness);
    }
    else {
        m_layerThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isVentilated = Step::getUnset(m_isVentilated);
    }
    else {
        m_isVentilated = Step::spfToLogical(arg);
    }
    inverses = m_args->getInverses(IfcMaterialLayerSet::getClassType(), 0);
    if (inverses) {
        m_toMaterialLayerSet = static_cast< IfcMaterialLayerSet * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcMaterialLayer::copy(const IfcMaterialLayer &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setMaterial(copyop(obj.m_material.get()));
    setLayerThickness(obj.m_layerThickness);
    setIsVentilated(obj.m_isVentilated);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialLayer::s_type("IfcMaterialLayer");
