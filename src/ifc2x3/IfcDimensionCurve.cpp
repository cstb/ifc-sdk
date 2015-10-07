// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcDimensionCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAnnotationCurveOccurrence.h>
#include <ifc2x3/IfcTerminatorSymbol.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

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
    return !m_annotatedBySymbols.isUnset();
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

IFC2X3_EXPORT Step::ClassType IfcDimensionCurve::s_type("IfcDimensionCurve");
