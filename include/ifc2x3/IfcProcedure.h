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

#include <ifc2x3/IfcProcess.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcProcedure Entity.
     *
     */
    class IFC2X3_EXPORT IfcProcedure : public IfcProcess
    {

        // Attributes
        IfcIdentifier m_ProcedureID;
        IfcProcedureTypeEnum m_ProcedureType;
        IfcLabel m_UserDefinedProcedureType;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ProcedureID
        /// @{
        virtual IfcIdentifier getProcedureID();
        virtual const IfcIdentifier getProcedureID() const;
        virtual void setProcedureID(const IfcIdentifier &value);
        virtual void unsetProcedureID();
        virtual bool testProcedureID() const;
        /// @}

        /// Attribute ProcedureType
        /// @{
        virtual IfcProcedureTypeEnum getProcedureType();
        virtual IfcProcedureTypeEnum getProcedureType() const;
        virtual void setProcedureType(IfcProcedureTypeEnum value);
        virtual void unsetProcedureType();
        virtual bool testProcedureType() const;
        /// @}

        /// Attribute UserDefinedProcedureType
        /// @{
        virtual IfcLabel getUserDefinedProcedureType();
        virtual const IfcLabel getUserDefinedProcedureType() const;
        virtual void setUserDefinedProcedureType(const IfcLabel &value);
        virtual void unsetUserDefinedProcedureType();
        virtual bool testUserDefinedProcedureType() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcProcedure(Step::Id id, Step::SPFData *args);
        virtual ~IfcProcedure();

        virtual bool init();

        virtual void copy(const IfcProcedure &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3