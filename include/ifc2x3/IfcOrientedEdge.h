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

#include <ifc2x3/IfcEdge.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcOrientedEdge Entity.
     *
     */
    class IFC2X3_EXPORT IfcOrientedEdge : public IfcEdge
    {

        // Attributes
        Step::RefPtr< IfcEdge > m_EdgeElement;
        Step::Boolean m_Orientation;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute EdgeElement
        /// @{
        virtual IfcEdge *getEdgeElement();
        virtual const IfcEdge *getEdgeElement() const;
        virtual void setEdgeElement(const Step::RefPtr< IfcEdge > &value);
        virtual void unsetEdgeElement();
        virtual bool testEdgeElement() const;
        /// @}

        /// Attribute Orientation
        /// @{
        virtual Step::Boolean getOrientation();
        virtual Step::Boolean getOrientation() const;
        virtual void setOrientation(Step::Boolean value);
        virtual void unsetOrientation();
        virtual bool testOrientation() const;
        /// @}

        /// Redeclared derived attributes
        /// @{
        virtual IfcVertex *getEdgeStart();
        virtual IfcVertex *getEdgeEnd();
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcOrientedEdge(Step::Id id, Step::SPFData *args);
        virtual ~IfcOrientedEdge();

        virtual bool init();

        virtual void copy(const IfcOrientedEdge &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3