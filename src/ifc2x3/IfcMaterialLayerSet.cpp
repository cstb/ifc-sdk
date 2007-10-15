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

#include "ifc2x3/IfcMaterialLayerSet.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterialLayer.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMaterialLayerSet::IfcMaterialLayerSet(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_materialLayers.setUnset(true);
    m_materialLayers.setOwner(this);
    m_layerSetName = Step::getUnset(m_layerSetName);
}

IfcMaterialLayerSet::~IfcMaterialLayerSet() {
}

bool IfcMaterialLayerSet::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMaterialLayerSet(this);
}

const std::string &IfcMaterialLayerSet::type() {
    return IfcMaterialLayerSet::s_type.getName();
}

Step::ClassType IfcMaterialLayerSet::getClassType() {
    return IfcMaterialLayerSet::s_type;
}

Step::ClassType IfcMaterialLayerSet::getType() const {
    return IfcMaterialLayerSet::s_type;
}

bool IfcMaterialLayerSet::isOfType(Step::ClassType t) {
    return IfcMaterialLayerSet::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::List< Step::RefPtr< IfcMaterialLayer > > &IfcMaterialLayerSet::getMaterialLayers() {
    if (Step::BaseObject::inited()) {
        return m_materialLayers;
    }
    else {
        m_materialLayers.setUnset(true);
        return m_materialLayers;
    }
}

IfcLabel IfcMaterialLayerSet::getLayerSetName() {
    if (Step::BaseObject::inited()) {
        return m_layerSetName;
    }
    else {
        return Step::getUnset(m_layerSetName);
    }
}

void IfcMaterialLayerSet::setLayerSetName(const IfcLabel &value) {
    m_layerSetName = value;
}

void IfcMaterialLayerSet::release() {
    m_materialLayers.clear();
}

bool IfcMaterialLayerSet::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_materialLayers.setUnset(true);
    }
    else {
        m_materialLayers.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcMaterialLayer > attr2;
                attr2 = static_cast< IfcMaterialLayer * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_materialLayers.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerSetName = Step::getUnset(m_layerSetName);
    }
    else {
        m_layerSetName = Step::spfToString(arg);
    }
    return true;
}

void IfcMaterialLayerSet::copy(const IfcMaterialLayerSet &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcMaterialLayer > >::const_iterator it_m_materialLayers;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_materialLayers = obj.m_materialLayers.begin(); it_m_materialLayers != obj.m_materialLayers.end(); ++it_m_materialLayers) {
        Step::RefPtr< IfcMaterialLayer > copyTarget = copyop((*it_m_materialLayers).get());
        m_materialLayers.push_back(copyTarget.get());
    }
    setLayerSetName(obj.m_layerSetName);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialLayerSet::s_type("IfcMaterialLayerSet");
IfcMaterialLayerSet::Inverted_MaterialLayers_type::Inverted_MaterialLayers_type() {
}

void IfcMaterialLayerSet::Inverted_MaterialLayers_type::setOwner(IfcMaterialLayerSet *owner) {
    mOwner = owner;
}

void IfcMaterialLayerSet::Inverted_MaterialLayers_type::push_back(const Step::RefPtr< IfcMaterialLayer > &value) {
    IfcMaterialLayer *inverse = const_cast< IfcMaterialLayer * > (value.get());
    Step::List< Step::RefPtr< IfcMaterialLayer > >::push_back(value);
    inverse->m_toMaterialLayerSet = mOwner;
}

