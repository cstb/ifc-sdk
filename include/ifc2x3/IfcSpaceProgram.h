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

#include <ifc2x3/IfcControl.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcSpaceProgram Entity.
     *
     */
    class IFC2X3_EXPORT IfcSpaceProgram : public IfcControl
    {

        // Attributes
        IfcIdentifier m_SpaceProgramIdentifier;
        IfcAreaMeasure m_MaxRequiredArea;
        IfcAreaMeasure m_MinRequiredArea;
        Step::RefPtr< IfcSpatialStructureElement > m_RequestedLocation;
        IfcAreaMeasure m_StandardRequiredArea;
        // InverseAttributes
        Inverse_Set_IfcRelInteractionRequirements_0_n m_HasInteractionReqsFrom;
        Inverse_Set_IfcRelInteractionRequirements_0_n m_HasInteractionReqsTo;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute SpaceProgramIdentifier
        /// @{
        virtual IfcIdentifier getSpaceProgramIdentifier();
        virtual const IfcIdentifier getSpaceProgramIdentifier() const;
        virtual void setSpaceProgramIdentifier(const IfcIdentifier &value);
        virtual void unsetSpaceProgramIdentifier();
        virtual bool testSpaceProgramIdentifier() const;
        /// @}

        /// Attribute MaxRequiredArea
        /// @{
        virtual IfcAreaMeasure getMaxRequiredArea();
        virtual IfcAreaMeasure getMaxRequiredArea() const;
        virtual void setMaxRequiredArea(IfcAreaMeasure value);
        virtual void unsetMaxRequiredArea();
        virtual bool testMaxRequiredArea() const;
        /// @}

        /// Attribute MinRequiredArea
        /// @{
        virtual IfcAreaMeasure getMinRequiredArea();
        virtual IfcAreaMeasure getMinRequiredArea() const;
        virtual void setMinRequiredArea(IfcAreaMeasure value);
        virtual void unsetMinRequiredArea();
        virtual bool testMinRequiredArea() const;
        /// @}

        /// Attribute RequestedLocation
        /// @{
        virtual IfcSpatialStructureElement *getRequestedLocation();
        virtual const IfcSpatialStructureElement *getRequestedLocation() const;
        virtual void setRequestedLocation(const Step::RefPtr< IfcSpatialStructureElement > &value);
        virtual void unsetRequestedLocation();
        virtual bool testRequestedLocation() const;
        /// @}

        /// Attribute StandardRequiredArea
        /// @{
        virtual IfcAreaMeasure getStandardRequiredArea();
        virtual IfcAreaMeasure getStandardRequiredArea() const;
        virtual void setStandardRequiredArea(IfcAreaMeasure value);
        virtual void unsetStandardRequiredArea();
        virtual bool testStandardRequiredArea() const;
        /// @}

        /// Inverse attribute HasInteractionReqsFrom
        /// @{
        virtual Inverse_Set_IfcRelInteractionRequirements_0_n &getHasInteractionReqsFrom();
        virtual const Inverse_Set_IfcRelInteractionRequirements_0_n &getHasInteractionReqsFrom() const;
        virtual bool testHasInteractionReqsFrom() const;

        friend class IfcRelInteractionRequirements;
        /// @}

        /// Inverse attribute HasInteractionReqsTo
        /// @{
        virtual Inverse_Set_IfcRelInteractionRequirements_0_n &getHasInteractionReqsTo();
        virtual const Inverse_Set_IfcRelInteractionRequirements_0_n &getHasInteractionReqsTo() const;
        virtual bool testHasInteractionReqsTo() const;

        friend class IfcRelInteractionRequirements;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcSpaceProgram(Step::Id id, Step::SPFData *args);
        virtual ~IfcSpaceProgram();

        virtual bool init();

        virtual void copy(const IfcSpaceProgram &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3