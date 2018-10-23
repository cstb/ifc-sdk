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

#include <ifc2x3/IfcConnectionGeometry.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcConnectionPointGeometry Entity.
     *
     */
    class IFC2X3_EXPORT IfcConnectionPointGeometry : public IfcConnectionGeometry
    {

        // Attributes
        Step::RefPtr< IfcPointOrVertexPoint > m_PointOnRelatingElement;
        Step::RefPtr< IfcPointOrVertexPoint > m_PointOnRelatedElement;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute PointOnRelatingElement
        /// @{
        virtual IfcPointOrVertexPoint *getPointOnRelatingElement();
        virtual const IfcPointOrVertexPoint *getPointOnRelatingElement() const;
        virtual void setPointOnRelatingElement(const Step::RefPtr< IfcPointOrVertexPoint > &value);
        virtual void unsetPointOnRelatingElement();
        virtual bool testPointOnRelatingElement() const;
        /// @}

        /// Attribute PointOnRelatedElement
        /// @{
        virtual IfcPointOrVertexPoint *getPointOnRelatedElement();
        virtual const IfcPointOrVertexPoint *getPointOnRelatedElement() const;
        virtual void setPointOnRelatedElement(const Step::RefPtr< IfcPointOrVertexPoint > &value);
        virtual void unsetPointOnRelatedElement();
        virtual bool testPointOnRelatedElement() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcConnectionPointGeometry(Step::Id id, Step::SPFData *args);
        virtual ~IfcConnectionPointGeometry();

        virtual bool init();

        virtual void copy(const IfcConnectionPointGeometry &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3