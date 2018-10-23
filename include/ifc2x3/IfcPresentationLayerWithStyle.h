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

#include <ifc2x3/IfcPresentationLayerAssignment.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcPresentationLayerWithStyle Entity.
     *
     */
    class IFC2X3_EXPORT IfcPresentationLayerWithStyle : public IfcPresentationLayerAssignment
    {

        // Attributes
        Step::Logical m_LayerOn;
        Step::Logical m_LayerFrozen;
        Step::Logical m_LayerBlocked;
        Set_IfcPresentationStyleSelect_0_n m_LayerStyles;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LayerOn
        /// @{
        virtual Step::Logical getLayerOn();
        virtual Step::Logical getLayerOn() const;
        virtual void setLayerOn(Step::Logical value);
        virtual void unsetLayerOn();
        virtual bool testLayerOn() const;
        /// @}

        /// Attribute LayerFrozen
        /// @{
        virtual Step::Logical getLayerFrozen();
        virtual Step::Logical getLayerFrozen() const;
        virtual void setLayerFrozen(Step::Logical value);
        virtual void unsetLayerFrozen();
        virtual bool testLayerFrozen() const;
        /// @}

        /// Attribute LayerBlocked
        /// @{
        virtual Step::Logical getLayerBlocked();
        virtual Step::Logical getLayerBlocked() const;
        virtual void setLayerBlocked(Step::Logical value);
        virtual void unsetLayerBlocked();
        virtual bool testLayerBlocked() const;
        /// @}

        /// Attribute LayerStyles
        /// @{
        virtual Set_IfcPresentationStyleSelect_0_n &getLayerStyles();
        virtual const Set_IfcPresentationStyleSelect_0_n &getLayerStyles() const;
        virtual void setLayerStyles(const Set_IfcPresentationStyleSelect_0_n &value);
        virtual void unsetLayerStyles();
        virtual bool testLayerStyles() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPresentationLayerWithStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcPresentationLayerWithStyle();

        virtual bool init();

        virtual void copy(const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3