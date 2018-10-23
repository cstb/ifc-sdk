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
     * Generated class for the IfcPermit Entity.
     *
     */
    class IFC2X3_EXPORT IfcPermit : public IfcControl
    {

        // Attributes
        IfcIdentifier m_PermitID;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute PermitID
        /// @{
        virtual IfcIdentifier getPermitID();
        virtual const IfcIdentifier getPermitID() const;
        virtual void setPermitID(const IfcIdentifier &value);
        virtual void unsetPermitID();
        virtual bool testPermitID() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPermit(Step::Id id, Step::SPFData *args);
        virtual ~IfcPermit();

        virtual bool init();

        virtual void copy(const IfcPermit &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3