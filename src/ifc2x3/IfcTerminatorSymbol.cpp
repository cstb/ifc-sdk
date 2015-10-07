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



#include <ifc2x3/IfcTerminatorSymbol.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAnnotationCurveOccurrence.h>
#include <ifc2x3/IfcAnnotationSymbolOccurrence.h>
#include <ifc2x3/IfcDimensionCurve.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTerminatorSymbol::IfcTerminatorSymbol(Step::Id id, Step::SPFData *args) : IfcAnnotationSymbolOccurrence(id, args) {
    m_annotatedCurve = NULL;
}

IfcTerminatorSymbol::~IfcTerminatorSymbol() {
}

bool IfcTerminatorSymbol::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTerminatorSymbol(this);
}

const std::string &IfcTerminatorSymbol::type() const {
    return IfcTerminatorSymbol::s_type.getName();
}

const Step::ClassType &IfcTerminatorSymbol::getClassType() {
    return IfcTerminatorSymbol::s_type;
}

const Step::ClassType &IfcTerminatorSymbol::getType() const {
    return IfcTerminatorSymbol::s_type;
}

bool IfcTerminatorSymbol::isOfType(const Step::ClassType &t) const {
    return IfcTerminatorSymbol::s_type == t ? true : IfcAnnotationSymbolOccurrence::isOfType(t);
}

IfcAnnotationCurveOccurrence *IfcTerminatorSymbol::getAnnotatedCurve() {
    if (Step::BaseObject::inited()) {
        return m_annotatedCurve.get();
    }
    else {
        return NULL;
    }
}

const IfcAnnotationCurveOccurrence *IfcTerminatorSymbol::getAnnotatedCurve() const {
    IfcTerminatorSymbol * deConstObject = const_cast< IfcTerminatorSymbol * > (this);
    return deConstObject->getAnnotatedCurve();
}

void IfcTerminatorSymbol::setAnnotatedCurve(const Step::RefPtr< IfcAnnotationCurveOccurrence > &value) {
    if (dynamic_cast< IfcDimensionCurve * > (m_annotatedCurve.get()) != NULL) {
        ((IfcDimensionCurve *) (m_annotatedCurve.get()))->m_annotatedBySymbols.erase(this);
    }
	m_annotatedCurve = value;
	if (dynamic_cast< IfcDimensionCurve * > (m_annotatedCurve.get()) != NULL) {
        ((IfcDimensionCurve *) (m_annotatedCurve.get()))->m_annotatedBySymbols.insert(this);
    }

}

void IfcTerminatorSymbol::unsetAnnotatedCurve() {
    if (dynamic_cast< IfcDimensionCurve * > (m_annotatedCurve.get()) != NULL) {
        ((IfcDimensionCurve *) (m_annotatedCurve.get()))->m_annotatedBySymbols.erase(this);
    }
    m_annotatedCurve = Step::getUnset(getAnnotatedCurve());
}

bool IfcTerminatorSymbol::testAnnotatedCurve() const {
    return !Step::isUnset(getAnnotatedCurve());
}

bool IfcTerminatorSymbol::init() {
    bool status = IfcAnnotationSymbolOccurrence::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_annotatedCurve = NULL;
    }
    else {
        m_annotatedCurve = static_cast< IfcAnnotationCurveOccurrence * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcTerminatorSymbol::copy(const IfcTerminatorSymbol &obj, const CopyOp &copyop) {
    IfcAnnotationSymbolOccurrence::copy(obj, copyop);
    setAnnotatedCurve((IfcAnnotationCurveOccurrence*)copyop(obj.m_annotatedCurve.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTerminatorSymbol::s_type("IfcTerminatorSymbol");
