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
     * Generated class for the IfcDocumentSelect Select type.
     *
     */
    class IFC2X3_EXPORT IfcDocumentSelect : public Step::BaseObject

    {
        ClassType_definitions()

    public:
        enum IfcDocumentSelect_select 
        {
            IFCDOCUMENTREFERENCE,
            IFCDOCUMENTINFORMATION,
            UNSET
        };

        union IfcDocumentSelect_union
        {
            IfcDocumentReference *m_IfcDocumentReference;
            IfcDocumentInformation *m_IfcDocumentInformation;
        };

        IfcDocumentSelect();
        virtual ~IfcDocumentSelect();

        virtual void copy(const IfcDocumentSelect &obj, const CopyOp &copyop);

        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        std::string currentTypeName() const;

        IfcDocumentSelect_select currentType() const;

        void deleteUnion();

        void set(Step::BaseObject *v);

        IfcDocumentReference *getIfcDocumentReference() const;
        void setIfcDocumentReference(IfcDocumentReference *value);

        IfcDocumentInformation *getIfcDocumentInformation() const;
        void setIfcDocumentInformation(IfcDocumentInformation *value);


    protected:
        IfcDocumentSelect(Step::SPFData *args);

        virtual bool init();

    private:
        IfcDocumentSelect_select m_type;
  
        IfcDocumentSelect_union m_union;
    };
} // namespace ifc2x3