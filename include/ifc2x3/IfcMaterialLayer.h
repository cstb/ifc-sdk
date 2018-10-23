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
     * Generated class for the IfcMaterialLayer Entity.
     *
     */
    class IFC2X3_EXPORT IfcMaterialLayer : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcMaterial > m_Material;
        IfcPositiveLengthMeasure m_LayerThickness;
        IfcLogical m_IsVentilated;
        // InverseAttributes
        Step::ObsPtr< IfcMaterialLayerSet > m_ToMaterialLayerSet;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Material
        /// @{
        virtual IfcMaterial *getMaterial();
        virtual const IfcMaterial *getMaterial() const;
        virtual void setMaterial(const Step::RefPtr< IfcMaterial > &value);
        virtual void unsetMaterial();
        virtual bool testMaterial() const;
        /// @}

        /// Attribute LayerThickness
        /// @{
        virtual IfcPositiveLengthMeasure getLayerThickness();
        virtual IfcPositiveLengthMeasure getLayerThickness() const;
        virtual void setLayerThickness(IfcPositiveLengthMeasure value);
        virtual void unsetLayerThickness();
        virtual bool testLayerThickness() const;
        /// @}

        /// Attribute IsVentilated
        /// @{
        virtual IfcLogical getIsVentilated();
        virtual IfcLogical getIsVentilated() const;
        virtual void setIsVentilated(IfcLogical value);
        virtual void unsetIsVentilated();
        virtual bool testIsVentilated() const;
        /// @}

        /// Inverse attribute ToMaterialLayerSet
        /// @{
        virtual IfcMaterialLayerSet *getToMaterialLayerSet();
        virtual const IfcMaterialLayerSet *getToMaterialLayerSet() const;
        virtual bool testToMaterialLayerSet() const;

        friend class IfcMaterialLayerSet;
        /// @}



        friend class Inverted_IfcMaterialLayerSet_MaterialLayers_type;


        friend class ExpressDataSet;

    protected:

        IfcMaterialLayer(Step::Id id, Step::SPFData *args);
        virtual ~IfcMaterialLayer();

        virtual bool init();

        virtual void copy(const IfcMaterialLayer &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3