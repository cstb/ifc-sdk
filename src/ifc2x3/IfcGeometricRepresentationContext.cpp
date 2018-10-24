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


#include <ifc2x3/IfcGeometricRepresentationContext.h>

#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcGeometricRepresentationSubContext.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcGeometricRepresentationContext::IfcGeometricRepresentationContext(Step::Id id, Step::SPFData *args) : 
    IfcRepresentationContext(id, args)
{
    m_CoordinateSpaceDimension = Step::getUnset(m_CoordinateSpaceDimension);
    m_Precision = Step::getUnset(m_Precision);
    m_WorldCoordinateSystem = NULL;
    m_TrueNorth = NULL;
}

IfcGeometricRepresentationContext::~IfcGeometricRepresentationContext()
{}

bool IfcGeometricRepresentationContext::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcGeometricRepresentationContext(this);
}


IfcDimensionCount IfcGeometricRepresentationContext::getCoordinateSpaceDimension()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CoordinateSpaceDimension;
    }
    else 
    {
        return Step::getUnset(m_CoordinateSpaceDimension);
    }    
}

IfcDimensionCount IfcGeometricRepresentationContext::getCoordinateSpaceDimension() const
{
    return const_cast<IfcGeometricRepresentationContext *>(this)->getCoordinateSpaceDimension();
}

void IfcGeometricRepresentationContext::setCoordinateSpaceDimension(IfcDimensionCount value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CoordinateSpaceDimension = value;
}

void IfcGeometricRepresentationContext::unsetCoordinateSpaceDimension()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CoordinateSpaceDimension = Step::getUnset(getCoordinateSpaceDimension());
}

bool IfcGeometricRepresentationContext::testCoordinateSpaceDimension() const
{
    return Step::isUnset(getCoordinateSpaceDimension()) == false;
}


Step::Real IfcGeometricRepresentationContext::getPrecision()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Precision;
    }
    else 
    {
        return Step::getUnset(m_Precision);
    }    
}

Step::Real IfcGeometricRepresentationContext::getPrecision() const
{
    return const_cast<IfcGeometricRepresentationContext *>(this)->getPrecision();
}

void IfcGeometricRepresentationContext::setPrecision(Step::Real value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Precision = value;
}

void IfcGeometricRepresentationContext::unsetPrecision()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Precision = Step::getUnset(getPrecision());
}

bool IfcGeometricRepresentationContext::testPrecision() const
{
    return Step::isUnset(getPrecision()) == false;
}


IfcAxis2Placement *IfcGeometricRepresentationContext::getWorldCoordinateSystem()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WorldCoordinateSystem.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement *IfcGeometricRepresentationContext::getWorldCoordinateSystem() const
{
    return const_cast<IfcGeometricRepresentationContext *>(this)->getWorldCoordinateSystem();
}

void IfcGeometricRepresentationContext::setWorldCoordinateSystem(const Step::RefPtr< IfcAxis2Placement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WorldCoordinateSystem = value;
}

void IfcGeometricRepresentationContext::unsetWorldCoordinateSystem()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WorldCoordinateSystem = Step::getUnset(getWorldCoordinateSystem());
}

bool IfcGeometricRepresentationContext::testWorldCoordinateSystem() const
{
    return Step::isUnset(getWorldCoordinateSystem()) == false;
}


IfcDirection *IfcGeometricRepresentationContext::getTrueNorth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TrueNorth.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcGeometricRepresentationContext::getTrueNorth() const
{
    return const_cast<IfcGeometricRepresentationContext *>(this)->getTrueNorth();
}

void IfcGeometricRepresentationContext::setTrueNorth(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TrueNorth = value;
}

void IfcGeometricRepresentationContext::unsetTrueNorth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TrueNorth = Step::getUnset(getTrueNorth());
}

bool IfcGeometricRepresentationContext::testTrueNorth() const
{
    return Step::isUnset(getTrueNorth()) == false;
}

Inverse_Set_IfcGeometricRepresentationSubContext_0_n &IfcGeometricRepresentationContext::getHasSubContexts()
{
    if (Step::BaseObject::inited())
    {
        return m_HasSubContexts;
    }
 
    m_HasSubContexts.setUnset(true);
    return m_HasSubContexts;
}

const Inverse_Set_IfcGeometricRepresentationSubContext_0_n &IfcGeometricRepresentationContext::getHasSubContexts() const
{
    return  const_cast< IfcGeometricRepresentationContext * > (this)->getHasSubContexts();
}

bool IfcGeometricRepresentationContext::testHasSubContexts() const
{
    return m_HasSubContexts.isUnset() == false;
}

bool IfcGeometricRepresentationContext::init()
{
    if (IfcRepresentationContext::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CoordinateSpaceDimension = Step::getUnset(m_CoordinateSpaceDimension);
    }
    else
    {
        m_CoordinateSpaceDimension = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Precision = Step::getUnset(m_Precision);
    }
    else
    {
        m_Precision = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WorldCoordinateSystem = NULL;
    }
    else
    {
        m_WorldCoordinateSystem = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_WorldCoordinateSystem->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_TrueNorth = NULL;
    }
    else
    {
        m_TrueNorth = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcGeometricRepresentationSubContext::getClassType(), 6);
    if (inverses)
    {
        unsigned int i;
        m_HasSubContexts.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasSubContexts.insert(static_cast< IfcGeometricRepresentationSubContext * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcGeometricRepresentationContext::copy(const IfcGeometricRepresentationContext &obj, const CopyOp &copyop)
{
    IfcRepresentationContext::copy(obj, copyop);
    setCoordinateSpaceDimension(obj.m_CoordinateSpaceDimension);
    setPrecision(obj.m_Precision);
    setWorldCoordinateSystem((IfcAxis2Placement*)copyop(obj.m_WorldCoordinateSystem.get()));
    setTrueNorth((IfcDirection*)copyop(obj.m_TrueNorth.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcGeometricRepresentationContext, IfcRepresentationContext)
