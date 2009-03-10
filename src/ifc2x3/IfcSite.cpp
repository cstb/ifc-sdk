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

#include "ifc2x3/IfcSite.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPostalAddress.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSite::IfcSite(Step::Id id, Step::SPFData *args) : IfcSpatialStructureElement(id, args) {
    m_refLatitude.setUnset(true);
    m_refLongitude.setUnset(true);
    m_refElevation = Step::getUnset(m_refElevation);
    m_landTitleNumber = Step::getUnset(m_landTitleNumber);
    m_siteAddress = NULL;
}

IfcSite::~IfcSite() {
}

bool IfcSite::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSite(this);
}

const std::string &IfcSite::type() const {
    return IfcSite::s_type.getName();
}

const Step::ClassType &IfcSite::getClassType() {
    return IfcSite::s_type;
}

const Step::ClassType &IfcSite::getType() const {
    return IfcSite::s_type;
}

bool IfcSite::isOfType(const Step::ClassType &t) const {
    return IfcSite::s_type == t ? true : IfcSpatialStructureElement::isOfType(t);
}

IfcCompoundPlaneAngleMeasure &IfcSite::getRefLatitude() {
    if (Step::BaseObject::inited()) {
        return m_refLatitude;
    }
    else {
        m_refLatitude.setUnset(true);
        return m_refLatitude;
    }
}

const IfcCompoundPlaneAngleMeasure &IfcSite::getRefLatitude() const {
    IfcSite * deConstObject = const_cast< IfcSite * > (this);
    return deConstObject->getRefLatitude();
}

void IfcSite::setRefLatitude(const IfcCompoundPlaneAngleMeasure &value) {
    m_refLatitude = value;
}

IfcCompoundPlaneAngleMeasure &IfcSite::getRefLongitude() {
    if (Step::BaseObject::inited()) {
        return m_refLongitude;
    }
    else {
        m_refLongitude.setUnset(true);
        return m_refLongitude;
    }
}

const IfcCompoundPlaneAngleMeasure &IfcSite::getRefLongitude() const {
    IfcSite * deConstObject = const_cast< IfcSite * > (this);
    return deConstObject->getRefLongitude();
}

void IfcSite::setRefLongitude(const IfcCompoundPlaneAngleMeasure &value) {
    m_refLongitude = value;
}

IfcLengthMeasure IfcSite::getRefElevation() {
    if (Step::BaseObject::inited()) {
        return m_refElevation;
    }
    else {
        return Step::getUnset(m_refElevation);
    }
}

const IfcLengthMeasure IfcSite::getRefElevation() const {
    IfcSite * deConstObject = const_cast< IfcSite * > (this);
    return deConstObject->getRefElevation();
}

void IfcSite::setRefElevation(IfcLengthMeasure value) {
    m_refElevation = value;
}

IfcLabel IfcSite::getLandTitleNumber() {
    if (Step::BaseObject::inited()) {
        return m_landTitleNumber;
    }
    else {
        return Step::getUnset(m_landTitleNumber);
    }
}

const IfcLabel IfcSite::getLandTitleNumber() const {
    IfcSite * deConstObject = const_cast< IfcSite * > (this);
    return deConstObject->getLandTitleNumber();
}

void IfcSite::setLandTitleNumber(const IfcLabel &value) {
    m_landTitleNumber = value;
}

IfcPostalAddress *IfcSite::getSiteAddress() {
    if (Step::BaseObject::inited()) {
        return m_siteAddress.get();
    }
    else {
        return NULL;
    }
}

const IfcPostalAddress *IfcSite::getSiteAddress() const {
    IfcSite * deConstObject = const_cast< IfcSite * > (this);
    return deConstObject->getSiteAddress();
}

void IfcSite::setSiteAddress(const Step::RefPtr< IfcPostalAddress > &value) {
    m_siteAddress = value;
}

bool IfcSite::init() {
    bool status = IfcSpatialStructureElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_refLatitude.setUnset(true);
    }
    else {
        m_refLatitude.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::Integer attr2;
                attr2 = Step::spfToInteger(str1);
                m_refLatitude.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_refLongitude.setUnset(true);
    }
    else {
        m_refLongitude.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::Integer attr2;
                attr2 = Step::spfToInteger(str1);
                m_refLongitude.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_refElevation = Step::getUnset(m_refElevation);
    }
    else {
        m_refElevation = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_landTitleNumber = Step::getUnset(m_landTitleNumber);
    }
    else {
        m_landTitleNumber = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_siteAddress = NULL;
    }
    else {
        m_siteAddress = static_cast< IfcPostalAddress * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSite::copy(const IfcSite &obj, const CopyOp &copyop) {
    IfcSpatialStructureElement::copy(obj, copyop);
    setRefLatitude(obj.m_refLatitude);
    setRefLongitude(obj.m_refLongitude);
    setRefElevation(obj.m_refElevation);
    setLandTitleNumber(obj.m_landTitleNumber);
    setSiteAddress((IfcPostalAddress*)copyop(obj.m_siteAddress.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSite::s_type("IfcSite");
