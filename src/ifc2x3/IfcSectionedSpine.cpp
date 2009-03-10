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

#include "ifc2x3/IfcSectionedSpine.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcCompositeCurve.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/IfcProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSectionedSpine::IfcSectionedSpine(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_spineCurve = NULL;
}

IfcSectionedSpine::~IfcSectionedSpine() {
}

bool IfcSectionedSpine::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSectionedSpine(this);
}

const std::string &IfcSectionedSpine::type() const {
    return IfcSectionedSpine::s_type.getName();
}

const Step::ClassType &IfcSectionedSpine::getClassType() {
    return IfcSectionedSpine::s_type;
}

const Step::ClassType &IfcSectionedSpine::getType() const {
    return IfcSectionedSpine::s_type;
}

bool IfcSectionedSpine::isOfType(const Step::ClassType &t) const {
    return IfcSectionedSpine::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCompositeCurve *IfcSectionedSpine::getSpineCurve() {
    if (Step::BaseObject::inited()) {
        return m_spineCurve.get();
    }
    else {
        return NULL;
    }
}

const IfcCompositeCurve *IfcSectionedSpine::getSpineCurve() const {
    IfcSectionedSpine * deConstObject = const_cast< IfcSectionedSpine * > (this);
    return deConstObject->getSpineCurve();
}

void IfcSectionedSpine::setSpineCurve(const Step::RefPtr< IfcCompositeCurve > &value) {
    m_spineCurve = value;
}

List_IfcProfileDef_2_n &IfcSectionedSpine::getCrossSections() {
    if (Step::BaseObject::inited()) {
        return m_crossSections;
    }
    else {
        m_crossSections.setUnset(true);
        return m_crossSections;
    }
}

const List_IfcProfileDef_2_n &IfcSectionedSpine::getCrossSections() const {
    IfcSectionedSpine * deConstObject = const_cast< IfcSectionedSpine * > (this);
    return deConstObject->getCrossSections();
}

void IfcSectionedSpine::setCrossSections(const List_IfcProfileDef_2_n &value) {
    m_crossSections = value;
}

List_IfcAxis2Placement3D_2_n &IfcSectionedSpine::getCrossSectionPositions() {
    if (Step::BaseObject::inited()) {
        return m_crossSectionPositions;
    }
    else {
        m_crossSectionPositions.setUnset(true);
        return m_crossSectionPositions;
    }
}

const List_IfcAxis2Placement3D_2_n &IfcSectionedSpine::getCrossSectionPositions() const {
    IfcSectionedSpine * deConstObject = const_cast< IfcSectionedSpine * > (this);
    return deConstObject->getCrossSectionPositions();
}

void IfcSectionedSpine::setCrossSectionPositions(const List_IfcAxis2Placement3D_2_n &value) {
    m_crossSectionPositions = value;
}

bool IfcSectionedSpine::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_spineCurve = NULL;
    }
    else {
        m_spineCurve = static_cast< IfcCompositeCurve * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_crossSections.setUnset(true);
    }
    else {
        m_crossSections.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProfileDef > attr2;
                attr2 = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_crossSections.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_crossSectionPositions.setUnset(true);
    }
    else {
        m_crossSectionPositions.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcAxis2Placement3D > attr2;
                attr2 = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_crossSectionPositions.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcSectionedSpine::copy(const IfcSectionedSpine &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcProfileDef >, 2 >::const_iterator it_m_crossSections;
    Step::List< Step::RefPtr< IfcAxis2Placement3D >, 2 >::const_iterator it_m_crossSectionPositions;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setSpineCurve((IfcCompositeCurve*)copyop(obj.m_spineCurve.get()));
    for (it_m_crossSections = obj.m_crossSections.begin(); it_m_crossSections != obj.m_crossSections.end(); ++it_m_crossSections) {
        Step::RefPtr< IfcProfileDef > copyTarget = (IfcProfileDef *) (copyop((*it_m_crossSections).get()));
        m_crossSections.push_back(copyTarget.get());
    }
    for (it_m_crossSectionPositions = obj.m_crossSectionPositions.begin(); it_m_crossSectionPositions != obj.m_crossSectionPositions.end(); ++it_m_crossSectionPositions) {
        Step::RefPtr< IfcAxis2Placement3D > copyTarget = (IfcAxis2Placement3D *) (copyop((*it_m_crossSectionPositions).get()));
        m_crossSectionPositions.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSectionedSpine::s_type("IfcSectionedSpine");
