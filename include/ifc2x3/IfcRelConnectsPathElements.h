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

#include <ifc2x3/IfcRelConnectsElements.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcRelConnectsPathElements Entity.
     *
     */
    class IFC2X3_EXPORT IfcRelConnectsPathElements : public IfcRelConnectsElements
    {

        // Attributes
        List_Integer_0_n m_RelatingPriorities;
        List_Integer_0_n m_RelatedPriorities;
        IfcConnectionTypeEnum m_RelatedConnectionType;
        IfcConnectionTypeEnum m_RelatingConnectionType;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RelatingPriorities
        /// @{
        virtual List_Integer_0_n &getRelatingPriorities();
        virtual const List_Integer_0_n &getRelatingPriorities() const;
        virtual void setRelatingPriorities(const List_Integer_0_n &value);
        virtual void unsetRelatingPriorities();
        virtual bool testRelatingPriorities() const;
        /// @}

        /// Attribute RelatedPriorities
        /// @{
        virtual List_Integer_0_n &getRelatedPriorities();
        virtual const List_Integer_0_n &getRelatedPriorities() const;
        virtual void setRelatedPriorities(const List_Integer_0_n &value);
        virtual void unsetRelatedPriorities();
        virtual bool testRelatedPriorities() const;
        /// @}

        /// Attribute RelatedConnectionType
        /// @{
        virtual IfcConnectionTypeEnum getRelatedConnectionType();
        virtual IfcConnectionTypeEnum getRelatedConnectionType() const;
        virtual void setRelatedConnectionType(IfcConnectionTypeEnum value);
        virtual void unsetRelatedConnectionType();
        virtual bool testRelatedConnectionType() const;
        /// @}

        /// Attribute RelatingConnectionType
        /// @{
        virtual IfcConnectionTypeEnum getRelatingConnectionType();
        virtual IfcConnectionTypeEnum getRelatingConnectionType() const;
        virtual void setRelatingConnectionType(IfcConnectionTypeEnum value);
        virtual void unsetRelatingConnectionType();
        virtual bool testRelatingConnectionType() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRelConnectsPathElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsPathElements();

        virtual bool init();

        virtual void copy(const IfcRelConnectsPathElements &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3