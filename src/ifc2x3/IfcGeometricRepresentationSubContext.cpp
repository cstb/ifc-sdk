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


#include <ifc2x3/IfcGeometricRepresentationSubContext.h>

#include <ifc2x3/IfcGeometricRepresentationContext.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcGeometricRepresentationSubContext::IfcGeometricRepresentationSubContext(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationContext(id, args)
{
    m_TargetScale = Step::getUnset(m_TargetScale);
    m_TargetView = IfcGeometricProjectionEnum_UNSET;
    m_UserDefinedTargetView = Step::getUnset(m_UserDefinedTargetView);
    m_ParentContext = NULL;
}

IfcGeometricRepresentationSubContext::~IfcGeometricRepresentationSubContext()
{}

bool IfcGeometricRepresentationSubContext::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcGeometricRepresentationSubContext(this);
}


IfcPositiveRatioMeasure IfcGeometricRepresentationSubContext::getTargetScale()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TargetScale;
    }
    else 
    {
        return Step::getUnset(m_TargetScale);
    }    
}

IfcPositiveRatioMeasure IfcGeometricRepresentationSubContext::getTargetScale() const
{
    return const_cast<IfcGeometricRepresentationSubContext *>(this)->getTargetScale();
}

void IfcGeometricRepresentationSubContext::setTargetScale(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TargetScale = value;
}

void IfcGeometricRepresentationSubContext::unsetTargetScale()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TargetScale = Step::getUnset(getTargetScale());
}

bool IfcGeometricRepresentationSubContext::testTargetScale() const
{
    return Step::isUnset(getTargetScale()) == false;
}


IfcGeometricProjectionEnum IfcGeometricRepresentationSubContext::getTargetView()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TargetView;
    }
    else 
    {
        return IfcGeometricProjectionEnum_UNSET;
    }    
}

IfcGeometricProjectionEnum IfcGeometricRepresentationSubContext::getTargetView() const
{
    return const_cast<IfcGeometricRepresentationSubContext *>(this)->getTargetView();
}

void IfcGeometricRepresentationSubContext::setTargetView(IfcGeometricProjectionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TargetView = value;
}

void IfcGeometricRepresentationSubContext::unsetTargetView()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TargetView = IfcGeometricProjectionEnum_UNSET;
}

bool IfcGeometricRepresentationSubContext::testTargetView() const
{
    return Step::isUnset(getTargetView()) == false;
}


IfcLabel IfcGeometricRepresentationSubContext::getUserDefinedTargetView()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedTargetView;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedTargetView);
    }    
}

const IfcLabel IfcGeometricRepresentationSubContext::getUserDefinedTargetView() const
{
    return const_cast<IfcGeometricRepresentationSubContext *>(this)->getUserDefinedTargetView();
}

void IfcGeometricRepresentationSubContext::setUserDefinedTargetView(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedTargetView = value;
}

void IfcGeometricRepresentationSubContext::unsetUserDefinedTargetView()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedTargetView = Step::getUnset(getUserDefinedTargetView());
}

bool IfcGeometricRepresentationSubContext::testUserDefinedTargetView() const
{
    return Step::isUnset(getUserDefinedTargetView()) == false;
}

IfcGeometricRepresentationContext *IfcGeometricRepresentationSubContext::getParentContext()
{
    if (Step::BaseObject::inited())
    {
        return m_ParentContext.get();
    }
    else
    {
        return NULL;
    }
}

const IfcGeometricRepresentationContext *IfcGeometricRepresentationSubContext::getParentContext() const
{
    return const_cast< IfcGeometricRepresentationSubContext * > (this)->getParentContext();
}

void IfcGeometricRepresentationSubContext::setParentContext(const Step::RefPtr< IfcGeometricRepresentationContext > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_ParentContext.valid())
    {
        m_ParentContext->m_HasSubContexts.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasSubContexts.insert(this);
    }
    m_ParentContext = value;
}

void IfcGeometricRepresentationSubContext::unsetParentContext()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParentContext = Step::getUnset(getParentContext());
}

bool IfcGeometricRepresentationSubContext::testParentContext() const
{
    return Step::isUnset(getParentContext()) == false;
}

bool IfcGeometricRepresentationSubContext::init()
{
    if (IfcGeometricRepresentationContext::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TargetScale = Step::getUnset(m_TargetScale);
    }
    else
    {
        m_TargetScale = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TargetView = IfcGeometricProjectionEnum_UNSET;
    }
    else
    {
        if (arg == ".GRAPH_VIEW.")
        {
            m_TargetView = IfcGeometricProjectionEnum_GRAPH_VIEW;
        }
        else if (arg == ".SKETCH_VIEW.")
        {
            m_TargetView = IfcGeometricProjectionEnum_SKETCH_VIEW;
        }
        else if (arg == ".MODEL_VIEW.")
        {
            m_TargetView = IfcGeometricProjectionEnum_MODEL_VIEW;
        }
        else if (arg == ".PLAN_VIEW.")
        {
            m_TargetView = IfcGeometricProjectionEnum_PLAN_VIEW;
        }
        else if (arg == ".REFLECTED_PLAN_VIEW.")
        {
            m_TargetView = IfcGeometricProjectionEnum_REFLECTED_PLAN_VIEW;
        }
        else if (arg == ".SECTION_VIEW.")
        {
            m_TargetView = IfcGeometricProjectionEnum_SECTION_VIEW;
        }
        else if (arg == ".ELEVATION_VIEW.")
        {
            m_TargetView = IfcGeometricProjectionEnum_ELEVATION_VIEW;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_TargetView = IfcGeometricProjectionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_TargetView = IfcGeometricProjectionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedTargetView = Step::getUnset(m_UserDefinedTargetView);
    }
    else
    {
        m_UserDefinedTargetView = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ParentContext = NULL;
    }
    else
    {
        m_ParentContext = static_cast< IfcGeometricRepresentationContext * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcGeometricRepresentationSubContext::copy(const IfcGeometricRepresentationSubContext &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationContext::copy(obj, copyop);
    setTargetScale(obj.m_TargetScale);
    setTargetView(obj.m_TargetView);
    setUserDefinedTargetView(obj.m_UserDefinedTargetView);
    setParentContext((IfcGeometricRepresentationContext*)copyop(obj.m_ParentContext.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcGeometricRepresentationSubContext, IfcGeometricRepresentationContext)
