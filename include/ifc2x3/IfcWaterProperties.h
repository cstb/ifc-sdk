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

#include <ifc2x3/IfcMaterialProperties.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcWaterProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcWaterProperties : public IfcMaterialProperties
    {

        // Attributes
        Step::Boolean m_IsPotable;
        IfcIonConcentrationMeasure m_Hardness;
        IfcIonConcentrationMeasure m_AlkalinityConcentration;
        IfcIonConcentrationMeasure m_AcidityConcentration;
        IfcNormalisedRatioMeasure m_ImpuritiesContent;
        IfcPHMeasure m_PHLevel;
        IfcNormalisedRatioMeasure m_DissolvedSolidsContent;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute IsPotable
        /// @{
        virtual Step::Boolean getIsPotable();
        virtual Step::Boolean getIsPotable() const;
        virtual void setIsPotable(Step::Boolean value);
        virtual void unsetIsPotable();
        virtual bool testIsPotable() const;
        /// @}

        /// Attribute Hardness
        /// @{
        virtual IfcIonConcentrationMeasure getHardness();
        virtual IfcIonConcentrationMeasure getHardness() const;
        virtual void setHardness(IfcIonConcentrationMeasure value);
        virtual void unsetHardness();
        virtual bool testHardness() const;
        /// @}

        /// Attribute AlkalinityConcentration
        /// @{
        virtual IfcIonConcentrationMeasure getAlkalinityConcentration();
        virtual IfcIonConcentrationMeasure getAlkalinityConcentration() const;
        virtual void setAlkalinityConcentration(IfcIonConcentrationMeasure value);
        virtual void unsetAlkalinityConcentration();
        virtual bool testAlkalinityConcentration() const;
        /// @}

        /// Attribute AcidityConcentration
        /// @{
        virtual IfcIonConcentrationMeasure getAcidityConcentration();
        virtual IfcIonConcentrationMeasure getAcidityConcentration() const;
        virtual void setAcidityConcentration(IfcIonConcentrationMeasure value);
        virtual void unsetAcidityConcentration();
        virtual bool testAcidityConcentration() const;
        /// @}

        /// Attribute ImpuritiesContent
        /// @{
        virtual IfcNormalisedRatioMeasure getImpuritiesContent();
        virtual IfcNormalisedRatioMeasure getImpuritiesContent() const;
        virtual void setImpuritiesContent(IfcNormalisedRatioMeasure value);
        virtual void unsetImpuritiesContent();
        virtual bool testImpuritiesContent() const;
        /// @}

        /// Attribute PHLevel
        /// @{
        virtual IfcPHMeasure getPHLevel();
        virtual IfcPHMeasure getPHLevel() const;
        virtual void setPHLevel(IfcPHMeasure value);
        virtual void unsetPHLevel();
        virtual bool testPHLevel() const;
        /// @}

        /// Attribute DissolvedSolidsContent
        /// @{
        virtual IfcNormalisedRatioMeasure getDissolvedSolidsContent();
        virtual IfcNormalisedRatioMeasure getDissolvedSolidsContent() const;
        virtual void setDissolvedSolidsContent(IfcNormalisedRatioMeasure value);
        virtual void unsetDissolvedSolidsContent();
        virtual bool testDissolvedSolidsContent() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcWaterProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcWaterProperties();

        virtual bool init();

        virtual void copy(const IfcWaterProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3