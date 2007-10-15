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

#include "ifc2x3/IfcClassificationNotation.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClassificationNotationFacet.h"
#include "ifc2x3/Visitor.h"
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

IfcClassificationNotation::IfcClassificationNotation(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_notationFacets.setUnset(true);
}

IfcClassificationNotation::~IfcClassificationNotation() {
}

bool IfcClassificationNotation::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcClassificationNotation(this);
}

const std::string &IfcClassificationNotation::type() {
    return IfcClassificationNotation::s_type.getName();
}

Step::ClassType IfcClassificationNotation::getClassType() {
    return IfcClassificationNotation::s_type;
}

Step::ClassType IfcClassificationNotation::getType() const {
    return IfcClassificationNotation::s_type;
}

bool IfcClassificationNotation::isOfType(Step::ClassType t) {
    return IfcClassificationNotation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Set< Step::RefPtr< IfcClassificationNotationFacet > > &IfcClassificationNotation::getNotationFacets() {
    if (Step::BaseObject::inited()) {
        return m_notationFacets;
    }
    else {
        m_notationFacets.setUnset(true);
        return m_notationFacets;
    }
}

void IfcClassificationNotation::setNotationFacets(const Step::Set< Step::RefPtr< IfcClassificationNotationFacet > > &value) {
    m_notationFacets = value;
}

void IfcClassificationNotation::release() {
    m_notationFacets.clear();
}

bool IfcClassificationNotation::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_notationFacets.setUnset(true);
    }
    else {
        m_notationFacets.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcClassificationNotationFacet > attr2;
                attr2 = static_cast< IfcClassificationNotationFacet * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_notationFacets.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcClassificationNotation::copy(const IfcClassificationNotation &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcClassificationNotationFacet > >::const_iterator it_m_notationFacets;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_notationFacets = obj.m_notationFacets.begin(); it_m_notationFacets != obj.m_notationFacets.end(); ++it_m_notationFacets) {
        Step::RefPtr< IfcClassificationNotationFacet > copyTarget = copyop((*it_m_notationFacets).get());
        m_notationFacets.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationNotation::s_type("IfcClassificationNotation");
