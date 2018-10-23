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

#include <ifc2x3/IfcRelConnects.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcRelConnectsPortToElement Entity.
     *
     */
    class IFC2X3_EXPORT IfcRelConnectsPortToElement : public IfcRelConnects
    {

        // InvertedAttributes
        Step::RefPtr< IfcElement > m_RelatedElement;
        Step::RefPtr< IfcPort > m_RelatingPort;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RelatedElement
        /// @{
        virtual IfcElement *getRelatedElement();
        virtual const IfcElement *getRelatedElement() const;
        virtual void setRelatedElement(const Step::RefPtr< IfcElement > &value);
        virtual void unsetRelatedElement();
        virtual bool testRelatedElement() const;
        /// @}

        /// Attribute RelatingPort
        /// @{
        virtual IfcPort *getRelatingPort();
        virtual const IfcPort *getRelatingPort() const;
        virtual void setRelatingPort(const Step::RefPtr< IfcPort > &value);
        virtual void unsetRelatingPort();
        virtual bool testRelatingPort() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRelConnectsPortToElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsPortToElement();

        virtual bool init();

        virtual void copy(const IfcRelConnectsPortToElement &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3