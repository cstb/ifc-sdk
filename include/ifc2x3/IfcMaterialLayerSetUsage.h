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
     * Generated class for the IfcMaterialLayerSetUsage Entity.
     *
     */
    class IFC2X3_EXPORT IfcMaterialLayerSetUsage : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcMaterialLayerSet > m_ForLayerSet;
        IfcLayerSetDirectionEnum m_LayerSetDirection;
        IfcDirectionSenseEnum m_DirectionSense;
        IfcLengthMeasure m_OffsetFromReferenceLine;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ForLayerSet
        /// @{
        virtual IfcMaterialLayerSet *getForLayerSet();
        virtual const IfcMaterialLayerSet *getForLayerSet() const;
        virtual void setForLayerSet(const Step::RefPtr< IfcMaterialLayerSet > &value);
        virtual void unsetForLayerSet();
        virtual bool testForLayerSet() const;
        /// @}

        /// Attribute LayerSetDirection
        /// @{
        virtual IfcLayerSetDirectionEnum getLayerSetDirection();
        virtual IfcLayerSetDirectionEnum getLayerSetDirection() const;
        virtual void setLayerSetDirection(IfcLayerSetDirectionEnum value);
        virtual void unsetLayerSetDirection();
        virtual bool testLayerSetDirection() const;
        /// @}

        /// Attribute DirectionSense
        /// @{
        virtual IfcDirectionSenseEnum getDirectionSense();
        virtual IfcDirectionSenseEnum getDirectionSense() const;
        virtual void setDirectionSense(IfcDirectionSenseEnum value);
        virtual void unsetDirectionSense();
        virtual bool testDirectionSense() const;
        /// @}

        /// Attribute OffsetFromReferenceLine
        /// @{
        virtual IfcLengthMeasure getOffsetFromReferenceLine();
        virtual IfcLengthMeasure getOffsetFromReferenceLine() const;
        virtual void setOffsetFromReferenceLine(IfcLengthMeasure value);
        virtual void unsetOffsetFromReferenceLine();
        virtual bool testOffsetFromReferenceLine() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcMaterialLayerSetUsage(Step::Id id, Step::SPFData *args);
        virtual ~IfcMaterialLayerSetUsage();

        virtual bool init();

        virtual void copy(const IfcMaterialLayerSetUsage &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3