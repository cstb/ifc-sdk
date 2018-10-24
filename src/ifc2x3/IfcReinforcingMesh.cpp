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


#include <ifc2x3/IfcReinforcingMesh.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcReinforcingMesh::IfcReinforcingMesh(Step::Id id, Step::SPFData *args) : 
    IfcReinforcingElement(id, args)
{
    m_MeshLength = Step::getUnset(m_MeshLength);
    m_MeshWidth = Step::getUnset(m_MeshWidth);
    m_LongitudinalBarNominalDiameter = Step::getUnset(m_LongitudinalBarNominalDiameter);
    m_TransverseBarNominalDiameter = Step::getUnset(m_TransverseBarNominalDiameter);
    m_LongitudinalBarCrossSectionArea = Step::getUnset(m_LongitudinalBarCrossSectionArea);
    m_TransverseBarCrossSectionArea = Step::getUnset(m_TransverseBarCrossSectionArea);
    m_LongitudinalBarSpacing = Step::getUnset(m_LongitudinalBarSpacing);
    m_TransverseBarSpacing = Step::getUnset(m_TransverseBarSpacing);
}

IfcReinforcingMesh::~IfcReinforcingMesh()
{}

bool IfcReinforcingMesh::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcReinforcingMesh(this);
}


IfcPositiveLengthMeasure IfcReinforcingMesh::getMeshLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MeshLength;
    }
    else 
    {
        return Step::getUnset(m_MeshLength);
    }    
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getMeshLength() const
{
    return const_cast<IfcReinforcingMesh *>(this)->getMeshLength();
}

void IfcReinforcingMesh::setMeshLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MeshLength = value;
}

void IfcReinforcingMesh::unsetMeshLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MeshLength = Step::getUnset(getMeshLength());
}

bool IfcReinforcingMesh::testMeshLength() const
{
    return Step::isUnset(getMeshLength()) == false;
}


IfcPositiveLengthMeasure IfcReinforcingMesh::getMeshWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MeshWidth;
    }
    else 
    {
        return Step::getUnset(m_MeshWidth);
    }    
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getMeshWidth() const
{
    return const_cast<IfcReinforcingMesh *>(this)->getMeshWidth();
}

void IfcReinforcingMesh::setMeshWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MeshWidth = value;
}

void IfcReinforcingMesh::unsetMeshWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MeshWidth = Step::getUnset(getMeshWidth());
}

bool IfcReinforcingMesh::testMeshWidth() const
{
    return Step::isUnset(getMeshWidth()) == false;
}


IfcPositiveLengthMeasure IfcReinforcingMesh::getLongitudinalBarNominalDiameter()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LongitudinalBarNominalDiameter;
    }
    else 
    {
        return Step::getUnset(m_LongitudinalBarNominalDiameter);
    }    
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getLongitudinalBarNominalDiameter() const
{
    return const_cast<IfcReinforcingMesh *>(this)->getLongitudinalBarNominalDiameter();
}

void IfcReinforcingMesh::setLongitudinalBarNominalDiameter(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongitudinalBarNominalDiameter = value;
}

void IfcReinforcingMesh::unsetLongitudinalBarNominalDiameter()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongitudinalBarNominalDiameter = Step::getUnset(getLongitudinalBarNominalDiameter());
}

bool IfcReinforcingMesh::testLongitudinalBarNominalDiameter() const
{
    return Step::isUnset(getLongitudinalBarNominalDiameter()) == false;
}


IfcPositiveLengthMeasure IfcReinforcingMesh::getTransverseBarNominalDiameter()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TransverseBarNominalDiameter;
    }
    else 
    {
        return Step::getUnset(m_TransverseBarNominalDiameter);
    }    
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getTransverseBarNominalDiameter() const
{
    return const_cast<IfcReinforcingMesh *>(this)->getTransverseBarNominalDiameter();
}

void IfcReinforcingMesh::setTransverseBarNominalDiameter(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransverseBarNominalDiameter = value;
}

void IfcReinforcingMesh::unsetTransverseBarNominalDiameter()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransverseBarNominalDiameter = Step::getUnset(getTransverseBarNominalDiameter());
}

bool IfcReinforcingMesh::testTransverseBarNominalDiameter() const
{
    return Step::isUnset(getTransverseBarNominalDiameter()) == false;
}


IfcAreaMeasure IfcReinforcingMesh::getLongitudinalBarCrossSectionArea()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LongitudinalBarCrossSectionArea;
    }
    else 
    {
        return Step::getUnset(m_LongitudinalBarCrossSectionArea);
    }    
}

IfcAreaMeasure IfcReinforcingMesh::getLongitudinalBarCrossSectionArea() const
{
    return const_cast<IfcReinforcingMesh *>(this)->getLongitudinalBarCrossSectionArea();
}

void IfcReinforcingMesh::setLongitudinalBarCrossSectionArea(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongitudinalBarCrossSectionArea = value;
}

void IfcReinforcingMesh::unsetLongitudinalBarCrossSectionArea()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongitudinalBarCrossSectionArea = Step::getUnset(getLongitudinalBarCrossSectionArea());
}

bool IfcReinforcingMesh::testLongitudinalBarCrossSectionArea() const
{
    return Step::isUnset(getLongitudinalBarCrossSectionArea()) == false;
}


IfcAreaMeasure IfcReinforcingMesh::getTransverseBarCrossSectionArea()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TransverseBarCrossSectionArea;
    }
    else 
    {
        return Step::getUnset(m_TransverseBarCrossSectionArea);
    }    
}

IfcAreaMeasure IfcReinforcingMesh::getTransverseBarCrossSectionArea() const
{
    return const_cast<IfcReinforcingMesh *>(this)->getTransverseBarCrossSectionArea();
}

void IfcReinforcingMesh::setTransverseBarCrossSectionArea(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransverseBarCrossSectionArea = value;
}

void IfcReinforcingMesh::unsetTransverseBarCrossSectionArea()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransverseBarCrossSectionArea = Step::getUnset(getTransverseBarCrossSectionArea());
}

bool IfcReinforcingMesh::testTransverseBarCrossSectionArea() const
{
    return Step::isUnset(getTransverseBarCrossSectionArea()) == false;
}


IfcPositiveLengthMeasure IfcReinforcingMesh::getLongitudinalBarSpacing()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LongitudinalBarSpacing;
    }
    else 
    {
        return Step::getUnset(m_LongitudinalBarSpacing);
    }    
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getLongitudinalBarSpacing() const
{
    return const_cast<IfcReinforcingMesh *>(this)->getLongitudinalBarSpacing();
}

void IfcReinforcingMesh::setLongitudinalBarSpacing(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongitudinalBarSpacing = value;
}

void IfcReinforcingMesh::unsetLongitudinalBarSpacing()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongitudinalBarSpacing = Step::getUnset(getLongitudinalBarSpacing());
}

bool IfcReinforcingMesh::testLongitudinalBarSpacing() const
{
    return Step::isUnset(getLongitudinalBarSpacing()) == false;
}


IfcPositiveLengthMeasure IfcReinforcingMesh::getTransverseBarSpacing()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TransverseBarSpacing;
    }
    else 
    {
        return Step::getUnset(m_TransverseBarSpacing);
    }    
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getTransverseBarSpacing() const
{
    return const_cast<IfcReinforcingMesh *>(this)->getTransverseBarSpacing();
}

void IfcReinforcingMesh::setTransverseBarSpacing(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransverseBarSpacing = value;
}

void IfcReinforcingMesh::unsetTransverseBarSpacing()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransverseBarSpacing = Step::getUnset(getTransverseBarSpacing());
}

bool IfcReinforcingMesh::testTransverseBarSpacing() const
{
    return Step::isUnset(getTransverseBarSpacing()) == false;
}

bool IfcReinforcingMesh::init()
{
    if (IfcReinforcingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MeshLength = Step::getUnset(m_MeshLength);
    }
    else
    {
        m_MeshLength = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MeshWidth = Step::getUnset(m_MeshWidth);
    }
    else
    {
        m_MeshWidth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LongitudinalBarNominalDiameter = Step::getUnset(m_LongitudinalBarNominalDiameter);
    }
    else
    {
        m_LongitudinalBarNominalDiameter = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TransverseBarNominalDiameter = Step::getUnset(m_TransverseBarNominalDiameter);
    }
    else
    {
        m_TransverseBarNominalDiameter = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LongitudinalBarCrossSectionArea = Step::getUnset(m_LongitudinalBarCrossSectionArea);
    }
    else
    {
        m_LongitudinalBarCrossSectionArea = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TransverseBarCrossSectionArea = Step::getUnset(m_TransverseBarCrossSectionArea);
    }
    else
    {
        m_TransverseBarCrossSectionArea = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LongitudinalBarSpacing = Step::getUnset(m_LongitudinalBarSpacing);
    }
    else
    {
        m_LongitudinalBarSpacing = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TransverseBarSpacing = Step::getUnset(m_TransverseBarSpacing);
    }
    else
    {
        m_TransverseBarSpacing = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcReinforcingMesh::copy(const IfcReinforcingMesh &obj, const CopyOp &copyop)
{
    IfcReinforcingElement::copy(obj, copyop);
    setMeshLength(obj.m_MeshLength);
    setMeshWidth(obj.m_MeshWidth);
    setLongitudinalBarNominalDiameter(obj.m_LongitudinalBarNominalDiameter);
    setTransverseBarNominalDiameter(obj.m_TransverseBarNominalDiameter);
    setLongitudinalBarCrossSectionArea(obj.m_LongitudinalBarCrossSectionArea);
    setTransverseBarCrossSectionArea(obj.m_TransverseBarCrossSectionArea);
    setLongitudinalBarSpacing(obj.m_LongitudinalBarSpacing);
    setTransverseBarSpacing(obj.m_TransverseBarSpacing);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcReinforcingMesh, IfcReinforcingElement)
