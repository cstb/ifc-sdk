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

#include "ifc2x3/IfcGrid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAlignmentElement.h"
#include "ifc2x3/IfcGridAxis.h"
#include "ifc2x3/IfcRelContainedInSpatialStructure.h"
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
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcGrid::IfcGrid(Step::Id id, Step::SPFData *args) : IfcAlignmentElement(id, args) {
    m_uAxes.setUnset(true);
    m_uAxes.setOwner(this);
    m_vAxes.setUnset(true);
    m_vAxes.setOwner(this);
    m_wAxes.setUnset(true);
    m_wAxes.setOwner(this);
    m_containedInStructure.setUnset(true);
}

IfcGrid::~IfcGrid() {
}

bool IfcGrid::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcGrid(this);
}

const std::string &IfcGrid::type() {
    return IfcGrid::s_type.getName();
}

Step::ClassType IfcGrid::getClassType() {
    return IfcGrid::s_type;
}

Step::ClassType IfcGrid::getType() const {
    return IfcGrid::s_type;
}

bool IfcGrid::isOfType(Step::ClassType t) {
    return IfcGrid::s_type == t ? true : IfcAlignmentElement::isOfType(t);
}

Step::List< Step::RefPtr< IfcGridAxis > > &IfcGrid::getUAxes() {
    if (Step::BaseObject::inited()) {
        return m_uAxes;
    }
    else {
        m_uAxes.setUnset(true);
        return m_uAxes;
    }
}

Step::List< Step::RefPtr< IfcGridAxis > > &IfcGrid::getVAxes() {
    if (Step::BaseObject::inited()) {
        return m_vAxes;
    }
    else {
        m_vAxes.setUnset(true);
        return m_vAxes;
    }
}

Step::List< Step::RefPtr< IfcGridAxis > > &IfcGrid::getWAxes() {
    if (Step::BaseObject::inited()) {
        return m_wAxes;
    }
    else {
        m_wAxes.setUnset(true);
        return m_wAxes;
    }
}

Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure > > &IfcGrid::getContainedInStructure() {
    if (Step::BaseObject::inited()) {
        return m_containedInStructure;
    }
    else {
        m_containedInStructure.setUnset(true);
        return m_containedInStructure;
    }
}

void IfcGrid::release() {
    IfcAlignmentElement::release();
    m_uAxes.clear();
    m_vAxes.clear();
    m_wAxes.clear();
}

bool IfcGrid::init() {
    bool status = IfcAlignmentElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_uAxes.setUnset(true);
    }
    else {
        m_uAxes.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcGridAxis > attr2;
                attr2 = static_cast< IfcGridAxis * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_uAxes.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_vAxes.setUnset(true);
    }
    else {
        m_vAxes.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcGridAxis > attr2;
                attr2 = static_cast< IfcGridAxis * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_vAxes.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wAxes.setUnset(true);
    }
    else {
        m_wAxes.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcGridAxis > attr2;
                attr2 = static_cast< IfcGridAxis * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_wAxes.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_containedInStructure.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_containedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcGrid::copy(const IfcGrid &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcGridAxis > >::const_iterator it_m_uAxes;
    Step::List< Step::RefPtr< IfcGridAxis > >::const_iterator it_m_vAxes;
    Step::List< Step::RefPtr< IfcGridAxis > >::const_iterator it_m_wAxes;
    IfcAlignmentElement::copy(obj, copyop);
    for (it_m_uAxes = obj.m_uAxes.begin(); it_m_uAxes != obj.m_uAxes.end(); ++it_m_uAxes) {
        Step::RefPtr< IfcGridAxis > copyTarget = copyop((*it_m_uAxes).get());
        m_uAxes.push_back(copyTarget.get());
    }
    for (it_m_vAxes = obj.m_vAxes.begin(); it_m_vAxes != obj.m_vAxes.end(); ++it_m_vAxes) {
        Step::RefPtr< IfcGridAxis > copyTarget = copyop((*it_m_vAxes).get());
        m_vAxes.push_back(copyTarget.get());
    }
    for (it_m_wAxes = obj.m_wAxes.begin(); it_m_wAxes != obj.m_wAxes.end(); ++it_m_wAxes) {
        Step::RefPtr< IfcGridAxis > copyTarget = copyop((*it_m_wAxes).get());
        m_wAxes.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGrid::s_type("IfcGrid");
IfcGrid::Inverted_VAxes_type::Inverted_VAxes_type() {
}

void IfcGrid::Inverted_VAxes_type::setOwner(IfcGrid *owner) {
    mOwner = owner;
}

void IfcGrid::Inverted_VAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    Step::List< Step::RefPtr< IfcGridAxis > >::push_back(value);
    inverse->m_partOfV.insert(mOwner);
}

IfcGrid::Inverted_WAxes_type::Inverted_WAxes_type() {
}

void IfcGrid::Inverted_WAxes_type::setOwner(IfcGrid *owner) {
    mOwner = owner;
}

void IfcGrid::Inverted_WAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    Step::List< Step::RefPtr< IfcGridAxis > >::push_back(value);
    inverse->m_partOfW.insert(mOwner);
}

IfcGrid::Inverted_UAxes_type::Inverted_UAxes_type() {
}

void IfcGrid::Inverted_UAxes_type::setOwner(IfcGrid *owner) {
    mOwner = owner;
}

void IfcGrid::Inverted_UAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    Step::List< Step::RefPtr< IfcGridAxis > >::push_back(value);
    inverse->m_partOfU.insert(mOwner);
}

