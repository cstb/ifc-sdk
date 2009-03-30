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
 *     Copyright (C) 2009 CSTB                                             *
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
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::Inverted_IfcRelCoversBldgElements_RelatedCoverings_type() {
}

void Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::setOwner(IfcRelCoversBldgElements *owner) {
    mOwner = owner;
}

void Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::insert(const Step::RefPtr< IfcCovering > &value) throw(std::out_of_range) {
    IfcCovering *inverse = const_cast< IfcCovering * > (value.get());
    Set_IfcCovering_1_n::insert(value);
    inverse->m_covers.insert(mOwner);
}

Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::size_type Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::erase(const Step::RefPtr< IfcCovering > &value) {
    IfcCovering *inverse = const_cast< IfcCovering * > (value.get());
    inverse->m_covers.erase(mOwner);
    return Set_IfcCovering_1_n::erase(value);
}

void Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcRelCoversBldgElements::IfcRelCoversBldgElements(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingBuildingElement = NULL;
    m_relatedCoverings.setOwner(this);
}

IfcRelCoversBldgElements::~IfcRelCoversBldgElements() {
}

bool IfcRelCoversBldgElements::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelCoversBldgElements(this);
}

const std::string &IfcRelCoversBldgElements::type() const {
    return IfcRelCoversBldgElements::s_type.getName();
}

const Step::ClassType &IfcRelCoversBldgElements::getClassType() {
    return IfcRelCoversBldgElements::s_type;
}

const Step::ClassType &IfcRelCoversBldgElements::getType() const {
    return IfcRelCoversBldgElements::s_type;
}

bool IfcRelCoversBldgElements::isOfType(const Step::ClassType &t) const {
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

const IfcElement *IfcRelCoversBldgElements::getRelatingBuildingElement() const {
    IfcRelCoversBldgElements * deConstObject = const_cast< IfcRelCoversBldgElements * > (this);
    return deConstObject->getRelatingBuildingElement();
}

void IfcRelCoversBldgElements::setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value) {
    if (m_relatingBuildingElement.valid()) {
        m_relatingBuildingElement->m_hasCoverings.erase(this);
    }
    if (value.valid()) {
        value->m_hasCoverings.insert(this);
    }
    m_relatingBuildingElement = value;
}

void IfcRelCoversBldgElements::unsetRelatingBuildingElement() {
    m_relatingBuildingElement = Step::getUnset(getRelatingBuildingElement());
}

bool IfcRelCoversBldgElements::testRelatingBuildingElement() const {
    return !Step::isUnset(getRelatingBuildingElement());
}

Set_IfcCovering_1_n &IfcRelCoversBldgElements::getRelatedCoverings() {
    if (Step::BaseObject::inited()) {
        return m_relatedCoverings;
    }
    else {
        m_relatedCoverings.setUnset(true);
        return m_relatedCoverings;
    }
}

const Set_IfcCovering_1_n &IfcRelCoversBldgElements::getRelatedCoverings() const {
    IfcRelCoversBldgElements * deConstObject = const_cast< IfcRelCoversBldgElements * > (this);
    return deConstObject->getRelatedCoverings();
}

void IfcRelCoversBldgElements::unsetRelatedCoverings() {
    m_relatedCoverings.clear();
    m_relatedCoverings.setUnset(true);
}

bool IfcRelCoversBldgElements::testRelatedCoverings() const {
    return !Step::isUnset(getRelatedCoverings());
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
        m_relatingBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
                attr2 = static_cast< IfcCovering * > (m_expressDataSet->get(Step::getIdParam(str1)));
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
    Step::Set< Step::RefPtr< IfcCovering >, 1 >::const_iterator it_m_relatedCoverings;
    IfcRelConnects::copy(obj, copyop);
    setRelatingBuildingElement((IfcElement*)copyop(obj.m_relatingBuildingElement.get()));
    for (it_m_relatedCoverings = obj.m_relatedCoverings.begin(); it_m_relatedCoverings != obj.m_relatedCoverings.end(); ++it_m_relatedCoverings) {
        Step::RefPtr< IfcCovering > copyTarget = (IfcCovering *) (copyop((*it_m_relatedCoverings).get()));
        m_relatedCoverings.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelCoversBldgElements::s_type("IfcRelCoversBldgElements");
