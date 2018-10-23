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


#include <ifc2x3/IfcDimensionCurve.h>

#include <ifc2x3/IfcTerminatorSymbol.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDimensionCurve::IfcDimensionCurve(Step::Id id, Step::SPFData *args) : 
    IfcAnnotationCurveOccurrence(id, args)
{
}

IfcDimensionCurve::~IfcDimensionCurve()
{}

bool IfcDimensionCurve::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDimensionCurve(this);
}

Inverse_Set_IfcTerminatorSymbol_0_2 &IfcDimensionCurve::getAnnotatedBySymbols()
{
    if (Step::BaseObject::inited())
    {
        return m_AnnotatedBySymbols;
    }
 
    m_AnnotatedBySymbols.setUnset(true);
    return m_AnnotatedBySymbols;
}

const Inverse_Set_IfcTerminatorSymbol_0_2 &IfcDimensionCurve::getAnnotatedBySymbols() const
{
    return  const_cast< IfcDimensionCurve * > (this)->getAnnotatedBySymbols();
}

bool IfcDimensionCurve::testAnnotatedBySymbols() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_AnnotatedBySymbols.isUnset() == false;
}

bool IfcDimensionCurve::init()
{
    if (IfcAnnotationCurveOccurrence::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcTerminatorSymbol::getClassType(), 3);
    if (inverses)
    {
        unsigned int i;
        m_AnnotatedBySymbols.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_AnnotatedBySymbols.insert(static_cast< IfcTerminatorSymbol * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDimensionCurve::copy(const IfcDimensionCurve &obj, const CopyOp &copyop)
{
    IfcAnnotationCurveOccurrence::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDimensionCurve, IfcAnnotationCurveOccurrence)
