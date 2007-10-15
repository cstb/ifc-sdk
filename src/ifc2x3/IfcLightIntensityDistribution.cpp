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

#include "ifc2x3/IfcLightIntensityDistribution.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcLightDistributionData.h"
#include "ifc2x3/Visitor.h"
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

IfcLightIntensityDistribution::IfcLightIntensityDistribution(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_lightDistributionCurve = IfcLightDistributionCurveEnum_UNSET;
    m_distributionData.setUnset(true);
}

IfcLightIntensityDistribution::~IfcLightIntensityDistribution() {
}

bool IfcLightIntensityDistribution::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLightIntensityDistribution(this);
}

const std::string &IfcLightIntensityDistribution::type() {
    return IfcLightIntensityDistribution::s_type.getName();
}

Step::ClassType IfcLightIntensityDistribution::getClassType() {
    return IfcLightIntensityDistribution::s_type;
}

Step::ClassType IfcLightIntensityDistribution::getType() const {
    return IfcLightIntensityDistribution::s_type;
}

bool IfcLightIntensityDistribution::isOfType(Step::ClassType t) {
    return IfcLightIntensityDistribution::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLightDistributionCurveEnum IfcLightIntensityDistribution::getLightDistributionCurve() {
    if (Step::BaseObject::inited()) {
        return m_lightDistributionCurve;
    }
    else {
        return IfcLightDistributionCurveEnum_UNSET;
    }
}

void IfcLightIntensityDistribution::setLightDistributionCurve(IfcLightDistributionCurveEnum value) {
    m_lightDistributionCurve = value;
}

Step::List< Step::RefPtr< IfcLightDistributionData > > &IfcLightIntensityDistribution::getDistributionData() {
    if (Step::BaseObject::inited()) {
        return m_distributionData;
    }
    else {
        m_distributionData.setUnset(true);
        return m_distributionData;
    }
}

void IfcLightIntensityDistribution::setDistributionData(const Step::List< Step::RefPtr< IfcLightDistributionData > > &value) {
    m_distributionData = value;
}

void IfcLightIntensityDistribution::release() {
    m_distributionData.clear();
}

bool IfcLightIntensityDistribution::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lightDistributionCurve = IfcLightDistributionCurveEnum_UNSET;
    }
    else {
        if (arg == ".TYPE_A.") {
            m_lightDistributionCurve = IfcLightDistributionCurveEnum_TYPE_A;
        }
        else if (arg == ".TYPE_B.") {
            m_lightDistributionCurve = IfcLightDistributionCurveEnum_TYPE_B;
        }
        else if (arg == ".TYPE_C.") {
            m_lightDistributionCurve = IfcLightDistributionCurveEnum_TYPE_C;
        }
        else if (arg == ".NOTDEFINED.") {
            m_lightDistributionCurve = IfcLightDistributionCurveEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_distributionData.setUnset(true);
    }
    else {
        m_distributionData.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcLightDistributionData > attr2;
                attr2 = static_cast< IfcLightDistributionData * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_distributionData.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcLightIntensityDistribution::copy(const IfcLightIntensityDistribution &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcLightDistributionData > >::const_iterator it_m_distributionData;
    Step::BaseEntity::copy(obj, copyop);
    setLightDistributionCurve(obj.m_lightDistributionCurve);
    for (it_m_distributionData = obj.m_distributionData.begin(); it_m_distributionData != obj.m_distributionData.end(); ++it_m_distributionData) {
        Step::RefPtr< IfcLightDistributionData > copyTarget = copyop((*it_m_distributionData).get());
        m_distributionData.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightIntensityDistribution::s_type("IfcLightIntensityDistribution");
