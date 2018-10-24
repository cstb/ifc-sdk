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
     * Generated class for the IfcRelInteractionRequirements Entity.
     *
     */
    class IFC2X3_EXPORT IfcRelInteractionRequirements : public IfcRelConnects
    {

        // Attributes
        IfcCountMeasure m_DailyInteraction;
        IfcNormalisedRatioMeasure m_ImportanceRating;
        Step::RefPtr< IfcSpatialStructureElement > m_LocationOfInteraction;
        // InvertedAttributes
        Step::RefPtr< IfcSpaceProgram > m_RelatingSpaceProgram;
        Step::RefPtr< IfcSpaceProgram > m_RelatedSpaceProgram;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute DailyInteraction
        /// @{
        virtual IfcCountMeasure getDailyInteraction();
        virtual IfcCountMeasure getDailyInteraction() const;
        virtual void setDailyInteraction(IfcCountMeasure value);
        virtual void unsetDailyInteraction();
        virtual bool testDailyInteraction() const;
        /// @}

        /// Attribute ImportanceRating
        /// @{
        virtual IfcNormalisedRatioMeasure getImportanceRating();
        virtual IfcNormalisedRatioMeasure getImportanceRating() const;
        virtual void setImportanceRating(IfcNormalisedRatioMeasure value);
        virtual void unsetImportanceRating();
        virtual bool testImportanceRating() const;
        /// @}

        /// Attribute LocationOfInteraction
        /// @{
        virtual IfcSpatialStructureElement *getLocationOfInteraction();
        virtual const IfcSpatialStructureElement *getLocationOfInteraction() const;
        virtual void setLocationOfInteraction(const Step::RefPtr< IfcSpatialStructureElement > &value);
        virtual void unsetLocationOfInteraction();
        virtual bool testLocationOfInteraction() const;
        /// @}

        /// Attribute RelatingSpaceProgram
        /// @{
        virtual IfcSpaceProgram *getRelatingSpaceProgram();
        virtual const IfcSpaceProgram *getRelatingSpaceProgram() const;
        virtual void setRelatingSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value);
        virtual void unsetRelatingSpaceProgram();
        virtual bool testRelatingSpaceProgram() const;
        /// @}

        /// Attribute RelatedSpaceProgram
        /// @{
        virtual IfcSpaceProgram *getRelatedSpaceProgram();
        virtual const IfcSpaceProgram *getRelatedSpaceProgram() const;
        virtual void setRelatedSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value);
        virtual void unsetRelatedSpaceProgram();
        virtual bool testRelatedSpaceProgram() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRelInteractionRequirements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelInteractionRequirements();

        virtual bool init();

        virtual void copy(const IfcRelInteractionRequirements &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3