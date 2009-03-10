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

#include "ifc2x3/IfcConnectionPortGeometry.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement.h"
#include "ifc2x3/IfcConnectionGeometry.h"
#include "ifc2x3/IfcProfileDef.h"
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

IfcConnectionPortGeometry::IfcConnectionPortGeometry(Step::Id id, Step::SPFData *args) : IfcConnectionGeometry(id, args) {
    m_locationAtRelatingElement = NULL;
    m_locationAtRelatedElement = NULL;
    m_profileOfPort = NULL;
}

IfcConnectionPortGeometry::~IfcConnectionPortGeometry() {
}

bool IfcConnectionPortGeometry::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConnectionPortGeometry(this);
}

const std::string &IfcConnectionPortGeometry::type() const {
    return IfcConnectionPortGeometry::s_type.getName();
}

const Step::ClassType &IfcConnectionPortGeometry::getClassType() {
    return IfcConnectionPortGeometry::s_type;
}

const Step::ClassType &IfcConnectionPortGeometry::getType() const {
    return IfcConnectionPortGeometry::s_type;
}

bool IfcConnectionPortGeometry::isOfType(const Step::ClassType &t) const {
    return IfcConnectionPortGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_locationAtRelatingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatingElement() const {
    IfcConnectionPortGeometry * deConstObject = const_cast< IfcConnectionPortGeometry * > (this);
    return deConstObject->getLocationAtRelatingElement();
}

void IfcConnectionPortGeometry::setLocationAtRelatingElement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_locationAtRelatingElement = value;
}

IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_locationAtRelatedElement.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatedElement() const {
    IfcConnectionPortGeometry * deConstObject = const_cast< IfcConnectionPortGeometry * > (this);
    return deConstObject->getLocationAtRelatedElement();
}

void IfcConnectionPortGeometry::setLocationAtRelatedElement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_locationAtRelatedElement = value;
}

IfcProfileDef *IfcConnectionPortGeometry::getProfileOfPort() {
    if (Step::BaseObject::inited()) {
        return m_profileOfPort.get();
    }
    else {
        return NULL;
    }
}

const IfcProfileDef *IfcConnectionPortGeometry::getProfileOfPort() const {
    IfcConnectionPortGeometry * deConstObject = const_cast< IfcConnectionPortGeometry * > (this);
    return deConstObject->getProfileOfPort();
}

void IfcConnectionPortGeometry::setProfileOfPort(const Step::RefPtr< IfcProfileDef > &value) {
    m_profileOfPort = value;
}

bool IfcConnectionPortGeometry::init() {
    bool status = IfcConnectionGeometry::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_locationAtRelatingElement = NULL;
    }
    else {
        m_locationAtRelatingElement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_locationAtRelatingElement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_locationAtRelatedElement = NULL;
    }
    else {
        m_locationAtRelatedElement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_locationAtRelatedElement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_profileOfPort = NULL;
    }
    else {
        m_profileOfPort = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcConnectionPortGeometry::copy(const IfcConnectionPortGeometry &obj, const CopyOp &copyop) {
    IfcConnectionGeometry::copy(obj, copyop);
    m_locationAtRelatingElement = new IfcAxis2Placement;
    m_locationAtRelatingElement->copy(*(obj.m_locationAtRelatingElement.get()), copyop);
    m_locationAtRelatedElement = new IfcAxis2Placement;
    m_locationAtRelatedElement->copy(*(obj.m_locationAtRelatedElement.get()), copyop);
    setProfileOfPort((IfcProfileDef*)copyop(obj.m_profileOfPort.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectionPortGeometry::s_type("IfcConnectionPortGeometry");
