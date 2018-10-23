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

#include <ifc2x3/IfcObjectDefinition.h>

namespace ifc2x3
{
    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcTypeObject_HasPropertySets_type : public Set_IfcPropertySetDefinition_1_n
    {

    public:
        /**
         */
        typedef Set_IfcPropertySetDefinition_1_n::size_type size_type;

        /**
         */
        Inverted_IfcTypeObject_HasPropertySets_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcPropertySetDefinition > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcPropertySetDefinition > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcPropertySetDefinition > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcTypeObject;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcTypeObject *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcTypeObject *owner);
    };


    /**
     * Generated class for the IfcTypeObject Entity.
     *
     */
    class IFC2X3_EXPORT IfcTypeObject : public IfcObjectDefinition
    {

        // Attributes
        IfcLabel m_ApplicableOccurrence;
        // InvertedAttributes
        Inverted_IfcTypeObject_HasPropertySets_type m_HasPropertySets;
        // InverseAttributes
        Inverse_Set_IfcRelDefinesByType_0_1 m_ObjectTypeOf;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ApplicableOccurrence
        /// @{
        virtual IfcLabel getApplicableOccurrence();
        virtual const IfcLabel getApplicableOccurrence() const;
        virtual void setApplicableOccurrence(const IfcLabel &value);
        virtual void unsetApplicableOccurrence();
        virtual bool testApplicableOccurrence() const;
        /// @}

        /// Attribute HasPropertySets
        /// @{
        virtual Set_IfcPropertySetDefinition_1_n &getHasPropertySets();
        virtual const Set_IfcPropertySetDefinition_1_n &getHasPropertySets() const;
        virtual void unsetHasPropertySets();
        virtual bool testHasPropertySets() const;
        /// @}

        /// Inverse attribute ObjectTypeOf
        /// @{
        virtual Inverse_Set_IfcRelDefinesByType_0_1 &getObjectTypeOf();
        virtual const Inverse_Set_IfcRelDefinesByType_0_1 &getObjectTypeOf() const;
        virtual bool testObjectTypeOf() const;

        friend class IfcRelDefinesByType;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTypeObject(Step::Id id, Step::SPFData *args);
        virtual ~IfcTypeObject();

        virtual bool init();

        virtual void copy(const IfcTypeObject &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3