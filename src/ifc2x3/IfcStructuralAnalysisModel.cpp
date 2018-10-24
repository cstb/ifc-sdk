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


#include <ifc2x3/IfcStructuralAnalysisModel.h>

#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcStructuralLoadGroup.h>
#include <ifc2x3/IfcStructuralLoadGroup.h>
#include <ifc2x3/IfcStructuralResultGroup.h>
#include <ifc2x3/IfcStructuralResultGroup.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcStructuralAnalysisModel_LoadedBy_type::Inverted_IfcStructuralAnalysisModel_LoadedBy_type()
{

}

void Inverted_IfcStructuralAnalysisModel_LoadedBy_type::setOwner(IfcStructuralAnalysisModel *owner)
{
    mOwner = owner;
}

void Inverted_IfcStructuralAnalysisModel_LoadedBy_type::insert(const Step::RefPtr< IfcStructuralLoadGroup > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcStructuralLoadGroup *inverse = const_cast< IfcStructuralLoadGroup * > (value.get());
    Set_IfcStructuralLoadGroup_1_n::insert(value);
    inverse->m_LoadGroupFor.insert(mOwner);
}


Inverted_IfcStructuralAnalysisModel_LoadedBy_type::size_type Inverted_IfcStructuralAnalysisModel_LoadedBy_type::erase(const Step::RefPtr< IfcStructuralLoadGroup > &value)
{
    IfcStructuralLoadGroup *inverse = const_cast< IfcStructuralLoadGroup * > (value.get());
    inverse->m_LoadGroupFor.erase(mOwner);
    return Set_IfcStructuralLoadGroup_1_n::erase(value);
}

void Inverted_IfcStructuralAnalysisModel_LoadedBy_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


Inverted_IfcStructuralAnalysisModel_HasResults_type::Inverted_IfcStructuralAnalysisModel_HasResults_type()
{

}

void Inverted_IfcStructuralAnalysisModel_HasResults_type::setOwner(IfcStructuralAnalysisModel *owner)
{
    mOwner = owner;
}

void Inverted_IfcStructuralAnalysisModel_HasResults_type::insert(const Step::RefPtr< IfcStructuralResultGroup > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcStructuralResultGroup *inverse = const_cast< IfcStructuralResultGroup * > (value.get());
    Set_IfcStructuralResultGroup_1_n::insert(value);
    inverse->m_ResultGroupFor.insert(mOwner);
}


Inverted_IfcStructuralAnalysisModel_HasResults_type::size_type Inverted_IfcStructuralAnalysisModel_HasResults_type::erase(const Step::RefPtr< IfcStructuralResultGroup > &value)
{
    IfcStructuralResultGroup *inverse = const_cast< IfcStructuralResultGroup * > (value.get());
    inverse->m_ResultGroupFor.erase(mOwner);
    return Set_IfcStructuralResultGroup_1_n::erase(value);
}

void Inverted_IfcStructuralAnalysisModel_HasResults_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcStructuralAnalysisModel::IfcStructuralAnalysisModel(Step::Id id, Step::SPFData *args) : 
    IfcSystem(id, args)
{
    m_PredefinedType = IfcAnalysisModelTypeEnum_UNSET;
    m_OrientationOf2DPlane = NULL;
    m_LoadedBy.setUnset(true);
    m_LoadedBy.setOwner(this);
    m_HasResults.setUnset(true);
    m_HasResults.setOwner(this);
}

IfcStructuralAnalysisModel::~IfcStructuralAnalysisModel()
{}

bool IfcStructuralAnalysisModel::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralAnalysisModel(this);
}


IfcAnalysisModelTypeEnum IfcStructuralAnalysisModel::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcAnalysisModelTypeEnum_UNSET;
    }    
}

IfcAnalysisModelTypeEnum IfcStructuralAnalysisModel::getPredefinedType() const
{
    return const_cast<IfcStructuralAnalysisModel *>(this)->getPredefinedType();
}

void IfcStructuralAnalysisModel::setPredefinedType(IfcAnalysisModelTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcStructuralAnalysisModel::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcAnalysisModelTypeEnum_UNSET;
}

bool IfcStructuralAnalysisModel::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}


IfcAxis2Placement3D *IfcStructuralAnalysisModel::getOrientationOf2DPlane()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OrientationOf2DPlane.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement3D *IfcStructuralAnalysisModel::getOrientationOf2DPlane() const
{
    return const_cast<IfcStructuralAnalysisModel *>(this)->getOrientationOf2DPlane();
}

void IfcStructuralAnalysisModel::setOrientationOf2DPlane(const Step::RefPtr< IfcAxis2Placement3D > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OrientationOf2DPlane = value;
}

void IfcStructuralAnalysisModel::unsetOrientationOf2DPlane()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OrientationOf2DPlane = Step::getUnset(getOrientationOf2DPlane());
}

bool IfcStructuralAnalysisModel::testOrientationOf2DPlane() const
{
    return Step::isUnset(getOrientationOf2DPlane()) == false;
}

Set_IfcStructuralLoadGroup_1_n &IfcStructuralAnalysisModel::getLoadedBy()
{
    if (Step::BaseObject::inited())
    {
        return m_LoadedBy;
    }
    else
    {
        m_LoadedBy.setUnset(true);
        return m_LoadedBy;
    }
}

const Set_IfcStructuralLoadGroup_1_n &IfcStructuralAnalysisModel::getLoadedBy() const
{
    return const_cast< IfcStructuralAnalysisModel * > (this)->getLoadedBy();
}

void IfcStructuralAnalysisModel::unsetLoadedBy()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LoadedBy.clear();
    m_LoadedBy.setUnset(true);
}

bool IfcStructuralAnalysisModel::testLoadedBy() const
{
    return m_LoadedBy.isUnset() == false;
}

Set_IfcStructuralResultGroup_1_n &IfcStructuralAnalysisModel::getHasResults()
{
    if (Step::BaseObject::inited())
    {
        return m_HasResults;
    }
    else
    {
        m_HasResults.setUnset(true);
        return m_HasResults;
    }
}

const Set_IfcStructuralResultGroup_1_n &IfcStructuralAnalysisModel::getHasResults() const
{
    return const_cast< IfcStructuralAnalysisModel * > (this)->getHasResults();
}

void IfcStructuralAnalysisModel::unsetHasResults()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HasResults.clear();
    m_HasResults.setUnset(true);
}

bool IfcStructuralAnalysisModel::testHasResults() const
{
    return m_HasResults.isUnset() == false;
}

bool IfcStructuralAnalysisModel::init()
{
    if (IfcSystem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcAnalysisModelTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".IN_PLANE_LOADING_2D.")
        {
            m_PredefinedType = IfcAnalysisModelTypeEnum_IN_PLANE_LOADING_2D;
        }
        else if (arg == ".OUT_PLANE_LOADING_2D.")
        {
            m_PredefinedType = IfcAnalysisModelTypeEnum_OUT_PLANE_LOADING_2D;
        }
        else if (arg == ".LOADING_3D.")
        {
            m_PredefinedType = IfcAnalysisModelTypeEnum_LOADING_3D;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcAnalysisModelTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcAnalysisModelTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OrientationOf2DPlane = NULL;
    }
    else
    {
        m_OrientationOf2DPlane = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LoadedBy.setUnset(true);
    }
    else
    {
        m_LoadedBy.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_LoadedBy.insert(static_cast< IfcStructuralLoadGroup * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HasResults.setUnset(true);
    }
    else
    {
        m_HasResults.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_HasResults.insert(static_cast< IfcStructuralResultGroup * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcStructuralAnalysisModel::copy(const IfcStructuralAnalysisModel &obj, const CopyOp &copyop)
{
    IfcSystem::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    setOrientationOf2DPlane((IfcAxis2Placement3D*)copyop(obj.m_OrientationOf2DPlane.get()));
    Set_IfcStructuralLoadGroup_1_n::const_iterator it_m_LoadedBy;
    for (it_m_LoadedBy = obj.m_LoadedBy.begin(); it_m_LoadedBy != obj.m_LoadedBy.end(); ++it_m_LoadedBy)
    {
        Step::RefPtr< IfcStructuralLoadGroup > copyTarget = (IfcStructuralLoadGroup *) (copyop((*it_m_LoadedBy).get()));
        m_LoadedBy.insert(copyTarget);
    }
    
    Set_IfcStructuralResultGroup_1_n::const_iterator it_m_HasResults;
    for (it_m_HasResults = obj.m_HasResults.begin(); it_m_HasResults != obj.m_HasResults.end(); ++it_m_HasResults)
    {
        Step::RefPtr< IfcStructuralResultGroup > copyTarget = (IfcStructuralResultGroup *) (copyop((*it_m_HasResults).get()));
        m_HasResults.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralAnalysisModel, IfcSystem)
