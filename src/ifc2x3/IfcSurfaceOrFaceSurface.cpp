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


#include <ifc2x3/IfcSurfaceOrFaceSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/IfcFaceSurface.h>
#include <ifc2x3/IfcFaceBasedSurfaceModel.h>



using namespace ifc2x3;

IfcSurfaceOrFaceSurface::IfcSurfaceOrFaceSurface() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcSurfaceOrFaceSurface::IfcSurfaceOrFaceSurface(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcSurfaceOrFaceSurface::~IfcSurfaceOrFaceSurface()
{
    deleteUnion();
}

bool IfcSurfaceOrFaceSurface::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSurfaceOrFaceSurface(this);
}

bool IfcSurfaceOrFaceSurface::init()
{
    return false;
}

void IfcSurfaceOrFaceSurface::copy(const IfcSurfaceOrFaceSurface &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCSURFACE :
        setIfcSurface((IfcSurface*)(copyop(obj.m_union.m_IfcSurface)));
        break;
    case IFCFACESURFACE :
        setIfcFaceSurface((IfcFaceSurface*)(copyop(obj.m_union.m_IfcFaceSurface)));
        break;
    case IFCFACEBASEDSURFACEMODEL :
        setIfcFaceBasedSurfaceModel((IfcFaceBasedSurfaceModel*)(copyop(obj.m_union.m_IfcFaceBasedSurfaceModel)));
        break;
    default:
        break;
    }
}

std::string IfcSurfaceOrFaceSurface::currentTypeName() const
{
    switch(m_type)
    {
    case IFCSURFACE :
        return "IfcSurface";
        break;
    case IFCFACESURFACE :
        return "IfcFaceSurface";
        break;
    case IFCFACEBASEDSURFACEMODEL :
        return "IfcFaceBasedSurfaceModel";
        break;
    default:
        return "UNSET";
    }
}

IfcSurfaceOrFaceSurface::IfcSurfaceOrFaceSurface_select IfcSurfaceOrFaceSurface::currentType() const 
{
    return m_type;
}

void IfcSurfaceOrFaceSurface::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCSURFACE :
        m_union.m_IfcSurface->unref();
        break;
    case IFCFACESURFACE :
        m_union.m_IfcFaceSurface->unref();
        break;
    case IFCFACEBASEDSURFACEMODEL :
        m_union.m_IfcFaceBasedSurfaceModel->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcSurface *IfcSurfaceOrFaceSurface::getIfcSurface() const
{
    if (m_type == IFCSURFACE ) 
    {
        return m_union.m_IfcSurface;
    }
    else 
    {
        return NULL;
    }    
}

void IfcSurfaceOrFaceSurface::setIfcSurface(IfcSurface *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcSurface = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCSURFACE ;
}

IfcFaceSurface *IfcSurfaceOrFaceSurface::getIfcFaceSurface() const
{
    if (m_type == IFCFACESURFACE ) 
    {
        return m_union.m_IfcFaceSurface;
    }
    else 
    {
        return NULL;
    }    
}

void IfcSurfaceOrFaceSurface::setIfcFaceSurface(IfcFaceSurface *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcFaceSurface = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCFACESURFACE ;
}

IfcFaceBasedSurfaceModel *IfcSurfaceOrFaceSurface::getIfcFaceBasedSurfaceModel() const
{
    if (m_type == IFCFACEBASEDSURFACEMODEL ) 
    {
        return m_union.m_IfcFaceBasedSurfaceModel;
    }
    else 
    {
        return NULL;
    }    
}

void IfcSurfaceOrFaceSurface::setIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcFaceBasedSurfaceModel = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCFACEBASEDSURFACEMODEL ;
}

void IfcSurfaceOrFaceSurface::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcSurface::getClassType())) 
        {
            setIfcSurface(static_cast< IfcSurface* > (v));
            return;
        }
        if (v->isOfType(IfcFaceSurface::getClassType())) 
        {
            setIfcFaceSurface(static_cast< IfcFaceSurface* > (v));
            return;
        }
        if (v->isOfType(IfcFaceBasedSurfaceModel::getClassType())) 
        {
            setIfcFaceBasedSurfaceModel(static_cast< IfcFaceBasedSurfaceModel* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcSurfaceOrFaceSurface, Step::BaseObject)
