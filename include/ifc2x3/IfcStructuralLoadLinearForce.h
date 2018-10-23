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

#include <ifc2x3/IfcStructuralLoadStatic.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcStructuralLoadLinearForce Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralLoadLinearForce : public IfcStructuralLoadStatic
    {

        // Attributes
        IfcLinearForceMeasure m_LinearForceX;
        IfcLinearForceMeasure m_LinearForceY;
        IfcLinearForceMeasure m_LinearForceZ;
        IfcLinearMomentMeasure m_LinearMomentX;
        IfcLinearMomentMeasure m_LinearMomentY;
        IfcLinearMomentMeasure m_LinearMomentZ;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LinearForceX
        /// @{
        virtual IfcLinearForceMeasure getLinearForceX();
        virtual IfcLinearForceMeasure getLinearForceX() const;
        virtual void setLinearForceX(IfcLinearForceMeasure value);
        virtual void unsetLinearForceX();
        virtual bool testLinearForceX() const;
        /// @}

        /// Attribute LinearForceY
        /// @{
        virtual IfcLinearForceMeasure getLinearForceY();
        virtual IfcLinearForceMeasure getLinearForceY() const;
        virtual void setLinearForceY(IfcLinearForceMeasure value);
        virtual void unsetLinearForceY();
        virtual bool testLinearForceY() const;
        /// @}

        /// Attribute LinearForceZ
        /// @{
        virtual IfcLinearForceMeasure getLinearForceZ();
        virtual IfcLinearForceMeasure getLinearForceZ() const;
        virtual void setLinearForceZ(IfcLinearForceMeasure value);
        virtual void unsetLinearForceZ();
        virtual bool testLinearForceZ() const;
        /// @}

        /// Attribute LinearMomentX
        /// @{
        virtual IfcLinearMomentMeasure getLinearMomentX();
        virtual IfcLinearMomentMeasure getLinearMomentX() const;
        virtual void setLinearMomentX(IfcLinearMomentMeasure value);
        virtual void unsetLinearMomentX();
        virtual bool testLinearMomentX() const;
        /// @}

        /// Attribute LinearMomentY
        /// @{
        virtual IfcLinearMomentMeasure getLinearMomentY();
        virtual IfcLinearMomentMeasure getLinearMomentY() const;
        virtual void setLinearMomentY(IfcLinearMomentMeasure value);
        virtual void unsetLinearMomentY();
        virtual bool testLinearMomentY() const;
        /// @}

        /// Attribute LinearMomentZ
        /// @{
        virtual IfcLinearMomentMeasure getLinearMomentZ();
        virtual IfcLinearMomentMeasure getLinearMomentZ() const;
        virtual void setLinearMomentZ(IfcLinearMomentMeasure value);
        virtual void unsetLinearMomentZ();
        virtual bool testLinearMomentZ() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStructuralLoadLinearForce(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadLinearForce();

        virtual bool init();

        virtual void copy(const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3