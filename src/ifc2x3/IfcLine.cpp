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


#include <ifc2x3/IfcLine.h>

#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcVector.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLine::IfcLine(Step::Id id, Step::SPFData *args) : 
    IfcCurve(id, args)
{
    m_Pnt = NULL;
    m_Dir = NULL;
}

IfcLine::~IfcLine()
{}

bool IfcLine::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLine(this);
}


IfcCartesianPoint *IfcLine::getPnt()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Pnt.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianPoint *IfcLine::getPnt() const
{
    return const_cast<IfcLine *>(this)->getPnt();
}

void IfcLine::setPnt(const Step::RefPtr< IfcCartesianPoint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Pnt = value;
}

void IfcLine::unsetPnt()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Pnt = Step::getUnset(getPnt());
}

bool IfcLine::testPnt() const
{
    return Step::isUnset(getPnt()) == false;
}


IfcVector *IfcLine::getDir()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Dir.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcVector *IfcLine::getDir() const
{
    return const_cast<IfcLine *>(this)->getDir();
}

void IfcLine::setDir(const Step::RefPtr< IfcVector > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Dir = value;
}

void IfcLine::unsetDir()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Dir = Step::getUnset(getDir());
}

bool IfcLine::testDir() const
{
    return Step::isUnset(getDir()) == false;
}

bool IfcLine::init()
{
    if (IfcCurve::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Pnt = NULL;
    }
    else
    {
        m_Pnt = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Dir = NULL;
    }
    else
    {
        m_Dir = static_cast< IfcVector * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcLine::copy(const IfcLine &obj, const CopyOp &copyop)
{
    IfcCurve::copy(obj, copyop);
    setPnt((IfcCartesianPoint*)copyop(obj.m_Pnt.get()));
    setDir((IfcVector*)copyop(obj.m_Dir.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLine, IfcCurve)
