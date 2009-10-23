#include "ifc2x3/IfcEdgeLoop.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcLoop.h"
#include "ifc2x3/IfcOrientedEdge.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcEdgeLoop::IfcEdgeLoop(Step::Id id, Step::SPFData *args) : IfcLoop(id, args) {
}

IfcEdgeLoop::~IfcEdgeLoop() {
}

bool IfcEdgeLoop::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEdgeLoop(this);
}

const std::string &IfcEdgeLoop::type() const {
    return IfcEdgeLoop::s_type.getName();
}

const Step::ClassType &IfcEdgeLoop::getClassType() {
    return IfcEdgeLoop::s_type;
}

const Step::ClassType &IfcEdgeLoop::getType() const {
    return IfcEdgeLoop::s_type;
}

bool IfcEdgeLoop::isOfType(const Step::ClassType &t) const {
    return IfcEdgeLoop::s_type == t ? true : IfcLoop::isOfType(t);
}

List_IfcOrientedEdge_1_n &IfcEdgeLoop::getEdgeList() {
    if (Step::BaseObject::inited()) {
        return m_edgeList;
    }
    else {
        m_edgeList.setUnset(true);
        return m_edgeList;
    }
}

const List_IfcOrientedEdge_1_n &IfcEdgeLoop::getEdgeList() const {
    IfcEdgeLoop * deConstObject = const_cast< IfcEdgeLoop * > (this);
    return deConstObject->getEdgeList();
}

void IfcEdgeLoop::setEdgeList(const List_IfcOrientedEdge_1_n &value) {
    m_edgeList = value;
}

void IfcEdgeLoop::unsetEdgeList() {
    m_edgeList.clear();
    m_edgeList.setUnset(true);
}

bool IfcEdgeLoop::testEdgeList() const {
    return !Step::isUnset(getEdgeList());
}

bool IfcEdgeLoop::init() {
    bool status = IfcLoop::init();
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
                attr2 = static_cast< IfcOrientedEdge * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_edgeList.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcEdgeLoop::copy(const IfcEdgeLoop &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcOrientedEdge >, 1 >::const_iterator it_m_edgeList;
    IfcLoop::copy(obj, copyop);
    for (it_m_edgeList = obj.m_edgeList.begin(); it_m_edgeList != obj.m_edgeList.end(); ++it_m_edgeList) {
        Step::RefPtr< IfcOrientedEdge > copyTarget = (IfcOrientedEdge *) (copyop((*it_m_edgeList).get()));
        m_edgeList.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEdgeLoop::s_type("IfcEdgeLoop");
