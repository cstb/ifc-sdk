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

#include <ifc2x3/IfcRelationship.h>

namespace ifc2x3
{
    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcRelDecomposes_RelatedObjects_type : public Set_IfcObjectDefinition_1_n
    {

    public:
        /**
         */
        typedef Set_IfcObjectDefinition_1_n::size_type size_type;

        /**
         */
        Inverted_IfcRelDecomposes_RelatedObjects_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcObjectDefinition > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcObjectDefinition > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcObjectDefinition > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcRelDecomposes;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcRelDecomposes *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcRelDecomposes *owner);
    };


    /**
     * Generated class for the IfcRelDecomposes Entity.
     *
     */
    class IFC2X3_EXPORT IfcRelDecomposes : public IfcRelationship
    {

        // InvertedAttributes
        Inverted_IfcRelDecomposes_RelatedObjects_type m_RelatedObjects;
        Step::RefPtr< IfcObjectDefinition > m_RelatingObject;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RelatedObjects
        /// @{
        virtual Set_IfcObjectDefinition_1_n &getRelatedObjects();
        virtual const Set_IfcObjectDefinition_1_n &getRelatedObjects() const;
        virtual void unsetRelatedObjects();
        virtual bool testRelatedObjects() const;
        /// @}

        /// Attribute RelatingObject
        /// @{
        virtual IfcObjectDefinition *getRelatingObject();
        virtual const IfcObjectDefinition *getRelatingObject() const;
        virtual void setRelatingObject(const Step::RefPtr< IfcObjectDefinition > &value);
        virtual void unsetRelatingObject();
        virtual bool testRelatingObject() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRelDecomposes(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelDecomposes();

        virtual bool init();

        virtual void copy(const IfcRelDecomposes &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3