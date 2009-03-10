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

#include "ifc2x3/IfcConnectionSurfaceGeometry.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConnectionGeometry.h"
#include "ifc2x3/IfcSurfaceOrFaceSurface.h"
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

IfcConnectionSurfaceGeometry::IfcConnectionSurfaceGeometry(Step::Id id, Step::SPFData *args) : IfcConnectionGeometry(id, args) {
    m_surfaceOnRelatingElement = NULL;
    m_surfaceOnRelatedElement = NULL;
}

IfcConnectionSurfaceGeometry::~IfcConnectionSurfaceGeometry() {
}

bool IfcConnectionSurfaceGeometry::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConnectionSurfaceGeometry(this);
}

const std::string &IfcConnectionSurfaceGeometry::type() const {
    return IfcConnectionSurfaceGeometry::s_type.getName();
}

const Step::ClassType &IfcConnectionSurfaceGeometry::getClassType() {
    return IfcConnectionSurfaceGeometry::s_type;
}

const Step::ClassType &IfcConnectionSurfaceGeometry::getType() const {
    return IfcConnectionSurfaceGeometry::s_type;
}

bool IfcConnectionSurfaceGeometry::isOfType(const Step::ClassType &t) const {
    return IfcConnectionSurfaceGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcSurfaceOrFaceSurface *IfcConnectionSurfaceGeometry::getSurfaceOnRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_surfaceOnRelatingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcSurfaceOrFaceSurface *IfcConnectionSurfaceGeometry::getSurfaceOnRelatingElement() const {
    IfcConnectionSurfaceGeometry * deConstObject = const_cast< IfcConnectionSurfaceGeometry * > (this);
    return deConstObject->getSurfaceOnRelatingElement();
}

void IfcConnectionSurfaceGeometry::setSurfaceOnRelatingElement(const Step::RefPtr< IfcSurfaceOrFaceSurface > &value) {
    m_surfaceOnRelatingElement = value;
}

IfcSurfaceOrFaceSurface *IfcConnectionSurfaceGeometry::getSurfaceOnRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_surfaceOnRelatedElement.get();
    }
    else {
        return NULL;
    }
}

const IfcSurfaceOrFaceSurface *IfcConnectionSurfaceGeometry::getSurfaceOnRelatedElement() const {
    IfcConnectionSurfaceGeometry * deConstObject = const_cast< IfcConnectionSurfaceGeometry * > (this);
    return deConstObject->getSurfaceOnRelatedElement();
}

void IfcConnectionSurfaceGeometry::setSurfaceOnRelatedElement(const Step::RefPtr< IfcSurfaceOrFaceSurface > &value) {
    m_surfaceOnRelatedElement = value;
}

bool IfcConnectionSurfaceGeometry::init() {
    bool status = IfcConnectionGeometry::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_surfaceOnRelatingElement = NULL;
    }
    else {
        m_surfaceOnRelatingElement = new IfcSurfaceOrFaceSurface;
        if (arg[0] == '#') {
            m_surfaceOnRelatingElement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_surfaceOnRelatedElement = NULL;
    }
    else {
        m_surfaceOnRelatedElement = new IfcSurfaceOrFaceSurface;
        if (arg[0] == '#') {
            m_surfaceOnRelatedElement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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

void IfcConnectionSurfaceGeometry::copy(const IfcConnectionSurfaceGeometry &obj, const CopyOp &copyop) {
    IfcConnectionGeometry::copy(obj, copyop);
    m_surfaceOnRelatingElement = new IfcSurfaceOrFaceSurface;
    m_surfaceOnRelatingElement->copy(*(obj.m_surfaceOnRelatingElement.get()), copyop);
    m_surfaceOnRelatedElement = new IfcSurfaceOrFaceSurface;
    m_surfaceOnRelatedElement->copy(*(obj.m_surfaceOnRelatedElement.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectionSurfaceGeometry::s_type("IfcConnectionSurfaceGeometry");
