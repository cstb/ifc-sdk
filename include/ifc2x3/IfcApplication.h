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

#include <Step/BaseEntity.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcApplication Entity.
     *
     */
    class IFC2X3_EXPORT IfcApplication : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcOrganization > m_ApplicationDeveloper;
        IfcLabel m_Version;
        IfcLabel m_ApplicationFullName;
        IfcIdentifier m_ApplicationIdentifier;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ApplicationDeveloper
        /// @{
        virtual IfcOrganization *getApplicationDeveloper();
        virtual const IfcOrganization *getApplicationDeveloper() const;
        virtual void setApplicationDeveloper(const Step::RefPtr< IfcOrganization > &value);
        virtual void unsetApplicationDeveloper();
        virtual bool testApplicationDeveloper() const;
        /// @}

        /// Attribute Version
        /// @{
        virtual IfcLabel getVersion();
        virtual const IfcLabel getVersion() const;
        virtual void setVersion(const IfcLabel &value);
        virtual void unsetVersion();
        virtual bool testVersion() const;
        /// @}

        /// Attribute ApplicationFullName
        /// @{
        virtual IfcLabel getApplicationFullName();
        virtual const IfcLabel getApplicationFullName() const;
        virtual void setApplicationFullName(const IfcLabel &value);
        virtual void unsetApplicationFullName();
        virtual bool testApplicationFullName() const;
        /// @}

        /// Attribute ApplicationIdentifier
        /// @{
        virtual IfcIdentifier getApplicationIdentifier();
        virtual const IfcIdentifier getApplicationIdentifier() const;
        virtual void setApplicationIdentifier(const IfcIdentifier &value);
        virtual void unsetApplicationIdentifier();
        virtual bool testApplicationIdentifier() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcApplication(Step::Id id, Step::SPFData *args);
        virtual ~IfcApplication();

        virtual bool init();

        virtual void copy(const IfcApplication &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3