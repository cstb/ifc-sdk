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

#include "ifc2x3/IfcRelAssociatesProfileProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcOrientationSelect.h"
#include "ifc2x3/IfcProfileProperties.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/IfcShapeAspect.h"
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

IfcRelAssociatesProfileProperties::IfcRelAssociatesProfileProperties(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingProfileProperties = NULL;
    m_profileSectionLocation = NULL;
    m_profileOrientation = NULL;
}

IfcRelAssociatesProfileProperties::~IfcRelAssociatesProfileProperties() {
}

bool IfcRelAssociatesProfileProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesProfileProperties(this);
}

const std::string &IfcRelAssociatesProfileProperties::type() const {
    return IfcRelAssociatesProfileProperties::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesProfileProperties::getClassType() {
    return IfcRelAssociatesProfileProperties::s_type;
}

const Step::ClassType &IfcRelAssociatesProfileProperties::getType() const {
    return IfcRelAssociatesProfileProperties::s_type;
}

bool IfcRelAssociatesProfileProperties::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesProfileProperties::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcProfileProperties *IfcRelAssociatesProfileProperties::getRelatingProfileProperties() {
    if (Step::BaseObject::inited()) {
        return m_relatingProfileProperties.get();
    }
    else {
        return NULL;
    }
}

const IfcProfileProperties *IfcRelAssociatesProfileProperties::getRelatingProfileProperties() const {
    IfcRelAssociatesProfileProperties * deConstObject = const_cast< IfcRelAssociatesProfileProperties * > (this);
    return deConstObject->getRelatingProfileProperties();
}

void IfcRelAssociatesProfileProperties::setRelatingProfileProperties(const Step::RefPtr< IfcProfileProperties > &value) {
    m_relatingProfileProperties = value;
}

IfcShapeAspect *IfcRelAssociatesProfileProperties::getProfileSectionLocation() {
    if (Step::BaseObject::inited()) {
        return m_profileSectionLocation.get();
    }
    else {
        return NULL;
    }
}

const IfcShapeAspect *IfcRelAssociatesProfileProperties::getProfileSectionLocation() const {
    IfcRelAssociatesProfileProperties * deConstObject = const_cast< IfcRelAssociatesProfileProperties * > (this);
    return deConstObject->getProfileSectionLocation();
}

void IfcRelAssociatesProfileProperties::setProfileSectionLocation(const Step::RefPtr< IfcShapeAspect > &value) {
    m_profileSectionLocation = value;
}

IfcOrientationSelect *IfcRelAssociatesProfileProperties::getProfileOrientation() {
    if (Step::BaseObject::inited()) {
        return m_profileOrientation.get();
    }
    else {
        return NULL;
    }
}

const IfcOrientationSelect *IfcRelAssociatesProfileProperties::getProfileOrientation() const {
    IfcRelAssociatesProfileProperties * deConstObject = const_cast< IfcRelAssociatesProfileProperties * > (this);
    return deConstObject->getProfileOrientation();
}

void IfcRelAssociatesProfileProperties::setProfileOrientation(const Step::RefPtr< IfcOrientationSelect > &value) {
    m_profileOrientation = value;
}

bool IfcRelAssociatesProfileProperties::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingProfileProperties = NULL;
    }
    else {
        m_relatingProfileProperties = static_cast< IfcProfileProperties * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profileSectionLocation = NULL;
    }
    else {
        m_profileSectionLocation = static_cast< IfcShapeAspect * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profileOrientation = NULL;
    }
    else {
        m_profileOrientation = new IfcOrientationSelect;
        if (arg[0] == '#') {
            m_profileOrientation->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_profileOrientation->setIfcPlaneAngleMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcRelAssociatesProfileProperties::copy(const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    setRelatingProfileProperties((IfcProfileProperties*)copyop(obj.m_relatingProfileProperties.get()));
    setProfileSectionLocation((IfcShapeAspect*)copyop(obj.m_profileSectionLocation.get()));
    m_profileOrientation = new IfcOrientationSelect;
    m_profileOrientation->copy(*(obj.m_profileOrientation.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesProfileProperties::s_type("IfcRelAssociatesProfileProperties");
