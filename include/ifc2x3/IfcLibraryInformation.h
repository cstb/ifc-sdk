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
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcLibraryInformation_LibraryReference_type : public Set_IfcLibraryReference_1_n
    {

    public:
        /**
         */
        typedef Set_IfcLibraryReference_1_n::size_type size_type;

        /**
         */
        Inverted_IfcLibraryInformation_LibraryReference_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcLibraryReference > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcLibraryReference > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcLibraryReference > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcLibraryInformation;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcLibraryInformation *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcLibraryInformation *owner);
    };


    /**
     * Generated class for the IfcLibraryInformation Entity.
     *
     */
    class IFC2X3_EXPORT IfcLibraryInformation : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_Name;
        IfcLabel m_Version;
        Step::RefPtr< IfcOrganization > m_Publisher;
        Step::RefPtr< IfcCalendarDate > m_VersionDate;
        // InvertedAttributes
        Inverted_IfcLibraryInformation_LibraryReference_type m_LibraryReference;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute Version
        /// @{
        virtual IfcLabel getVersion();
        virtual const IfcLabel getVersion() const;
        virtual void setVersion(const IfcLabel &value);
        virtual void unsetVersion();
        virtual bool testVersion() const;
        /// @}

        /// Attribute Publisher
        /// @{
        virtual IfcOrganization *getPublisher();
        virtual const IfcOrganization *getPublisher() const;
        virtual void setPublisher(const Step::RefPtr< IfcOrganization > &value);
        virtual void unsetPublisher();
        virtual bool testPublisher() const;
        /// @}

        /// Attribute VersionDate
        /// @{
        virtual IfcCalendarDate *getVersionDate();
        virtual const IfcCalendarDate *getVersionDate() const;
        virtual void setVersionDate(const Step::RefPtr< IfcCalendarDate > &value);
        virtual void unsetVersionDate();
        virtual bool testVersionDate() const;
        /// @}

        /// Attribute LibraryReference
        /// @{
        virtual Set_IfcLibraryReference_1_n &getLibraryReference();
        virtual const Set_IfcLibraryReference_1_n &getLibraryReference() const;
        virtual void unsetLibraryReference();
        virtual bool testLibraryReference() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcLibraryInformation(Step::Id id, Step::SPFData *args);
        virtual ~IfcLibraryInformation();

        virtual bool init();

        virtual void copy(const IfcLibraryInformation &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3