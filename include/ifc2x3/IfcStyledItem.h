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

#include <ifc2x3/IfcRepresentationItem.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcStyledItem Entity.
     *
     */
    class IFC2X3_EXPORT IfcStyledItem : public IfcRepresentationItem
    {

        // Attributes
        Set_IfcPresentationStyleAssignment_1_n m_Styles;
        IfcLabel m_Name;
        // InvertedAttributes
        Step::RefPtr< IfcRepresentationItem > m_Item;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Styles
        /// @{
        virtual Set_IfcPresentationStyleAssignment_1_n &getStyles();
        virtual const Set_IfcPresentationStyleAssignment_1_n &getStyles() const;
        virtual void setStyles(const Set_IfcPresentationStyleAssignment_1_n &value);
        virtual void unsetStyles();
        virtual bool testStyles() const;
        /// @}

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute Item
        /// @{
        virtual IfcRepresentationItem *getItem();
        virtual const IfcRepresentationItem *getItem() const;
        virtual void setItem(const Step::RefPtr< IfcRepresentationItem > &value);
        virtual void unsetItem();
        virtual bool testItem() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStyledItem(Step::Id id, Step::SPFData *args);
        virtual ~IfcStyledItem();

        virtual bool init();

        virtual void copy(const IfcStyledItem &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3