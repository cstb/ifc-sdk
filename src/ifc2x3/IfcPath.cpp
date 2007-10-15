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

#include "ifc2x3/IfcPath.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcOrientedEdge.h"
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

IfcPath::IfcPath(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
    m_edgeList.setUnset(true);
}

IfcPath::~IfcPath() {
}

bool IfcPath::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPath(this);
}

const std::string &IfcPath::type() {
    return IfcPath::s_type.getName();
}

Step::ClassType IfcPath::getClassType() {
    return IfcPath::s_type;
}

Step::ClassType IfcPath::getType() const {
    return IfcPath::s_type;
}

bool IfcPath::isOfType(Step::ClassType t) {
    return IfcPath::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

Step::List< Step::RefPtr< IfcOrientedEdge > > &IfcPath::getEdgeList() {
    if (Step::BaseObject::inited()) {
        return m_edgeList;
    }
    else {
        m_edgeList.setUnset(true);
        return m_edgeList;
    }
}

void IfcPath::setEdgeList(const Step::List< Step::RefPtr< IfcOrientedEdge > > &value) {
    m_edgeList = value;
}

void IfcPath::release() {
    IfcTopologicalRepresentationItem::release();
    m_edgeList.clear();
}

bool IfcPath::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeList.setUnset(true);
    }
    else {
        m_edgeList.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcOrientedEdge > attr2;
                attr2 = static_cast< IfcOrientedEdge * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_edgeList.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPath::copy(const IfcPath &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcOrientedEdge > >::const_iterator it_m_edgeList;
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    for (it_m_edgeList = obj.m_edgeList.begin(); it_m_edgeList != obj.m_edgeList.end(); ++it_m_edgeList) {
        Step::RefPtr< IfcOrientedEdge > copyTarget = copyop((*it_m_edgeList).get());
        m_edgeList.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPath::s_type("IfcPath");
