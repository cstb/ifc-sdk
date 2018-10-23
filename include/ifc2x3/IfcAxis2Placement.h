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

#include <Step/BaseObject.h>

namespace ifc2x3
{
    /**
     * Generated class for the IfcAxis2Placement Select type.
     *
     */
    class IFC2X3_EXPORT IfcAxis2Placement : public Step::BaseObject

    {
        ClassType_definitions()

    public:
        enum IfcAxis2Placement_select 
        {
            IFCAXIS2PLACEMENT2D,
            IFCAXIS2PLACEMENT3D,
            UNSET
        };

        union IfcAxis2Placement_union
        {
            IfcAxis2Placement2D *m_IfcAxis2Placement2D;
            IfcAxis2Placement3D *m_IfcAxis2Placement3D;
        };

        IfcAxis2Placement();
        virtual ~IfcAxis2Placement();

        virtual void copy(const IfcAxis2Placement &obj, const CopyOp &copyop);

        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        std::string currentTypeName() const;

        IfcAxis2Placement_select currentType() const;

        void deleteUnion();

        void set(Step::BaseObject *v);

        IfcAxis2Placement2D *getIfcAxis2Placement2D() const;
        void setIfcAxis2Placement2D(IfcAxis2Placement2D *value);

        IfcAxis2Placement3D *getIfcAxis2Placement3D() const;
        void setIfcAxis2Placement3D(IfcAxis2Placement3D *value);


    protected:
        IfcAxis2Placement(Step::SPFData *args);

        virtual bool init();

    private:
        IfcAxis2Placement_select m_type;
  
        IfcAxis2Placement_union m_union;
    };
} // namespace ifc2x3