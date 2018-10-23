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

#include <ifc2x3/IfcRepresentationContext.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcGeometricRepresentationContext Entity.
     *
     */
    class IFC2X3_EXPORT IfcGeometricRepresentationContext : public IfcRepresentationContext
    {

        // Attributes
        IfcDimensionCount m_CoordinateSpaceDimension;
        Step::Real m_Precision;
        Step::RefPtr< IfcAxis2Placement > m_WorldCoordinateSystem;
        Step::RefPtr< IfcDirection > m_TrueNorth;
        // InverseAttributes
        Inverse_Set_IfcGeometricRepresentationSubContext_0_n m_HasSubContexts;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute CoordinateSpaceDimension
        /// @{
        virtual IfcDimensionCount getCoordinateSpaceDimension();
        virtual IfcDimensionCount getCoordinateSpaceDimension() const;
        virtual void setCoordinateSpaceDimension(IfcDimensionCount value);
        virtual void unsetCoordinateSpaceDimension();
        virtual bool testCoordinateSpaceDimension() const;
        /// @}

        /// Attribute Precision
        /// @{
        virtual Step::Real getPrecision();
        virtual Step::Real getPrecision() const;
        virtual void setPrecision(Step::Real value);
        virtual void unsetPrecision();
        virtual bool testPrecision() const;
        /// @}

        /// Attribute WorldCoordinateSystem
        /// @{
        virtual IfcAxis2Placement *getWorldCoordinateSystem();
        virtual const IfcAxis2Placement *getWorldCoordinateSystem() const;
        virtual void setWorldCoordinateSystem(const Step::RefPtr< IfcAxis2Placement > &value);
        virtual void unsetWorldCoordinateSystem();
        virtual bool testWorldCoordinateSystem() const;
        /// @}

        /// Attribute TrueNorth
        /// @{
        virtual IfcDirection *getTrueNorth();
        virtual const IfcDirection *getTrueNorth() const;
        virtual void setTrueNorth(const Step::RefPtr< IfcDirection > &value);
        virtual void unsetTrueNorth();
        virtual bool testTrueNorth() const;
        /// @}

        /// Inverse attribute HasSubContexts
        /// @{
        virtual Inverse_Set_IfcGeometricRepresentationSubContext_0_n &getHasSubContexts();
        virtual const Inverse_Set_IfcGeometricRepresentationSubContext_0_n &getHasSubContexts() const;
        virtual bool testHasSubContexts() const;

        friend class IfcGeometricRepresentationSubContext;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcGeometricRepresentationContext(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeometricRepresentationContext();

        virtual bool init();

        virtual void copy(const IfcGeometricRepresentationContext &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3