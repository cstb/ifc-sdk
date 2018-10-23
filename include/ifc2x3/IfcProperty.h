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
     * Generated class for the IfcProperty Entity.
     *
     */
    class IFC2X3_EXPORT IfcProperty : public Step::BaseEntity
    {

        // Attributes
        IfcIdentifier m_Name;
        IfcText m_Description;
        // InverseAttributes
        Inverse_Set_IfcPropertyDependencyRelationship_0_n m_PropertyDependsOn;
        Inverse_Set_IfcPropertyDependencyRelationship_0_n m_PropertyForDependance;
        Inverse_Set_IfcComplexProperty_0_1 m_PartOfComplex;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Name
        /// @{
        virtual IfcIdentifier getName();
        virtual const IfcIdentifier getName() const;
        virtual void setName(const IfcIdentifier &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute Description
        /// @{
        virtual IfcText getDescription();
        virtual const IfcText getDescription() const;
        virtual void setDescription(const IfcText &value);
        virtual void unsetDescription();
        virtual bool testDescription() const;
        /// @}

        /// Inverse attribute PropertyDependsOn
        /// @{
        virtual Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyDependsOn();
        virtual const Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyDependsOn() const;
        virtual bool testPropertyDependsOn() const;

        friend class IfcPropertyDependencyRelationship;
        /// @}

        /// Inverse attribute PropertyForDependance
        /// @{
        virtual Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyForDependance();
        virtual const Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyForDependance() const;
        virtual bool testPropertyForDependance() const;

        friend class IfcPropertyDependencyRelationship;
        /// @}

        /// Inverse attribute PartOfComplex
        /// @{
        virtual Inverse_Set_IfcComplexProperty_0_1 &getPartOfComplex();
        virtual const Inverse_Set_IfcComplexProperty_0_1 &getPartOfComplex() const;
        virtual bool testPartOfComplex() const;

        friend class IfcComplexProperty;
        /// @}



        friend class Inverted_IfcComplexProperty_HasProperties_type;


        friend class ExpressDataSet;

    protected:

        IfcProperty(Step::Id id, Step::SPFData *args);
        virtual ~IfcProperty();

        virtual bool init();

        virtual void copy(const IfcProperty &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3