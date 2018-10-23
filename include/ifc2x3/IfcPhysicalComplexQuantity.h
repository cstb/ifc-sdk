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

#include <ifc2x3/IfcPhysicalQuantity.h>

namespace ifc2x3
{
    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcPhysicalComplexQuantity_HasQuantities_type : public Set_IfcPhysicalQuantity_1_n
    {

    public:
        /**
         */
        typedef Set_IfcPhysicalQuantity_1_n::size_type size_type;

        /**
         */
        Inverted_IfcPhysicalComplexQuantity_HasQuantities_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcPhysicalQuantity > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcPhysicalQuantity > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcPhysicalQuantity > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcPhysicalComplexQuantity;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcPhysicalComplexQuantity *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcPhysicalComplexQuantity *owner);
    };


    /**
     * Generated class for the IfcPhysicalComplexQuantity Entity.
     *
     */
    class IFC2X3_EXPORT IfcPhysicalComplexQuantity : public IfcPhysicalQuantity
    {

        // Attributes
        IfcLabel m_Discrimination;
        IfcLabel m_Quality;
        IfcLabel m_Usage;
        // InvertedAttributes
        Inverted_IfcPhysicalComplexQuantity_HasQuantities_type m_HasQuantities;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Discrimination
        /// @{
        virtual IfcLabel getDiscrimination();
        virtual const IfcLabel getDiscrimination() const;
        virtual void setDiscrimination(const IfcLabel &value);
        virtual void unsetDiscrimination();
        virtual bool testDiscrimination() const;
        /// @}

        /// Attribute Quality
        /// @{
        virtual IfcLabel getQuality();
        virtual const IfcLabel getQuality() const;
        virtual void setQuality(const IfcLabel &value);
        virtual void unsetQuality();
        virtual bool testQuality() const;
        /// @}

        /// Attribute Usage
        /// @{
        virtual IfcLabel getUsage();
        virtual const IfcLabel getUsage() const;
        virtual void setUsage(const IfcLabel &value);
        virtual void unsetUsage();
        virtual bool testUsage() const;
        /// @}

        /// Attribute HasQuantities
        /// @{
        virtual Set_IfcPhysicalQuantity_1_n &getHasQuantities();
        virtual const Set_IfcPhysicalQuantity_1_n &getHasQuantities() const;
        virtual void unsetHasQuantities();
        virtual bool testHasQuantities() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPhysicalComplexQuantity(Step::Id id, Step::SPFData *args);
        virtual ~IfcPhysicalComplexQuantity();

        virtual bool init();

        virtual void copy(const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3