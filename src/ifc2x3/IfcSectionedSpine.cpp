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
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSectionedSpine::IfcSectionedSpine(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_spineCurve = NULL;
    m_crossSections.setUnset(true);
    m_crossSectionPositions.setUnset(true);
}

IfcSectionedSpine::~IfcSectionedSpine() {
}

bool IfcSectionedSpine::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSectionedSpine(this);
}

const std::string &IfcSectionedSpine::type() {
    return IfcSectionedSpine::s_type.getName();
}

Step::ClassType IfcSectionedSpine::getClassType() {
    return IfcSectionedSpine::s_type;
}

Step::ClassType IfcSectionedSpine::getType() const {
    return IfcSectionedSpine::s_type;
}

bool IfcSectionedSpine::isOfType(Step::ClassType t) {
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

void IfcSectionedSpine::setSpineCurve(const Step::RefPtr< IfcCompositeCurve > &value) {
    m_spineCurve = value;
}

Step::List< Step::RefPtr< IfcProfileDef > > &IfcSectionedSpine::getCrossSections() {
    if (Step::BaseObject::inited()) {
        return m_crossSections;
    }
    else {
        m_crossSections.setUnset(true);
        return m_crossSections;
    }
}

void IfcSectionedSpine::setCrossSections(const Step::List< Step::RefPtr< IfcProfileDef > > &value) {
    m_crossSections = value;
}

Step::List< Step::RefPtr< IfcAxis2Placement3D > > &IfcSectionedSpine::getCrossSectionPositions() {
    if (Step::BaseObject::inited()) {
        return m_crossSectionPositions;
    }
    else {
        m_crossSectionPositions.setUnset(true);
        return m_crossSectionPositions;
    }
}

void IfcSectionedSpine::setCrossSectionPositions(const Step::List< Step::RefPtr< IfcAxis2Placement3D > > &value) {
    m_crossSectionPositions = value;
}

void IfcSectionedSpine::release() {
    IfcGeometricRepresentationItem::release();
    m_spineCurve.release();
    m_crossSections.clear();
    m_crossSectionPositions.clear();
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
        m_spineCurve = static_cast< IfcCompositeCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
                attr2 = static_cast< IfcProfileDef * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
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
                attr2 = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
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
    Step::List< Step::RefPtr< IfcProfileDef > >::const_iterator it_m_crossSections;
    Step::List< Step::RefPtr< IfcAxis2Placement3D > >::const_iterator it_m_crossSectionPositions;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setSpineCurve(copyop(obj.m_spineCurve.get()));
    for (it_m_crossSections = obj.m_crossSections.begin(); it_m_crossSections != obj.m_crossSections.end(); ++it_m_crossSections) {
        Step::RefPtr< IfcProfileDef > copyTarget = copyop((*it_m_crossSections).get());
        m_crossSections.push_back(copyTarget.get());
    }
    for (it_m_crossSectionPositions = obj.m_crossSectionPositions.begin(); it_m_crossSectionPositions != obj.m_crossSectionPositions.end(); ++it_m_crossSectionPositions) {
        Step::RefPtr< IfcAxis2Placement3D > copyTarget = copyop((*it_m_crossSectionPositions).get());
        m_crossSectionPositions.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSectionedSpine::s_type("IfcSectionedSpine");
