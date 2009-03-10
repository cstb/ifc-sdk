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

#include "ifc2x3/IfcLightSourceGoniometric.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcColourRgb.h"
#include "ifc2x3/IfcLightDistributionDataSourceSelect.h"
#include "ifc2x3/IfcLightSource.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcLightSourceGoniometric::IfcLightSourceGoniometric(Step::Id id, Step::SPFData *args) : IfcLightSource(id, args) {
    m_position = NULL;
    m_colourAppearance = NULL;
    m_colourTemperature = Step::getUnset(m_colourTemperature);
    m_luminousFlux = Step::getUnset(m_luminousFlux);
    m_lightEmissionSource = IfcLightEmissionSourceEnum_UNSET;
    m_lightDistributionDataSource = NULL;
}

IfcLightSourceGoniometric::~IfcLightSourceGoniometric() {
}

bool IfcLightSourceGoniometric::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLightSourceGoniometric(this);
}

const std::string &IfcLightSourceGoniometric::type() const {
    return IfcLightSourceGoniometric::s_type.getName();
}

const Step::ClassType &IfcLightSourceGoniometric::getClassType() {
    return IfcLightSourceGoniometric::s_type;
}

const Step::ClassType &IfcLightSourceGoniometric::getType() const {
    return IfcLightSourceGoniometric::s_type;
}

bool IfcLightSourceGoniometric::isOfType(const Step::ClassType &t) const {
    return IfcLightSourceGoniometric::s_type == t ? true : IfcLightSource::isOfType(t);
}

IfcAxis2Placement3D *IfcLightSourceGoniometric::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement3D *IfcLightSourceGoniometric::getPosition() const {
    IfcLightSourceGoniometric * deConstObject = const_cast< IfcLightSourceGoniometric * > (this);
    return deConstObject->getPosition();
}

void IfcLightSourceGoniometric::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
}

IfcColourRgb *IfcLightSourceGoniometric::getColourAppearance() {
    if (Step::BaseObject::inited()) {
        return m_colourAppearance.get();
    }
    else {
        return NULL;
    }
}

const IfcColourRgb *IfcLightSourceGoniometric::getColourAppearance() const {
    IfcLightSourceGoniometric * deConstObject = const_cast< IfcLightSourceGoniometric * > (this);
    return deConstObject->getColourAppearance();
}

void IfcLightSourceGoniometric::setColourAppearance(const Step::RefPtr< IfcColourRgb > &value) {
    m_colourAppearance = value;
}

IfcThermodynamicTemperatureMeasure IfcLightSourceGoniometric::getColourTemperature() {
    if (Step::BaseObject::inited()) {
        return m_colourTemperature;
    }
    else {
        return Step::getUnset(m_colourTemperature);
    }
}

const IfcThermodynamicTemperatureMeasure IfcLightSourceGoniometric::getColourTemperature() const {
    IfcLightSourceGoniometric * deConstObject = const_cast< IfcLightSourceGoniometric * > (this);
    return deConstObject->getColourTemperature();
}

void IfcLightSourceGoniometric::setColourTemperature(IfcThermodynamicTemperatureMeasure value) {
    m_colourTemperature = value;
}

IfcLuminousFluxMeasure IfcLightSourceGoniometric::getLuminousFlux() {
    if (Step::BaseObject::inited()) {
        return m_luminousFlux;
    }
    else {
        return Step::getUnset(m_luminousFlux);
    }
}

const IfcLuminousFluxMeasure IfcLightSourceGoniometric::getLuminousFlux() const {
    IfcLightSourceGoniometric * deConstObject = const_cast< IfcLightSourceGoniometric * > (this);
    return deConstObject->getLuminousFlux();
}

void IfcLightSourceGoniometric::setLuminousFlux(IfcLuminousFluxMeasure value) {
    m_luminousFlux = value;
}

IfcLightEmissionSourceEnum IfcLightSourceGoniometric::getLightEmissionSource() {
    if (Step::BaseObject::inited()) {
        return m_lightEmissionSource;
    }
    else {
        return IfcLightEmissionSourceEnum_UNSET;
    }
}

const IfcLightEmissionSourceEnum IfcLightSourceGoniometric::getLightEmissionSource() const {
    IfcLightSourceGoniometric * deConstObject = const_cast< IfcLightSourceGoniometric * > (this);
    return deConstObject->getLightEmissionSource();
}

void IfcLightSourceGoniometric::setLightEmissionSource(IfcLightEmissionSourceEnum value) {
    m_lightEmissionSource = value;
}

IfcLightDistributionDataSourceSelect *IfcLightSourceGoniometric::getLightDistributionDataSource() {
    if (Step::BaseObject::inited()) {
        return m_lightDistributionDataSource.get();
    }
    else {
        return NULL;
    }
}

const IfcLightDistributionDataSourceSelect *IfcLightSourceGoniometric::getLightDistributionDataSource() const {
    IfcLightSourceGoniometric * deConstObject = const_cast< IfcLightSourceGoniometric * > (this);
    return deConstObject->getLightDistributionDataSource();
}

void IfcLightSourceGoniometric::setLightDistributionDataSource(const Step::RefPtr< IfcLightDistributionDataSourceSelect > &value) {
    m_lightDistributionDataSource = value;
}

bool IfcLightSourceGoniometric::init() {
    bool status = IfcLightSource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_colourAppearance = NULL;
    }
    else {
        m_colourAppearance = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_colourTemperature = Step::getUnset(m_colourTemperature);
    }
    else {
        m_colourTemperature = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_luminousFlux = Step::getUnset(m_luminousFlux);
    }
    else {
        m_luminousFlux = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lightEmissionSource = IfcLightEmissionSourceEnum_UNSET;
    }
    else {
        if (arg == ".COMPACTFLUORESCENT.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_COMPACTFLUORESCENT;
        }
        else if (arg == ".FLUORESCENT.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_FLUORESCENT;
        }
        else if (arg == ".HIGHPRESSUREMERCURY.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_HIGHPRESSUREMERCURY;
        }
        else if (arg == ".HIGHPRESSURESODIUM.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_HIGHPRESSURESODIUM;
        }
        else if (arg == ".LIGHTEMITTINGDIODE.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_LIGHTEMITTINGDIODE;
        }
        else if (arg == ".LOWPRESSURESODIUM.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_LOWPRESSURESODIUM;
        }
        else if (arg == ".LOWVOLTAGEHALOGEN.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_LOWVOLTAGEHALOGEN;
        }
        else if (arg == ".MAINVOLTAGEHALOGEN.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_MAINVOLTAGEHALOGEN;
        }
        else if (arg == ".METALHALIDE.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_METALHALIDE;
        }
        else if (arg == ".TUNGSTENFILAMENT.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_TUNGSTENFILAMENT;
        }
        else if (arg == ".NOTDEFINED.") {
            m_lightEmissionSource = IfcLightEmissionSourceEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lightDistributionDataSource = NULL;
    }
    else {
        m_lightDistributionDataSource = new IfcLightDistributionDataSourceSelect;
        if (arg[0] == '#') {
            m_lightDistributionDataSource->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcLightSourceGoniometric::copy(const IfcLightSourceGoniometric &obj, const CopyOp &copyop) {
    IfcLightSource::copy(obj, copyop);
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_position.get()));
    setColourAppearance((IfcColourRgb*)copyop(obj.m_colourAppearance.get()));
    setColourTemperature(obj.m_colourTemperature);
    setLuminousFlux(obj.m_luminousFlux);
    setLightEmissionSource(obj.m_lightEmissionSource);
    m_lightDistributionDataSource = new IfcLightDistributionDataSourceSelect;
    m_lightDistributionDataSource->copy(*(obj.m_lightDistributionDataSource.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSourceGoniometric::s_type("IfcLightSourceGoniometric");
