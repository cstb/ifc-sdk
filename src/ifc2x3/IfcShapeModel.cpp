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

#include "ifc2x3/IfcShapeModel.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentation.h"
#include "ifc2x3/IfcShapeAspect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcShapeModel::IfcShapeModel(Step::Id id, Step::SPFData *args) : IfcRepresentation(id, args) {
}

IfcShapeModel::~IfcShapeModel() {
}

bool IfcShapeModel::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcShapeModel(this);
}

const std::string &IfcShapeModel::type() const {
    return IfcShapeModel::s_type.getName();
}

const Step::ClassType &IfcShapeModel::getClassType() {
    return IfcShapeModel::s_type;
}

const Step::ClassType &IfcShapeModel::getType() const {
    return IfcShapeModel::s_type;
}

bool IfcShapeModel::isOfType(const Step::ClassType &t) const {
    return IfcShapeModel::s_type == t ? true : IfcRepresentation::isOfType(t);
}

Inverse_Set_IfcShapeAspect_0_1 &IfcShapeModel::getOfShapeAspect() {
    if (Step::BaseObject::inited()) {
        return m_ofShapeAspect;
    }
    else {
        m_ofShapeAspect.setUnset(true);
        return m_ofShapeAspect;
    }
}

const Inverse_Set_IfcShapeAspect_0_1 &IfcShapeModel::getOfShapeAspect() const {
    IfcShapeModel * deConstObject = const_cast< IfcShapeModel * > (this);
    return deConstObject->getOfShapeAspect();
}

bool IfcShapeModel::testOfShapeAspect() const {
    return !Step::isUnset(getOfShapeAspect());
}

bool IfcShapeModel::init() {
    bool status = IfcRepresentation::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcShapeAspect::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_ofShapeAspect.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_ofShapeAspect.insert(static_cast< IfcShapeAspect * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcShapeModel::copy(const IfcShapeModel &obj, const CopyOp &copyop) {
    IfcRepresentation::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcShapeModel::s_type("IfcShapeModel");
