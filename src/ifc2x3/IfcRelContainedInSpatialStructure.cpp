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

#include "ifc2x3/IfcRelContainedInSpatialStructure.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotation.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcGrid.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
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

IfcRelContainedInSpatialStructure::IfcRelContainedInSpatialStructure(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatedElements.setUnset(true);
    m_relatedElements.setOwner(this);
    m_relatingStructure = NULL;
}

IfcRelContainedInSpatialStructure::~IfcRelContainedInSpatialStructure() {
}

bool IfcRelContainedInSpatialStructure::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelContainedInSpatialStructure(this);
}

const std::string &IfcRelContainedInSpatialStructure::type() {
    return IfcRelContainedInSpatialStructure::s_type.getName();
}

Step::ClassType IfcRelContainedInSpatialStructure::getClassType() {
    return IfcRelContainedInSpatialStructure::s_type;
}

Step::ClassType IfcRelContainedInSpatialStructure::getType() const {
    return IfcRelContainedInSpatialStructure::s_type;
}

bool IfcRelContainedInSpatialStructure::isOfType(Step::ClassType t) {
    return IfcRelContainedInSpatialStructure::s_type == t ? true : IfcRelConnects::isOfType(t);
}

Step::Set< Step::RefPtr< IfcProduct > > &IfcRelContainedInSpatialStructure::getRelatedElements() {
    if (Step::BaseObject::inited()) {
        return m_relatedElements;
    }
    else {
        m_relatedElements.setUnset(true);
        return m_relatedElements;
    }
}

IfcSpatialStructureElement *IfcRelContainedInSpatialStructure::getRelatingStructure() {
    if (Step::BaseObject::inited()) {
        return m_relatingStructure.get();
    }
    else {
        return NULL;
    }
}

void IfcRelContainedInSpatialStructure::setRelatingStructure(const Step::RefPtr< IfcSpatialStructureElement > &value) {
    m_relatingStructure = value;
    m_relatingStructure->m_containsElements.insert(this);
}

void IfcRelContainedInSpatialStructure::release() {
    IfcRelConnects::release();
    m_relatedElements.clear();
    m_relatingStructure.release();
}

bool IfcRelContainedInSpatialStructure::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedElements.setUnset(true);
    }
    else {
        m_relatedElements.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProduct > attr2;
                attr2 = static_cast< IfcProduct * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedElements.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingStructure = NULL;
    }
    else {
        m_relatingStructure = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelContainedInSpatialStructure::copy(const IfcRelContainedInSpatialStructure &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProduct > >::const_iterator it_m_relatedElements;
    IfcRelConnects::copy(obj, copyop);
    for (it_m_relatedElements = obj.m_relatedElements.begin(); it_m_relatedElements != obj.m_relatedElements.end(); ++it_m_relatedElements) {
        Step::RefPtr< IfcProduct > copyTarget = copyop((*it_m_relatedElements).get());
        m_relatedElements.insert(copyTarget.get());
    }
    setRelatingStructure(copyop(obj.m_relatingStructure.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelContainedInSpatialStructure::s_type("IfcRelContainedInSpatialStructure");
IfcRelContainedInSpatialStructure::Inverted_RelatedElements_type::Inverted_RelatedElements_type() {
}

void IfcRelContainedInSpatialStructure::Inverted_RelatedElements_type::setOwner(IfcRelContainedInSpatialStructure *owner) {
    mOwner = owner;
}

void IfcRelContainedInSpatialStructure::Inverted_RelatedElements_type::insert(const Step::RefPtr< IfcProduct > &value) {
    IfcProduct *inverse = const_cast< IfcProduct * > (value.get());
    Step::Set< Step::RefPtr< IfcProduct > >::insert(value);
    if (dynamic_cast< IfcAnnotation * > (inverse) != NULL) {
        ((IfcAnnotation *) (inverse))->m_containedInStructure.insert(mOwner);
    }
    else if (dynamic_cast< IfcElement * > (inverse) != NULL) {
        ((IfcElement *) (inverse))->m_containedInStructure.insert(mOwner);
    }
    else if (dynamic_cast< IfcGrid * > (inverse) != NULL) {
        ((IfcGrid *) (inverse))->m_containedInStructure.insert(mOwner);
    }
}

