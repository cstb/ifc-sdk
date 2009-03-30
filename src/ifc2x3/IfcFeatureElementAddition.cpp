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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcFeatureElementAddition.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFeatureElement.h"
#include "ifc2x3/IfcRelProjectsElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcFeatureElementAddition::IfcFeatureElementAddition(Step::Id id, Step::SPFData *args) : IfcFeatureElement(id, args) {
}

IfcFeatureElementAddition::~IfcFeatureElementAddition() {
}

bool IfcFeatureElementAddition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFeatureElementAddition(this);
}

const std::string &IfcFeatureElementAddition::type() const {
    return IfcFeatureElementAddition::s_type.getName();
}

const Step::ClassType &IfcFeatureElementAddition::getClassType() {
    return IfcFeatureElementAddition::s_type;
}

const Step::ClassType &IfcFeatureElementAddition::getType() const {
    return IfcFeatureElementAddition::s_type;
}

bool IfcFeatureElementAddition::isOfType(const Step::ClassType &t) const {
    return IfcFeatureElementAddition::s_type == t ? true : IfcFeatureElement::isOfType(t);
}

IfcRelProjectsElement *IfcFeatureElementAddition::getProjectsElements() {
    if (Step::BaseObject::inited()) {
        return m_projectsElements.get();
    }
    else {
        return NULL;
    }
}

const IfcRelProjectsElement *IfcFeatureElementAddition::getProjectsElements() const {
    IfcFeatureElementAddition * deConstObject = const_cast< IfcFeatureElementAddition * > (this);
    return deConstObject->getProjectsElements();
}

bool IfcFeatureElementAddition::testProjectsElements() const {
    return !Step::isUnset(getProjectsElements());
}

bool IfcFeatureElementAddition::init() {
    bool status = IfcFeatureElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelProjectsElement::getClassType(), 5);
    if (inverses) {
        m_projectsElements = static_cast< IfcRelProjectsElement * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcFeatureElementAddition::copy(const IfcFeatureElementAddition &obj, const CopyOp &copyop) {
    IfcFeatureElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFeatureElementAddition::s_type("IfcFeatureElementAddition");
