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

#include "ifc2x3/IfcVirtualGridIntersection.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGridAxis.h"
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

IfcVirtualGridIntersection::IfcVirtualGridIntersection(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_intersectingAxes.setUnset(true);
    m_intersectingAxes.setOwner(this);
    m_offsetDistances.setUnset(true);
}

IfcVirtualGridIntersection::~IfcVirtualGridIntersection() {
}

bool IfcVirtualGridIntersection::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcVirtualGridIntersection(this);
}

const std::string &IfcVirtualGridIntersection::type() {
    return IfcVirtualGridIntersection::s_type.getName();
}

Step::ClassType IfcVirtualGridIntersection::getClassType() {
    return IfcVirtualGridIntersection::s_type;
}

Step::ClassType IfcVirtualGridIntersection::getType() const {
    return IfcVirtualGridIntersection::s_type;
}

bool IfcVirtualGridIntersection::isOfType(Step::ClassType t) {
    return IfcVirtualGridIntersection::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::List< Step::RefPtr< IfcGridAxis > > &IfcVirtualGridIntersection::getIntersectingAxes() {
    if (Step::BaseObject::inited()) {
        return m_intersectingAxes;
    }
    else {
        m_intersectingAxes.setUnset(true);
        return m_intersectingAxes;
    }
}

Step::List< IfcLengthMeasure > &IfcVirtualGridIntersection::getOffsetDistances() {
    if (Step::BaseObject::inited()) {
        return m_offsetDistances;
    }
    else {
        m_offsetDistances.setUnset(true);
        return m_offsetDistances;
    }
}

void IfcVirtualGridIntersection::setOffsetDistances(const Step::List< IfcLengthMeasure > &value) {
    m_offsetDistances = value;
}

void IfcVirtualGridIntersection::release() {
    m_intersectingAxes.clear();
    m_offsetDistances.clear();
}

bool IfcVirtualGridIntersection::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_intersectingAxes.setUnset(true);
    }
    else {
        m_intersectingAxes.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcGridAxis > attr2;
                attr2 = static_cast< IfcGridAxis * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_intersectingAxes.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_offsetDistances.setUnset(true);
    }
    else {
        m_offsetDistances.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLengthMeasure attr2;
                attr2 = Step::spfToReal(str1);
                m_offsetDistances.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcVirtualGridIntersection::copy(const IfcVirtualGridIntersection &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcGridAxis > >::const_iterator it_m_intersectingAxes;
    Step::List< IfcLengthMeasure >::const_iterator it_m_offsetDistances;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_intersectingAxes = obj.m_intersectingAxes.begin(); it_m_intersectingAxes != obj.m_intersectingAxes.end(); ++it_m_intersectingAxes) {
        Step::RefPtr< IfcGridAxis > copyTarget = copyop((*it_m_intersectingAxes).get());
        m_intersectingAxes.push_back(copyTarget.get());
    }
    for (it_m_offsetDistances = obj.m_offsetDistances.begin(); it_m_offsetDistances != obj.m_offsetDistances.end(); ++it_m_offsetDistances) {
        IfcLengthMeasure copyTarget = (*it_m_offsetDistances);
        m_offsetDistances.push_back(copyTarget);
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcVirtualGridIntersection::s_type("IfcVirtualGridIntersection");
IfcVirtualGridIntersection::Inverted_IntersectingAxes_type::Inverted_IntersectingAxes_type() {
}

void IfcVirtualGridIntersection::Inverted_IntersectingAxes_type::setOwner(IfcVirtualGridIntersection *owner) {
    mOwner = owner;
}

void IfcVirtualGridIntersection::Inverted_IntersectingAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    Step::List< Step::RefPtr< IfcGridAxis > >::push_back(value);
    inverse->m_hasIntersections.insert(mOwner);
}

