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

#include "ifc2x3/IfcConnectionPointGeometry.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConnectionGeometry.h"
#include "ifc2x3/IfcPointOrVertexPoint.h"
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

IfcConnectionPointGeometry::IfcConnectionPointGeometry(Step::Id id, Step::SPFData *args) : IfcConnectionGeometry(id, args) {
    m_pointOnRelatingElement = NULL;
    m_pointOnRelatedElement = NULL;
}

IfcConnectionPointGeometry::~IfcConnectionPointGeometry() {
}

bool IfcConnectionPointGeometry::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcConnectionPointGeometry(this);
}

const std::string &IfcConnectionPointGeometry::type() {
    return IfcConnectionPointGeometry::s_type.getName();
}

Step::ClassType IfcConnectionPointGeometry::getClassType() {
    return IfcConnectionPointGeometry::s_type;
}

Step::ClassType IfcConnectionPointGeometry::getType() const {
    return IfcConnectionPointGeometry::s_type;
}

bool IfcConnectionPointGeometry::isOfType(Step::ClassType t) {
    return IfcConnectionPointGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcPointOrVertexPoint *IfcConnectionPointGeometry::getPointOnRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_pointOnRelatingElement.get();
    }
    else {
        return NULL;
    }
}

void IfcConnectionPointGeometry::setPointOnRelatingElement(const Step::RefPtr< IfcPointOrVertexPoint > &value) {
    m_pointOnRelatingElement = value;
}

IfcPointOrVertexPoint *IfcConnectionPointGeometry::getPointOnRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_pointOnRelatedElement.get();
    }
    else {
        return NULL;
    }
}

void IfcConnectionPointGeometry::setPointOnRelatedElement(const Step::RefPtr< IfcPointOrVertexPoint > &value) {
    m_pointOnRelatedElement = value;
}

void IfcConnectionPointGeometry::release() {
    IfcConnectionGeometry::release();
}

bool IfcConnectionPointGeometry::init() {
    bool status = IfcConnectionGeometry::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointOnRelatingElement = NULL;
    }
    else {
        m_pointOnRelatingElement = new IfcPointOrVertexPoint;
        if (arg[0] == '#') {
            m_pointOnRelatingElement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_pointOnRelatedElement = NULL;
    }
    else {
        m_pointOnRelatedElement = new IfcPointOrVertexPoint;
        if (arg[0] == '#') {
            m_pointOnRelatedElement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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

void IfcConnectionPointGeometry::copy(const IfcConnectionPointGeometry &obj, const CopyOp &copyop) {
    IfcConnectionGeometry::copy(obj, copyop);
    m_pointOnRelatingElement = new IfcPointOrVertexPoint;
    m_pointOnRelatingElement->copy(*(obj.m_pointOnRelatingElement.get()), copyop);
    m_pointOnRelatedElement = new IfcPointOrVertexPoint;
    m_pointOnRelatedElement->copy(*(obj.m_pointOnRelatedElement.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectionPointGeometry::s_type("IfcConnectionPointGeometry");
