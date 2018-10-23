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

#include <ifc2x3/IfcStructuralItem.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcStructuralMember Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralMember : public IfcStructuralItem
    {

        // InverseAttributes
        Inverse_Set_IfcRelConnectsStructuralMember_0_n m_ConnectedBy;
        Inverse_Set_IfcRelConnectsStructuralElement_0_n m_ReferencesElement;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Inverse attribute ConnectedBy
        /// @{
        virtual Inverse_Set_IfcRelConnectsStructuralMember_0_n &getConnectedBy();
        virtual const Inverse_Set_IfcRelConnectsStructuralMember_0_n &getConnectedBy() const;
        virtual bool testConnectedBy() const;

        friend class IfcRelConnectsStructuralMember;
        /// @}

        /// Inverse attribute ReferencesElement
        /// @{
        virtual Inverse_Set_IfcRelConnectsStructuralElement_0_n &getReferencesElement();
        virtual const Inverse_Set_IfcRelConnectsStructuralElement_0_n &getReferencesElement() const;
        virtual bool testReferencesElement() const;

        friend class IfcRelConnectsStructuralElement;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStructuralMember(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralMember();

        virtual bool init();

        virtual void copy(const IfcStructuralMember &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3