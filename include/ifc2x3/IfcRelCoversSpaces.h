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
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcRelCoversSpaces_RelatedCoverings_type : public Set_IfcCovering_1_n
    {

    public:
        /**
         */
        typedef Set_IfcCovering_1_n::size_type size_type;

        /**
         */
        Inverted_IfcRelCoversSpaces_RelatedCoverings_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcCovering > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcCovering > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcCovering > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcRelCoversSpaces;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcRelCoversSpaces *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcRelCoversSpaces *owner);
    };


    /**
     * Generated class for the IfcRelCoversSpaces Entity.
     *
     */
    class IFC2X3_EXPORT IfcRelCoversSpaces : public IfcRelConnects
    {

        // InvertedAttributes
        Step::RefPtr< IfcSpace > m_RelatedSpace;
        Inverted_IfcRelCoversSpaces_RelatedCoverings_type m_RelatedCoverings;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RelatedSpace
        /// @{
        virtual IfcSpace *getRelatedSpace();
        virtual const IfcSpace *getRelatedSpace() const;
        virtual void setRelatedSpace(const Step::RefPtr< IfcSpace > &value);
        virtual void unsetRelatedSpace();
        virtual bool testRelatedSpace() const;
        /// @}

        /// Attribute RelatedCoverings
        /// @{
        virtual Set_IfcCovering_1_n &getRelatedCoverings();
        virtual const Set_IfcCovering_1_n &getRelatedCoverings() const;
        virtual void unsetRelatedCoverings();
        virtual bool testRelatedCoverings() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRelCoversSpaces(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelCoversSpaces();

        virtual bool init();

        virtual void copy(const IfcRelCoversSpaces &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3