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

#include "ifc2x3/IfcPhysicalComplexQuantity.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPhysicalQuantity.h"
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

IfcPhysicalComplexQuantity::IfcPhysicalComplexQuantity(Step::Id id, Step::SPFData *args) : IfcPhysicalQuantity(id, args) {
    m_hasQuantities.setUnset(true);
    m_hasQuantities.setOwner(this);
    m_discrimination = Step::getUnset(m_discrimination);
    m_quality = Step::getUnset(m_quality);
    m_usage = Step::getUnset(m_usage);
}

IfcPhysicalComplexQuantity::~IfcPhysicalComplexQuantity() {
}

bool IfcPhysicalComplexQuantity::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPhysicalComplexQuantity(this);
}

const std::string &IfcPhysicalComplexQuantity::type() {
    return IfcPhysicalComplexQuantity::s_type.getName();
}

Step::ClassType IfcPhysicalComplexQuantity::getClassType() {
    return IfcPhysicalComplexQuantity::s_type;
}

Step::ClassType IfcPhysicalComplexQuantity::getType() const {
    return IfcPhysicalComplexQuantity::s_type;
}

bool IfcPhysicalComplexQuantity::isOfType(Step::ClassType t) {
    return IfcPhysicalComplexQuantity::s_type == t ? true : IfcPhysicalQuantity::isOfType(t);
}

Step::Set< Step::RefPtr< IfcPhysicalQuantity > > &IfcPhysicalComplexQuantity::getHasQuantities() {
    if (Step::BaseObject::inited()) {
        return m_hasQuantities;
    }
    else {
        m_hasQuantities.setUnset(true);
        return m_hasQuantities;
    }
}

IfcLabel IfcPhysicalComplexQuantity::getDiscrimination() {
    if (Step::BaseObject::inited()) {
        return m_discrimination;
    }
    else {
        return Step::getUnset(m_discrimination);
    }
}

void IfcPhysicalComplexQuantity::setDiscrimination(const IfcLabel &value) {
    m_discrimination = value;
}

IfcLabel IfcPhysicalComplexQuantity::getQuality() {
    if (Step::BaseObject::inited()) {
        return m_quality;
    }
    else {
        return Step::getUnset(m_quality);
    }
}

void IfcPhysicalComplexQuantity::setQuality(const IfcLabel &value) {
    m_quality = value;
}

IfcLabel IfcPhysicalComplexQuantity::getUsage() {
    if (Step::BaseObject::inited()) {
        return m_usage;
    }
    else {
        return Step::getUnset(m_usage);
    }
}

void IfcPhysicalComplexQuantity::setUsage(const IfcLabel &value) {
    m_usage = value;
}

void IfcPhysicalComplexQuantity::release() {
    IfcPhysicalQuantity::release();
    m_hasQuantities.clear();
}

bool IfcPhysicalComplexQuantity::init() {
    bool status = IfcPhysicalQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hasQuantities.setUnset(true);
    }
    else {
        m_hasQuantities.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcPhysicalQuantity > attr2;
                attr2 = static_cast< IfcPhysicalQuantity * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_hasQuantities.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_discrimination = Step::getUnset(m_discrimination);
    }
    else {
        m_discrimination = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_quality = Step::getUnset(m_quality);
    }
    else {
        m_quality = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_usage = Step::getUnset(m_usage);
    }
    else {
        m_usage = Step::spfToString(arg);
    }
    return true;
}

void IfcPhysicalComplexQuantity::copy(const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPhysicalQuantity > >::const_iterator it_m_hasQuantities;
    IfcPhysicalQuantity::copy(obj, copyop);
    for (it_m_hasQuantities = obj.m_hasQuantities.begin(); it_m_hasQuantities != obj.m_hasQuantities.end(); ++it_m_hasQuantities) {
        Step::RefPtr< IfcPhysicalQuantity > copyTarget = copyop((*it_m_hasQuantities).get());
        m_hasQuantities.insert(copyTarget.get());
    }
    setDiscrimination(obj.m_discrimination);
    setQuality(obj.m_quality);
    setUsage(obj.m_usage);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPhysicalComplexQuantity::s_type("IfcPhysicalComplexQuantity");
IfcPhysicalComplexQuantity::Inverted_HasQuantities_type::Inverted_HasQuantities_type() {
}

void IfcPhysicalComplexQuantity::Inverted_HasQuantities_type::setOwner(IfcPhysicalComplexQuantity *owner) {
    mOwner = owner;
}

void IfcPhysicalComplexQuantity::Inverted_HasQuantities_type::insert(const Step::RefPtr< IfcPhysicalQuantity > &value) {
    IfcPhysicalQuantity *inverse = const_cast< IfcPhysicalQuantity * > (value.get());
    Step::Set< Step::RefPtr< IfcPhysicalQuantity > >::insert(value);
    inverse->m_partOfComplex.insert(mOwner);
}

