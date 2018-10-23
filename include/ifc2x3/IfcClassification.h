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
     * Generated class for the IfcClassification Entity.
     *
     */
    class IFC2X3_EXPORT IfcClassification : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_Source;
        IfcLabel m_Edition;
        Step::RefPtr< IfcCalendarDate > m_EditionDate;
        IfcLabel m_Name;
        // InverseAttributes
        Inverse_Set_IfcClassificationItem_0_n m_Contains;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Source
        /// @{
        virtual IfcLabel getSource();
        virtual const IfcLabel getSource() const;
        virtual void setSource(const IfcLabel &value);
        virtual void unsetSource();
        virtual bool testSource() const;
        /// @}

        /// Attribute Edition
        /// @{
        virtual IfcLabel getEdition();
        virtual const IfcLabel getEdition() const;
        virtual void setEdition(const IfcLabel &value);
        virtual void unsetEdition();
        virtual bool testEdition() const;
        /// @}

        /// Attribute EditionDate
        /// @{
        virtual IfcCalendarDate *getEditionDate();
        virtual const IfcCalendarDate *getEditionDate() const;
        virtual void setEditionDate(const Step::RefPtr< IfcCalendarDate > &value);
        virtual void unsetEditionDate();
        virtual bool testEditionDate() const;
        /// @}

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Inverse attribute Contains
        /// @{
        virtual Inverse_Set_IfcClassificationItem_0_n &getContains();
        virtual const Inverse_Set_IfcClassificationItem_0_n &getContains() const;
        virtual bool testContains() const;

        friend class IfcClassificationItem;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcClassification(Step::Id id, Step::SPFData *args);
        virtual ~IfcClassification();

        virtual bool init();

        virtual void copy(const IfcClassification &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3