#include "ifc2x3/IfcLine.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcVector.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcLine::IfcLine(Step::Id id, Step::SPFData *args) : IfcCurve(id, args) {
    m_pnt = NULL;
    m_dir = NULL;
}

IfcLine::~IfcLine() {
}

bool IfcLine::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLine(this);
}

const std::string &IfcLine::type() const {
    return IfcLine::s_type.getName();
}

const Step::ClassType &IfcLine::getClassType() {
    return IfcLine::s_type;
}

const Step::ClassType &IfcLine::getType() const {
    return IfcLine::s_type;
}

bool IfcLine::isOfType(const Step::ClassType &t) const {
    return IfcLine::s_type == t ? true : IfcCurve::isOfType(t);
}

IfcCartesianPoint *IfcLine::getPnt() {
    if (Step::BaseObject::inited()) {
        return m_pnt.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianPoint *IfcLine::getPnt() const {
    IfcLine * deConstObject = const_cast< IfcLine * > (this);
    return deConstObject->getPnt();
}

void IfcLine::setPnt(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_pnt = value;
}

void IfcLine::unsetPnt() {
    m_pnt = Step::getUnset(getPnt());
}

bool IfcLine::testPnt() const {
    return !Step::isUnset(getPnt());
}

IfcVector *IfcLine::getDir() {
    if (Step::BaseObject::inited()) {
        return m_dir.get();
    }
    else {
        return NULL;
    }
}

const IfcVector *IfcLine::getDir() const {
    IfcLine * deConstObject = const_cast< IfcLine * > (this);
    return deConstObject->getDir();
}

void IfcLine::setDir(const Step::RefPtr< IfcVector > &value) {
    m_dir = value;
}

void IfcLine::unsetDir() {
    m_dir = Step::getUnset(getDir());
}

bool IfcLine::testDir() const {
    return !Step::isUnset(getDir());
}

bool IfcLine::init() {
    bool status = IfcCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pnt = NULL;
    }
    else {
        m_pnt = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dir = NULL;
    }
    else {
        m_dir = static_cast< IfcVector * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcLine::copy(const IfcLine &obj, const CopyOp &copyop) {
    IfcCurve::copy(obj, copyop);
    setPnt((IfcCartesianPoint*)copyop(obj.m_pnt.get()));
    setDir((IfcVector*)copyop(obj.m_dir.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLine::s_type("IfcLine");
