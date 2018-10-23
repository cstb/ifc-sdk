#pragma once

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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcConstructionResource.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcConstructionMaterialResource Entity.
     *
     */
    class IFC2X3_EXPORT IfcConstructionMaterialResource : public IfcConstructionResource
    {

        // Attributes
        Set_IfcActorSelect_1_n m_Suppliers;
        IfcRatioMeasure m_UsageRatio;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Suppliers
        /// @{
        virtual Set_IfcActorSelect_1_n &getSuppliers();
        virtual const Set_IfcActorSelect_1_n &getSuppliers() const;
        virtual void setSuppliers(const Set_IfcActorSelect_1_n &value);
        virtual void unsetSuppliers();
        virtual bool testSuppliers() const;
        /// @}

        /// Attribute UsageRatio
        /// @{
        virtual IfcRatioMeasure getUsageRatio();
        virtual IfcRatioMeasure getUsageRatio() const;
        virtual void setUsageRatio(IfcRatioMeasure value);
        virtual void unsetUsageRatio();
        virtual bool testUsageRatio() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcConstructionMaterialResource(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstructionMaterialResource();

        virtual bool init();

        virtual void copy(const IfcConstructionMaterialResource &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3