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

#include <ifc2x3/IfcProduct.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcElement Entity.
     *
     */
    class IFC2X3_EXPORT IfcElement : public IfcProduct
    {

        // Attributes
        IfcIdentifier m_Tag;
        // InverseAttributes
        Inverse_Set_IfcRelSpaceBoundary_0_n m_ProvidesBoundaries;
        Inverse_Set_IfcRelConnectsElements_0_n m_ConnectedFrom;
        Inverse_Set_IfcRelCoversBldgElements_0_n m_HasCoverings;
        Inverse_Set_IfcRelFillsElement_0_1 m_FillsVoids;
        Inverse_Set_IfcRelReferencedInSpatialStructure_0_n m_ReferencedInStructures;
        Inverse_Set_IfcRelContainedInSpatialStructure_0_1 m_ContainedInStructure;
        Inverse_Set_IfcRelVoidsElement_0_n m_HasOpenings;
        Inverse_Set_IfcRelConnectsElements_0_n m_ConnectedTo;
        Inverse_Set_IfcRelProjectsElement_0_n m_HasProjections;
        Inverse_Set_IfcRelConnectsPortToElement_0_n m_HasPorts;
        Inverse_Set_IfcRelConnectsWithRealizingElements_0_n m_IsConnectionRealization;
        Inverse_Set_IfcRelConnectsStructuralElement_0_n m_HasStructuralMember;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Tag
        /// @{
        virtual IfcIdentifier getTag();
        virtual const IfcIdentifier getTag() const;
        virtual void setTag(const IfcIdentifier &value);
        virtual void unsetTag();
        virtual bool testTag() const;
        /// @}

        /// Inverse attribute ProvidesBoundaries
        /// @{
        virtual Inverse_Set_IfcRelSpaceBoundary_0_n &getProvidesBoundaries();
        virtual const Inverse_Set_IfcRelSpaceBoundary_0_n &getProvidesBoundaries() const;
        virtual bool testProvidesBoundaries() const;

        friend class IfcRelSpaceBoundary;
        /// @}

        /// Inverse attribute ConnectedFrom
        /// @{
        virtual Inverse_Set_IfcRelConnectsElements_0_n &getConnectedFrom();
        virtual const Inverse_Set_IfcRelConnectsElements_0_n &getConnectedFrom() const;
        virtual bool testConnectedFrom() const;

        friend class IfcRelConnectsElements;
        /// @}

        /// Inverse attribute HasCoverings
        /// @{
        virtual Inverse_Set_IfcRelCoversBldgElements_0_n &getHasCoverings();
        virtual const Inverse_Set_IfcRelCoversBldgElements_0_n &getHasCoverings() const;
        virtual bool testHasCoverings() const;

        friend class IfcRelCoversBldgElements;
        /// @}

        /// Inverse attribute FillsVoids
        /// @{
        virtual Inverse_Set_IfcRelFillsElement_0_1 &getFillsVoids();
        virtual const Inverse_Set_IfcRelFillsElement_0_1 &getFillsVoids() const;
        virtual bool testFillsVoids() const;

        friend class IfcRelFillsElement;
        /// @}

        /// Inverse attribute ReferencedInStructures
        /// @{
        virtual Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &getReferencedInStructures();
        virtual const Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &getReferencedInStructures() const;
        virtual bool testReferencedInStructures() const;

        friend class IfcRelReferencedInSpatialStructure;
        /// @}

        /// Inverse attribute ContainedInStructure
        /// @{
        virtual Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &getContainedInStructure();
        virtual const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &getContainedInStructure() const;
        virtual bool testContainedInStructure() const;

        friend class IfcRelContainedInSpatialStructure;
        /// @}

        /// Inverse attribute HasOpenings
        /// @{
        virtual Inverse_Set_IfcRelVoidsElement_0_n &getHasOpenings();
        virtual const Inverse_Set_IfcRelVoidsElement_0_n &getHasOpenings() const;
        virtual bool testHasOpenings() const;

        friend class IfcRelVoidsElement;
        /// @}

        /// Inverse attribute ConnectedTo
        /// @{
        virtual Inverse_Set_IfcRelConnectsElements_0_n &getConnectedTo();
        virtual const Inverse_Set_IfcRelConnectsElements_0_n &getConnectedTo() const;
        virtual bool testConnectedTo() const;

        friend class IfcRelConnectsElements;
        /// @}

        /// Inverse attribute HasProjections
        /// @{
        virtual Inverse_Set_IfcRelProjectsElement_0_n &getHasProjections();
        virtual const Inverse_Set_IfcRelProjectsElement_0_n &getHasProjections() const;
        virtual bool testHasProjections() const;

        friend class IfcRelProjectsElement;
        /// @}

        /// Inverse attribute HasPorts
        /// @{
        virtual Inverse_Set_IfcRelConnectsPortToElement_0_n &getHasPorts();
        virtual const Inverse_Set_IfcRelConnectsPortToElement_0_n &getHasPorts() const;
        virtual bool testHasPorts() const;

        friend class IfcRelConnectsPortToElement;
        /// @}

        /// Inverse attribute IsConnectionRealization
        /// @{
        virtual Inverse_Set_IfcRelConnectsWithRealizingElements_0_n &getIsConnectionRealization();
        virtual const Inverse_Set_IfcRelConnectsWithRealizingElements_0_n &getIsConnectionRealization() const;
        virtual bool testIsConnectionRealization() const;

        friend class IfcRelConnectsWithRealizingElements;
        /// @}

        /// Inverse attribute HasStructuralMember
        /// @{
        virtual Inverse_Set_IfcRelConnectsStructuralElement_0_n &getHasStructuralMember();
        virtual const Inverse_Set_IfcRelConnectsStructuralElement_0_n &getHasStructuralMember() const;
        virtual bool testHasStructuralMember() const;

        friend class IfcRelConnectsStructuralElement;
        /// @}



        friend class Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type;
        friend class Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type;
        friend class Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type;


        friend class ExpressDataSet;

    protected:

        IfcElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcElement();

        virtual bool init();

        virtual void copy(const IfcElement &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3