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

#include "ifc2x3/IfcAnnotationFillArea.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
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

IfcAnnotationFillArea::IfcAnnotationFillArea(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_outerBoundary = NULL;
    m_innerBoundaries.setUnset(true);
}

IfcAnnotationFillArea::~IfcAnnotationFillArea() {
}

bool IfcAnnotationFillArea::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAnnotationFillArea(this);
}

const std::string &IfcAnnotationFillArea::type() {
    return IfcAnnotationFillArea::s_type.getName();
}

Step::ClassType IfcAnnotationFillArea::getClassType() {
    return IfcAnnotationFillArea::s_type;
}

Step::ClassType IfcAnnotationFillArea::getType() const {
    return IfcAnnotationFillArea::s_type;
}

bool IfcAnnotationFillArea::isOfType(Step::ClassType t) {
    return IfcAnnotationFillArea::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCurve *IfcAnnotationFillArea::getOuterBoundary() {
    if (Step::BaseObject::inited()) {
        return m_outerBoundary.get();
    }
    else {
        return NULL;
    }
}

void IfcAnnotationFillArea::setOuterBoundary(const Step::RefPtr< IfcCurve > &value) {
    m_outerBoundary = value;
}

Step::Set< Step::RefPtr< IfcCurve > > &IfcAnnotationFillArea::getInnerBoundaries() {
    if (Step::BaseObject::inited()) {
        return m_innerBoundaries;
    }
    else {
        m_innerBoundaries.setUnset(true);
        return m_innerBoundaries;
    }
}

void IfcAnnotationFillArea::setInnerBoundaries(const Step::Set< Step::RefPtr< IfcCurve > > &value) {
    m_innerBoundaries = value;
}

void IfcAnnotationFillArea::release() {
    IfcGeometricRepresentationItem::release();
    m_outerBoundary.release();
    m_innerBoundaries.clear();
}

bool IfcAnnotationFillArea::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_outerBoundary = NULL;
    }
    else {
        m_outerBoundary = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_innerBoundaries.setUnset(true);
    }
    else {
        m_innerBoundaries.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCurve > attr2;
                attr2 = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_innerBoundaries.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcAnnotationFillArea::copy(const IfcAnnotationFillArea &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcCurve > >::const_iterator it_m_innerBoundaries;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setOuterBoundary(copyop(obj.m_outerBoundary.get()));
    for (it_m_innerBoundaries = obj.m_innerBoundaries.begin(); it_m_innerBoundaries != obj.m_innerBoundaries.end(); ++it_m_innerBoundaries) {
        Step::RefPtr< IfcCurve > copyTarget = copyop((*it_m_innerBoundaries).get());
        m_innerBoundaries.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationFillArea::s_type("IfcAnnotationFillArea");
