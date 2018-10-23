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

#include <ifc2x3/IfcTypeObject.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcTypeProduct Entity.
     *
     */
    class IFC2X3_EXPORT IfcTypeProduct : public IfcTypeObject
    {

        // Attributes
        List_IfcRepresentationMap_1_n m_RepresentationMaps;
        IfcLabel m_Tag;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RepresentationMaps
        /// @{
        virtual List_IfcRepresentationMap_1_n &getRepresentationMaps();
        virtual const List_IfcRepresentationMap_1_n &getRepresentationMaps() const;
        virtual void setRepresentationMaps(const List_IfcRepresentationMap_1_n &value);
        virtual void unsetRepresentationMaps();
        virtual bool testRepresentationMaps() const;
        /// @}

        /// Attribute Tag
        /// @{
        virtual IfcLabel getTag();
        virtual const IfcLabel getTag() const;
        virtual void setTag(const IfcLabel &value);
        virtual void unsetTag();
        virtual bool testTag() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTypeProduct(Step::Id id, Step::SPFData *args);
        virtual ~IfcTypeProduct();

        virtual bool init();

        virtual void copy(const IfcTypeProduct &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3