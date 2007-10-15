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

#include "ifc2x3/IfcMaterialLayerSetUsage.h"

#include "ifc2x3/CopyOp.h"
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

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMaterialLayerSetUsage::IfcMaterialLayerSetUsage(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_forLayerSet = NULL;
    m_layerSetDirection = IfcLayerSetDirectionEnum_UNSET;
    m_directionSense = IfcDirectionSenseEnum_UNSET;
    m_offsetFromReferenceLine = Step::getUnset(m_offsetFromReferenceLine);
}

IfcMaterialLayerSetUsage::~IfcMaterialLayerSetUsage() {
}

bool IfcMaterialLayerSetUsage::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMaterialLayerSetUsage(this);
}

const std::string &IfcMaterialLayerSetUsage::type() {
    return IfcMaterialLayerSetUsage::s_type.getName();
}

Step::ClassType IfcMaterialLayerSetUsage::getClassType() {
    return IfcMaterialLayerSetUsage::s_type;
}

Step::ClassType IfcMaterialLayerSetUsage::getType() const {
    return IfcMaterialLayerSetUsage::s_type;
}

bool IfcMaterialLayerSetUsage::isOfType(Step::ClassType t) {
    return IfcMaterialLayerSetUsage::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMaterialLayerSet *IfcMaterialLayerSetUsage::getForLayerSet() {
    if (Step::BaseObject::inited()) {
        return m_forLayerSet.get();
    }
    else {
        return NULL;
    }
}

void IfcMaterialLayerSetUsage::setForLayerSet(const Step::RefPtr< IfcMaterialLayerSet > &value) {
    m_forLayerSet = value;
}

IfcLayerSetDirectionEnum IfcMaterialLayerSetUsage::getLayerSetDirection() {
    if (Step::BaseObject::inited()) {
        return m_layerSetDirection;
    }
    else {
        return IfcLayerSetDirectionEnum_UNSET;
    }
}

void IfcMaterialLayerSetUsage::setLayerSetDirection(IfcLayerSetDirectionEnum value) {
    m_layerSetDirection = value;
}

IfcDirectionSenseEnum IfcMaterialLayerSetUsage::getDirectionSense() {
    if (Step::BaseObject::inited()) {
        return m_directionSense;
    }
    else {
        return IfcDirectionSenseEnum_UNSET;
    }
}

void IfcMaterialLayerSetUsage::setDirectionSense(IfcDirectionSenseEnum value) {
    m_directionSense = value;
}

IfcLengthMeasure IfcMaterialLayerSetUsage::getOffsetFromReferenceLine() {
    if (Step::BaseObject::inited()) {
        return m_offsetFromReferenceLine;
    }
    else {
        return Step::getUnset(m_offsetFromReferenceLine);
    }
}

void IfcMaterialLayerSetUsage::setOffsetFromReferenceLine(IfcLengthMeasure value) {
    m_offsetFromReferenceLine = value;
}

void IfcMaterialLayerSetUsage::release() {
    m_forLayerSet.release();
}

bool IfcMaterialLayerSetUsage::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_forLayerSet = NULL;
    }
    else {
        m_forLayerSet = static_cast< IfcMaterialLayerSet * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerSetDirection = IfcLayerSetDirectionEnum_UNSET;
    }
    else {
        if (arg == ".AXIS1.") {
            m_layerSetDirection = IfcLayerSetDirectionEnum_AXIS1;
        }
        else if (arg == ".AXIS2.") {
            m_layerSetDirection = IfcLayerSetDirectionEnum_AXIS2;
        }
        else if (arg == ".AXIS3.") {
            m_layerSetDirection = IfcLayerSetDirectionEnum_AXIS3;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_directionSense = IfcDirectionSenseEnum_UNSET;
    }
    else {
        if (arg == ".POSITIVE.") {
            m_directionSense = IfcDirectionSenseEnum_POSITIVE;
        }
        else if (arg == ".NEGATIVE.") {
            m_directionSense = IfcDirectionSenseEnum_NEGATIVE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_offsetFromReferenceLine = Step::getUnset(m_offsetFromReferenceLine);
    }
    else {
        m_offsetFromReferenceLine = Step::spfToReal(arg);
    }
    return true;
}

void IfcMaterialLayerSetUsage::copy(const IfcMaterialLayerSetUsage &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setForLayerSet(copyop(obj.m_forLayerSet.get()));
    setLayerSetDirection(obj.m_layerSetDirection);
    setDirectionSense(obj.m_directionSense);
    setOffsetFromReferenceLine(obj.m_offsetFromReferenceLine);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialLayerSetUsage::s_type("IfcMaterialLayerSetUsage");
