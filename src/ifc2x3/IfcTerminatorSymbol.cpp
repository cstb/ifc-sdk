// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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

#include <ifc2x3/IfcAnnotationCurveOccurrence.h>
#include <ifc2x3/IfcDimensionCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTerminatorSymbol::IfcTerminatorSymbol(Step::Id id, Step::SPFData *args) : 
    IfcAnnotationSymbolOccurrence(id, args)
{
    m_AnnotatedCurve = NULL;
}

IfcTerminatorSymbol::~IfcTerminatorSymbol()
{}

bool IfcTerminatorSymbol::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTerminatorSymbol(this);
}

IfcAnnotationCurveOccurrence *IfcTerminatorSymbol::getAnnotatedCurve()
{
    if (Step::BaseObject::inited())
    {
        return m_AnnotatedCurve.get();
    }
    else
    {
        return NULL;
    }
}

const IfcAnnotationCurveOccurrence *IfcTerminatorSymbol::getAnnotatedCurve() const
{
    return const_cast< IfcTerminatorSymbol * > (this)->getAnnotatedCurve();
}

void IfcTerminatorSymbol::setAnnotatedCurve(const Step::RefPtr< IfcAnnotationCurveOccurrence > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_AnnotatedCurve.valid() && m_AnnotatedCurve->isOfType(IfcDimensionCurve::getClassType()))
    {
        static_cast<IfcDimensionCurve*>(m_AnnotatedCurve.get())->m_AnnotatedBySymbols.erase(this);
    }
    if (value.valid() && value->isOfType(IfcDimensionCurve::getClassType()))
    {
       static_cast<IfcDimensionCurve*>(value.get())->m_AnnotatedBySymbols.insert(this);
    }
    m_AnnotatedCurve = value;
}

void IfcTerminatorSymbol::unsetAnnotatedCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AnnotatedCurve = Step::getUnset(getAnnotatedCurve());
}

bool IfcTerminatorSymbol::testAnnotatedCurve() const
{
    return Step::isUnset(getAnnotatedCurve()) == false;
}

bool IfcTerminatorSymbol::init()
{
    if (IfcAnnotationSymbolOccurrence::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AnnotatedCurve = NULL;
    }
    else
    {
        m_AnnotatedCurve = static_cast< IfcAnnotationCurveOccurrence * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcTerminatorSymbol::copy(const IfcTerminatorSymbol &obj, const CopyOp &copyop)
{
    IfcAnnotationSymbolOccurrence::copy(obj, copyop);
    setAnnotatedCurve((IfcAnnotationCurveOccurrence*)copyop(obj.m_AnnotatedCurve.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTerminatorSymbol, IfcAnnotationSymbolOccurrence)
