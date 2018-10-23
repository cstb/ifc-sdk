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

#include <ifc2x3/IfcProduct.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcSpatialStructureElement Entity.
     *
     */
    class IFC2X3_EXPORT IfcSpatialStructureElement : public IfcProduct
    {

        // Attributes
        IfcLabel m_LongName;
        IfcElementCompositionEnum m_CompositionType;
        // InverseAttributes
        Inverse_Set_IfcRelServicesBuildings_0_n m_ServicedBySystems;
        Inverse_Set_IfcRelContainedInSpatialStructure_0_n m_ContainsElements;
        Inverse_Set_IfcRelReferencedInSpatialStructure_0_n m_ReferencesElements;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LongName
        /// @{
        virtual IfcLabel getLongName();
        virtual const IfcLabel getLongName() const;
        virtual void setLongName(const IfcLabel &value);
        virtual void unsetLongName();
        virtual bool testLongName() const;
        /// @}

        /// Attribute CompositionType
        /// @{
        virtual IfcElementCompositionEnum getCompositionType();
        virtual IfcElementCompositionEnum getCompositionType() const;
        virtual void setCompositionType(IfcElementCompositionEnum value);
        virtual void unsetCompositionType();
        virtual bool testCompositionType() const;
        /// @}

        /// Inverse attribute ServicedBySystems
        /// @{
        virtual Inverse_Set_IfcRelServicesBuildings_0_n &getServicedBySystems();
        virtual const Inverse_Set_IfcRelServicesBuildings_0_n &getServicedBySystems() const;
        virtual bool testServicedBySystems() const;

        friend class IfcRelServicesBuildings;
        /// @}

        /// Inverse attribute ContainsElements
        /// @{
        virtual Inverse_Set_IfcRelContainedInSpatialStructure_0_n &getContainsElements();
        virtual const Inverse_Set_IfcRelContainedInSpatialStructure_0_n &getContainsElements() const;
        virtual bool testContainsElements() const;

        friend class IfcRelContainedInSpatialStructure;
        /// @}

        /// Inverse attribute ReferencesElements
        /// @{
        virtual Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &getReferencesElements();
        virtual const Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &getReferencesElements() const;
        virtual bool testReferencesElements() const;

        friend class IfcRelReferencedInSpatialStructure;
        /// @}



        friend class Inverted_IfcRelServicesBuildings_RelatedBuildings_type;


        friend class ExpressDataSet;

    protected:

        IfcSpatialStructureElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcSpatialStructureElement();

        virtual bool init();

        virtual void copy(const IfcSpatialStructureElement &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3