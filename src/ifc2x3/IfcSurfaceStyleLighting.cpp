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


#include <ifc2x3/IfcSurfaceStyleLighting.h>

#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/IfcColourRgb.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSurfaceStyleLighting::IfcSurfaceStyleLighting(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_DiffuseTransmissionColour = NULL;
    m_DiffuseReflectionColour = NULL;
    m_TransmissionColour = NULL;
    m_ReflectanceColour = NULL;
}

IfcSurfaceStyleLighting::~IfcSurfaceStyleLighting()
{}

bool IfcSurfaceStyleLighting::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSurfaceStyleLighting(this);
}


IfcColourRgb *IfcSurfaceStyleLighting::getDiffuseTransmissionColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DiffuseTransmissionColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourRgb *IfcSurfaceStyleLighting::getDiffuseTransmissionColour() const
{
    return const_cast<IfcSurfaceStyleLighting *>(this)->getDiffuseTransmissionColour();
}

void IfcSurfaceStyleLighting::setDiffuseTransmissionColour(const Step::RefPtr< IfcColourRgb > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DiffuseTransmissionColour = value;
}

void IfcSurfaceStyleLighting::unsetDiffuseTransmissionColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DiffuseTransmissionColour = Step::getUnset(getDiffuseTransmissionColour());
}

bool IfcSurfaceStyleLighting::testDiffuseTransmissionColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDiffuseTransmissionColour()) == false;
}


IfcColourRgb *IfcSurfaceStyleLighting::getDiffuseReflectionColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DiffuseReflectionColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourRgb *IfcSurfaceStyleLighting::getDiffuseReflectionColour() const
{
    return const_cast<IfcSurfaceStyleLighting *>(this)->getDiffuseReflectionColour();
}

void IfcSurfaceStyleLighting::setDiffuseReflectionColour(const Step::RefPtr< IfcColourRgb > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DiffuseReflectionColour = value;
}

void IfcSurfaceStyleLighting::unsetDiffuseReflectionColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DiffuseReflectionColour = Step::getUnset(getDiffuseReflectionColour());
}

bool IfcSurfaceStyleLighting::testDiffuseReflectionColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDiffuseReflectionColour()) == false;
}


IfcColourRgb *IfcSurfaceStyleLighting::getTransmissionColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TransmissionColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourRgb *IfcSurfaceStyleLighting::getTransmissionColour() const
{
    return const_cast<IfcSurfaceStyleLighting *>(this)->getTransmissionColour();
}

void IfcSurfaceStyleLighting::setTransmissionColour(const Step::RefPtr< IfcColourRgb > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransmissionColour = value;
}

void IfcSurfaceStyleLighting::unsetTransmissionColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransmissionColour = Step::getUnset(getTransmissionColour());
}

bool IfcSurfaceStyleLighting::testTransmissionColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTransmissionColour()) == false;
}


IfcColourRgb *IfcSurfaceStyleLighting::getReflectanceColour()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ReflectanceColour.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcColourRgb *IfcSurfaceStyleLighting::getReflectanceColour() const
{
    return const_cast<IfcSurfaceStyleLighting *>(this)->getReflectanceColour();
}

void IfcSurfaceStyleLighting::setReflectanceColour(const Step::RefPtr< IfcColourRgb > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReflectanceColour = value;
}

void IfcSurfaceStyleLighting::unsetReflectanceColour()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReflectanceColour = Step::getUnset(getReflectanceColour());
}

bool IfcSurfaceStyleLighting::testReflectanceColour() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getReflectanceColour()) == false;
}

bool IfcSurfaceStyleLighting::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DiffuseTransmissionColour = NULL;
    }
    else
    {
        m_DiffuseTransmissionColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DiffuseReflectionColour = NULL;
    }
    else
    {
        m_DiffuseReflectionColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TransmissionColour = NULL;
    }
    else
    {
        m_TransmissionColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ReflectanceColour = NULL;
    }
    else
    {
        m_ReflectanceColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcSurfaceStyleLighting::copy(const IfcSurfaceStyleLighting &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setDiffuseTransmissionColour((IfcColourRgb*)copyop(obj.m_DiffuseTransmissionColour.get()));
    setDiffuseReflectionColour((IfcColourRgb*)copyop(obj.m_DiffuseReflectionColour.get()));
    setTransmissionColour((IfcColourRgb*)copyop(obj.m_TransmissionColour.get()));
    setReflectanceColour((IfcColourRgb*)copyop(obj.m_ReflectanceColour.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSurfaceStyleLighting, Step::BaseEntity)
