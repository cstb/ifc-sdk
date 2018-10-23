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


#include <ifc2x3/IfcShapeAspect.h>

#include <ifc2x3/IfcProductDefinitionShape.h>
#include <ifc2x3/IfcShapeModel.h>
#include <ifc2x3/IfcShapeModel.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcShapeAspect_ShapeRepresentations_type::Inverted_IfcShapeAspect_ShapeRepresentations_type()
{

}

void Inverted_IfcShapeAspect_ShapeRepresentations_type::setOwner(IfcShapeAspect *owner)
{
    mOwner = owner;
}

void Inverted_IfcShapeAspect_ShapeRepresentations_type::push_back(const Step::RefPtr< IfcShapeModel > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcShapeModel *inverse = const_cast< IfcShapeModel * > (value.get());
    List_IfcShapeModel_1_n::push_back(value);
    inverse->m_OfShapeAspect.insert(mOwner);
}


Inverted_IfcShapeAspect_ShapeRepresentations_type::iterator Inverted_IfcShapeAspect_ShapeRepresentations_type::erase(const Step::RefPtr< IfcShapeModel > &value)
{
    IfcShapeModel *inverse = const_cast< IfcShapeModel * > (value.get());
    inverse->m_OfShapeAspect.erase(mOwner);
    return List_IfcShapeModel_1_n::erase(value);
}

void Inverted_IfcShapeAspect_ShapeRepresentations_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcShapeAspect::IfcShapeAspect(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_ProductDefinitional = Step::getUnset(m_ProductDefinitional);
    m_PartOfProductDefinitionShape = NULL;
    m_ShapeRepresentations.setUnset(true);
    m_ShapeRepresentations.setOwner(this);
}

IfcShapeAspect::~IfcShapeAspect()
{}

bool IfcShapeAspect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcShapeAspect(this);
}


IfcLabel IfcShapeAspect::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const IfcLabel IfcShapeAspect::getName() const
{
    return const_cast<IfcShapeAspect *>(this)->getName();
}

void IfcShapeAspect::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcShapeAspect::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcShapeAspect::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


IfcText IfcShapeAspect::getDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Description;
    }
    else 
    {
        return Step::getUnset(m_Description);
    }    
}

const IfcText IfcShapeAspect::getDescription() const
{
    return const_cast<IfcShapeAspect *>(this)->getDescription();
}

void IfcShapeAspect::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcShapeAspect::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcShapeAspect::testDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDescription()) == false;
}


Step::Logical IfcShapeAspect::getProductDefinitional()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProductDefinitional;
    }
    else 
    {
        return Step::getUnset(m_ProductDefinitional);
    }    
}

Step::Logical IfcShapeAspect::getProductDefinitional() const
{
    return const_cast<IfcShapeAspect *>(this)->getProductDefinitional();
}

void IfcShapeAspect::setProductDefinitional(Step::Logical value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProductDefinitional = value;
}

void IfcShapeAspect::unsetProductDefinitional()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProductDefinitional = Step::getUnset(getProductDefinitional());
}

bool IfcShapeAspect::testProductDefinitional() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getProductDefinitional()) == false;
}

IfcProductDefinitionShape *IfcShapeAspect::getPartOfProductDefinitionShape()
{
    if (Step::BaseObject::inited())
    {
        return m_PartOfProductDefinitionShape.get();
    }
    else
    {
        return NULL;
    }
}

const IfcProductDefinitionShape *IfcShapeAspect::getPartOfProductDefinitionShape() const
{
    return const_cast< IfcShapeAspect * > (this)->getPartOfProductDefinitionShape();
}

void IfcShapeAspect::setPartOfProductDefinitionShape(const Step::RefPtr< IfcProductDefinitionShape > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_PartOfProductDefinitionShape.valid())
    {
        m_PartOfProductDefinitionShape->m_HasShapeAspects.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasShapeAspects.insert(this);
    }
    m_PartOfProductDefinitionShape = value;
}

void IfcShapeAspect::unsetPartOfProductDefinitionShape()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PartOfProductDefinitionShape = Step::getUnset(getPartOfProductDefinitionShape());
}

bool IfcShapeAspect::testPartOfProductDefinitionShape() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPartOfProductDefinitionShape()) == false;
}

List_IfcShapeModel_1_n &IfcShapeAspect::getShapeRepresentations()
{
    if (Step::BaseObject::inited())
    {
        return m_ShapeRepresentations;
    }
    else
    {
        m_ShapeRepresentations.setUnset(true);
        return m_ShapeRepresentations;
    }
}

const List_IfcShapeModel_1_n &IfcShapeAspect::getShapeRepresentations() const
{
    return const_cast< IfcShapeAspect * > (this)->getShapeRepresentations();
}

void IfcShapeAspect::unsetShapeRepresentations()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeRepresentations.clear();
    m_ShapeRepresentations.setUnset(true);
}

bool IfcShapeAspect::testShapeRepresentations() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ShapeRepresentations.isUnset() == false;
}

bool IfcShapeAspect::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Description = Step::getUnset(m_Description);
    }
    else
    {
        m_Description = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProductDefinitional = Step::getUnset(m_ProductDefinitional);
    }
    else
    {
        m_ProductDefinitional = Step::spfToLogical(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PartOfProductDefinitionShape = NULL;
    }
    else
    {
        m_PartOfProductDefinitionShape = static_cast< IfcProductDefinitionShape * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShapeRepresentations.setUnset(true);
    }
    else
    {
        m_ShapeRepresentations.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_ShapeRepresentations.push_back(static_cast< IfcShapeModel * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcShapeAspect::copy(const IfcShapeAspect &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    setProductDefinitional(obj.m_ProductDefinitional);
    setPartOfProductDefinitionShape((IfcProductDefinitionShape*)copyop(obj.m_PartOfProductDefinitionShape.get()));
    List_IfcShapeModel_1_n::const_iterator it_m_ShapeRepresentations;
    for (it_m_ShapeRepresentations = obj.m_ShapeRepresentations.begin(); it_m_ShapeRepresentations != obj.m_ShapeRepresentations.end(); ++it_m_ShapeRepresentations)
    {
        Step::RefPtr< IfcShapeModel > copyTarget = (IfcShapeModel *) (copyop((*it_m_ShapeRepresentations).get()));
        m_ShapeRepresentations.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcShapeAspect, Step::BaseEntity)
