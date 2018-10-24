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

#include <ifc2x3/IfcObject.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcProcess Entity.
     *
     */
    class IFC2X3_EXPORT IfcProcess : public IfcObject
    {

        // InverseAttributes
        Inverse_Set_IfcRelSequence_0_n m_IsPredecessorTo;
        Inverse_Set_IfcRelAssignsToProcess_0_n m_OperatesOn;
        Inverse_Set_IfcRelSequence_0_n m_IsSuccessorFrom;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Inverse attribute IsPredecessorTo
        /// @{
        virtual Inverse_Set_IfcRelSequence_0_n &getIsPredecessorTo();
        virtual const Inverse_Set_IfcRelSequence_0_n &getIsPredecessorTo() const;
        virtual bool testIsPredecessorTo() const;

        friend class IfcRelSequence;
        /// @}

        /// Inverse attribute OperatesOn
        /// @{
        virtual Inverse_Set_IfcRelAssignsToProcess_0_n &getOperatesOn();
        virtual const Inverse_Set_IfcRelAssignsToProcess_0_n &getOperatesOn() const;
        virtual bool testOperatesOn() const;

        friend class IfcRelAssignsToProcess;
        /// @}

        /// Inverse attribute IsSuccessorFrom
        /// @{
        virtual Inverse_Set_IfcRelSequence_0_n &getIsSuccessorFrom();
        virtual const Inverse_Set_IfcRelSequence_0_n &getIsSuccessorFrom() const;
        virtual bool testIsSuccessorFrom() const;

        friend class IfcRelSequence;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcProcess(Step::Id id, Step::SPFData *args);
        virtual ~IfcProcess();

        virtual bool init();

        virtual void copy(const IfcProcess &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3