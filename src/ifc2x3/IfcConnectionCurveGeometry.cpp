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


#include <ifc2x3/IfcConnectionCurveGeometry.h>

#include <ifc2x3/IfcCurveOrEdgeCurve.h>
#include <ifc2x3/IfcCurveOrEdgeCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConnectionCurveGeometry::IfcConnectionCurveGeometry(Step::Id id, Step::SPFData *args) : 
    IfcConnectionGeometry(id, args)
{
    m_CurveOnRelatingElement = NULL;
    m_CurveOnRelatedElement = NULL;
}

IfcConnectionCurveGeometry::~IfcConnectionCurveGeometry()
{}

bool IfcConnectionCurveGeometry::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConnectionCurveGeometry(this);
}


IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatingElement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CurveOnRelatingElement.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatingElement() const
{
    return const_cast<IfcConnectionCurveGeometry *>(this)->getCurveOnRelatingElement();
}

void IfcConnectionCurveGeometry::setCurveOnRelatingElement(const Step::RefPtr< IfcCurveOrEdgeCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveOnRelatingElement = value;
}

void IfcConnectionCurveGeometry::unsetCurveOnRelatingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveOnRelatingElement = Step::getUnset(getCurveOnRelatingElement());
}

bool IfcConnectionCurveGeometry::testCurveOnRelatingElement() const
{
    return Step::isUnset(getCurveOnRelatingElement()) == false;
}


IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatedElement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CurveOnRelatedElement.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatedElement() const
{
    return const_cast<IfcConnectionCurveGeometry *>(this)->getCurveOnRelatedElement();
}

void IfcConnectionCurveGeometry::setCurveOnRelatedElement(const Step::RefPtr< IfcCurveOrEdgeCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveOnRelatedElement = value;
}

void IfcConnectionCurveGeometry::unsetCurveOnRelatedElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveOnRelatedElement = Step::getUnset(getCurveOnRelatedElement());
}

bool IfcConnectionCurveGeometry::testCurveOnRelatedElement() const
{
    return Step::isUnset(getCurveOnRelatedElement()) == false;
}

bool IfcConnectionCurveGeometry::init()
{
    if (IfcConnectionGeometry::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CurveOnRelatingElement = NULL;
    }
    else
    {
        m_CurveOnRelatingElement = new IfcCurveOrEdgeCurve;
        if (arg[0] == '#') {
            m_CurveOnRelatingElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_CurveOnRelatedElement = NULL;
    }
    else
    {
        m_CurveOnRelatedElement = new IfcCurveOrEdgeCurve;
        if (arg[0] == '#') {
            m_CurveOnRelatedElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    return true;
}

void IfcConnectionCurveGeometry::copy(const IfcConnectionCurveGeometry &obj, const CopyOp &copyop)
{
    IfcConnectionGeometry::copy(obj, copyop);
    setCurveOnRelatingElement((IfcCurveOrEdgeCurve*)copyop(obj.m_CurveOnRelatingElement.get()));
    setCurveOnRelatedElement((IfcCurveOrEdgeCurve*)copyop(obj.m_CurveOnRelatedElement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConnectionCurveGeometry, IfcConnectionGeometry)
