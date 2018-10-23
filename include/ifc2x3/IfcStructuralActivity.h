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
     * Generated class for the IfcStructuralActivity Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralActivity : public IfcProduct
    {

        // Attributes
        Step::RefPtr< IfcStructuralLoad > m_AppliedLoad;
        IfcGlobalOrLocalEnum m_GlobalOrLocal;
        // InverseAttributes
        Step::ObsPtr< IfcRelConnectsStructuralActivity > m_AssignedToStructuralItem;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute AppliedLoad
        /// @{
        virtual IfcStructuralLoad *getAppliedLoad();
        virtual const IfcStructuralLoad *getAppliedLoad() const;
        virtual void setAppliedLoad(const Step::RefPtr< IfcStructuralLoad > &value);
        virtual void unsetAppliedLoad();
        virtual bool testAppliedLoad() const;
        /// @}

        /// Attribute GlobalOrLocal
        /// @{
        virtual IfcGlobalOrLocalEnum getGlobalOrLocal();
        virtual IfcGlobalOrLocalEnum getGlobalOrLocal() const;
        virtual void setGlobalOrLocal(IfcGlobalOrLocalEnum value);
        virtual void unsetGlobalOrLocal();
        virtual bool testGlobalOrLocal() const;
        /// @}

        /// Inverse attribute AssignedToStructuralItem
        /// @{
        virtual IfcRelConnectsStructuralActivity *getAssignedToStructuralItem();
        virtual const IfcRelConnectsStructuralActivity *getAssignedToStructuralItem() const;
        virtual bool testAssignedToStructuralItem() const;

        friend class IfcRelConnectsStructuralActivity;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStructuralActivity(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralActivity();

        virtual bool init();

        virtual void copy(const IfcStructuralActivity &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3