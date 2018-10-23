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

#include <ifc2x3/IfcGeometricRepresentationContext.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcGeometricRepresentationSubContext Entity.
     *
     */
    class IFC2X3_EXPORT IfcGeometricRepresentationSubContext : public IfcGeometricRepresentationContext
    {

        // Attributes
        IfcPositiveRatioMeasure m_TargetScale;
        IfcGeometricProjectionEnum m_TargetView;
        IfcLabel m_UserDefinedTargetView;
        // InvertedAttributes
        Step::RefPtr< IfcGeometricRepresentationContext > m_ParentContext;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TargetScale
        /// @{
        virtual IfcPositiveRatioMeasure getTargetScale();
        virtual IfcPositiveRatioMeasure getTargetScale() const;
        virtual void setTargetScale(IfcPositiveRatioMeasure value);
        virtual void unsetTargetScale();
        virtual bool testTargetScale() const;
        /// @}

        /// Attribute TargetView
        /// @{
        virtual IfcGeometricProjectionEnum getTargetView();
        virtual IfcGeometricProjectionEnum getTargetView() const;
        virtual void setTargetView(IfcGeometricProjectionEnum value);
        virtual void unsetTargetView();
        virtual bool testTargetView() const;
        /// @}

        /// Attribute UserDefinedTargetView
        /// @{
        virtual IfcLabel getUserDefinedTargetView();
        virtual const IfcLabel getUserDefinedTargetView() const;
        virtual void setUserDefinedTargetView(const IfcLabel &value);
        virtual void unsetUserDefinedTargetView();
        virtual bool testUserDefinedTargetView() const;
        /// @}

        /// Attribute ParentContext
        /// @{
        virtual IfcGeometricRepresentationContext *getParentContext();
        virtual const IfcGeometricRepresentationContext *getParentContext() const;
        virtual void setParentContext(const Step::RefPtr< IfcGeometricRepresentationContext > &value);
        virtual void unsetParentContext();
        virtual bool testParentContext() const;
        /// @}

        /// Redeclared derived attributes
        /// @{
        virtual IfcAxis2Placement *getWorldCoordinateSystem();
        virtual IfcDimensionCount getCoordinateSpaceDimension();
        virtual IfcDirection *getTrueNorth();
        virtual Step::Real getPrecision();
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcGeometricRepresentationSubContext(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeometricRepresentationSubContext();

        virtual bool init();

        virtual void copy(const IfcGeometricRepresentationSubContext &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3