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
     * Generated class for the IfcFillAreaStyleTiles Entity.
     *
     */
    class IFC2X3_EXPORT IfcFillAreaStyleTiles : public IfcGeometricRepresentationItem
    {

        // Attributes
        Step::RefPtr< IfcOneDirectionRepeatFactor > m_TilingPattern;
        Set_IfcFillAreaStyleTileShapeSelect_1_n m_Tiles;
        IfcPositiveRatioMeasure m_TilingScale;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TilingPattern
        /// @{
        virtual IfcOneDirectionRepeatFactor *getTilingPattern();
        virtual const IfcOneDirectionRepeatFactor *getTilingPattern() const;
        virtual void setTilingPattern(const Step::RefPtr< IfcOneDirectionRepeatFactor > &value);
        virtual void unsetTilingPattern();
        virtual bool testTilingPattern() const;
        /// @}

        /// Attribute Tiles
        /// @{
        virtual Set_IfcFillAreaStyleTileShapeSelect_1_n &getTiles();
        virtual const Set_IfcFillAreaStyleTileShapeSelect_1_n &getTiles() const;
        virtual void setTiles(const Set_IfcFillAreaStyleTileShapeSelect_1_n &value);
        virtual void unsetTiles();
        virtual bool testTiles() const;
        /// @}

        /// Attribute TilingScale
        /// @{
        virtual IfcPositiveRatioMeasure getTilingScale();
        virtual IfcPositiveRatioMeasure getTilingScale() const;
        virtual void setTilingScale(IfcPositiveRatioMeasure value);
        virtual void unsetTilingScale();
        virtual bool testTilingScale() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcFillAreaStyleTiles(Step::Id id, Step::SPFData *args);
        virtual ~IfcFillAreaStyleTiles();

        virtual bool init();

        virtual void copy(const IfcFillAreaStyleTiles &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3