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

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseEntity.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcRepresentationMap Entity.
     *
     */
    class IFC2X3_EXPORT IfcRepresentationMap : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcAxis2Placement > m_MappingOrigin;
        // InvertedAttributes
        Step::RefPtr< IfcRepresentation > m_MappedRepresentation;
        // InverseAttributes
        Inverse_Set_IfcMappedItem_0_n m_MapUsage;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute MappingOrigin
        /// @{
        virtual IfcAxis2Placement *getMappingOrigin();
        virtual const IfcAxis2Placement *getMappingOrigin() const;
        virtual void setMappingOrigin(const Step::RefPtr< IfcAxis2Placement > &value);
        virtual void unsetMappingOrigin();
        virtual bool testMappingOrigin() const;
        /// @}

        /// Attribute MappedRepresentation
        /// @{
        virtual IfcRepresentation *getMappedRepresentation();
        virtual const IfcRepresentation *getMappedRepresentation() const;
        virtual void setMappedRepresentation(const Step::RefPtr< IfcRepresentation > &value);
        virtual void unsetMappedRepresentation();
        virtual bool testMappedRepresentation() const;
        /// @}

        /// Inverse attribute MapUsage
        /// @{
        virtual Inverse_Set_IfcMappedItem_0_n &getMapUsage();
        virtual const Inverse_Set_IfcMappedItem_0_n &getMapUsage() const;
        virtual bool testMapUsage() const;

        friend class IfcMappedItem;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRepresentationMap(Step::Id id, Step::SPFData *args);
        virtual ~IfcRepresentationMap();

        virtual bool init();

        virtual void copy(const IfcRepresentationMap &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3