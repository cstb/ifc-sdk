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

#include <ifc2x3/IfcGeometricRepresentationItem.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcTextLiteral Entity.
     *
     */
    class IFC2X3_EXPORT IfcTextLiteral : public IfcGeometricRepresentationItem
    {

        // Attributes
        IfcPresentableText m_Literal;
        Step::RefPtr< IfcAxis2Placement > m_Placement;
        IfcTextPath m_Path;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Literal
        /// @{
        virtual IfcPresentableText getLiteral();
        virtual const IfcPresentableText getLiteral() const;
        virtual void setLiteral(const IfcPresentableText &value);
        virtual void unsetLiteral();
        virtual bool testLiteral() const;
        /// @}

        /// Attribute Placement
        /// @{
        virtual IfcAxis2Placement *getPlacement();
        virtual const IfcAxis2Placement *getPlacement() const;
        virtual void setPlacement(const Step::RefPtr< IfcAxis2Placement > &value);
        virtual void unsetPlacement();
        virtual bool testPlacement() const;
        /// @}

        /// Attribute Path
        /// @{
        virtual IfcTextPath getPath();
        virtual IfcTextPath getPath() const;
        virtual void setPath(IfcTextPath value);
        virtual void unsetPath();
        virtual bool testPath() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTextLiteral(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextLiteral();

        virtual bool init();

        virtual void copy(const IfcTextLiteral &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3