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
     * Generated class for the IfcSimpleValue Select type.
     *
     */
    class IFC2X3_EXPORT IfcSimpleValue : public Step::BaseObject

    {
        ClassType_definitions()

    public:
        enum IfcSimpleValue_select 
        {
            IFCINTEGER,
            IFCREAL,
            IFCBOOLEAN,
            IFCIDENTIFIER,
            IFCTEXT,
            IFCLABEL,
            IFCLOGICAL,
            UNSET
        };

        union IfcSimpleValue_union
        {
            IfcInteger m_IfcInteger;
            IfcReal m_IfcReal;
            IfcBoolean m_IfcBoolean;
            IfcIdentifier *m_IfcIdentifier;
            IfcText *m_IfcText;
            IfcLabel *m_IfcLabel;
            IfcLogical m_IfcLogical;
        };

        IfcSimpleValue();
        virtual ~IfcSimpleValue();

        virtual void copy(const IfcSimpleValue &obj, const CopyOp &copyop);

        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        std::string currentTypeName() const;

        IfcSimpleValue_select currentType() const;

        void deleteUnion();

        void set(Step::BaseObject *v);

        IfcInteger getIfcInteger() const;
        void setIfcInteger(IfcInteger value);    

        IfcReal getIfcReal() const;
        void setIfcReal(IfcReal value);    

        IfcBoolean getIfcBoolean() const;
        void setIfcBoolean(IfcBoolean value);    

        IfcIdentifier getIfcIdentifier() const;
        void setIfcIdentifier(const IfcIdentifier &value);   

        IfcText getIfcText() const;
        void setIfcText(const IfcText &value);   

        IfcLabel getIfcLabel() const;
        void setIfcLabel(const IfcLabel &value);   

        IfcLogical getIfcLogical() const;
        void setIfcLogical(IfcLogical value);    


    protected:
        IfcSimpleValue(Step::SPFData *args);

        virtual bool init();

    private:
        IfcSimpleValue_select m_type;
  
        IfcSimpleValue_union m_union;
    };
} // namespace ifc2x3