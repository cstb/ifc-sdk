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

#include <ifc2x3/IfcRelConnects.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcRelSpaceBoundary Entity.
     *
     */
    class IFC2X3_EXPORT IfcRelSpaceBoundary : public IfcRelConnects
    {

        // Attributes
        Step::RefPtr< IfcConnectionGeometry > m_ConnectionGeometry;
        IfcPhysicalOrVirtualEnum m_PhysicalOrVirtualBoundary;
        IfcInternalOrExternalEnum m_InternalOrExternalBoundary;
        // InvertedAttributes
        Step::RefPtr< IfcElement > m_RelatedBuildingElement;
        Step::RefPtr< IfcSpace > m_RelatingSpace;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ConnectionGeometry
        /// @{
        virtual IfcConnectionGeometry *getConnectionGeometry();
        virtual const IfcConnectionGeometry *getConnectionGeometry() const;
        virtual void setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value);
        virtual void unsetConnectionGeometry();
        virtual bool testConnectionGeometry() const;
        /// @}

        /// Attribute PhysicalOrVirtualBoundary
        /// @{
        virtual IfcPhysicalOrVirtualEnum getPhysicalOrVirtualBoundary();
        virtual IfcPhysicalOrVirtualEnum getPhysicalOrVirtualBoundary() const;
        virtual void setPhysicalOrVirtualBoundary(IfcPhysicalOrVirtualEnum value);
        virtual void unsetPhysicalOrVirtualBoundary();
        virtual bool testPhysicalOrVirtualBoundary() const;
        /// @}

        /// Attribute InternalOrExternalBoundary
        /// @{
        virtual IfcInternalOrExternalEnum getInternalOrExternalBoundary();
        virtual IfcInternalOrExternalEnum getInternalOrExternalBoundary() const;
        virtual void setInternalOrExternalBoundary(IfcInternalOrExternalEnum value);
        virtual void unsetInternalOrExternalBoundary();
        virtual bool testInternalOrExternalBoundary() const;
        /// @}

        /// Attribute RelatedBuildingElement
        /// @{
        virtual IfcElement *getRelatedBuildingElement();
        virtual const IfcElement *getRelatedBuildingElement() const;
        virtual void setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value);
        virtual void unsetRelatedBuildingElement();
        virtual bool testRelatedBuildingElement() const;
        /// @}

        /// Attribute RelatingSpace
        /// @{
        virtual IfcSpace *getRelatingSpace();
        virtual const IfcSpace *getRelatingSpace() const;
        virtual void setRelatingSpace(const Step::RefPtr< IfcSpace > &value);
        virtual void unsetRelatingSpace();
        virtual bool testRelatingSpace() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRelSpaceBoundary(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelSpaceBoundary();

        virtual bool init();

        virtual void copy(const IfcRelSpaceBoundary &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3