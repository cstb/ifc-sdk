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

#include <ifc2x3/IfcGeometricRepresentationItem.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcSectionedSpine Entity.
     *
     */
    class IFC2X3_EXPORT IfcSectionedSpine : public IfcGeometricRepresentationItem
    {

        // Attributes
        Step::RefPtr< IfcCompositeCurve > m_SpineCurve;
        List_IfcProfileDef_2_n m_CrossSections;
        List_IfcAxis2Placement3D_2_n m_CrossSectionPositions;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute SpineCurve
        /// @{
        virtual IfcCompositeCurve *getSpineCurve();
        virtual const IfcCompositeCurve *getSpineCurve() const;
        virtual void setSpineCurve(const Step::RefPtr< IfcCompositeCurve > &value);
        virtual void unsetSpineCurve();
        virtual bool testSpineCurve() const;
        /// @}

        /// Attribute CrossSections
        /// @{
        virtual List_IfcProfileDef_2_n &getCrossSections();
        virtual const List_IfcProfileDef_2_n &getCrossSections() const;
        virtual void setCrossSections(const List_IfcProfileDef_2_n &value);
        virtual void unsetCrossSections();
        virtual bool testCrossSections() const;
        /// @}

        /// Attribute CrossSectionPositions
        /// @{
        virtual List_IfcAxis2Placement3D_2_n &getCrossSectionPositions();
        virtual const List_IfcAxis2Placement3D_2_n &getCrossSectionPositions() const;
        virtual void setCrossSectionPositions(const List_IfcAxis2Placement3D_2_n &value);
        virtual void unsetCrossSectionPositions();
        virtual bool testCrossSectionPositions() const;
        /// @}

        /// Derived attributes
        /// @{
        virtual IfcDimensionCount getDim() const;
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcSectionedSpine(Step::Id id, Step::SPFData *args);
        virtual ~IfcSectionedSpine();

        virtual bool init();

        virtual void copy(const IfcSectionedSpine &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3