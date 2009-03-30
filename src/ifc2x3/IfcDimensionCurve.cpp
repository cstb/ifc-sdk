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

#include "ifc2x3/IfcDimensionCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationCurveOccurrence.h"
#include "ifc2x3/IfcTerminatorSymbol.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcDimensionCurve::IfcDimensionCurve(Step::Id id, Step::SPFData *args) : IfcAnnotationCurveOccurrence(id, args) {
}

IfcDimensionCurve::~IfcDimensionCurve() {
}

bool IfcDimensionCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDimensionCurve(this);
}

const std::string &IfcDimensionCurve::type() const {
    return IfcDimensionCurve::s_type.getName();
}

const Step::ClassType &IfcDimensionCurve::getClassType() {
    return IfcDimensionCurve::s_type;
}

const Step::ClassType &IfcDimensionCurve::getType() const {
    return IfcDimensionCurve::s_type;
}

bool IfcDimensionCurve::isOfType(const Step::ClassType &t) const {
    return IfcDimensionCurve::s_type == t ? true : IfcAnnotationCurveOccurrence::isOfType(t);
}

Inverse_Set_IfcTerminatorSymbol_0_2 &IfcDimensionCurve::getAnnotatedBySymbols() {
    if (Step::BaseObject::inited()) {
        return m_annotatedBySymbols;
    }
    else {
        m_annotatedBySymbols.setUnset(true);
        return m_annotatedBySymbols;
    }
}

const Inverse_Set_IfcTerminatorSymbol_0_2 &IfcDimensionCurve::getAnnotatedBySymbols() const {
    IfcDimensionCurve * deConstObject = const_cast< IfcDimensionCurve * > (this);
    return deConstObject->getAnnotatedBySymbols();
}

bool IfcDimensionCurve::testAnnotatedBySymbols() const {
    return !Step::isUnset(getAnnotatedBySymbols());
}

bool IfcDimensionCurve::init() {
    bool status = IfcAnnotationCurveOccurrence::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcTerminatorSymbol::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_annotatedBySymbols.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_annotatedBySymbols.insert(static_cast< IfcTerminatorSymbol * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDimensionCurve::copy(const IfcDimensionCurve &obj, const CopyOp &copyop) {
    IfcAnnotationCurveOccurrence::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionCurve::s_type("IfcDimensionCurve");
