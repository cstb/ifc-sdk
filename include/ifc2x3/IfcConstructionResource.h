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

#include <ifc2x3/IfcResource.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcConstructionResource Entity.
     *
     */
    class IFC2X3_EXPORT IfcConstructionResource : public IfcResource
    {

        // Attributes
        IfcIdentifier m_ResourceIdentifier;
        IfcLabel m_ResourceGroup;
        IfcResourceConsumptionEnum m_ResourceConsumption;
        Step::RefPtr< IfcMeasureWithUnit > m_BaseQuantity;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ResourceIdentifier
        /// @{
        virtual IfcIdentifier getResourceIdentifier();
        virtual const IfcIdentifier getResourceIdentifier() const;
        virtual void setResourceIdentifier(const IfcIdentifier &value);
        virtual void unsetResourceIdentifier();
        virtual bool testResourceIdentifier() const;
        /// @}

        /// Attribute ResourceGroup
        /// @{
        virtual IfcLabel getResourceGroup();
        virtual const IfcLabel getResourceGroup() const;
        virtual void setResourceGroup(const IfcLabel &value);
        virtual void unsetResourceGroup();
        virtual bool testResourceGroup() const;
        /// @}

        /// Attribute ResourceConsumption
        /// @{
        virtual IfcResourceConsumptionEnum getResourceConsumption();
        virtual IfcResourceConsumptionEnum getResourceConsumption() const;
        virtual void setResourceConsumption(IfcResourceConsumptionEnum value);
        virtual void unsetResourceConsumption();
        virtual bool testResourceConsumption() const;
        /// @}

        /// Attribute BaseQuantity
        /// @{
        virtual IfcMeasureWithUnit *getBaseQuantity();
        virtual const IfcMeasureWithUnit *getBaseQuantity() const;
        virtual void setBaseQuantity(const Step::RefPtr< IfcMeasureWithUnit > &value);
        virtual void unsetBaseQuantity();
        virtual bool testBaseQuantity() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcConstructionResource(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstructionResource();

        virtual bool init();

        virtual void copy(const IfcConstructionResource &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3