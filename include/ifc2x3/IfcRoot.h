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
     * Generated class for the IfcRoot Entity.
     *
     */
    class IFC2X3_EXPORT IfcRoot : public Step::BaseEntity
    {

        // Attributes
        IfcGloballyUniqueId m_GlobalId;
        Step::RefPtr< IfcOwnerHistory > m_OwnerHistory;
        IfcLabel m_Name;
        IfcText m_Description;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute GlobalId
        /// @{
        virtual IfcGloballyUniqueId getGlobalId();
        virtual const IfcGloballyUniqueId getGlobalId() const;
        virtual void setGlobalId(const IfcGloballyUniqueId &value);
        virtual void unsetGlobalId();
        virtual bool testGlobalId() const;
        /// @}

        /// Attribute OwnerHistory
        /// @{
        virtual IfcOwnerHistory *getOwnerHistory();
        virtual const IfcOwnerHistory *getOwnerHistory() const;
        virtual void setOwnerHistory(const Step::RefPtr< IfcOwnerHistory > &value);
        virtual void unsetOwnerHistory();
        virtual bool testOwnerHistory() const;
        /// @}

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
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





        friend class ExpressDataSet;

    protected:

        IfcRoot(Step::Id id, Step::SPFData *args);
        virtual ~IfcRoot();

        virtual bool init();

        virtual void copy(const IfcRoot &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3