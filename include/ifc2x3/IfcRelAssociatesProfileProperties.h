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

#include <ifc2x3/IfcRelAssociates.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcRelAssociatesProfileProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcRelAssociatesProfileProperties : public IfcRelAssociates
    {

        // Attributes
        Step::RefPtr< IfcProfileProperties > m_RelatingProfileProperties;
        Step::RefPtr< IfcShapeAspect > m_ProfileSectionLocation;
        Step::RefPtr< IfcOrientationSelect > m_ProfileOrientation;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RelatingProfileProperties
        /// @{
        virtual IfcProfileProperties *getRelatingProfileProperties();
        virtual const IfcProfileProperties *getRelatingProfileProperties() const;
        virtual void setRelatingProfileProperties(const Step::RefPtr< IfcProfileProperties > &value);
        virtual void unsetRelatingProfileProperties();
        virtual bool testRelatingProfileProperties() const;
        /// @}

        /// Attribute ProfileSectionLocation
        /// @{
        virtual IfcShapeAspect *getProfileSectionLocation();
        virtual const IfcShapeAspect *getProfileSectionLocation() const;
        virtual void setProfileSectionLocation(const Step::RefPtr< IfcShapeAspect > &value);
        virtual void unsetProfileSectionLocation();
        virtual bool testProfileSectionLocation() const;
        /// @}

        /// Attribute ProfileOrientation
        /// @{
        virtual IfcOrientationSelect *getProfileOrientation();
        virtual const IfcOrientationSelect *getProfileOrientation() const;
        virtual void setProfileOrientation(const Step::RefPtr< IfcOrientationSelect > &value);
        virtual void unsetProfileOrientation();
        virtual bool testProfileOrientation() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRelAssociatesProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelAssociatesProfileProperties();

        virtual bool init();

        virtual void copy(const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3