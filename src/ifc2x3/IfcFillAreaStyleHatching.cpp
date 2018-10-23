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


#include <ifc2x3/IfcFillAreaStyleHatching.h>

#include <ifc2x3/IfcCurveStyle.h>
#include <ifc2x3/IfcHatchLineDistanceSelect.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcCartesianPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFillAreaStyleHatching::IfcFillAreaStyleHatching(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_HatchLineAppearance = NULL;
    m_StartOfNextHatchLine = NULL;
    m_PointOfReferenceHatchLine = NULL;
    m_PatternStart = NULL;
    m_HatchLineAngle = Step::getUnset(m_HatchLineAngle);
}

IfcFillAreaStyleHatching::~IfcFillAreaStyleHatching()
{}

bool IfcFillAreaStyleHatching::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFillAreaStyleHatching(this);
}


IfcCurveStyle *IfcFillAreaStyleHatching::getHatchLineAppearance()
{
    if (Step::BaseObject::inited()) 
    {
        return m_HatchLineAppearance.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurveStyle *IfcFillAreaStyleHatching::getHatchLineAppearance() const
{
    return const_cast<IfcFillAreaStyleHatching *>(this)->getHatchLineAppearance();
}

void IfcFillAreaStyleHatching::setHatchLineAppearance(const Step::RefPtr< IfcCurveStyle > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HatchLineAppearance = value;
}

void IfcFillAreaStyleHatching::unsetHatchLineAppearance()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HatchLineAppearance = Step::getUnset(getHatchLineAppearance());
}

bool IfcFillAreaStyleHatching::testHatchLineAppearance() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getHatchLineAppearance()) == false;
}


IfcHatchLineDistanceSelect *IfcFillAreaStyleHatching::getStartOfNextHatchLine()
{
    if (Step::BaseObject::inited()) 
    {
        return m_StartOfNextHatchLine.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcHatchLineDistanceSelect *IfcFillAreaStyleHatching::getStartOfNextHatchLine() const
{
    return const_cast<IfcFillAreaStyleHatching *>(this)->getStartOfNextHatchLine();
}

void IfcFillAreaStyleHatching::setStartOfNextHatchLine(const Step::RefPtr< IfcHatchLineDistanceSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartOfNextHatchLine = value;
}

void IfcFillAreaStyleHatching::unsetStartOfNextHatchLine()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartOfNextHatchLine = Step::getUnset(getStartOfNextHatchLine());
}

bool IfcFillAreaStyleHatching::testStartOfNextHatchLine() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getStartOfNextHatchLine()) == false;
}


IfcCartesianPoint *IfcFillAreaStyleHatching::getPointOfReferenceHatchLine()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PointOfReferenceHatchLine.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianPoint *IfcFillAreaStyleHatching::getPointOfReferenceHatchLine() const
{
    return const_cast<IfcFillAreaStyleHatching *>(this)->getPointOfReferenceHatchLine();
}

void IfcFillAreaStyleHatching::setPointOfReferenceHatchLine(const Step::RefPtr< IfcCartesianPoint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PointOfReferenceHatchLine = value;
}

void IfcFillAreaStyleHatching::unsetPointOfReferenceHatchLine()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PointOfReferenceHatchLine = Step::getUnset(getPointOfReferenceHatchLine());
}

bool IfcFillAreaStyleHatching::testPointOfReferenceHatchLine() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPointOfReferenceHatchLine()) == false;
}


IfcCartesianPoint *IfcFillAreaStyleHatching::getPatternStart()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PatternStart.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianPoint *IfcFillAreaStyleHatching::getPatternStart() const
{
    return const_cast<IfcFillAreaStyleHatching *>(this)->getPatternStart();
}

void IfcFillAreaStyleHatching::setPatternStart(const Step::RefPtr< IfcCartesianPoint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PatternStart = value;
}

void IfcFillAreaStyleHatching::unsetPatternStart()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PatternStart = Step::getUnset(getPatternStart());
}

bool IfcFillAreaStyleHatching::testPatternStart() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPatternStart()) == false;
}


IfcPlaneAngleMeasure IfcFillAreaStyleHatching::getHatchLineAngle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_HatchLineAngle;
    }
    else 
    {
        return Step::getUnset(m_HatchLineAngle);
    }    
}

IfcPlaneAngleMeasure IfcFillAreaStyleHatching::getHatchLineAngle() const
{
    return const_cast<IfcFillAreaStyleHatching *>(this)->getHatchLineAngle();
}

void IfcFillAreaStyleHatching::setHatchLineAngle(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HatchLineAngle = value;
}

void IfcFillAreaStyleHatching::unsetHatchLineAngle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HatchLineAngle = Step::getUnset(getHatchLineAngle());
}

bool IfcFillAreaStyleHatching::testHatchLineAngle() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getHatchLineAngle()) == false;
}

bool IfcFillAreaStyleHatching::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HatchLineAppearance = NULL;
    }
    else
    {
        m_HatchLineAppearance = static_cast< IfcCurveStyle * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_StartOfNextHatchLine = NULL;
    }
    else
    {
        m_StartOfNextHatchLine = new IfcHatchLineDistanceSelect;
        if (arg[0] == '#') {
            m_StartOfNextHatchLine->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_StartOfNextHatchLine->setIfcPositiveLengthMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PointOfReferenceHatchLine = NULL;
    }
    else
    {
        m_PointOfReferenceHatchLine = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PatternStart = NULL;
    }
    else
    {
        m_PatternStart = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HatchLineAngle = Step::getUnset(m_HatchLineAngle);
    }
    else
    {
        m_HatchLineAngle = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcFillAreaStyleHatching::copy(const IfcFillAreaStyleHatching &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setHatchLineAppearance((IfcCurveStyle*)copyop(obj.m_HatchLineAppearance.get()));
    setStartOfNextHatchLine((IfcHatchLineDistanceSelect*)copyop(obj.m_StartOfNextHatchLine.get()));
    setPointOfReferenceHatchLine((IfcCartesianPoint*)copyop(obj.m_PointOfReferenceHatchLine.get()));
    setPatternStart((IfcCartesianPoint*)copyop(obj.m_PatternStart.get()));
    setHatchLineAngle(obj.m_HatchLineAngle);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFillAreaStyleHatching, IfcGeometricRepresentationItem)
