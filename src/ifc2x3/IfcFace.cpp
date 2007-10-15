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

#include "ifc2x3/IfcFace.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFaceBound.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
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

IfcFace::IfcFace(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
    m_bounds.setUnset(true);
}

IfcFace::~IfcFace() {
}

bool IfcFace::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFace(this);
}

const std::string &IfcFace::type() {
    return IfcFace::s_type.getName();
}

Step::ClassType IfcFace::getClassType() {
    return IfcFace::s_type;
}

Step::ClassType IfcFace::getType() const {
    return IfcFace::s_type;
}

bool IfcFace::isOfType(Step::ClassType t) {
    return IfcFace::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

Step::Set< Step::RefPtr< IfcFaceBound > > &IfcFace::getBounds() {
    if (Step::BaseObject::inited()) {
        return m_bounds;
    }
    else {
        m_bounds.setUnset(true);
        return m_bounds;
    }
}

void IfcFace::setBounds(const Step::Set< Step::RefPtr< IfcFaceBound > > &value) {
    m_bounds = value;
}

void IfcFace::release() {
    IfcTopologicalRepresentationItem::release();
    m_bounds.clear();
}

bool IfcFace::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_bounds.setUnset(true);
    }
    else {
        m_bounds.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcFaceBound > attr2;
                attr2 = static_cast< IfcFaceBound * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_bounds.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcFace::copy(const IfcFace &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcFaceBound > >::const_iterator it_m_bounds;
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    for (it_m_bounds = obj.m_bounds.begin(); it_m_bounds != obj.m_bounds.end(); ++it_m_bounds) {
        Step::RefPtr< IfcFaceBound > copyTarget = copyop((*it_m_bounds).get());
        m_bounds.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFace::s_type("IfcFace");
