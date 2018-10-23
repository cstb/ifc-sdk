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

#include <ifc2x3/IfcProperty.h>

namespace ifc2x3
{
    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcComplexProperty_HasProperties_type : public Set_IfcProperty_1_n
    {

    public:
        /**
         */
        typedef Set_IfcProperty_1_n::size_type size_type;

        /**
         */
        Inverted_IfcComplexProperty_HasProperties_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcProperty > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcProperty > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcProperty > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcComplexProperty;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcComplexProperty *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcComplexProperty *owner);
    };


    /**
     * Generated class for the IfcComplexProperty Entity.
     *
     */
    class IFC2X3_EXPORT IfcComplexProperty : public IfcProperty
    {

        // Attributes
        IfcIdentifier m_UsageName;
        // InvertedAttributes
        Inverted_IfcComplexProperty_HasProperties_type m_HasProperties;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute UsageName
        /// @{
        virtual IfcIdentifier getUsageName();
        virtual const IfcIdentifier getUsageName() const;
        virtual void setUsageName(const IfcIdentifier &value);
        virtual void unsetUsageName();
        virtual bool testUsageName() const;
        /// @}

        /// Attribute HasProperties
        /// @{
        virtual Set_IfcProperty_1_n &getHasProperties();
        virtual const Set_IfcProperty_1_n &getHasProperties() const;
        virtual void unsetHasProperties();
        virtual bool testHasProperties() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcComplexProperty(Step::Id id, Step::SPFData *args);
        virtual ~IfcComplexProperty();

        virtual bool init();

        virtual void copy(const IfcComplexProperty &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3