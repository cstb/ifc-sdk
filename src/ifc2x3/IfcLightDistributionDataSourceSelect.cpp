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

#include "ifc2x3/IfcLightDistributionDataSourceSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcExternalReference.h"
#include "ifc2x3/IfcLightIntensityDistribution.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcLightDistributionDataSourceSelect::IfcLightDistributionDataSourceSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcLightDistributionDataSourceSelect::IfcLightDistributionDataSourceSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcLightDistributionDataSourceSelect::~IfcLightDistributionDataSourceSelect() {
    deleteUnion();
}

bool IfcLightDistributionDataSourceSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLightDistributionDataSourceSelect(this);
}

bool IfcLightDistributionDataSourceSelect::init() {
    return false;
}

const std::string &IfcLightDistributionDataSourceSelect::type() {
    return IfcLightDistributionDataSourceSelect::s_type.getName();
}

Step::ClassType IfcLightDistributionDataSourceSelect::getClassType() {
    return IfcLightDistributionDataSourceSelect::s_type;
}

Step::ClassType IfcLightDistributionDataSourceSelect::getType() const {
    return IfcLightDistributionDataSourceSelect::s_type;
}

bool IfcLightDistributionDataSourceSelect::isOfType(Step::ClassType t) {
    return IfcLightDistributionDataSourceSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcLightDistributionDataSourceSelect::copy(const IfcLightDistributionDataSourceSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCEXTERNALREFERENCE:
        setIfcExternalReference(copyop(obj.m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference));
        break;
    case IFCLIGHTINTENSITYDISTRIBUTION:
        setIfcLightIntensityDistribution(copyop(obj.m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution));
        break;
        }
}

char *IfcLightDistributionDataSourceSelect::currentTypeName() {
    switch(m_type) {
    case IFCEXTERNALREFERENCE:
        return "IfcExternalReference";
        break;
    case IFCLIGHTINTENSITYDISTRIBUTION:
        return "IfcLightIntensityDistribution";
        break;
    default:
        return "UNSET";
    }
}

IfcLightDistributionDataSourceSelect::IfcLightDistributionDataSourceSelect_select IfcLightDistributionDataSourceSelect::currentType() {
    return m_type;
}

void IfcLightDistributionDataSourceSelect::deleteUnion() {
    switch(m_type) {
    case IFCEXTERNALREFERENCE:
        m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference->unref();
        break;
    case IFCLIGHTINTENSITYDISTRIBUTION:
        m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution->unref();
        break;
        }
    m_type = UNSET;
}

IfcExternalReference *IfcLightDistributionDataSourceSelect::getIfcExternalReference() {
    return m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference;
}

void IfcLightDistributionDataSourceSelect::setIfcExternalReference(IfcExternalReference *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference = value;
    if (value) {
        value->ref();
        m_type = IFCEXTERNALREFERENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCEXTERNALREFERENCE;
}

IfcLightIntensityDistribution *IfcLightDistributionDataSourceSelect::getIfcLightIntensityDistribution() {
    return m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution;
}

void IfcLightDistributionDataSourceSelect::setIfcLightIntensityDistribution(IfcLightIntensityDistribution *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution = value;
    if (value) {
        value->ref();
        m_type = IFCLIGHTINTENSITYDISTRIBUTION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCLIGHTINTENSITYDISTRIBUTION;
}

void IfcLightDistributionDataSourceSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcExternalReference::getClassType())) {
        setIfcExternalReference(static_cast< IfcExternalReference* > (v));
    }
    else if (v->isOfType(IfcLightIntensityDistribution::getClassType())) {
        setIfcLightIntensityDistribution(static_cast< IfcLightIntensityDistribution* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcLightDistributionDataSourceSelect::s_type("IfcLightDistributionDataSourceSelect");
