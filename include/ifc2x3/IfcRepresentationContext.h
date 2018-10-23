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
     * Generated class for the IfcRepresentationContext Entity.
     *
     */
    class IFC2X3_EXPORT IfcRepresentationContext : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_ContextIdentifier;
        IfcLabel m_ContextType;
        // InverseAttributes
        Inverse_Set_IfcRepresentation_0_n m_RepresentationsInContext;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ContextIdentifier
        /// @{
        virtual IfcLabel getContextIdentifier();
        virtual const IfcLabel getContextIdentifier() const;
        virtual void setContextIdentifier(const IfcLabel &value);
        virtual void unsetContextIdentifier();
        virtual bool testContextIdentifier() const;
        /// @}

        /// Attribute ContextType
        /// @{
        virtual IfcLabel getContextType();
        virtual const IfcLabel getContextType() const;
        virtual void setContextType(const IfcLabel &value);
        virtual void unsetContextType();
        virtual bool testContextType() const;
        /// @}

        /// Inverse attribute RepresentationsInContext
        /// @{
        virtual Inverse_Set_IfcRepresentation_0_n &getRepresentationsInContext();
        virtual const Inverse_Set_IfcRepresentation_0_n &getRepresentationsInContext() const;
        virtual bool testRepresentationsInContext() const;

        friend class IfcRepresentation;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRepresentationContext(Step::Id id, Step::SPFData *args);
        virtual ~IfcRepresentationContext();

        virtual bool init();

        virtual void copy(const IfcRepresentationContext &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3