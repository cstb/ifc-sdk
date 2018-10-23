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
     * Generated class for the IfcStructuralLoadSingleForce Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralLoadSingleForce : public IfcStructuralLoadStatic
    {

        // Attributes
        IfcForceMeasure m_ForceX;
        IfcForceMeasure m_ForceY;
        IfcForceMeasure m_ForceZ;
        IfcTorqueMeasure m_MomentX;
        IfcTorqueMeasure m_MomentY;
        IfcTorqueMeasure m_MomentZ;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ForceX
        /// @{
        virtual IfcForceMeasure getForceX();
        virtual IfcForceMeasure getForceX() const;
        virtual void setForceX(IfcForceMeasure value);
        virtual void unsetForceX();
        virtual bool testForceX() const;
        /// @}

        /// Attribute ForceY
        /// @{
        virtual IfcForceMeasure getForceY();
        virtual IfcForceMeasure getForceY() const;
        virtual void setForceY(IfcForceMeasure value);
        virtual void unsetForceY();
        virtual bool testForceY() const;
        /// @}

        /// Attribute ForceZ
        /// @{
        virtual IfcForceMeasure getForceZ();
        virtual IfcForceMeasure getForceZ() const;
        virtual void setForceZ(IfcForceMeasure value);
        virtual void unsetForceZ();
        virtual bool testForceZ() const;
        /// @}

        /// Attribute MomentX
        /// @{
        virtual IfcTorqueMeasure getMomentX();
        virtual IfcTorqueMeasure getMomentX() const;
        virtual void setMomentX(IfcTorqueMeasure value);
        virtual void unsetMomentX();
        virtual bool testMomentX() const;
        /// @}

        /// Attribute MomentY
        /// @{
        virtual IfcTorqueMeasure getMomentY();
        virtual IfcTorqueMeasure getMomentY() const;
        virtual void setMomentY(IfcTorqueMeasure value);
        virtual void unsetMomentY();
        virtual bool testMomentY() const;
        /// @}

        /// Attribute MomentZ
        /// @{
        virtual IfcTorqueMeasure getMomentZ();
        virtual IfcTorqueMeasure getMomentZ() const;
        virtual void setMomentZ(IfcTorqueMeasure value);
        virtual void unsetMomentZ();
        virtual bool testMomentZ() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStructuralLoadSingleForce(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadSingleForce();

        virtual bool init();

        virtual void copy(const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3