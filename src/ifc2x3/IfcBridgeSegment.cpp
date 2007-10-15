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

#include "ifc2x3/IfcBridgeSegment.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBridgeElement.h"
#include "ifc2x3/IfcCivilElementPart.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
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

IfcBridgeSegment::IfcBridgeSegment(Step::Id id, Step::SPFData *args) : IfcBridgeElement(id, args) {
    m_segmentType = IfcBridgeSegmentType_UNSET;
    m_segmentParts.setUnset(true);
    m_segmentParts.setOwner(this);
}

IfcBridgeSegment::~IfcBridgeSegment() {
}

bool IfcBridgeSegment::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBridgeSegment(this);
}

const std::string &IfcBridgeSegment::type() {
    return IfcBridgeSegment::s_type.getName();
}

Step::ClassType IfcBridgeSegment::getClassType() {
    return IfcBridgeSegment::s_type;
}

Step::ClassType IfcBridgeSegment::getType() const {
    return IfcBridgeSegment::s_type;
}

bool IfcBridgeSegment::isOfType(Step::ClassType t) {
    return IfcBridgeSegment::s_type == t ? true : IfcBridgeElement::isOfType(t);
}

IfcBridgeSegmentType IfcBridgeSegment::getSegmentType() {
    if (Step::BaseObject::inited()) {
        return m_segmentType;
    }
    else {
        return IfcBridgeSegmentType_UNSET;
    }
}

void IfcBridgeSegment::setSegmentType(IfcBridgeSegmentType value) {
    m_segmentType = value;
}

Step::Set< Step::RefPtr< IfcCivilElementPart > > &IfcBridgeSegment::getSegmentParts() {
    if (Step::BaseObject::inited()) {
        return m_segmentParts;
    }
    else {
        m_segmentParts.setUnset(true);
        return m_segmentParts;
    }
}

void IfcBridgeSegment::release() {
    IfcBridgeElement::release();
    m_segmentParts.clear();
}

bool IfcBridgeSegment::init() {
    bool status = IfcBridgeElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_segmentType = IfcBridgeSegmentType_UNSET;
    }
    else {
        if (arg == ".TYPICAL_SEGMENT.") {
            m_segmentType = IfcBridgeSegmentType_TYPICAL_SEGMENT;
        }
        else if (arg == ".PIER_SEGMENT.") {
            m_segmentType = IfcBridgeSegmentType_PIER_SEGMENT;
        }
        else if (arg == ".PIECE.") {
            m_segmentType = IfcBridgeSegmentType_PIECE;
        }
        else if (arg == ".LIFT.") {
            m_segmentType = IfcBridgeSegmentType_LIFT;
        }
        else if (arg == ".ELEMENT.") {
            m_segmentType = IfcBridgeSegmentType_ELEMENT;
        }
        else if (arg == ".JAMB.") {
            m_segmentType = IfcBridgeSegmentType_JAMB;
        }
        else if (arg == ".PYLON_HEAD.") {
            m_segmentType = IfcBridgeSegmentType_PYLON_HEAD;
        }
        else if (arg == ".SPAN.") {
            m_segmentType = IfcBridgeSegmentType_SPAN;
        }
        else if (arg == ".CANTILEVER.") {
            m_segmentType = IfcBridgeSegmentType_CANTILEVER;
        }
        else if (arg == ".FINITE_ELEMENT_REFERENCE.") {
            m_segmentType = IfcBridgeSegmentType_FINITE_ELEMENT_REFERENCE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_segmentParts.setUnset(true);
    }
    else {
        m_segmentParts.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCivilElementPart > attr2;
                attr2 = static_cast< IfcCivilElementPart * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_segmentParts.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcBridgeSegment::copy(const IfcBridgeSegment &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcCivilElementPart > >::const_iterator it_m_segmentParts;
    IfcBridgeElement::copy(obj, copyop);
    setSegmentType(obj.m_segmentType);
    for (it_m_segmentParts = obj.m_segmentParts.begin(); it_m_segmentParts != obj.m_segmentParts.end(); ++it_m_segmentParts) {
        Step::RefPtr< IfcCivilElementPart > copyTarget = copyop((*it_m_segmentParts).get());
        m_segmentParts.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBridgeSegment::s_type("IfcBridgeSegment");
IfcBridgeSegment::Inverted_SegmentParts_type::Inverted_SegmentParts_type() {
}

void IfcBridgeSegment::Inverted_SegmentParts_type::setOwner(IfcBridgeSegment *owner) {
    mOwner = owner;
}

void IfcBridgeSegment::Inverted_SegmentParts_type::insert(const Step::RefPtr< IfcCivilElementPart > &value) {
    IfcCivilElementPart *inverse = const_cast< IfcCivilElementPart * > (value.get());
    Step::Set< Step::RefPtr< IfcCivilElementPart > >::insert(value);
    inverse->m_containedInSegment = mOwner;
}

