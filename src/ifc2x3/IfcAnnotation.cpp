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

#include "ifc2x3/IfcAnnotation.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcRelContainedInSpatialStructure.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcAnnotation::IfcAnnotation(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
}

IfcAnnotation::~IfcAnnotation() {
}

bool IfcAnnotation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAnnotation(this);
}

const std::string &IfcAnnotation::type() const {
    return IfcAnnotation::s_type.getName();
}

const Step::ClassType &IfcAnnotation::getClassType() {
    return IfcAnnotation::s_type;
}

const Step::ClassType &IfcAnnotation::getType() const {
    return IfcAnnotation::s_type;
}

bool IfcAnnotation::isOfType(const Step::ClassType &t) const {
    return IfcAnnotation::s_type == t ? true : IfcProduct::isOfType(t);
}

Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcAnnotation::getContainedInStructure() {
    if (Step::BaseObject::inited()) {
        return m_containedInStructure;
    }
    else {
        m_containedInStructure.setUnset(true);
        return m_containedInStructure;
    }
}

const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcAnnotation::getContainedInStructure() const {
    IfcAnnotation * deConstObject = const_cast< IfcAnnotation * > (this);
    return deConstObject->getContainedInStructure();
}

bool IfcAnnotation::testContainedInStructure() const {
    return !Step::isUnset(getContainedInStructure());
}

bool IfcAnnotation::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_containedInStructure.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_containedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcAnnotation::copy(const IfcAnnotation &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotation::s_type("IfcAnnotation");
