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
     * Generated class for the IfcConnectionPortGeometry Entity.
     *
     */
    class IFC2X3_EXPORT IfcConnectionPortGeometry : public IfcConnectionGeometry
    {

        // Attributes
        Step::RefPtr< IfcAxis2Placement > m_LocationAtRelatingElement;
        Step::RefPtr< IfcAxis2Placement > m_LocationAtRelatedElement;
        Step::RefPtr< IfcProfileDef > m_ProfileOfPort;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LocationAtRelatingElement
        /// @{
        virtual IfcAxis2Placement *getLocationAtRelatingElement();
        virtual const IfcAxis2Placement *getLocationAtRelatingElement() const;
        virtual void setLocationAtRelatingElement(const Step::RefPtr< IfcAxis2Placement > &value);
        virtual void unsetLocationAtRelatingElement();
        virtual bool testLocationAtRelatingElement() const;
        /// @}

        /// Attribute LocationAtRelatedElement
        /// @{
        virtual IfcAxis2Placement *getLocationAtRelatedElement();
        virtual const IfcAxis2Placement *getLocationAtRelatedElement() const;
        virtual void setLocationAtRelatedElement(const Step::RefPtr< IfcAxis2Placement > &value);
        virtual void unsetLocationAtRelatedElement();
        virtual bool testLocationAtRelatedElement() const;
        /// @}

        /// Attribute ProfileOfPort
        /// @{
        virtual IfcProfileDef *getProfileOfPort();
        virtual const IfcProfileDef *getProfileOfPort() const;
        virtual void setProfileOfPort(const Step::RefPtr< IfcProfileDef > &value);
        virtual void unsetProfileOfPort();
        virtual bool testProfileOfPort() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcConnectionPortGeometry(Step::Id id, Step::SPFData *args);
        virtual ~IfcConnectionPortGeometry();

        virtual bool init();

        virtual void copy(const IfcConnectionPortGeometry &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3