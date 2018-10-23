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
     * Generated class for the IfcVertexBasedTextureMap Entity.
     *
     */
    class IFC2X3_EXPORT IfcVertexBasedTextureMap : public Step::BaseEntity
    {

        // Attributes
        List_IfcTextureVertex_3_n m_TextureVertices;
        List_IfcCartesianPoint_3_n m_TexturePoints;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TextureVertices
        /// @{
        virtual List_IfcTextureVertex_3_n &getTextureVertices();
        virtual const List_IfcTextureVertex_3_n &getTextureVertices() const;
        virtual void setTextureVertices(const List_IfcTextureVertex_3_n &value);
        virtual void unsetTextureVertices();
        virtual bool testTextureVertices() const;
        /// @}

        /// Attribute TexturePoints
        /// @{
        virtual List_IfcCartesianPoint_3_n &getTexturePoints();
        virtual const List_IfcCartesianPoint_3_n &getTexturePoints() const;
        virtual void setTexturePoints(const List_IfcCartesianPoint_3_n &value);
        virtual void unsetTexturePoints();
        virtual bool testTexturePoints() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcVertexBasedTextureMap(Step::Id id, Step::SPFData *args);
        virtual ~IfcVertexBasedTextureMap();

        virtual bool init();

        virtual void copy(const IfcVertexBasedTextureMap &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3