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


#include <ifc2x3/IfcDefinedSymbol.h>

#include <ifc2x3/IfcDefinedSymbolSelect.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDefinedSymbol::IfcDefinedSymbol(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Definition = NULL;
    m_Target = NULL;
}

IfcDefinedSymbol::~IfcDefinedSymbol()
{}

bool IfcDefinedSymbol::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDefinedSymbol(this);
}


IfcDefinedSymbolSelect *IfcDefinedSymbol::getDefinition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Definition.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDefinedSymbolSelect *IfcDefinedSymbol::getDefinition() const
{
    return const_cast<IfcDefinedSymbol *>(this)->getDefinition();
}

void IfcDefinedSymbol::setDefinition(const Step::RefPtr< IfcDefinedSymbolSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Definition = value;
}

void IfcDefinedSymbol::unsetDefinition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Definition = Step::getUnset(getDefinition());
}

bool IfcDefinedSymbol::testDefinition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDefinition()) == false;
}


IfcCartesianTransformationOperator2D *IfcDefinedSymbol::getTarget()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Target.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianTransformationOperator2D *IfcDefinedSymbol::getTarget() const
{
    return const_cast<IfcDefinedSymbol *>(this)->getTarget();
}

void IfcDefinedSymbol::setTarget(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Target = value;
}

void IfcDefinedSymbol::unsetTarget()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Target = Step::getUnset(getTarget());
}

bool IfcDefinedSymbol::testTarget() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTarget()) == false;
}

bool IfcDefinedSymbol::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Definition = NULL;
    }
    else
    {
        m_Definition = new IfcDefinedSymbolSelect;
        if (arg[0] == '#') {
            m_Definition->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Target = NULL;
    }
    else
    {
        m_Target = static_cast< IfcCartesianTransformationOperator2D * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcDefinedSymbol::copy(const IfcDefinedSymbol &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setDefinition((IfcDefinedSymbolSelect*)copyop(obj.m_Definition.get()));
    setTarget((IfcCartesianTransformationOperator2D*)copyop(obj.m_Target.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDefinedSymbol, IfcGeometricRepresentationItem)
