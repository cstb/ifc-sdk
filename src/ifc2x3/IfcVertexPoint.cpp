#include "ifc2x3/IfcVertexPoint.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPoint.h"
#include "ifc2x3/IfcVertex.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcVertexPoint::IfcVertexPoint(Step::Id id, Step::SPFData *args) : IfcVertex(id, args) {
    m_vertexGeometry = NULL;
}

IfcVertexPoint::~IfcVertexPoint() {
}

bool IfcVertexPoint::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcVertexPoint(this);
}

const std::string &IfcVertexPoint::type() const {
    return IfcVertexPoint::s_type.getName();
}

const Step::ClassType &IfcVertexPoint::getClassType() {
    return IfcVertexPoint::s_type;
}

const Step::ClassType &IfcVertexPoint::getType() const {
    return IfcVertexPoint::s_type;
}

bool IfcVertexPoint::isOfType(const Step::ClassType &t) const {
    return IfcVertexPoint::s_type == t ? true : IfcVertex::isOfType(t);
}

IfcPoint *IfcVertexPoint::getVertexGeometry() {
    if (Step::BaseObject::inited()) {
        return m_vertexGeometry.get();
    }
    else {
        return NULL;
    }
}

const IfcPoint *IfcVertexPoint::getVertexGeometry() const {
    IfcVertexPoint * deConstObject = const_cast< IfcVertexPoint * > (this);
    return deConstObject->getVertexGeometry();
}

void IfcVertexPoint::setVertexGeometry(const Step::RefPtr< IfcPoint > &value) {
    m_vertexGeometry = value;
}

void IfcVertexPoint::unsetVertexGeometry() {
    m_vertexGeometry = Step::getUnset(getVertexGeometry());
}

bool IfcVertexPoint::testVertexGeometry() const {
    return !Step::isUnset(getVertexGeometry());
}

bool IfcVertexPoint::init() {
    bool status = IfcVertex::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_vertexGeometry = NULL;
    }
    else {
        m_vertexGeometry = static_cast< IfcPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcVertexPoint::copy(const IfcVertexPoint &obj, const CopyOp &copyop) {
    IfcVertex::copy(obj, copyop);
    setVertexGeometry((IfcPoint*)copyop(obj.m_vertexGeometry.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcVertexPoint::s_type("IfcVertexPoint");
