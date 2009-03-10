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
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcConnectionCurveGeometry.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConnectionGeometry.h"
#include "ifc2x3/IfcCurveOrEdgeCurve.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcConnectionCurveGeometry::IfcConnectionCurveGeometry(Step::Id id, Step::SPFData *args) : IfcConnectionGeometry(id, args) {
    m_curveOnRelatingElement = NULL;
    m_curveOnRelatedElement = NULL;
}

IfcConnectionCurveGeometry::~IfcConnectionCurveGeometry() {
}

bool IfcConnectionCurveGeometry::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConnectionCurveGeometry(this);
}

const std::string &IfcConnectionCurveGeometry::type() const {
    return IfcConnectionCurveGeometry::s_type.getName();
}

const Step::ClassType &IfcConnectionCurveGeometry::getClassType() {
    return IfcConnectionCurveGeometry::s_type;
}

const Step::ClassType &IfcConnectionCurveGeometry::getType() const {
    return IfcConnectionCurveGeometry::s_type;
}

bool IfcConnectionCurveGeometry::isOfType(const Step::ClassType &t) const {
    return IfcConnectionCurveGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_curveOnRelatingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatingElement() const {
    IfcConnectionCurveGeometry * deConstObject = const_cast< IfcConnectionCurveGeometry * > (this);
    return deConstObject->getCurveOnRelatingElement();
}

void IfcConnectionCurveGeometry::setCurveOnRelatingElement(const Step::RefPtr< IfcCurveOrEdgeCurve > &value) {
    m_curveOnRelatingElement = value;
}

IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_curveOnRelatedElement.get();
    }
    else {
        return NULL;
    }
}

const IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatedElement() const {
    IfcConnectionCurveGeometry * deConstObject = const_cast< IfcConnectionCurveGeometry * > (this);
    return deConstObject->getCurveOnRelatedElement();
}

void IfcConnectionCurveGeometry::setCurveOnRelatedElement(const Step::RefPtr< IfcCurveOrEdgeCurve > &value) {
    m_curveOnRelatedElement = value;
}

bool IfcConnectionCurveGeometry::init() {
    bool status = IfcConnectionGeometry::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveOnRelatingElement = NULL;
    }
    else {
        m_curveOnRelatingElement = new IfcCurveOrEdgeCurve;
        if (arg[0] == '#') {
            m_curveOnRelatingElement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveOnRelatedElement = NULL;
    }
    else {
        m_curveOnRelatedElement = new IfcCurveOrEdgeCurve;
        if (arg[0] == '#') {
            m_curveOnRelatedElement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcConnectionCurveGeometry::copy(const IfcConnectionCurveGeometry &obj, const CopyOp &copyop) {
    IfcConnectionGeometry::copy(obj, copyop);
    m_curveOnRelatingElement = new IfcCurveOrEdgeCurve;
    m_curveOnRelatingElement->copy(*(obj.m_curveOnRelatingElement.get()), copyop);
    m_curveOnRelatedElement = new IfcCurveOrEdgeCurve;
    m_curveOnRelatedElement->copy(*(obj.m_curveOnRelatedElement.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectionCurveGeometry::s_type("IfcConnectionCurveGeometry");
