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

#include "ifc2x3/IfcRelCoversBldgElements.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCovering.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcRelConnects.h"
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

IfcRelCoversBldgElements::IfcRelCoversBldgElements(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingBuildingElement = NULL;
    m_relatedCoverings.setUnset(true);
    m_relatedCoverings.setOwner(this);
}

IfcRelCoversBldgElements::~IfcRelCoversBldgElements() {
}

bool IfcRelCoversBldgElements::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelCoversBldgElements(this);
}

const std::string &IfcRelCoversBldgElements::type() {
    return IfcRelCoversBldgElements::s_type.getName();
}

Step::ClassType IfcRelCoversBldgElements::getClassType() {
    return IfcRelCoversBldgElements::s_type;
}

Step::ClassType IfcRelCoversBldgElements::getType() const {
    return IfcRelCoversBldgElements::s_type;
}

bool IfcRelCoversBldgElements::isOfType(Step::ClassType t) {
    return IfcRelCoversBldgElements::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelCoversBldgElements::getRelatingBuildingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingBuildingElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelCoversBldgElements::setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value) {
    m_relatingBuildingElement = value;
    m_relatingBuildingElement->m_hasCoverings.insert(this);
}

Step::Set< Step::RefPtr< IfcCovering > > &IfcRelCoversBldgElements::getRelatedCoverings() {
    if (Step::BaseObject::inited()) {
        return m_relatedCoverings;
    }
    else {
        m_relatedCoverings.setUnset(true);
        return m_relatedCoverings;
    }
}

void IfcRelCoversBldgElements::release() {
    IfcRelConnects::release();
    m_relatingBuildingElement.release();
    m_relatedCoverings.clear();
}

bool IfcRelCoversBldgElements::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingBuildingElement = NULL;
    }
    else {
        m_relatingBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedCoverings.setUnset(true);
    }
    else {
        m_relatedCoverings.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCovering > attr2;
                attr2 = static_cast< IfcCovering * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedCoverings.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRelCoversBldgElements::copy(const IfcRelCoversBldgElements &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcCovering > >::const_iterator it_m_relatedCoverings;
    IfcRelConnects::copy(obj, copyop);
    setRelatingBuildingElement(copyop(obj.m_relatingBuildingElement.get()));
    for (it_m_relatedCoverings = obj.m_relatedCoverings.begin(); it_m_relatedCoverings != obj.m_relatedCoverings.end(); ++it_m_relatedCoverings) {
        Step::RefPtr< IfcCovering > copyTarget = copyop((*it_m_relatedCoverings).get());
        m_relatedCoverings.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelCoversBldgElements::s_type("IfcRelCoversBldgElements");
IfcRelCoversBldgElements::Inverted_RelatedCoverings_type::Inverted_RelatedCoverings_type() {
}

void IfcRelCoversBldgElements::Inverted_RelatedCoverings_type::setOwner(IfcRelCoversBldgElements *owner) {
    mOwner = owner;
}

void IfcRelCoversBldgElements::Inverted_RelatedCoverings_type::insert(const Step::RefPtr< IfcCovering > &value) {
    IfcCovering *inverse = const_cast< IfcCovering * > (value.get());
    Step::Set< Step::RefPtr< IfcCovering > >::insert(value);
    inverse->m_covers.insert(mOwner);
}

