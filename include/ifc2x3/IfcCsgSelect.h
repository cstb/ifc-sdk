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
     * Generated class for the IfcCsgSelect Select type.
     *
     */
    class IFC2X3_EXPORT IfcCsgSelect : public Step::BaseObject

    {
        ClassType_definitions()

    public:
        enum IfcCsgSelect_select 
        {
            IFCBOOLEANRESULT,
            IFCCSGPRIMITIVE3D,
            UNSET
        };

        union IfcCsgSelect_union
        {
            IfcBooleanResult *m_IfcBooleanResult;
            IfcCsgPrimitive3D *m_IfcCsgPrimitive3D;
        };

        IfcCsgSelect();
        virtual ~IfcCsgSelect();

        virtual void copy(const IfcCsgSelect &obj, const CopyOp &copyop);

        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        std::string currentTypeName() const;

        IfcCsgSelect_select currentType() const;

        void deleteUnion();

        void set(Step::BaseObject *v);

        IfcBooleanResult *getIfcBooleanResult() const;
        void setIfcBooleanResult(IfcBooleanResult *value);

        IfcCsgPrimitive3D *getIfcCsgPrimitive3D() const;
        void setIfcCsgPrimitive3D(IfcCsgPrimitive3D *value);


    protected:
        IfcCsgSelect(Step::SPFData *args);

        virtual bool init();

    private:
        IfcCsgSelect_select m_type;
  
        IfcCsgSelect_union m_union;
    };
} // namespace ifc2x3