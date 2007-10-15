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

#include "ifc2x3/IfcConstructionResource.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMeasureWithUnit.h"
#include "ifc2x3/IfcResource.h"
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

IfcConstructionResource::IfcConstructionResource(Step::Id id, Step::SPFData *args) : IfcResource(id, args) {
    m_resourceIdentifier = Step::getUnset(m_resourceIdentifier);
    m_resourceGroup = Step::getUnset(m_resourceGroup);
    m_resourceConsumption = IfcResourceConsumptionEnum_UNSET;
    m_baseQuantity = NULL;
}

IfcConstructionResource::~IfcConstructionResource() {
}

bool IfcConstructionResource::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcConstructionResource(this);
}

const std::string &IfcConstructionResource::type() {
    return IfcConstructionResource::s_type.getName();
}

Step::ClassType IfcConstructionResource::getClassType() {
    return IfcConstructionResource::s_type;
}

Step::ClassType IfcConstructionResource::getType() const {
    return IfcConstructionResource::s_type;
}

bool IfcConstructionResource::isOfType(Step::ClassType t) {
    return IfcConstructionResource::s_type == t ? true : IfcResource::isOfType(t);
}

IfcIdentifier IfcConstructionResource::getResourceIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_resourceIdentifier;
    }
    else {
        return Step::getUnset(m_resourceIdentifier);
    }
}

void IfcConstructionResource::setResourceIdentifier(const IfcIdentifier &value) {
    m_resourceIdentifier = value;
}

IfcLabel IfcConstructionResource::getResourceGroup() {
    if (Step::BaseObject::inited()) {
        return m_resourceGroup;
    }
    else {
        return Step::getUnset(m_resourceGroup);
    }
}

void IfcConstructionResource::setResourceGroup(const IfcLabel &value) {
    m_resourceGroup = value;
}

IfcResourceConsumptionEnum IfcConstructionResource::getResourceConsumption() {
    if (Step::BaseObject::inited()) {
        return m_resourceConsumption;
    }
    else {
        return IfcResourceConsumptionEnum_UNSET;
    }
}

void IfcConstructionResource::setResourceConsumption(IfcResourceConsumptionEnum value) {
    m_resourceConsumption = value;
}

IfcMeasureWithUnit *IfcConstructionResource::getBaseQuantity() {
    if (Step::BaseObject::inited()) {
        return m_baseQuantity.get();
    }
    else {
        return NULL;
    }
}

void IfcConstructionResource::setBaseQuantity(const Step::RefPtr< IfcMeasureWithUnit > &value) {
    m_baseQuantity = value;
}

void IfcConstructionResource::release() {
    IfcResource::release();
    m_baseQuantity.release();
}

bool IfcConstructionResource::init() {
    bool status = IfcResource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_resourceIdentifier = Step::getUnset(m_resourceIdentifier);
    }
    else {
        m_resourceIdentifier = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_resourceGroup = Step::getUnset(m_resourceGroup);
    }
    else {
        m_resourceGroup = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_resourceConsumption = IfcResourceConsumptionEnum_UNSET;
    }
    else {
        if (arg == ".CONSUMED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_CONSUMED;
        }
        else if (arg == ".PARTIALLYCONSUMED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_PARTIALLYCONSUMED;
        }
        else if (arg == ".NOTCONSUMED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_NOTCONSUMED;
        }
        else if (arg == ".OCCUPIED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_OCCUPIED;
        }
        else if (arg == ".PARTIALLYOCCUPIED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_PARTIALLYOCCUPIED;
        }
        else if (arg == ".NOTOCCUPIED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_NOTOCCUPIED;
        }
        else if (arg == ".USERDEFINED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_baseQuantity = NULL;
    }
    else {
        m_baseQuantity = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcConstructionResource::copy(const IfcConstructionResource &obj, const CopyOp &copyop) {
    IfcResource::copy(obj, copyop);
    setResourceIdentifier(obj.m_resourceIdentifier);
    setResourceGroup(obj.m_resourceGroup);
    setResourceConsumption(obj.m_resourceConsumption);
    setBaseQuantity(copyop(obj.m_baseQuantity.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstructionResource::s_type("IfcConstructionResource");
